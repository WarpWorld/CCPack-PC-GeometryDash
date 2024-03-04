#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCBlockLayer.hpp"
#include "FLAlertLayerProtocol.hpp"

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] Windows: 0x9ff80
     */
    static EditorPauseLayer* create(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0x242150
     */
    TodoReturn doResetUnused();

    /**
     * @note[short] Windows: 0xa0020
     */
    bool init(LevelEditorLayer* p0);
    
private:
    [[deprecated("EditorPauseLayer::onAlignX not implemented")]]
    /**
     */
    void onAlignX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onAlignY not implemented")]]
    /**
     */
    void onAlignY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onBuildHelper not implemented")]]
    /**
     */
    void onBuildHelper(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCopyWColor not implemented")]]
    /**
     */
    void onCopyWColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCreateExtras not implemented")]]
    /**
     */
    void onCreateExtras(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCreateLoop not implemented")]]
    /**
     */
    void onCreateLoop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onCreateTemplate not implemented")]]
    /**
     */
    void onCreateTemplate(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa2ef0
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2f50
     */
    void onExitNoSave(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onHelp not implemented")]]
    /**
     */
    void onHelp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onKeybindings not implemented")]]
    /**
     */
    void onKeybindings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onNewGroupX not implemented")]]
    /**
     */
    void onNewGroupX(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onNewGroupY not implemented")]]
    /**
     */
    void onNewGroupY(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onOptions not implemented")]]
    /**
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onPasteWColor not implemented")]]
    /**
     */
    void onPasteWColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorPauseLayer::onReGroup not implemented")]]
    /**
     */
    void onReGroup(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa1f30
     */
    void onResetUnusedColors(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2640
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2e40
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2eb0
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2c90
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa20e0
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa2100
     */
    void onSelectAllLeft(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onSelectAllRight not implemented")]]
    /**
     */
    void onSelectAllRight(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa25a0
     */
    void onSong(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorPauseLayer::onUnlockAllLayers not implemented")]]
    /**
     */
    void onUnlockAllLayers(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] Windows: 0xa2cf0
     */
    TodoReturn playStep2();
    
private:
    [[deprecated("EditorPauseLayer::playStep3 not implemented")]]
    /**
     */
    TodoReturn playStep3();
public:

    /**
     * @note[short] Windows: 0xa26c0
     */
    TodoReturn saveLevel();
    
private:
    [[deprecated("EditorPauseLayer::toggleDebugDraw not implemented")]]
    /**
     */
    TodoReturn toggleDebugDraw(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorBackground not implemented")]]
    /**
     */
    TodoReturn toggleEditorBackground(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorColorMode not implemented")]]
    /**
     */
    TodoReturn toggleEditorColorMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorGrid not implemented")]]
    /**
     */
    TodoReturn toggleEditorGrid(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEditorGround not implemented")]]
    /**
     */
    TodoReturn toggleEditorGround(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectDuration not implemented")]]
    /**
     */
    TodoReturn toggleEffectDuration(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleEffectLines not implemented")]]
    /**
     */
    TodoReturn toggleEffectLines(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleFollowPlayer not implemented")]]
    /**
     */
    TodoReturn toggleFollowPlayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleGridOnTop not implemented")]]
    /**
     */
    TodoReturn toggleGridOnTop(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleHideInvisible not implemented")]]
    /**
     */
    TodoReturn toggleHideInvisible(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleIgnoreDamage not implemented")]]
    /**
     */
    TodoReturn toggleIgnoreDamage(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePlaytestMusic not implemented")]]
    /**
     */
    TodoReturn togglePlaytestMusic(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewAnim not implemented")]]
    /**
     */
    TodoReturn togglePreviewAnim(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewParticles not implemented")]]
    /**
     */
    TodoReturn togglePreviewParticles(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::togglePreviewShaders not implemented")]]
    /**
     */
    TodoReturn togglePreviewShaders(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleRecordOrder not implemented")]]
    /**
     */
    TodoReturn toggleRecordOrder(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleSelectFilter not implemented")]]
    /**
     */
    TodoReturn toggleSelectFilter(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorPauseLayer::toggleShowObjectInfo not implemented")]]
    /**
     */
    TodoReturn toggleShowObjectInfo(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] Windows: 0xa1e70
     */
    TodoReturn uncheckAllPortals(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa25d0
     */
    TodoReturn updateSongButton();
    
private:
    [[deprecated("EditorPauseLayer::keyBackClicked not implemented")]]
    /**
     */
    virtual void keyBackClicked();
public:

    /**
     * @note[short] Windows: 0xa3080
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] Windows: 0xa0730
     */
    virtual void customSetup();

    /**
     * @note[short] Windows: 0xa2fc0
     */
    virtual TodoReturn FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    bool m_saved;
    CCMenuItemSpriteExtra* m_guidelinesOffButton;
    CCMenuItemSpriteExtra* m_guidelinesOnButton;
    LevelEditorLayer* m_editorLayer;
};
