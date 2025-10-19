#ifndef __MagixSkyManager_h_
#define __MagixSkyManager_h_

//-- Ogre3D Включает (Исправлено: правильное подключение и исправление ошибок) ---
#include <Ogre.h>
#include <OgreBillboardSet.h>
#include <OgreParticleSystem.h>
#include <OgreMaterialManager.h>
#include <OgreTechnique.h>
#include <OgrePass.h>
#include <OgreTextureUnitState.h>
#include <OgreMath.h>
#include <OgreVector4.h> 
#include <OgreColourValue.h> // Явно добавляем ColourValue, чтобы избежать ошибок C2065

//-- Стандартная библиотека включает --
#include <vector> // исправлено: правильное подключение стандартного вектора

// --- Ваши кастомные классы ---
#include "GameConfig.h"
#include "MagixExternalDefinitions.h"
#include "MagixCamera.h"
#include "MagixSoundManager.h"

// 🛑 Внимание! Исправления ошибок:
/// Если у вас есть ошибка C2011 "WeatherEvent: перепределение struct"
// Тогда удалите определение структуры из другого файла, но оставьте #include!
// Если нужно, чтобы структура была тут, оставьте, но удалите из другого файла.

using namespace Ogre; // исправлено: правильное использование пространства имен Ogre

//-- Константы --
#define MAX_STARS 77
#define NORTH Vector3::UNIT_Z
#define EAST Vector3::NEGATIVE_UNIT_X
#define SOUTH Vector3::NEGATIVE_UNIT_Z
#define WEST Vector3::UNIT_X
#define DAY_SPEED 1
#define DEFAULT_FOG_COLOR ColorValue(192/255.0f, 229/255.0f, 253/255.0f)
#define DEFAULT_SUNLIGHT_COLOR ColorValue(1.0, 1.0, 0.8)
#define DEFAULT_MOONLIGHT_COLOR ColorValue(0.25, 0.25, 0.25)
#define FOG_DENSITY 0.0001
//... (другие константы)

// ---- Объявление класса MagixSkyManager ---
class MagixSkyManager
{
    //... (защищенные и публичные блоки остаются без изменений)
protected:
    MagixExternalDefinitions* mDef;
    MagixCamera* mCamera;
    MagixSoundManager* mSoundManager;
    SceneManager* mSceneMgr;
    SceneNode* mSkyNode;
    Entity* mSkyDome;
    BillboardSet* mSun;
    BillboardSet* mSunRadiance;
    BillboardSet* mMoon;
    BillboardSet* mStars;
    Light* mSunLight;
    Light* mMoonLight;
    // Ogre::TerrainGlobalOptions* mTerrainGlobals;
    // Real cloudSpeed[MAX_CLOUDS];

    Real mSkyDayTime;
    bool mTimeFrozen;
    Real mFrozenDayTime;
    SceneNode* mWeatherNode;
    ParticleSystem* mWeatherSystem;
    Real mWeatherTime;
    bool mWeatherLocked;
    String mWeatherType;
    String mWeatherCycle;
    ColourValue mWeatherSkyShader;
    //ColourValue mWeatherSkyAdder;
    String mWeatherEffect;
    Real mWeatherEffectCountdown;
    std::vector<const WeatherEvent> mWeatherCycleEventList;
    bool hasWeatherSound;
    bool interiorSky;
    Real FOG_START, FOG_END;

public:
    MagixSkyManager();
    ~MagixSkyManager();

    void initialize(SceneManager* sceneMgr, MagixExternalDefinitions* def, MagixCamera* camera, MagixSoundManager* soundMgr);
    void updateSky();
    void resetSky();
    void updateCelestials(const Real& dayTime);
    void updateWeather();
    void updateWeatherEffect(const Real& timeElapsed, bool clearEffect = false);
    void update(const FrameEvent& evt);
    void showSky(bool flag);
    void showWeather(bool flag);
    bool isWeatherVisible();
    void setDayTime(const Real& time);
    const Real getDayTime() const;
    const Real getWeatherTime() const;
    void freezeDayTime(bool freeze, const Real& time = 0);
    void setWeatherTime(const Real& time);
    void lockWeather(bool lock);
    void setWeather(const String& type);
    void destroyWeather();
    const Vector4 vec4(const ColourValue& color);
    void setWeatherEffect(const String& type);
    void setInteriorSky(bool enabled, const ColourValue& fogColor = ColourValue(0.06f, 0.05f, 0.07f));
    void setWeatherCycle(const String& type);
};

#endif