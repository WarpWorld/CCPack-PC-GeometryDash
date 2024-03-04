#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartPrefab.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartPrefab> : ModifyBase<ModifyDerive<Der, GJSmartPrefab>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartPrefab>>;
		using ModifyBase<ModifyDerive<Der, GJSmartPrefab>>::ModifyBase;
		using Base = GJSmartPrefab;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x222e20, Optcall, GJSmartPrefab, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x222ee0, Membercall, GJSmartPrefab, dataLoaded, DS_Dictionary*)
		}
	};
}
