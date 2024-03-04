#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJActionManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getInternalAction
		#define GEODE_STATICS_getInternalAction
		GEODE_AS_STATIC_FUNCTION(getInternalAction) 
	#endif

	#ifndef GEODE_STATICS_runInternalAction
		#define GEODE_STATICS_runInternalAction
		GEODE_AS_STATIC_FUNCTION(runInternalAction) 
	#endif

	#ifndef GEODE_STATICS_stopAllInternalActions
		#define GEODE_STATICS_stopAllInternalActions
		GEODE_AS_STATIC_FUNCTION(stopAllInternalActions) 
	#endif

	#ifndef GEODE_STATICS_stopInternalAction
		#define GEODE_STATICS_stopInternalAction
		GEODE_AS_STATIC_FUNCTION(stopInternalAction) 
	#endif

	#ifndef GEODE_STATICS_updateInternalActions
		#define GEODE_STATICS_updateInternalActions
		GEODE_AS_STATIC_FUNCTION(updateInternalActions) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJActionManager> : ModifyBase<ModifyDerive<Der, GJActionManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJActionManager>>;
		using ModifyBase<ModifyDerive<Der, GJActionManager>>::ModifyBase;
		using Base = GJActionManager;
        using Derived = Der;
		void apply() override {

		}
	};
}
