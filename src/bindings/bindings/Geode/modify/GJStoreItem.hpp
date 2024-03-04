#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJStoreItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getCurrencyKey
		#define GEODE_STATICS_getCurrencyKey
		GEODE_AS_STATIC_FUNCTION(getCurrencyKey) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJStoreItem> : ModifyBase<ModifyDerive<Der, GJStoreItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJStoreItem>>;
		using ModifyBase<ModifyDerive<Der, GJStoreItem>>::ModifyBase;
		using Base = GJStoreItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182d20, Optcall, GJStoreItem, create, int, int, int, int, ShopType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182ed0, Membercall, GJStoreItem, getCurrencyKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182dd0, Membercall, GJStoreItem, init, int, int, int, int, ShopType)
		}
	};
}
