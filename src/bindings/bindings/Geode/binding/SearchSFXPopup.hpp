#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetTextPopup.hpp"

class SearchSFXPopup : public SetTextPopup {
public:
    static constexpr auto CLASS_NAME = "SearchSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SearchSFXPopup, SetTextPopup)
    
private:
    [[deprecated("SearchSFXPopup::create not implemented")]]
    /**
     */
    static SearchSFXPopup* create(gd::string p0);
public:
    
private:
    [[deprecated("SearchSFXPopup::init not implemented")]]
    /**
     */
    bool init(gd::string p0);
public:

    /**
     * @note[short] Windows: 0x37a1f0
     */
    void onSearchFolders(cocos2d::CCObject* sender);
};
