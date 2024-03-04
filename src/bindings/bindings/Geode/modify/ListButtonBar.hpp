#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ListButtonBar.hpp>
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

	#ifndef GEODE_STATICS_onLeft
		#define GEODE_STATICS_onLeft
		GEODE_AS_STATIC_FUNCTION(onLeft) 
	#endif

	#ifndef GEODE_STATICS_onRight
		#define GEODE_STATICS_onRight
		GEODE_AS_STATIC_FUNCTION(onRight) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ListButtonBar> : ModifyBase<ModifyDerive<Der, ListButtonBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ListButtonBar>>;
		using ModifyBase<ModifyDerive<Der, ListButtonBar>>::ModifyBase;
		using Base = ListButtonBar;
        using Derived = Der;
		void apply() override {

		}
	};
}
