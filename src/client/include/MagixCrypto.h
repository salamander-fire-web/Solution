#ifndef __MagixCrypto_h_
#define __MagixCrypto_h_

// Ogre, StringConverter, и StringUtil необходимы для работы с Ogre::String
#include "Ogre.h"
// Используются файловые операции (std::ifstream, std::ofstream)
#include <fstream>
// Используются функции времени (time_t, tm, time(), localtime_s)
#include <time.h>
#include <vector>

using namespace Ogre;

// --- Устранение ошибки C2065: Определение XORKEY ---
// Предполагаю, что XORKEY должно быть небольшим числом.
#define XORKEY 67 

// --- Заглушка для _unlink, если вы не используете MSVC ---
#ifdef __GNUC__
#define _unlink unlink
#else
#include <io.h> // Обычно требуется для _unlink в MSVC
#endif

// Проверка даты, которая, вероятно, была выше в файле
bool checkDate(const String& tFile, int& numDays)
{
	std::ifstream inFile(tFile.c_str());
	if (!inFile.good())return false;

	String tPassword = "", tDate = "";
	inFile >> tPassword >> tDate;

	inFile.close();
	if (tPassword != "Bannage")return false;
	if (tDate == "Infinity")numDays = 0;
	else
	{
		int tYear = 0, tDay = 0;
		// Предполагается, что StringUtil определен через #include "Ogre.h"
		const vector<String>::type tPart = StringUtil::split(tDate, ";", 1);
		if (tPart.size() > 0)tYear = StringConverter::parseInt(tPart[0]);
		if (tPart.size() > 1)tDay = StringConverter::parseInt(tPart[1]);

		time_t rawtime;
		tm timeinfo;
		time(&rawtime);
		// Используем localtime_s для безопасного вызова в Windows
		// Если вы используете Linux/macOS, замените на localtime(&rawtime)
		localtime_s(&timeinfo, &rawtime);

		tYear -= (timeinfo.tm_year + 1900); // tm_year - это года с 1900, поэтому нужно добавить 1900
		tDay -= timeinfo.tm_yday;
		if (tYear < 0 || tYear == 0 && tDay <= 0)
		{
			_unlink("Settings3.dat");
			return false;
		}
		numDays = tYear * 365 + tDay;
	}
	return true;
}

// Функция шифрования/дешифрования строки
const String XOR7(const String& input, unsigned long* checksum = 0, bool preChecksum = false)
{
	String output = "";
	for (int i = 0; i < (int)input.length(); i++)
	{
		char tC = input[i];
		if (checksum && preChecksum)*checksum += (unsigned long)tC;

		// ИСПРАВЛЕНО: XORKEY теперь определен в начале файла
		tC ^= XORKEY;

		//Replace illegal characters with original character
		if (tC > char(126) || tC<char(32))tC = input[i];
		output += tC;
		if (checksum && !preChecksum)*checksum += (unsigned long)tC;
	}
	return output;
}

// Функция шифрования/дешифрования файла
bool XOR7FileGen(const String& infile, const String& outfile, bool decrypt, bool checksum = false)
{
	// Используем Ogre::vector<const String>::type
	vector<String>::type tBuffer;
	unsigned long tChecksum = 0;
	std::ifstream inFile;
	// Для чтения двоичных данных или обычного текста
	inFile.open(infile.c_str(), (decrypt ? std::ios_base::in : std::ios_base::in));
	if (!inFile.good())return false;

	// Чтение строк из файла
	while (inFile.good() && !inFile.eof())
	{
		char tLine[512] = "";
		inFile.getline(tLine, 512);
		tBuffer.push_back(tLine);
	}
	// Если файл не пуст, удаляем пустую строку, которую getline может добавить в конце
	if (tBuffer.size() > 0 && tBuffer.back().empty()) {
		tBuffer.pop_back();
	}
	inFile.close();

	// Убедитесь, что tBuffer не пуст перед использованием
	if (tBuffer.empty() && !decrypt) return true; // Пустой файл, ничего не делаем

	std::ofstream outFile(outfile.c_str(), (decrypt ? std::ofstream::out : std::ios_base::out));

	// Обработка данных
	for (int i = 0; i < (int)tBuffer.size() - (decrypt && checksum ? 1 : 0); i++)
	{
		// Используем .c_str() для записи в outFile
		const String tLine = XOR7(tBuffer[i].c_str(), (checksum ? &tChecksum : 0), !decrypt) + "\n";
		outFile.write(tLine.c_str(), (int)tLine.length());
	}

	// Запись контрольной суммы
	if (!decrypt && checksum && tBuffer.size() > 0)
	{
		const String tLine = XOR7(StringConverter::toString(tChecksum)) + "\n";
		outFile.write(tLine.c_str(), (int)tLine.length());
	}
	outFile.close();

	// Проверка контрольной суммы при дешифровании
	if (decrypt && checksum)
	{
		// Проверка на пустой буфер
		if (tBuffer.empty()) return false;

		const bool tChecksumRight = (tBuffer.size() > 0 && tChecksum == StringConverter::parseLong(XOR7(tBuffer.back()).c_str()));
		if (!tChecksumRight)_unlink(outfile.c_str());
		return tChecksumRight;
	}
	return true;
}

#endif
