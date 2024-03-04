#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXSearchResult.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getActiveFolder
		#define GEODE_STATICS_getActiveFolder
		GEODE_AS_STATIC_FUNCTION(getActiveFolder) 
	#endif

	#ifndef GEODE_STATICS_getSelectedPage
		#define GEODE_STATICS_getSelectedPage
		GEODE_AS_STATIC_FUNCTION(getSelectedPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setActiveFolder
		#define GEODE_STATICS_setActiveFolder
		GEODE_AS_STATIC_FUNCTION(setActiveFolder) 
	#endif

	#ifndef GEODE_STATICS_updateObjects
		#define GEODE_STATICS_updateObjects
		GEODE_AS_STATIC_FUNCTION(updateObjects) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXSearchResult> : ModifyBase<ModifyDerive<Der, SFXSearchResult>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXSearchResult>>;
		using ModifyBase<ModifyDerive<Der, SFXSearchResult>>::ModifyBase;
		using Base = SFXSearchResult;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289f00, Optcall, SFXSearchResult, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28a500, Membercall, SFXSearchResult, getSelectedPage, int, int)
		}
	};
}
