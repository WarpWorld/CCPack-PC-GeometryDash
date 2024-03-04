#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class FileOperation {
public:
    static constexpr auto CLASS_NAME = "FileOperation";
    
private:
    [[deprecated("FileOperation::getFilePath not implemented")]]
    /**
     */
    TodoReturn getFilePath();
public:
    
private:
    [[deprecated("FileOperation::readFile not implemented")]]
    /**
     */
    TodoReturn readFile();
public:
    
private:
    [[deprecated("FileOperation::saveFile not implemented")]]
    /**
     */
    TodoReturn saveFile();
public:
};
