#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x32bf0
     */
    static FMODAudioEngine* sharedEngine();
    
private:
    [[deprecated("FMODAudioEngine::activateQueuedMusic not implemented")]]
    /**
     */
    TodoReturn activateQueuedMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelForChannelID not implemented")]]
    /**
     */
    TodoReturn channelForChannelID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelForUniqueID not implemented")]]
    /**
     */
    TodoReturn channelForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelIDForUniqueID not implemented")]]
    /**
     */
    TodoReturn channelIDForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelLinkSound not implemented")]]
    /**
     */
    TodoReturn channelLinkSound(int p0, FMODSound* p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelStopped not implemented")]]
    /**
     */
    TodoReturn channelStopped(FMOD::Channel* p0, bool p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelUnlinkSound not implemented")]]
    /**
     */
    TodoReturn channelUnlinkSound(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::clearAllAudio not implemented")]]
    /**
     */
    TodoReturn clearAllAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveEffects not implemented")]]
    /**
     */
    TodoReturn countActiveEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveMusic not implemented")]]
    /**
     */
    TodoReturn countActiveMusic();
public:

    /**
     * @note[short] Windows: 0x3aea0
     */
    TodoReturn createStream(gd::string p0);
    
private:
    [[deprecated("FMODAudioEngine::disableMetering not implemented")]]
    /**
     */
    TodoReturn disableMetering();
public:
    
private:
    [[deprecated("FMODAudioEngine::enableMetering not implemented")]]
    /**
     */
    TodoReturn enableMetering();
public:
    
private:
    [[deprecated("FMODAudioEngine::fadeInBackgroundMusic not implemented")]]
    /**
     */
    TodoReturn fadeInBackgroundMusic(float p0);
public:

    /**
     * @note[short] Windows: 0x3a740
     */
    TodoReturn fadeInMusic(float p0, int p1);
    
private:
    [[deprecated("FMODAudioEngine::fadeOutMusic not implemented")]]
    /**
     */
    TodoReturn fadeOutMusic(float p0, int p1);
public:

    /**
     * @note[short] Windows: 0x3a940
     */
    TodoReturn getActiveMusic(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getActiveMusicChannel not implemented")]]
    /**
     */
    TodoReturn getActiveMusicChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getBackgroundMusicVolume not implemented")]]
    /**
     */
    float getBackgroundMusicVolume();
public:

    /**
     * @note[short] Windows: 0x35240
     */
    TodoReturn getChannelGroup(int p0, bool p1);
    
private:
    [[deprecated("FMODAudioEngine::getEffectsVolume not implemented")]]
    /**
     */
    float getEffectsVolume();
public:

    /**
     * @note[short] Windows: 0x3b0f0
     */
    TodoReturn getFMODStatus(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getMeteringValue not implemented")]]
    /**
     */
    TodoReturn getMeteringValue();
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicChannelID not implemented")]]
    /**
     */
    TodoReturn getMusicChannelID(int p0);
public:

    /**
     * @note[short] Windows: 0x3a570
     */
    TodoReturn getMusicLengthMS(int p0);
    
private:
    [[deprecated("FMODAudioEngine::getMusicTime not implemented")]]
    /**
     */
    TodoReturn getMusicTime(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicTimeMS not implemented")]]
    /**
     */
    TodoReturn getMusicTimeMS(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getNextChannelID not implemented")]]
    /**
     */
    TodoReturn getNextChannelID();
public:
    
private:
    [[deprecated("FMODAudioEngine::getTweenContainer not implemented")]]
    /**
     */
    TodoReturn getTweenContainer(AudioTargetType p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isChannelStopping not implemented")]]
    /**
     */
    bool isChannelStopping(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isEffectLoaded not implemented")]]
    /**
     */
    bool isEffectLoaded(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isMusicPlaying not implemented")]]
    /**
     */
    bool isMusicPlaying(gd::string p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::isMusicPlaying not implemented")]]
    /**
     */
    bool isMusicPlaying(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isSoundReady not implemented")]]
    /**
     */
    bool isSoundReady(FMOD::Sound* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::lengthForSound not implemented")]]
    /**
     */
    TodoReturn lengthForSound(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAndPlayMusic not implemented")]]
    /**
     */
    TodoReturn loadAndPlayMusic(gd::string p0, unsigned int p1, int p2);
public:

    /**
     * @note[short] Windows: 0x34000
     */
    TodoReturn loadAudioState(FMODAudioState& p0);

    /**
     * @note[short] Windows: 0x38740
     */
    TodoReturn loadMusic(gd::string p0, float p1, float p2, float p3, bool p4, int p5, int p6);

    /**
     * @note[short] Windows: 0x386a0
     */
    TodoReturn loadMusic(gd::string p0);
    
private:
    [[deprecated("FMODAudioEngine::pauseAllAudio not implemented")]]
    /**
     */
    TodoReturn pauseAllAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseAllEffects not implemented")]]
    /**
     */
    TodoReturn pauseAllEffects();
public:

    /**
     * @note[short] Windows: 0x38350
     */
    TodoReturn pauseAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::pauseEffect not implemented")]]
    /**
     */
    TodoReturn pauseEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseMusic not implemented")]]
    /**
     */
    TodoReturn pauseMusic(int p0);
public:

    /**
     * @note[short] Windows: 0x350e0
     */
    TodoReturn pitchForIdx(int p0);

    /**
     * @note[short] Windows: 0x356e0
     */
    void playEffect(gd::string p0, float p1, float p2, float p3);

    /**
     * @note[short] Windows: 0x35590
     */
    void playEffect(gd::string p0);

    /**
     * @note[short] Windows: 0x357b0
     */
    TodoReturn playEffectAdvanced(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, bool p14, int p15, int p16, float p17, int p18);
    
private:
    [[deprecated("FMODAudioEngine::playEffectAsync not implemented")]]
    /**
     */
    TodoReturn playEffectAsync(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x385b0
     */
    TodoReturn playMusic(gd::string p0, bool p1, float p2, int p3);

    /**
     * @note[short] Windows: 0x37a10
     */
    TodoReturn preloadEffect(gd::string p0);
    
private:
    [[deprecated("FMODAudioEngine::preloadEffectAsync not implemented")]]
    /**
     */
    TodoReturn preloadEffectAsync(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadMusic not implemented")]]
    /**
     */
    TodoReturn preloadMusic(gd::string p0, bool p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::printResult not implemented")]]
    /**
     */
    TodoReturn printResult(FMOD_RESULT p0);
public:

    /**
     * @note[short] Windows: 0x391f0
     */
    TodoReturn queuedEffectFinishedLoading(gd::string p0);

    /**
     * @note[short] Windows: 0x4361f0
     */
    TodoReturn queuePlayEffect(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16);
    
private:
    [[deprecated("FMODAudioEngine::queueStartMusic not implemented")]]
    /**
     */
    TodoReturn queueStartMusic(gd::string p0, float p1, float p2, float p3, bool p4, int p5, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12);
public:

    /**
     * @note[short] Windows: 0x36410
     */
    TodoReturn registerChannel(FMOD::Channel* p0, int p1, int p2);
    
private:
    [[deprecated("FMODAudioEngine::releaseRemovedSounds not implemented")]]
    /**
     */
    TodoReturn releaseRemovedSounds();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeAllAudio not implemented")]]
    /**
     */
    TodoReturn resumeAllAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeAllEffects not implemented")]]
    /**
     */
    TodoReturn resumeAllEffects();
public:

    /**
     * @note[short] Windows: 0x383a0
     */
    TodoReturn resumeAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::resumeAudio not implemented")]]
    /**
     */
    TodoReturn resumeAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeEffect not implemented")]]
    /**
     */
    TodoReturn resumeEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeMusic not implemented")]]
    /**
     */
    TodoReturn resumeMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::reverbToString not implemented")]]
    /**
     */
    TodoReturn reverbToString(FMODReverbPreset p0);
public:

    /**
     * @note[short] Windows: 0x33b80
     */
    TodoReturn saveAudioState(FMODAudioState& p0);
    
private:
    [[deprecated("FMODAudioEngine::setBackgroundMusicVolume not implemented")]]
    /**
     */
    void setBackgroundMusicVolume(float p0);
public:

    /**
     * @note[short] Windows: 0x378b0
     */
    void setChannelPitch(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] Windows: 0x373b0
     */
    void setChannelVolume(int p0, AudioTargetType p1, float p2);

    /**
     * @note[short] Windows: 0x37630
     */
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);
    
private:
    [[deprecated("FMODAudioEngine::setEffectsVolume not implemented")]]
    /**
     */
    void setEffectsVolume(float p0);
public:

    /**
     * @note[short] Windows: 0x3a3f0
     */
    void setMusicTimeMS(unsigned int p0, bool p1, int p2);

    /**
     * @note[short] Windows: 0x32c70
     */
    TodoReturn setup();

    /**
     * @note[short] Windows: 0x32f90
     */
    TodoReturn setupAudioEngine();

    /**
     * @note[short] Windows: 0x33830
     */
    TodoReturn start();

    /**
     * @note[short] Windows: 0x38b90
     */
    TodoReturn startMusic(int p0, int p1, int p2, int p3, bool p4, int p5);
    
private:
    [[deprecated("FMODAudioEngine::stop not implemented")]]
    /**
     */
    TodoReturn stop();
public:

    /**
     * @note[short] Windows: 0x37f90
     */
    TodoReturn stopAllEffects();

    /**
     * @note[short] Windows: 0x38310
     */
    TodoReturn stopAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::stopAndGetFade not implemented")]]
    /**
     */
    TodoReturn stopAndGetFade(FMOD::Channel* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopAndRemoveMusic not implemented")]]
    /**
     */
    TodoReturn stopAndRemoveMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     */
    TodoReturn stopChannel(FMOD::Channel* p0, bool p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     */
    TodoReturn stopChannel(int p0, AudioTargetType p1, bool p2, float p3);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     */
    TodoReturn stopChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTween not implemented")]]
    /**
     */
    TodoReturn stopChannelTween(int p0, AudioTargetType p1, AudioModType p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTweens not implemented")]]
    /**
     */
    TodoReturn stopChannelTweens(int p0, AudioTargetType p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusic not implemented")]]
    /**
     */
    TodoReturn stopMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusicNotInSet not implemented")]]
    /**
     */
    TodoReturn stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0);
public:

    /**
     * @note[short] Windows: 0x37c00
     */
    TodoReturn storeEffect(FMOD::Sound* p0, gd::string p1);
    
private:
    [[deprecated("FMODAudioEngine::swapMusicIndex not implemented")]]
    /**
     */
    TodoReturn swapMusicIndex(int p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::testFunction not implemented")]]
    /**
     */
    TodoReturn testFunction(int p0);
public:

    /**
     * @note[short] Windows: 0x39800
     */
    TodoReturn triggerQueuedMusic(FMODQueuedMusic p0);

    /**
     * @note[short] Windows: 0x38130
     */
    TodoReturn unloadAllEffects();
    
private:
    [[deprecated("FMODAudioEngine::unloadEffect not implemented")]]
    /**
     */
    TodoReturn unloadEffect(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::unregisterChannel not implemented")]]
    /**
     */
    TodoReturn unregisterChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateBackgroundFade not implemented")]]
    /**
     */
    TodoReturn updateBackgroundFade();
public:

    /**
     * @note[short] Windows: 0x37200
     */
    TodoReturn updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4);

    /**
     * @note[short] Windows: 0x34dd0
     */
    TodoReturn updateChannelTweens(float p0);
    
private:
    [[deprecated("FMODAudioEngine::updateMetering not implemented")]]
    /**
     */
    TodoReturn updateMetering();
public:

    /**
     * @note[short] Windows: 0x39120
     */
    TodoReturn updateQueuedEffects();
    
private:
    [[deprecated("FMODAudioEngine::updateQueuedMusic not implemented")]]
    /**
     */
    TodoReturn updateQueuedMusic();
public:

    /**
     * @note[short] Windows: 0x33220
     */
    TodoReturn updateReverb(FMODReverbPreset p0, bool p1);
    
private:
    [[deprecated("FMODAudioEngine::updateTemporaryEffects not implemented")]]
    /**
     */
    TodoReturn updateTemporaryEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::waitUntilSoundReady not implemented")]]
    /**
     */
    TodoReturn waitUntilSoundReady(FMOD::Sound* p0);
public:

    /**
     * @note[short] Windows: 0x33980
     */
    virtual void update(float p0);
    GEODE_PAD(96);
    float m_musicVolume;
    float m_sfxVolume;
    GEODE_PAD(28);
    FMOD::Channel* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::Sound* m_sound;
    FMOD::Channel* m_currentSoundChannel;
    FMOD::Channel* m_globalChannel;
    FMOD::DSP* m_DSP;
    FMOD_RESULT m_lastResult;
    int m_version;
    void* m_extraDriverData;
    int m_musicOffset;
};
