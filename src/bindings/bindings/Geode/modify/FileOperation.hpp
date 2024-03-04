#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FileOperation.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getFilePath
		#define GEODE_STATICS_getFilePath
		GEODE_AS_STATIC_FUNCTION(getFilePath) 
	#endif

	#ifndef GEODE_STATICS_readFile
		#define GEODE_STATICS_readFile
		GEODE_AS_STATIC_FUNCTION(readFile) 
	#endif

	#ifndef GEODE_STATICS_saveFile
		#define GEODE_STATICS_saveFile
		GEODE_AS_STATIC_FUNCTION(saveFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FileOperation> : ModifyBase<ModifyDerive<Der, FileOperation>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FileOperation>>;
		using ModifyBase<ModifyDerive<Der, FileOperation>>::ModifyBase;
		using Base = FileOperation;
        using Derived = Der;
		void apply() override {

		}
	};
}
