#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCircleWave.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_baseSetup
		#define GEODE_STATICS_baseSetup
		GEODE_AS_STATIC_FUNCTION(baseSetup) 
	#endif

	#ifndef GEODE_STATICS_followObject
		#define GEODE_STATICS_followObject
		GEODE_AS_STATIC_FUNCTION(followObject) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_updatePosition
		#define GEODE_STATICS_updatePosition
		GEODE_AS_STATIC_FUNCTION(updatePosition) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_removeMeAndCleanup
		#define GEODE_STATICS_removeMeAndCleanup
		GEODE_AS_STATIC_FUNCTION(removeMeAndCleanup) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCircleWave> : ModifyBase<ModifyDerive<Der, CCCircleWave>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCircleWave>>;
		using ModifyBase<ModifyDerive<Der, CCCircleWave>>::ModifyBase;
		using Base = CCCircleWave;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23220, Optcall, CCCircleWave, create, float, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232f0, Membercall, CCCircleWave, init, float, float, float, bool, bool)
		}
	};
}
