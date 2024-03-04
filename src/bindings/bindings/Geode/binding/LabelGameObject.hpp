#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EffectGameObject.hpp"

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)
    
private:
    [[deprecated("LabelGameObject::create not implemented")]]
    /**
     */
    static LabelGameObject* create();
public:
    
private:
    [[deprecated("LabelGameObject::createLabel not implemented")]]
    /**
     */
    TodoReturn createLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::queueUpdateLabel not implemented")]]
    /**
     */
    TodoReturn queueUpdateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::removeLabel not implemented")]]
    /**
     */
    TodoReturn removeLabel();
public:
    
private:
    [[deprecated("LabelGameObject::unlockLabelColor not implemented")]]
    /**
     */
    TodoReturn unlockLabelColor();
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     */
    TodoReturn updateLabel(float p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabel not implemented")]]
    /**
     */
    TodoReturn updateLabel(gd::string p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelAlign not implemented")]]
    /**
     */
    TodoReturn updateLabelAlign(int p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateLabelIfDirty not implemented")]]
    /**
     */
    TodoReturn updateLabelIfDirty();
public:
    
private:
    [[deprecated("LabelGameObject::updatePreviewLabel not implemented")]]
    /**
     */
    TodoReturn updatePreviewLabel();
public:
    
private:
    [[deprecated("LabelGameObject::init not implemented")]]
    /**
     */
    virtual bool init();
public:
    
private:
    [[deprecated("LabelGameObject::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:

    /**
     * @note[short] Windows: 0x14dda0
     */
    virtual TodoReturn setupCustomSprites(gd::string p0);
    
private:
    [[deprecated("LabelGameObject::addMainSpriteToParent not implemented")]]
    /**
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("LabelGameObject::resetObject not implemented")]]
    /**
     */
    virtual TodoReturn resetObject();
public:
    
private:
    [[deprecated("LabelGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("LabelGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("LabelGameObject::setObjectColor not implemented")]]
    /**
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
public:
    
private:
    [[deprecated("LabelGameObject::updateTextKerning not implemented")]]
    /**
     */
    virtual TodoReturn updateTextKerning(int p0);
public:
    
private:
    [[deprecated("LabelGameObject::getTextKerning not implemented")]]
    /**
     */
    virtual TodoReturn getTextKerning();
public:
private:
    int m_alignment;
public:
private:
    bool m_showSecondsOnly;
public:
private:
    int m_shownSpecial;
public:
private:
    bool m_isTimeCounter;
public:
private:
    int m_kerning;
public:
};
