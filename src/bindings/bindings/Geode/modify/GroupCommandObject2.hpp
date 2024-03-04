#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resetDelta
		#define GEODE_STATICS_resetDelta
		GEODE_AS_STATIC_FUNCTION(resetDelta) 
	#endif

	#ifndef GEODE_STATICS_runFollowCommand
		#define GEODE_STATICS_runFollowCommand
		GEODE_AS_STATIC_FUNCTION(runFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_runMoveCommand
		#define GEODE_STATICS_runMoveCommand
		GEODE_AS_STATIC_FUNCTION(runMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_runPlayerFollowCommand
		#define GEODE_STATICS_runPlayerFollowCommand
		GEODE_AS_STATIC_FUNCTION(runPlayerFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_runRotateCommand
		#define GEODE_STATICS_runRotateCommand
		GEODE_AS_STATIC_FUNCTION(runRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_runTransformCommand
		#define GEODE_STATICS_runTransformCommand
		GEODE_AS_STATIC_FUNCTION(runTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_stepTransformCommand
		#define GEODE_STATICS_stepTransformCommand
		GEODE_AS_STATIC_FUNCTION(stepTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_updateAction
		#define GEODE_STATICS_updateAction
		GEODE_AS_STATIC_FUNCTION(updateAction) 
	#endif

	#ifndef GEODE_STATICS_updateEffectAction
		#define GEODE_STATICS_updateEffectAction
		GEODE_AS_STATIC_FUNCTION(updateEffectAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GroupCommandObject2> : ModifyBase<ModifyDerive<Der, GroupCommandObject2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GroupCommandObject2>>;
		using ModifyBase<ModifyDerive<Der, GroupCommandObject2>>::ModifyBase;
		using Base = GroupCommandObject2;
        using Derived = Der;
		void apply() override {

		}
	};
}
