#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadDelegate";

    /**
     * @note[short] Out of line
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] Out of line
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] Out of line
     */
    virtual void downloadSongFinished(int p0);

    /**
     * @note[short] Out of line
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] Out of line
     */
    virtual void songStateChanged();

    /**
     * @note[short] Out of line
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] Out of line
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] Out of line
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Out of line
     */
    virtual void musicActionFailed(GJMusicAction p0);
};
