#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] Out of line
     */
     CCTextInputNode();

    /**
     * @note[short] Windows: 0x2e440
     */
    static CCTextInputNode* create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);

    /**
     * @note[short] Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);

    /**
     * @note[short] Out of line
     */
    void setDelegate(TextInputDelegate* delegate);

    /**
     * @note[short] Out of line
     */
    void setMaxLabelScale(float v);

    /**
     * @note[short] Out of line
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] Out of line
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] Out of line
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] Out of line
     */
    void setAllowedChars(gd::string filter);

    /**
     * @note[short] Out of line
     */
    cocos2d::CCLabelBMFont* getPlaceholderLabel();

    /**
     * @note[short] Windows: 0x2e6d0
     */
    void addTextArea(TextArea* p0);
    
private:
    [[deprecated("CCTextInputNode::forceOffset not implemented")]]
    /**
     */
    TodoReturn forceOffset();
public:

    /**
     * @note[short] Out of line
     */
    gd::string getString();

    /**
     * @note[short] Windows: 0x2e500
     */
    bool init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5);

    /**
     * @note[short] Windows: 0x2ede0
     */
    TodoReturn refreshLabel();

    /**
     * @note[short] Out of line
     */
    void setLabelNormalColor(cocos2d::ccColor3B color);

    /**
     * @note[short] Windows: 0x2e9a0
     */
    void setString(gd::string p0);
    
private:
    [[deprecated("CCTextInputNode::updateBlinkLabel not implemented")]]
    /**
     */
    TodoReturn updateBlinkLabel();
public:
    
private:
    [[deprecated("CCTextInputNode::updateBlinkLabelToChar not implemented")]]
    /**
     */
    TodoReturn updateBlinkLabelToChar(int p0);
public:

    /**
     * @note[short] Windows: 0x2ff50
     */
    TodoReturn updateCursorPosition(cocos2d::CCPoint p0, cocos2d::CCRect p1);

    /**
     * @note[short] Windows: 0x2e7a0
     */
    void updateDefaultFontValues(gd::string p0);

    /**
     * @note[short] Windows: 0x2eac0
     */
    TodoReturn updateLabel(gd::string p0);

    /**
     * @note[short] Windows: 0x2e930
     */
    virtual void visit();

    /**
     * @note[short] Windows: 0x304f0
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] Windows: 0x306d0
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] Windows: 0x2f630
     */
    virtual TodoReturn textChanged();

    /**
     * @note[short] Windows: 0x2f600
     */
    virtual TodoReturn onClickTrackNode(bool p0);

    /**
     * @note[short] Windows: 0x2f4d0
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] Windows: 0x2f5a0
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    /**
     * @note[short] Windows: 0x2f6b0
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);

    /**
     * @note[short] Windows: 0x2fa30
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0);

    /**
     * @note[short] Windows: 0x2fd50
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0);
    bool m_numberInput;
    gd::string m_caption;
    int m_unknown1;
    bool m_selected;
    bool m_unknown2;
    float m_fontValue1;
    float m_fontValue2;
    bool m_isChatFont;
    gd::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_unknown3;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
};
