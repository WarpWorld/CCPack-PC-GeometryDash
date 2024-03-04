#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SearchSFXPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSearchFolders
		#define GEODE_STATICS_onSearchFolders
		GEODE_AS_STATIC_FUNCTION(onSearchFolders) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SearchSFXPopup> : ModifyBase<ModifyDerive<Der, SearchSFXPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SearchSFXPopup>>;
		using ModifyBase<ModifyDerive<Der, SearchSFXPopup>>::ModifyBase;
		using Base = SearchSFXPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37a1f0, Membercall, SearchSFXPopup, onSearchFolders, cocos2d::CCObject*)
		}
	};
}
