#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpriteWithHue::create not implemented")]]
    /**
     */
    static CCSpriteWithHue* create(gd::string const& p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteWithHue::create not implemented")]]
    /**
     */
    static CCSpriteWithHue* create(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithSpriteFrame not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithSpriteFrameName not implemented")]]
    /**
     */
    TodoReturn createWithSpriteFrameName(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithTexture not implemented")]]
    /**
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::createWithTexture not implemented")]]
    /**
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::getAlpha not implemented")]]
    /**
     */
    TodoReturn getAlpha();
public:
    
private:
    [[deprecated("CCSpriteWithHue::getHue not implemented")]]
    /**
     */
    TodoReturn getHue();
public:
    
private:
    [[deprecated("CCSpriteWithHue::getUniformLocations not implemented")]]
    /**
     */
    TodoReturn getUniformLocations();
public:
    
private:
    [[deprecated("CCSpriteWithHue::initShader not implemented")]]
    /**
     */
    TodoReturn initShader();
public:
    
private:
    [[deprecated("CCSpriteWithHue::setCustomLuminance not implemented")]]
    /**
     */
    void setCustomLuminance(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setEvenLuminance not implemented")]]
    /**
     */
    void setEvenLuminance(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setHue not implemented")]]
    /**
     */
    void setHue(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setHueDegrees not implemented")]]
    /**
     */
    void setHueDegrees(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setLuminance not implemented")]]
    /**
     */
    void setLuminance(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::setupDefaultSettings not implemented")]]
    /**
     */
    TodoReturn setupDefaultSettings();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateColorMatrix not implemented")]]
    /**
     */
    TodoReturn updateColorMatrix();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateHue not implemented")]]
    /**
     */
    TodoReturn updateHue(float p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithTexture not implemented")]]
    /**
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:
    
private:
    [[deprecated("CCSpriteWithHue::initWithSpriteFrame not implemented")]]
    /**
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpriteWithHue::getShaderName not implemented")]]
    /**
     */
    virtual TodoReturn getShaderName();
public:
    
private:
    [[deprecated("CCSpriteWithHue::shaderBody not implemented")]]
    /**
     */
    virtual TodoReturn shaderBody();
public:
    
private:
    [[deprecated("CCSpriteWithHue::updateColor not implemented")]]
    /**
     */
    virtual void updateColor();
public:
};
