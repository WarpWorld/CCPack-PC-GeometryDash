#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJSmartTemplate : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartTemplate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartTemplate, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x21e860
     */
    static GJSmartTemplate* create();
    
private:
    [[deprecated("GJSmartTemplate::applyTransformationsForType not implemented")]]
    /**
     */
    TodoReturn applyTransformationsForType(SmartBlockType p0, cocos2d::CCSprite* p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::createWithCoder not implemented")]]
    /**
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
public:

    /**
     * @note[short] Windows: 0x222ab0
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJSmartTemplate::flipBlockType not implemented")]]
    /**
     */
    TodoReturn flipBlockType(SmartBlockType p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJSmartTemplate::flipBlockTypeX not implemented")]]
    /**
     */
    TodoReturn flipBlockTypeX(SmartBlockType p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::flipBlockTypeY not implemented")]]
    /**
     */
    TodoReturn flipBlockTypeY(SmartBlockType p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::flipKey not implemented")]]
    /**
     */
    TodoReturn flipKey(gd::string p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJSmartTemplate::generateRemapDict not implemented")]]
    /**
     */
    TodoReturn generateRemapDict();
public:
    
private:
    [[deprecated("GJSmartTemplate::getNoCornerKey not implemented")]]
    /**
     */
    TodoReturn getNoCornerKey(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::getPrefab not implemented")]]
    /**
     */
    TodoReturn getPrefab(cocos2d::CCPoint p0, SmartGameObject* p1, SmartGameObject* p2, SmartGameObject* p3, SmartGameObject* p4, SmartGameObject* p5, SmartGameObject* p6, SmartGameObject* p7, SmartGameObject* p8, SmartGameObject* p9);
public:
    
private:
    [[deprecated("GJSmartTemplate::getPrefab not implemented")]]
    /**
     */
    TodoReturn getPrefab(gd::string p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJSmartTemplate::getPrefabs not implemented")]]
    /**
     */
    TodoReturn getPrefabs(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::getPrefabWithID not implemented")]]
    /**
     */
    TodoReturn getPrefabWithID(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::getRandomPrefab not implemented")]]
    /**
     */
    TodoReturn getRandomPrefab(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::getSimplifiedKey not implemented")]]
    /**
     */
    TodoReturn getSimplifiedKey(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::getSimplifiedType not implemented")]]
    /**
     */
    TodoReturn getSimplifiedType(SmartBlockType p0, bool& p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::getTemplateState not implemented")]]
    /**
     */
    TodoReturn getTemplateState(gd::vector<SmartPrefabResult>& p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::getTotalChanceForPrefab not implemented")]]
    /**
     */
    TodoReturn getTotalChanceForPrefab(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::getVerySimplifiedKey not implemented")]]
    /**
     */
    TodoReturn getVerySimplifiedKey(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x21e900
     */
    bool init();
    
private:
    [[deprecated("GJSmartTemplate::isUnrequired not implemented")]]
    /**
     */
    bool isUnrequired(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::keyFromNeighbors not implemented")]]
    /**
     */
    TodoReturn keyFromNeighbors(cocos2d::CCPoint p0, SmartGameObject* p1, SmartGameObject* p2, SmartGameObject* p3, SmartGameObject* p4, SmartGameObject* p5, SmartGameObject* p6, SmartGameObject* p7, SmartGameObject* p8, SmartGameObject* p9);
public:
    
private:
    [[deprecated("GJSmartTemplate::keyFromNeighbors not implemented")]]
    /**
     */
    TodoReturn keyFromNeighbors(SmartBlockType p0, SmartBlockType p1, SmartBlockType p2, SmartBlockType p3, SmartBlockType p4, SmartBlockType p5, SmartBlockType p6, SmartBlockType p7, SmartBlockType p8);
public:
    
private:
    [[deprecated("GJSmartTemplate::keyFromNeighborsOld not implemented")]]
    /**
     */
    TodoReturn keyFromNeighborsOld(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:

    /**
     * @note[short] Windows: 0x222330
     */
    TodoReturn logTemplateStatus(bool p0);
    
private:
    [[deprecated("GJSmartTemplate::offsetForDir not implemented")]]
    /**
     */
    TodoReturn offsetForDir(GJSmartDirection p0, int p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::offsetForObject not implemented")]]
    /**
     */
    TodoReturn offsetForObject(SmartGameObject* p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::offsetForType not implemented")]]
    /**
     */
    TodoReturn offsetForType(SmartBlockType p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::removePrefab not implemented")]]
    /**
     */
    TodoReturn removePrefab(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::resetScannedPrefabs not implemented")]]
    /**
     */
    TodoReturn resetScannedPrefabs();
public:
    
private:
    [[deprecated("GJSmartTemplate::rotateBlockType not implemented")]]
    /**
     */
    TodoReturn rotateBlockType(SmartBlockType p0, int p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::rotateBlockType90 not implemented")]]
    /**
     */
    TodoReturn rotateBlockType90(SmartBlockType p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::rotateKey not implemented")]]
    /**
     */
    TodoReturn rotateKey(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::savePrefab not implemented")]]
    /**
     */
    TodoReturn savePrefab(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::saveRemap not implemented")]]
    /**
     */
    TodoReturn saveRemap(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::saveRemapToDict not implemented")]]
    /**
     */
    TodoReturn saveRemapToDict(gd::string p0, gd::string p1, cocos2d::CCDictionary* p2);
public:
    
private:
    [[deprecated("GJSmartTemplate::scanForPrefab not implemented")]]
    /**
     */
    TodoReturn scanForPrefab(gd::string p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::shouldDiscardObject not implemented")]]
    /**
     */
    TodoReturn shouldDiscardObject(SmartBlockType p0, GJSmartDirection p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::smartObjectToType not implemented")]]
    /**
     */
    TodoReturn smartObjectToType(SmartGameObject* p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GJSmartTemplate::smartTypeToObjectKey not implemented")]]
    /**
     */
    TodoReturn smartTypeToObjectKey(SmartBlockType p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::encodeWithCoder not implemented")]]
    /**
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GJSmartTemplate::canEncode not implemented")]]
    /**
     */
    virtual bool canEncode();
public:
};
