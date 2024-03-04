#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"

class TextGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "TextGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TextGameObject, GameObject)

    /**
     * @note[short] Windows: 0x147cc0
     */
    static TextGameObject* create(cocos2d::CCTexture2D* p0);
    
private:
    [[deprecated("TextGameObject::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCTexture2D* p0);
public:

    /**
     * @note[short] Windows: 0x147d90
     */
    TodoReturn updateTextObject(gd::string p0, bool p1);
    
private:
    [[deprecated("TextGameObject::customObjectSetup not implemented")]]
    /**
     */
    virtual TodoReturn customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
public:
    
private:
    [[deprecated("TextGameObject::getSaveString not implemented")]]
    /**
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("TextGameObject::updateTextKerning not implemented")]]
    /**
     */
    virtual TodoReturn updateTextKerning(int p0);
public:
    
private:
    [[deprecated("TextGameObject::getTextKerning not implemented")]]
    /**
     */
    virtual TodoReturn getTextKerning();
public:
    gd::string m_text;
    int m_kerning;
};
