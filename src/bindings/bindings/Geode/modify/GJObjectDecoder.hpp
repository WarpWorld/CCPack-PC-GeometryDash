#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJObjectDecoder.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedDecoder
		#define GEODE_STATICS_sharedDecoder
		GEODE_AS_STATIC_FUNCTION(sharedDecoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_getDecodedObject
		#define GEODE_STATICS_getDecodedObject
		GEODE_AS_STATIC_FUNCTION(getDecodedObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJObjectDecoder> : ModifyBase<ModifyDerive<Der, GJObjectDecoder>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJObjectDecoder>>;
		using ModifyBase<ModifyDerive<Der, GJObjectDecoder>>::ModifyBase;
		using Base = GJObjectDecoder;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fc3f0, Optcall, GJObjectDecoder, sharedDecoder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fc490, Thiscall, GJObjectDecoder, getDecodedObject, int, DS_Dictionary*)
		}
	};
}
