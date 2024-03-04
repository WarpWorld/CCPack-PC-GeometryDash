#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditButtonBar.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getPage
		#define GEODE_STATICS_getPage
		GEODE_AS_STATIC_FUNCTION(getPage) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadFromItems
		#define GEODE_STATICS_loadFromItems
		GEODE_AS_STATIC_FUNCTION(loadFromItems) 
	#endif

	#ifndef GEODE_STATICS_onLeft
		#define GEODE_STATICS_onLeft
		GEODE_AS_STATIC_FUNCTION(onLeft) 
	#endif

	#ifndef GEODE_STATICS_onRight
		#define GEODE_STATICS_onRight
		GEODE_AS_STATIC_FUNCTION(onRight) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditButtonBar> : ModifyBase<ModifyDerive<Der, EditButtonBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditButtonBar>>;
		using ModifyBase<ModifyDerive<Der, EditButtonBar>>::ModifyBase;
		using Base = EditButtonBar;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b7e0, Optcall, EditButtonBar, create, cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b8e0, Membercall, EditButtonBar, init, cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9b970, Membercall, EditButtonBar, loadFromItems, cocos2d::CCArray*, int, int, bool)
		}
	};
}
