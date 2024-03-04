#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] Windows: 0x41910
     */
    static void addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);

    /**
     * @note[short] Windows: 0x419c0
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* p0);

    /**
     * @note[short] Windows: 0x40a50
     */
    static TodoReturn alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);
    
private:
    [[deprecated("GameToolbox::alignItemsVertically not implemented")]]
    /**
     */
    static TodoReturn alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("GameToolbox::bounceTime not implemented")]]
    /**
     */
    static TodoReturn bounceTime(float p0);
public:
    
private:
    [[deprecated("GameToolbox::colorToSepia not implemented")]]
    /**
     */
    static TodoReturn colorToSepia(cocos2d::ccColor3B p0, float p1);
public:
    
private:
    [[deprecated("GameToolbox::contentScaleClipRect not implemented")]]
    /**
     */
    static TodoReturn contentScaleClipRect(cocos2d::CCRect& p0);
public:
    
private:
    [[deprecated("GameToolbox::createHashString not implemented")]]
    /**
     */
    static TodoReturn createHashString(gd::string const& p0, int p1);
public:

    /**
     * @note[short] Windows: 0x40f80
     */
    static CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, cocos2d::CCArray* p7);

    /**
     * @note[short] Windows: 0x41080
     */
    static CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13, cocos2d::CCArray* p14);
    
private:
    [[deprecated("GameToolbox::doWeHaveInternet not implemented")]]
    /**
     */
    static TodoReturn doWeHaveInternet();
public:
    
private:
    [[deprecated("GameToolbox::easeToText not implemented")]]
    /**
     */
    static TodoReturn easeToText(int p0);
public:
    
private:
    [[deprecated("GameToolbox::fast_rand_0_1 not implemented")]]
    /**
     */
    static TodoReturn fast_rand_0_1();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand_minus1_1 not implemented")]]
    /**
     */
    static TodoReturn fast_rand_minus1_1();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand not implemented")]]
    /**
     */
    static TodoReturn fast_rand();
public:
    
private:
    [[deprecated("GameToolbox::fast_srand not implemented")]]
    /**
     */
    static TodoReturn fast_srand(unsigned long p0);
public:
    
private:
    [[deprecated("GameToolbox::gen_random not implemented")]]
    /**
     */
    static TodoReturn gen_random(int p0);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWDelay not implemented")]]
    /**
     */
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWEnd not implemented")]]
    /**
     */
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);
public:
    
private:
    [[deprecated("GameToolbox::getEasedAction not implemented")]]
    /**
     */
    static TodoReturn getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::getEasedValue not implemented")]]
    /**
     */
    static TodoReturn getEasedValue(float p0, int p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::getfast_srand not implemented")]]
    /**
     */
    static TodoReturn getfast_srand();
public:
    
private:
    [[deprecated("GameToolbox::getInvertedEasing not implemented")]]
    /**
     */
    static TodoReturn getInvertedEasing(int p0);
public:
    
private:
    [[deprecated("GameToolbox::getLargestMergedIntDicts not implemented")]]
    /**
     */
    static TodoReturn getLargestMergedIntDicts(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::getMultipliedHSV not implemented")]]
    /**
     */
    static TodoReturn getMultipliedHSV(cocos2d::ccHSVValue const& p0, float p1);
public:

    /**
     * @note[short] Windows: 0x41300
     */
    static TodoReturn getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1);
    
private:
    [[deprecated("GameToolbox::getResponse not implemented")]]
    /**
     */
    static TodoReturn getResponse(cocos2d::extension::CCHttpResponse* p0);
public:

    /**
     * @note[short] Windows: 0x426b0
     */
    static gd::string getTimeString(int p0);
    
private:
    [[deprecated("GameToolbox::hsvFromString not implemented")]]
    /**
     */
    static TodoReturn hsvFromString(gd::string const& p0, char const* p1);
public:
    
private:
    [[deprecated("GameToolbox::intToShortString not implemented")]]
    /**
     */
    static TodoReturn intToShortString(int p0);
public:

    /**
     * @note[short] Windows: 0x453a0
     */
    static TodoReturn intToString(int p0);
    
private:
    [[deprecated("GameToolbox::isIOS not implemented")]]
    /**
     */
    static bool isIOS();
public:
    
private:
    [[deprecated("GameToolbox::isRateEasing not implemented")]]
    /**
     */
    static bool isRateEasing(int p0);
public:

    /**
     * @note[short] Windows: 0x41510
     */
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
    
private:
    [[deprecated("GameToolbox::mergeDictsSkipConflict not implemented")]]
    /**
     */
    static TodoReturn mergeDictsSkipConflict(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::msToTimeString not implemented")]]
    /**
     */
    static TodoReturn msToTimeString(int p0, int p1);
public:

    /**
     * @note[short] Windows: 0x41d80
     */
    static TodoReturn multipliedColorValue(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
    
private:
    [[deprecated("GameToolbox::openAppPage not implemented")]]
    /**
     */
    static TodoReturn openAppPage();
public:
    
private:
    [[deprecated("GameToolbox::openRateURL not implemented")]]
    /**
     */
    static TodoReturn openRateURL(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameToolbox::particleFromString not implemented")]]
    /**
     */
    static TodoReturn particleFromString(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
public:
    
private:
    [[deprecated("GameToolbox::particleFromStruct not implemented")]]
    /**
     */
    static TodoReturn particleFromStruct(cocos2d::ParticleStruct const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
public:

    /**
     * @note[short] Windows: 0x43ae0
     */
    static TodoReturn particleStringToStruct(gd::string const& p0, cocos2d::ParticleStruct& p1);
    
private:
    [[deprecated("GameToolbox::pointsToString not implemented")]]
    /**
     */
    static TodoReturn pointsToString(int p0);
public:
    
private:
    [[deprecated("GameToolbox::postClipVisit not implemented")]]
    /**
     */
    static TodoReturn postClipVisit();
public:

    /**
     * @note[short] Windows: 0x40f00
     */
    static TodoReturn preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
    
private:
    [[deprecated("GameToolbox::preVisitWithClipRect not implemented")]]
    /**
     */
    static TodoReturn preVisitWithClipRect(cocos2d::CCRect p0);
public:

    /**
     * @note[short] Windows: 0x428f0
     */
    static TodoReturn saveParticleToString(cocos2d::CCParticleSystemQuad* p0);
    
private:
    [[deprecated("GameToolbox::saveStringToFile not implemented")]]
    /**
     */
    static TodoReturn saveStringToFile(gd::string const& p0, gd::string const& p1);
public:
    
private:
    [[deprecated("GameToolbox::stringFromHSV not implemented")]]
    /**
     */
    static TodoReturn stringFromHSV(cocos2d::ccHSVValue p0, char const* p1);
public:

    /**
     * @note[short] Windows: 0x42430
     */
    static cocos2d::CCDictionary* stringSetupToDict(gd::string const& p0, char const* p1);

    /**
     * @note[short] Windows: 0x42230
     */
    static TodoReturn stringSetupToMap(gd::string const& p0, char const* p1, gd::map<gd::string, gd::string>& p2);

    /**
     * @note[short] Windows: 0x425e0
     */
    static TodoReturn strongColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] Windows: 0x45640
     */
    static gd::string timestampToHumanReadable(time_t p0, time_t p1);

    /**
     * @note[short] Windows: 0x41b20
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, cocos2d::ccHSVValue p1);
    
private:
    [[deprecated("GameToolbox::transformColor not implemented")]]
    /**
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, float p1, float p2, float p3);
public:
};
