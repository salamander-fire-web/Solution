#ifndef __MagixAlertBox_h_
#define __MagixAlertBox_h_

// ВНИМАНИЕ: .cpp файл по-прежнему должен включать соответствующие Ogre-заголовки
// (OgreOverlayManager.h, OgreOverlayElement.h, OgreFontManager.h, OgreLogManager.h и т.д.)

// Используем пространство имен Ogre для упрощения кода, так как большинство типов - Ogre
using namespace Ogre;

#define TRANSITION_TIME 0.1
#define ALERT_FONT "TempusSans"
// Добавлена константа для отступа (padding), чтобы рамка была красивее
#define ALERT_PADDING 10.0f

class MagixAlertBox
{
protected:
	// Ogre::Real используется для всех временных и размерных переменных
	OverlayElement* mAlertBox;
	OverlayElement* mAlertBoxText;
	Real alertCount;
	Real alertTimeout;
	Real startWidth;
	Real startHeight;
	Real startLeft;
	Real startTop;
public:
	MagixAlertBox()
		: mAlertBox(nullptr), mAlertBoxText(nullptr), alertCount(0), alertTimeout(0), startWidth(0), startHeight(0), startLeft(0), startTop(0)
	{
	}
	~MagixAlertBox()
	{
		// Деструктор
	}
	void initialize()
	{
		// Синтаксически корректно: Скрываем Overlay-контейнер
		OverlayManager::getSingleton().getByName("GUIOverlay/AlertBox")->hide();

		// Получаем элементы
		mAlertBox = OverlayManager::getSingleton().getOverlayElement("GUI/AlertBox");
		mAlertBoxText = OverlayManager::getSingleton().getOverlayElement("GUI/AlertBoxText");

		// БЕЗОПАСНОСТЬ: Проверяем, удалось ли получить элементы
		if (!mAlertBox || !mAlertBoxText)
		{
			LogManager::getSingleton().logMessage("ERROR: MagixAlertBox failed to find Overlay Elements (GUI/AlertBox or GUI/AlertBoxText). Alert box will not function.");
		}
	}
	void update(const FrameEvent& evt)
	{
		// Ранний выход, если элементы не найдены
		if (!mAlertBox || !mAlertBoxText) return;

		//Transition in (Анимация появления)
		if (alertTimeout > 0)
		{
			if (!mAlertBox->isVisible()) mAlertBox->show();
			// Скрываем текст, пока рамка появляется (чтобы избежать мерцания)
			if (mAlertBoxText->isVisible()) mAlertBoxText->hide();

			alertTimeout -= evt.timeSinceLastFrame;

			Real tRatio = (TRANSITION_TIME - alertTimeout) / TRANSITION_TIME;
			// Убедимся, что tRatio не превышает 1.0 (для защиты от перебега)
			if (alertTimeout < 0) tRatio = 1.0;

			mAlertBox->setDimensions(tRatio * startWidth, tRatio * startHeight);
			// Корректировка позиции для центрирования
			mAlertBox->setPosition(startLeft + (1 - tRatio) * startWidth / 2, startTop + (1 - tRatio) * startHeight / 2);

			if (alertTimeout <= 0)
			{
				alertTimeout = 0;
				mAlertBoxText->show(); // Показываем текст, когда рамка полностью появилась
			}
			return;
		}
		//Show alert (Отображение)
		if (alertCount > 0)
		{
			alertCount -= evt.timeSinceLastFrame;
			if (alertCount <= 0) hide();

			return;
		}
		//Transition out (Анимация исчезновения)
		if (alertTimeout < 0)
		{
			if (mAlertBoxText->isVisible()) mAlertBoxText->hide();
			alertTimeout += evt.timeSinceLastFrame;

			Real tRatio = (-1 * alertTimeout) / TRANSITION_TIME;
			// Убедимся, что tRatio не меньше 0.0 (для защиты от перебега)
			if (alertTimeout >= 0) tRatio = 0.0;

			mAlertBox->setDimensions(tRatio * startWidth, tRatio * startHeight);
			// Корректировка позиции для центрирования
			mAlertBox->setPosition(startLeft + (1 - tRatio) * startWidth / 2, startTop + (1 - tRatio) * startHeight / 2);


			if (alertTimeout >= 0)
			{
				alertTimeout = 0;
				mAlertBox->hide();
				OverlayManager::getSingleton().getByName("GUIOverlay/AlertBox")->hide();
			}
			return;
		}
	}
	void showAlert(const Ogre::String& caption, Real left, Real top, Real count = 2.5)
	{
		// Проверка на nullptr
		if (!mAlertBox || !mAlertBoxText)
		{
			LogManager::getSingleton().logMessage("WARNING: MagixAlertBox is not initialized or elements are missing. Cannot show alert.");
			return;
		}

		OverlayManager::getSingleton().getByName("GUIOverlay/AlertBox")->show();
		mAlertBoxText->setCaption(caption);
		mAlertBox->setPosition(left, top); // Позиция устанавливается в центр элемента

		//compute text width/height
		// Используем FontPtr для корректной работы с FontManager
		const FontPtr pFontPtr = FontManager::getSingleton().getByName(ALERT_FONT);

		// БЕЗОПАСНОСТЬ: Проверка на существование шрифта.
		if (pFontPtr.isNull())
		{
			LogManager::getSingleton().logMessage("WARNING: MagixAlertBox font '" ALERT_FONT "' not found. Cannot calculate alert box dimensions correctly.");
			// Устанавливаем минимальные (безопасные) размеры с учетом паддинга
			startHeight = 20.0f + 2 * ALERT_PADDING;
			startWidth = 100.0f + 2 * ALERT_PADDING;
		}
		else
		{
			const Font* pFont = pFontPtr.get();

			std::vector<Ogre::String> tText = Ogre::StringUtil::split(caption, "\n");
			Real tLongestWidth = 0;

			for (const Ogre::String& tLine : tText)
			{
				Real tTextWidth = 0;

				// ЧИТАЕМОСТЬ: Используем Ogre::String::const_iterator
				for (Ogre::String::const_iterator charIt = tLine.begin(); charIt != tLine.end(); ++charIt)
				{
					if (*charIt == 0x0020)
						tTextWidth += 0.055;
					else
					{
						tTextWidth += pFont->getGlyphAspectRatio(*charIt);
					}
				}
				if (tTextWidth > tLongestWidth) tLongestWidth = tTextWidth;
			}

			// Рассчет конечных размеров текста
			Real tCharHeight = Ogre::StringConverter::parseReal(mAlertBoxText->getParameter("char_height"));

			// Ширина/Высота текста
			startWidth = tLongestWidth * tCharHeight;
			startHeight = tCharHeight * tText.size();

			// ДОБАВЛЯЕМ ПАДДИНГ (отступ) к рамке
			startWidth += 2 * ALERT_PADDING;
			startHeight += 2 * ALERT_PADDING;

			// Устанавливаем позицию текста внутри рамки с учетом паддинга
			mAlertBoxText->setPosition(ALERT_PADDING, ALERT_PADDING);
		}

		// Рассчитываем верхний левый угол рамки полного размера
		startLeft = left - startWidth / 2;
		startTop = top - startHeight / 2;

		mAlertBox->setDimensions(0, 0); // Начинаем с нулевого размера для анимации
		alertCount = count;
		alertTimeout = TRANSITION_TIME; // Начинаем анимацию "появления"
	}
	void hide(bool immediate = false)
	{
		// Проверка на nullptr
		if (!mAlertBox || !mAlertBoxText)
		{
			alertCount = 0;
			return;
		}

		alertCount = 0;
		if (immediate)
		{
			OverlayManager::getSingleton().getByName("GUIOverlay/AlertBox")->hide();
			mAlertBox->hide();
			alertTimeout = 0;
		}
		else alertTimeout = -TRANSITION_TIME;
	}
	OverlayElement* getAlertBox()
	{
		return mAlertBox;
	}
};


#endif