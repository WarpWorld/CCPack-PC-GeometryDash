#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CommentUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "CommentUploadDelegate";
    
private:
    [[deprecated("CommentUploadDelegate::commentUploadFinished not implemented")]]
    /**
     */
    virtual TodoReturn commentUploadFinished(int p0);
public:
    
private:
    [[deprecated("CommentUploadDelegate::commentUploadFailed not implemented")]]
    /**
     */
    virtual TodoReturn commentUploadFailed(int p0, CommentError p1);
public:
    
private:
    [[deprecated("CommentUploadDelegate::commentDeleteFailed not implemented")]]
    /**
     */
    virtual TodoReturn commentDeleteFailed(int p0, int p1);
public:
};
