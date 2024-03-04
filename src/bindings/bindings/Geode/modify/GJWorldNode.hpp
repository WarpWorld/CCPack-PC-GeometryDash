#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJWorldNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addDotsToLevel
		#define GEODE_STATICS_addDotsToLevel
		GEODE_AS_STATIC_FUNCTION(addDotsToLevel) 
	#endif

	#ifndef GEODE_STATICS_dotPositionForLevel
		#define GEODE_STATICS_dotPositionForLevel
		GEODE_AS_STATIC_FUNCTION(dotPositionForLevel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onLevel
		#define GEODE_STATICS_onLevel
		GEODE_AS_STATIC_FUNCTION(onLevel) 
	#endif

	#ifndef GEODE_STATICS_playStep1
		#define GEODE_STATICS_playStep1
		GEODE_AS_STATIC_FUNCTION(playStep1) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_positionForLevelButton
		#define GEODE_STATICS_positionForLevelButton
		GEODE_AS_STATIC_FUNCTION(positionForLevelButton) 
	#endif

	#ifndef GEODE_STATICS_unlockActiveItem
		#define GEODE_STATICS_unlockActiveItem
		GEODE_AS_STATIC_FUNCTION(unlockActiveItem) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJWorldNode> : ModifyBase<ModifyDerive<Der, GJWorldNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJWorldNode>>;
		using ModifyBase<ModifyDerive<Der, GJWorldNode>>::ModifyBase;
		using Base = GJWorldNode;
        using Derived = Der;
		void apply() override {

		}
	};
}
