#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CustomSongCell.hpp"

class CustomMusicCell : public CustomSongCell {
public:
    static constexpr auto CLASS_NAME = "CustomMusicCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomMusicCell, CustomSongCell)

    /**
     * @note[short] Windows: 0x838a0
     */
    TodoReturn loadFromObject(SongInfoObject* p0);
    
private:
    [[deprecated("CustomMusicCell::updateBGColor not implemented")]]
    /**
     */
    TodoReturn updateBGColor(int p0);
public:
};
