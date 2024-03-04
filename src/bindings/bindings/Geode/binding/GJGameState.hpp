#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EventTriggerInstance.hpp"
#include "SongChannelState.hpp"
#include "DynamicObjectAction.hpp"
#include "AdvancedFollowInstance.hpp"
#include "EnterEffectInstance.hpp"
#include "GameObjectPhysics.hpp"
#include "GJValueTween.hpp"
#include "SFXTriggerInstance.hpp"

class GJGameState {
public:
    static constexpr auto CLASS_NAME = "GJGameState";
    
private:
    [[deprecated("GJGameState::controlTweenAction not implemented")]]
    /**
     */
    TodoReturn controlTweenAction(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJGameState::getGameObjectPhysics not implemented")]]
    /**
     */
    TodoReturn getGameObjectPhysics(GameObject* p0);
public:
    
private:
    [[deprecated("GJGameState::processStateTriggers not implemented")]]
    /**
     */
    TodoReturn processStateTriggers();
public:
    
private:
    [[deprecated("GJGameState::stopTweenAction not implemented")]]
    /**
     */
    TodoReturn stopTweenAction(int p0);
public:

    /**
     * @note[short] Windows: 0x18e920
     */
    TodoReturn tweenValue(float p0, float p1, int p2, float p3, int p4, float p5, int p6, int p7);
    
private:
    [[deprecated("GJGameState::updateTweenAction not implemented")]]
    /**
     */
    TodoReturn updateTweenAction(float p0, int p1);
public:
    
private:
    [[deprecated("GJGameState::updateTweenActions not implemented")]]
    /**
     */
    TodoReturn updateTweenActions(float p0);
public:
    float m_unk0;
    float m_unk4;
    cocos2d::CCPoint m_unk8;
    cocos2d::CCPoint m_unk10;
    cocos2d::CCPoint m_unk18;
    cocos2d::CCPoint m_unk20;
    cocos2d::CCPoint m_unk28;
    cocos2d::CCPoint m_unk30;
    cocos2d::CCPoint m_unk38;
    cocos2d::CCPoint m_unk40;
    cocos2d::CCPoint m_unk48;
    cocos2d::CCPoint m_unk50;
    cocos2d::CCPoint m_unk58;
    cocos2d::CCPoint m_unk60;
    cocos2d::CCPoint m_unk68;
    cocos2d::CCPoint m_unk70;
    cocos2d::CCPoint m_unk78;
    cocos2d::CCPoint m_unk80;
    cocos2d::CCPoint m_unk88;
    cocos2d::CCPoint m_unk90;
    cocos2d::CCPoint m_unk98;
    cocos2d::CCPoint m_unka0;
    cocos2d::CCPoint m_unka8;
    cocos2d::CCPoint m_unkb0;
    cocos2d::CCPoint m_unkb8;
    cocos2d::CCPoint m_unkc0;
    cocos2d::CCPoint m_unkc8;
    cocos2d::CCPoint m_unkd0;
    cocos2d::CCPoint m_unkd8;
    cocos2d::CCPoint m_unke0;
    cocos2d::CCPoint m_unke8;
    cocos2d::CCPoint m_unkf0;
    bool m_unkf8;
    int m_unkfc;
    bool m_unk100;
    int m_unk104;
    bool m_unk108;
    cocos2d::CCPoint m_unk10c;
    GEODE_PAD(16);
    float m_unk124;
    float m_unk128;
    GEODE_PAD(28);
    float m_unk148;
    GEODE_PAD(28);
    bool m_unk168;
    bool m_unk169;
    bool m_unk16a;
    float m_unk16c;
    float m_unk170;
    float m_unk174;
    float m_unk178;
    int m_unk17c;
    int m_unk180;
    bool m_unk184;
    float m_unk188;
    float m_unk18c;
    int m_currentChannel;
    int m_unk194;
    gd::unordered_map<int, int> m_unk198;
    gd::unordered_map<int, bool> m_unk1b4;
    float m_unk1d0;
    float m_unk1d4;
    float m_unk1d8;
    float m_unk1dc;
    double m_unk1e0;
    GEODE_PAD(8);
    int m_unk1f8;
    GEODE_PAD(24);
    cocos2d::CCPoint m_unk20c;
    GEODE_PAD(16);
    gd::unordered_map<int, GJValueTween> m_unk224;
    GEODE_PAD(16);
    gd::unordered_map<int, GameObjectPhysics> m_unk250;
    GEODE_PAD(24);
    cocos2d::CCPoint m_unk284;
    int m_unk288;
    int m_unk28c;
    bool m_unk290;
    gd::map<std::pair<int, int>, int> m_unk298;
    int m_unkidk;
    cocos2d::CCPoint m_unk2b8;
    cocos2d::CCPoint m_unk2c0;
    bool m_unk2c8;
    bool m_unk2c9;
    bool m_unk2ca;
    GEODE_PAD(6);
    bool m_unk2d0;
    bool m_unk2d1;
    GEODE_PAD(16);
    double m_unk2e4;
    cocos2d::CCPoint m_unk2e8;
    GEODE_PAD(4);
    gd::unordered_map<int, EnhancedGameObject*> m_unk2f4;
    gd::map<std::pair<GJGameEvent, int>, gd::vector<EventTriggerInstance>> m_unk310;
    gd::map<std::pair<GJGameEvent, int>, int> m_unk328;
    gd::unordered_map<int, gd::vector<EnterEffectInstance>> m_unk340;
    gd::unordered_map<int, gd::vector<EnterEffectInstance>> m_unk35c;
    gd::vector<int> m_unk378;
    gd::vector<int> m_unk384;
    gd::vector<EnterEffectInstance> m_unk390;
    gd::vector<EnterEffectInstance> m_unk39c;
    gd::vector<EnterEffectInstance> m_unk3a8;
    gd::vector<EnterEffectInstance> m_unk3b4;
    gd::vector<EnterEffectInstance> m_unk3c0;
    gd::unordered_set<int> m_unk3cc;
    bool m_unk3e8;
    gd::vector<AdvancedFollowInstance> m_unk3ec;
    gd::vector<DynamicObjectAction> m_unk3f8;
    gd::vector<DynamicObjectAction> m_unk404;
    bool m_unk410;
    bool m_unk411;
    GEODE_PAD(4);
    gd::unordered_map<int, gd::vector<int>> m_unk418;
    gd::map<std::pair<int, int>, SFXTriggerInstance> m_unk434;
    gd::unordered_map<int, SongChannelState> m_unk44c;
    gd::unordered_map<int, gd::vector<SongTriggerState>> m_unk468;
    gd::vector<SFXTriggerState> m_unk484;
    GEODE_PAD(28);
};
