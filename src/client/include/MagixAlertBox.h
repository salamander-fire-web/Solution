#ifndef __MagixAlertBox_h_
#define __MagixAlertBox_h_

// ��������: .cpp ���� ��-�������� ������ �������� ��������������� Ogre-���������
// (OgreOverlayManager.h, OgreOverlayElement.h, OgreFontManager.h, OgreLogManager.h � �.�.)

// ���������� ������������ ���� Ogre ��� ��������� ����, ��� ��� ����������� ����� - Ogre
using namespace Ogre;

#define TRANSITION_TIME 0.1
#define ALERT_FONT "TempusSans"
// ��������� ��������� ��� ������� (padding), ����� ����� ���� ��������
#define ALERT_PADDING 10.0f

class MagixAlertBox
{
protected:
	// Ogre::Real ������������ ��� ���� ��������� � ��������� ����������
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
		// ����������
	}
	void initialize()
	{
		// ������������� ���������: �������� Overlay-���������
		OverlayManager::getSingleton().getByName("GUIOverlay/AlertBox")->hide();

		// �������� ��������
		mAlertBox = OverlayManager::getSingleton().getOverlayElement("GUI/AlertBox");
		mAlertBoxText = OverlayManager::getSingleton().getOverlayElement("GUI/AlertBoxText");

		// ������������: ���������, ������� �� �������� ��������
		if (!mAlertBox || !mAlertBoxText)
		{
			LogManager::getSingleton().logMessage("ERROR: MagixAlertBox failed to find Overlay Elements (GUI/AlertBox or GUI/AlertBoxText). Alert box will not function.");
		}
	}
	void update(const FrameEvent& evt)
	{
		// ������ �����, ���� �������� �� �������
		if (!mAlertBox || !mAlertBoxText) return;

		//Transition in (�������� ���������)
		if (alertTimeout > 0)
		{
			if (!mAlertBox->isVisible()) mAlertBox->show();
			// �������� �����, ���� ����� ���������� (����� �������� ��������)
			if (mAlertBoxText->isVisible()) mAlertBoxText->hide();

			alertTimeout -= evt.timeSinceLastFrame;

			Real tRatio = (TRANSITION_TIME - alertTimeout) / TRANSITION_TIME;
			// ��������, ��� tRatio �� ��������� 1.0 (��� ������ �� ��������)
			if (alertTimeout < 0) tRatio = 1.0;

			mAlertBox->setDimensions(tRatio * startWidth, tRatio * startHeight);
			// ������������� ������� ��� �������������
			mAlertBox->setPosition(startLeft + (1 - tRatio) * startWidth / 2, startTop + (1 - tRatio) * startHeight / 2);

			if (alertTimeout <= 0)
			{
				alertTimeout = 0;
				mAlertBoxText->show(); // ���������� �����, ����� ����� ��������� ���������
			}
			return;
		}
		//Show alert (�����������)
		if (alertCount > 0)
		{
			alertCount -= evt.timeSinceLastFrame;
			if (alertCount <= 0) hide();

			return;
		}
		//Transition out (�������� ������������)
		if (alertTimeout < 0)
		{
			if (mAlertBoxText->isVisible()) mAlertBoxText->hide();
			alertTimeout += evt.timeSinceLastFrame;

			Real tRatio = (-1 * alertTimeout) / TRANSITION_TIME;
			// ��������, ��� tRatio �� ������ 0.0 (��� ������ �� ��������)
			if (alertTimeout >= 0) tRatio = 0.0;

			mAlertBox->setDimensions(tRatio * startWidth, tRatio * startHeight);
			// ������������� ������� ��� �������������
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
		// �������� �� nullptr
		if (!mAlertBox || !mAlertBoxText)
		{
			LogManager::getSingleton().logMessage("WARNING: MagixAlertBox is not initialized or elements are missing. Cannot show alert.");
			return;
		}

		OverlayManager::getSingleton().getByName("GUIOverlay/AlertBox")->show();
		mAlertBoxText->setCaption(caption);
		mAlertBox->setPosition(left, top); // ������� ��������������� � ����� ��������

		//compute text width/height
		// ���������� FontPtr ��� ���������� ������ � FontManager
		const FontPtr pFontPtr = FontManager::getSingleton().getByName(ALERT_FONT);

		// ������������: �������� �� ������������� ������.
		if (pFontPtr.isNull())
		{
			LogManager::getSingleton().logMessage("WARNING: MagixAlertBox font '" ALERT_FONT "' not found. Cannot calculate alert box dimensions correctly.");
			// ������������� ����������� (����������) ������� � ������ ��������
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

				// ����������: ���������� Ogre::String::const_iterator
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

			// ������� �������� �������� ������
			Real tCharHeight = Ogre::StringConverter::parseReal(mAlertBoxText->getParameter("char_height"));

			// ������/������ ������
			startWidth = tLongestWidth * tCharHeight;
			startHeight = tCharHeight * tText.size();

			// ��������� ������� (������) � �����
			startWidth += 2 * ALERT_PADDING;
			startHeight += 2 * ALERT_PADDING;

			// ������������� ������� ������ ������ ����� � ������ ��������
			mAlertBoxText->setPosition(ALERT_PADDING, ALERT_PADDING);
		}

		// ������������ ������� ����� ���� ����� ������� �������
		startLeft = left - startWidth / 2;
		startTop = top - startHeight / 2;

		mAlertBox->setDimensions(0, 0); // �������� � �������� ������� ��� ��������
		alertCount = count;
		alertTimeout = TRANSITION_TIME; // �������� �������� "���������"
	}
	void hide(bool immediate = false)
	{
		// �������� �� nullptr
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