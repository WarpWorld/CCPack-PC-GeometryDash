#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x52250
     */
    static TextArea* create(gd::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6);

    /**
     * @note[short] Windows: 0x52850
     */
    TodoReturn colorAllCharactersTo(cocos2d::ccColor3B p0);
    
private:
    [[deprecated("TextArea::colorAllLabels not implemented")]]
    /**
     */
    TodoReturn colorAllLabels(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("TextArea::fadeIn not implemented")]]
    /**
     */
    TodoReturn fadeIn(float p0, bool p1);
public:
    
private:
    [[deprecated("TextArea::fadeInCharacters not implemented")]]
    /**
     */
    TodoReturn fadeInCharacters(float p0, float p1);
public:
    
private:
    [[deprecated("TextArea::fadeOut not implemented")]]
    /**
     */
    TodoReturn fadeOut(float p0);
public:
    
private:
    [[deprecated("TextArea::fadeOutAndRemove not implemented")]]
    /**
     */
    TodoReturn fadeOutAndRemove();
public:
    
private:
    [[deprecated("TextArea::finishFade not implemented")]]
    /**
     */
    TodoReturn finishFade();
public:
    
private:
    [[deprecated("TextArea::hideAll not implemented")]]
    /**
     */
    TodoReturn hideAll();
public:

    /**
     * @note[short] Windows: 0x52350
     */
    bool init(gd::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6);
    
private:
    [[deprecated("TextArea::setIgnoreColorCode not implemented")]]
    /**
     */
    void setIgnoreColorCode(bool p0);
public:

    /**
     * @note[short] Windows: 0x52460
     */
    void setString(gd::string p0);
    
private:
    [[deprecated("TextArea::showAll not implemented")]]
    /**
     */
    TodoReturn showAll();
public:
    
private:
    [[deprecated("TextArea::stopAllCharacterActions not implemented")]]
    /**
     */
    TodoReturn stopAllCharacterActions();
public:
    
private:
    [[deprecated("TextArea::update not implemented")]]
    /**
     */
    virtual void update(float p0);
public:
    
private:
    [[deprecated("TextArea::draw not implemented")]]
    /**
     */
    virtual void draw();
public:
    
private:
    [[deprecated("TextArea::setOpacity not implemented")]]
    /**
     */
    virtual void setOpacity(unsigned char p0);
public:
    bool m_disableColor;
    MultilineBitmapFont* m_label;
    float m_width;
    int m_unknown;
    gd::string m_fontFile;
    float m_height;
    GEODE_PAD(4);
    cocos2d::CCPoint m_anchorPoint;
};
