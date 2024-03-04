#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRewardObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createItemUnlock
		#define GEODE_STATICS_createItemUnlock
		GEODE_AS_STATIC_FUNCTION(createItemUnlock) 
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

	#ifndef GEODE_STATICS_isSpecialType
		#define GEODE_STATICS_isSpecialType
		GEODE_AS_STATIC_FUNCTION(isSpecialType) 
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
	struct ModifyDerive<Der, GJRewardObject> : ModifyBase<ModifyDerive<Der, GJRewardObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRewardObject>>;
		using ModifyBase<ModifyDerive<Der, GJRewardObject>>::ModifyBase;
		using Base = GJRewardObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181ba0, Optcall, GJRewardObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181c30, Optcall, GJRewardObject, create, SpecialRewardItem, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x181d60, Membercall, GJRewardObject, createWithCoder, DS_Dictionary*)
		}
	};
}
