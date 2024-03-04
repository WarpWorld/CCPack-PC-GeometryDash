#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FontObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithConfigFile
		#define GEODE_STATICS_createWithConfigFile
		GEODE_AS_STATIC_FUNCTION(createWithConfigFile) 
	#endif

	#ifndef GEODE_STATICS_getFontWidth
		#define GEODE_STATICS_getFontWidth
		GEODE_AS_STATIC_FUNCTION(getFontWidth) 
	#endif

	#ifndef GEODE_STATICS_initWithConfigFile
		#define GEODE_STATICS_initWithConfigFile
		GEODE_AS_STATIC_FUNCTION(initWithConfigFile) 
	#endif

	#ifndef GEODE_STATICS_parseConfigFile
		#define GEODE_STATICS_parseConfigFile
		GEODE_AS_STATIC_FUNCTION(parseConfigFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FontObject> : ModifyBase<ModifyDerive<Der, FontObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FontObject>>;
		using ModifyBase<ModifyDerive<Der, FontObject>>::ModifyBase;
		using Base = FontObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
