#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UndoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UndoObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x24a4b0
     */
    static UndoObject* create(GameObject* p0, UndoCommand p1);

    /**
     * @note[short] Windows: 0x24a760
     */
    static UndoObject* createWithArray(cocos2d::CCArray* p0, UndoCommand p1);

    /**
     * @note[short] Windows: 0x24a580
     */
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);
    
private:
    [[deprecated("UndoObject::init not implemented")]]
    /**
     */
    bool init(cocos2d::CCArray* p0, UndoCommand p1);
public:
    
private:
    [[deprecated("UndoObject::init not implemented")]]
    /**
     */
    bool init(GameObject* p0, UndoCommand p1);
public:

    /**
     * @note[short] Windows: 0x24a650
     */
    TodoReturn initWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);
    
private:
    [[deprecated("UndoObject::setObjects not implemented")]]
    /**
     */
    void setObjects(cocos2d::CCArray* p0);
public:
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
};
