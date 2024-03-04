#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "TextInputDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] Out of line
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] Out of line
     */
    virtual void enterPressed(CCTextInputNode* p0);
};
