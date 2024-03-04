#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addSearchPath
		#define GEODE_STATICS_addSearchPath
		GEODE_AS_STATIC_FUNCTION(addSearchPath) 
	#endif

	#ifndef GEODE_STATICS_addSearchResolutionsOrder
		#define GEODE_STATICS_addSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(addSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_addSuffix
		#define GEODE_STATICS_addSuffix
		GEODE_AS_STATIC_FUNCTION(addSuffix) 
	#endif

	#ifndef GEODE_STATICS_createCCArrayWithContentsOfFile
		#define GEODE_STATICS_createCCArrayWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createCCArrayWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_createCCDictionaryWithContentsOfFile
		#define GEODE_STATICS_createCCDictionaryWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(createCCDictionaryWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_fullPathForFilename
		#define GEODE_STATICS_fullPathForFilename
		GEODE_AS_STATIC_FUNCTION(fullPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_fullPathFromRelativeFile
		#define GEODE_STATICS_fullPathFromRelativeFile
		GEODE_AS_STATIC_FUNCTION(fullPathFromRelativeFile) 
	#endif

	#ifndef GEODE_STATICS_getAndroidPath
		#define GEODE_STATICS_getAndroidPath
		GEODE_AS_STATIC_FUNCTION(getAndroidPath) 
	#endif

	#ifndef GEODE_STATICS_getFileData
		#define GEODE_STATICS_getFileData
		GEODE_AS_STATIC_FUNCTION(getFileData) 
	#endif

	#ifndef GEODE_STATICS_getFileDataFromZip
		#define GEODE_STATICS_getFileDataFromZip
		GEODE_AS_STATIC_FUNCTION(getFileDataFromZip) 
	#endif

	#ifndef GEODE_STATICS_getFullPathForDirectoryAndFilename
		#define GEODE_STATICS_getFullPathForDirectoryAndFilename
		GEODE_AS_STATIC_FUNCTION(getFullPathForDirectoryAndFilename) 
	#endif

	#ifndef GEODE_STATICS_getNewFilename
		#define GEODE_STATICS_getNewFilename
		GEODE_AS_STATIC_FUNCTION(getNewFilename) 
	#endif

	#ifndef GEODE_STATICS_getPathForFilename
		#define GEODE_STATICS_getPathForFilename
		GEODE_AS_STATIC_FUNCTION(getPathForFilename) 
	#endif

	#ifndef GEODE_STATICS_getSearchPaths
		#define GEODE_STATICS_getSearchPaths
		GEODE_AS_STATIC_FUNCTION(getSearchPaths) 
	#endif

	#ifndef GEODE_STATICS_getSearchResolutionsOrder
		#define GEODE_STATICS_getSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(getSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_getWritablePath2
		#define GEODE_STATICS_getWritablePath2
		GEODE_AS_STATIC_FUNCTION(getWritablePath2) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isAbsolutePath
		#define GEODE_STATICS_isAbsolutePath
		GEODE_AS_STATIC_FUNCTION(isAbsolutePath) 
	#endif

	#ifndef GEODE_STATICS_isPopupNotify
		#define GEODE_STATICS_isPopupNotify
		GEODE_AS_STATIC_FUNCTION(isPopupNotify) 
	#endif

	#ifndef GEODE_STATICS_loadFilenameLookupDictionaryFromFile
		#define GEODE_STATICS_loadFilenameLookupDictionaryFromFile
		GEODE_AS_STATIC_FUNCTION(loadFilenameLookupDictionaryFromFile) 
	#endif

	#ifndef GEODE_STATICS_purgeCachedEntries
		#define GEODE_STATICS_purgeCachedEntries
		GEODE_AS_STATIC_FUNCTION(purgeCachedEntries) 
	#endif

	#ifndef GEODE_STATICS_purgeFileUtils
		#define GEODE_STATICS_purgeFileUtils
		GEODE_AS_STATIC_FUNCTION(purgeFileUtils) 
	#endif

	#ifndef GEODE_STATICS_removeAllPaths
		#define GEODE_STATICS_removeAllPaths
		GEODE_AS_STATIC_FUNCTION(removeAllPaths) 
	#endif

	#ifndef GEODE_STATICS_removeFullPath
		#define GEODE_STATICS_removeFullPath
		GEODE_AS_STATIC_FUNCTION(removeFullPath) 
	#endif

	#ifndef GEODE_STATICS_removeSearchPath
		#define GEODE_STATICS_removeSearchPath
		GEODE_AS_STATIC_FUNCTION(removeSearchPath) 
	#endif

	#ifndef GEODE_STATICS_setAndroidPath
		#define GEODE_STATICS_setAndroidPath
		GEODE_AS_STATIC_FUNCTION(setAndroidPath) 
	#endif

	#ifndef GEODE_STATICS_setFilenameLookupDictionary
		#define GEODE_STATICS_setFilenameLookupDictionary
		GEODE_AS_STATIC_FUNCTION(setFilenameLookupDictionary) 
	#endif

	#ifndef GEODE_STATICS_setPopupNotify
		#define GEODE_STATICS_setPopupNotify
		GEODE_AS_STATIC_FUNCTION(setPopupNotify) 
	#endif

	#ifndef GEODE_STATICS_setSearchPaths
		#define GEODE_STATICS_setSearchPaths
		GEODE_AS_STATIC_FUNCTION(setSearchPaths) 
	#endif

	#ifndef GEODE_STATICS_setSearchResolutionsOrder
		#define GEODE_STATICS_setSearchResolutionsOrder
		GEODE_AS_STATIC_FUNCTION(setSearchResolutionsOrder) 
	#endif

	#ifndef GEODE_STATICS_sharedFileUtils
		#define GEODE_STATICS_sharedFileUtils
		GEODE_AS_STATIC_FUNCTION(sharedFileUtils) 
	#endif

	#ifndef GEODE_STATICS_shouldUseHD
		#define GEODE_STATICS_shouldUseHD
		GEODE_AS_STATIC_FUNCTION(shouldUseHD) 
	#endif

	#ifndef GEODE_STATICS_writeToFile
		#define GEODE_STATICS_writeToFile
		GEODE_AS_STATIC_FUNCTION(writeToFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCFileUtils> : ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCFileUtils>>::ModifyBase;
		using Base = cocos2d::CCFileUtils;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::addSearchPath)), Thiscall, cocos2d::CCFileUtils, addSearchPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::addSearchResolutionsOrder)), Thiscall, cocos2d::CCFileUtils, addSearchResolutionsOrder, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string, gd::string>::func(&cocos2d::CCFileUtils::addSuffix)), Thiscall, cocos2d::CCFileUtils, addSuffix, gd::string, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::createCCArrayWithContentsOfFile)), Thiscall, cocos2d::CCFileUtils, createCCArrayWithContentsOfFile, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile)), Thiscall, cocos2d::CCFileUtils, createCCDictionaryWithContentsOfFile, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, bool>::func(&cocos2d::CCFileUtils::fullPathForFilename)), Thiscall, cocos2d::CCFileUtils, fullPathForFilename, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*>::func(&cocos2d::CCFileUtils::fullPathFromRelativeFile)), Thiscall, cocos2d::CCFileUtils, fullPathFromRelativeFile, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getAndroidPath)), Thiscall, cocos2d::CCFileUtils, getAndroidPath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtils::getFileData)), Thiscall, cocos2d::CCFileUtils, getFileData, char const*, char const*, unsigned long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtils::getFileDataFromZip)), Thiscall, cocos2d::CCFileUtils, getFileDataFromZip, char const*, char const*, unsigned long*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename)), Thiscall, cocos2d::CCFileUtils, getFullPathForDirectoryAndFilename, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::getNewFilename)), Thiscall, cocos2d::CCFileUtils, getNewFilename, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&, gd::string const&, gd::string const&>::func(&cocos2d::CCFileUtils::getPathForFilename)), Thiscall, cocos2d::CCFileUtils, getPathForFilename, gd::string const&, gd::string const&, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getSearchPaths)), Thiscall, cocos2d::CCFileUtils, getSearchPaths, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getSearchResolutionsOrder)), Thiscall, cocos2d::CCFileUtils, getSearchResolutionsOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::getWritablePath2)), Thiscall, cocos2d::CCFileUtils, getWritablePath2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::init)), Thiscall, cocos2d::CCFileUtils, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::string const&>::func(&cocos2d::CCFileUtils::isAbsolutePath)), Thiscall, cocos2d::CCFileUtils, isAbsolutePath, gd::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::isPopupNotify)), Thiscall, cocos2d::CCFileUtils, isPopupNotify, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile)), Thiscall, cocos2d::CCFileUtils, loadFilenameLookupDictionaryFromFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::purgeCachedEntries)), Thiscall, cocos2d::CCFileUtils, purgeCachedEntries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::purgeFileUtils)), Cdecl, cocos2d::CCFileUtils, purgeFileUtils, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::removeAllPaths)), Thiscall, cocos2d::CCFileUtils, removeAllPaths, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::removeFullPath)), Thiscall, cocos2d::CCFileUtils, removeFullPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCFileUtils::removeSearchPath)), Thiscall, cocos2d::CCFileUtils, removeSearchPath, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<gd::string>::func(&cocos2d::CCFileUtils::setAndroidPath)), Thiscall, cocos2d::CCFileUtils, setAndroidPath, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCFileUtils::setFilenameLookupDictionary)), Thiscall, cocos2d::CCFileUtils, setFilenameLookupDictionary, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<bool>::func(&cocos2d::CCFileUtils::setPopupNotify)), Thiscall, cocos2d::CCFileUtils, setPopupNotify, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::vector<gd::string> const&>::func(&cocos2d::CCFileUtils::setSearchPaths)), Thiscall, cocos2d::CCFileUtils, setSearchPaths, gd::vector<gd::string> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<gd::vector<gd::string> const&>::func(&cocos2d::CCFileUtils::setSearchResolutionsOrder)), Thiscall, cocos2d::CCFileUtils, setSearchResolutionsOrder, gd::vector<gd::string> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCFileUtils::sharedFileUtils)), Cdecl, cocos2d::CCFileUtils, sharedFileUtils, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCFileUtils::shouldUseHD)), Thiscall, cocos2d::CCFileUtils, shouldUseHD, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<cocos2d::CCDictionary*, gd::string const&>::func(&cocos2d::CCFileUtils::writeToFile)), Thiscall, cocos2d::CCFileUtils, writeToFile, cocos2d::CCDictionary*, gd::string const&)
		}
	};
}
