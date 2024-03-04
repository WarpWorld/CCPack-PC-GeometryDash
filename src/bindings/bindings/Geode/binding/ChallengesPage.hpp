#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "GJChallengeDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5c4c0
     */
    static ChallengesPage* create();
    
private:
    [[deprecated("ChallengesPage::claimItem not implemented")]]
    /**
     */
    TodoReturn claimItem(ChallengeNode* p0, GJChallengeItem* p1, cocos2d::CCPoint p2);
public:

    /**
     * @note[short] Windows: 0x5d190
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);
    
private:
    [[deprecated("ChallengesPage::exitNodeAtSlot not implemented")]]
    /**
     */
    TodoReturn exitNodeAtSlot(int p0, float p1);
public:
    
private:
    [[deprecated("ChallengesPage::onClose not implemented")]]
    /**
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ChallengesPage::tryGetChallenges not implemented")]]
    /**
     */
    TodoReturn tryGetChallenges();
public:
    
private:
    [[deprecated("ChallengesPage::updateDots not implemented")]]
    /**
     */
    TodoReturn updateDots();
public:

    /**
     * @note[short] Windows: 0x5d450
     */
    void updateTimers(float p0);

    /**
     * @note[short] Windows: 0x5c560
     */
    virtual bool init();
    
private:
    [[deprecated("ChallengesPage::registerWithTouchDispatcher not implemented")]]
    /**
     */
    virtual void registerWithTouchDispatcher();
public:
    
private:
    [[deprecated("ChallengesPage::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:
    
private:
    [[deprecated("ChallengesPage::show not implemented")]]
    /**
     */
    virtual void show();
public:
    
private:
    [[deprecated("ChallengesPage::FLAlert_Clicked not implemented")]]
    /**
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
public:
    
private:
    [[deprecated("ChallengesPage::challengeStatusFinished not implemented")]]
    /**
     */
    virtual TodoReturn challengeStatusFinished();
public:
    
private:
    [[deprecated("ChallengesPage::challengeStatusFailed not implemented")]]
    /**
     */
    virtual TodoReturn challengeStatusFailed();
public:
    
private:
    [[deprecated("ChallengesPage::currencyWillExit not implemented")]]
    /**
     */
    virtual TodoReturn currencyWillExit(CurrencyRewardLayer* p0);
public:
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
