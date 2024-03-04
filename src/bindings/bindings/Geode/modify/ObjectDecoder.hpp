#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectDecoder.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDecoder
		#define GEODE_STATICS_sharedDecoder
		GEODE_AS_STATIC_FUNCTION(sharedDecoder) 
	#endif

	#ifndef GEODE_STATICS_getDecodedObject
		#define GEODE_STATICS_getDecodedObject
		GEODE_AS_STATIC_FUNCTION(getDecodedObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectDecoder> : ModifyBase<ModifyDerive<Der, ObjectDecoder>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectDecoder>>;
		using ModifyBase<ModifyDerive<Der, ObjectDecoder>>::ModifyBase;
		using Base = ObjectDecoder;
        using Derived = Der;
		void apply() override {

		}
	};
}
