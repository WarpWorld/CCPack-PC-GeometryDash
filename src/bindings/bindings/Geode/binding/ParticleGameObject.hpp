#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)

    /**
     * @note[short] Windows: 0x398080
     */
    static ParticleGameObject* create();
    
private:
    [[deprecated("ParticleGameObject::applyParticleSettings not implemented")]]
    /**
     */
    TodoReturn applyParticleSettings(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("ParticleGameObject::createAndAddCustomParticle not implemented")]]
    /**
     */
    TodoReturn createAndAddCustomParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::createParticlePreviewArt not implemented")]]
    /**
     */
    TodoReturn createParticlePreviewArt();
public:

    /**
     * @note[short] Windows: 0x398c00
     */
    void setParticleString(gd::string p0);

    /**
     * @note[short] Windows: 0x398cd0
     */
    void updateParticle();
    
private:
    [[deprecated("ParticleGameObject::updateParticleAngle not implemented")]]
    /**
     */
    TodoReturn updateParticleAngle(float p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticlePreviewArtOpacity not implemented")]]
    /**
     */
    TodoReturn updateParticlePreviewArtOpacity(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleScale not implemented")]]
    /**
     */
    TodoReturn updateParticleScale(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleStruct not implemented")]]
    /**
     */
    TodoReturn updateParticleStruct();
public:

    /**
     * @note[short] Windows: 0x398120
     */
    virtual bool init();
    
private:
    [[deprecated("ParticleGameObject::setScaleX not implemented")]]
    /**
     */
    virtual void setScaleX(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setScaleY not implemented")]]
    /**
     */
    virtual void setScaleY(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setScale not implemented")]]
    /**
     */
    virtual void setScale(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setRotation not implemented")]]
    /**
     */
    virtual void setRotation(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setRotationX not implemented")]]
    /**
     */
    virtual void setRotationX(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setRotationY not implemented")]]
    /**
     */
    virtual void setRotationY(float p0);
public:
    
private:
    [[deprecated("ParticleGameObject::setChildColor not implemented")]]
    /**
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
public:

    /**
     * @note[short] Windows: 0x3983f0
     */
    virtual void customSetup();
    
private:
    [[deprecated("ParticleGameObject::addMainSpriteToParent not implemented")]]
    /**
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("ParticleGameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("ParticleGameObject::deactivateObject not implemented")]]
    /**
     */
    virtual void deactivateObject(bool p0);
public:

    /**
     * @note[short] Windows: 0x398170
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] Windows: 0x399880
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    
private:
    [[deprecated("ParticleGameObject::claimParticle not implemented")]]
    /**
     */
    virtual TodoReturn claimParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::unclaimParticle not implemented")]]
    /**
     */
    virtual TodoReturn unclaimParticle();
public:
    
private:
    [[deprecated("ParticleGameObject::particleWasActivated not implemented")]]
    /**
     */
    virtual TodoReturn particleWasActivated();
public:
    
private:
    [[deprecated("ParticleGameObject::setObjectColor not implemented")]]
    /**
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("ParticleGameObject::blendModeChanged not implemented")]]
    /**
     */
    virtual TodoReturn blendModeChanged();
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleColor not implemented")]]
    /**
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateParticleOpacity not implemented")]]
    /**
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateMainParticleOpacity not implemented")]]
    /**
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateSecondaryParticleOpacity not implemented")]]
    /**
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);
public:
    
private:
    [[deprecated("ParticleGameObject::updateSyncedAnimation not implemented")]]
    /**
     */
    virtual TodoReturn updateSyncedAnimation(float p0, int p1);
public:
    
private:
    [[deprecated("ParticleGameObject::updateAnimateOnTrigger not implemented")]]
    /**
     */
    virtual TodoReturn updateAnimateOnTrigger(bool p0);
public:
    gd::string m_particleData;
    bool m_updatedParticleData;
    GEODE_PAD(291);
    bool m_hasUniformObjectColor;
    GEODE_PAD(7);
    bool m_shouldQuickStart;
    GEODE_PAD(15);
};
