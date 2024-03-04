#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMapObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createMonster
		#define GEODE_STATICS_createMonster
		GEODE_AS_STATIC_FUNCTION(createMonster) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_monsterIdle
		#define GEODE_STATICS_monsterIdle
		GEODE_AS_STATIC_FUNCTION(monsterIdle) 
	#endif

	#ifndef GEODE_STATICS_monsterJump
		#define GEODE_STATICS_monsterJump
		GEODE_AS_STATIC_FUNCTION(monsterJump) 
	#endif

	#ifndef GEODE_STATICS_moveFinished
		#define GEODE_STATICS_moveFinished
		GEODE_AS_STATIC_FUNCTION(moveFinished) 
	#endif

	#ifndef GEODE_STATICS_moveMonster
		#define GEODE_STATICS_moveMonster
		GEODE_AS_STATIC_FUNCTION(moveMonster) 
	#endif

	#ifndef GEODE_STATICS_playerJump
		#define GEODE_STATICS_playerJump
		GEODE_AS_STATIC_FUNCTION(playerJump) 
	#endif

	#ifndef GEODE_STATICS_setObjectOrigin
		#define GEODE_STATICS_setObjectOrigin
		GEODE_AS_STATIC_FUNCTION(setObjectOrigin) 
	#endif

	#ifndef GEODE_STATICS_startMonsterJumpLoop
		#define GEODE_STATICS_startMonsterJumpLoop
		GEODE_AS_STATIC_FUNCTION(startMonsterJumpLoop) 
	#endif

	#ifndef GEODE_STATICS_startPlayerJumpLoop
		#define GEODE_STATICS_startPlayerJumpLoop
		GEODE_AS_STATIC_FUNCTION(startPlayerJumpLoop) 
	#endif

	#ifndef GEODE_STATICS_touchMonster
		#define GEODE_STATICS_touchMonster
		GEODE_AS_STATIC_FUNCTION(touchMonster) 
	#endif

	#ifndef GEODE_STATICS_updateShadow
		#define GEODE_STATICS_updateShadow
		GEODE_AS_STATIC_FUNCTION(updateShadow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMapObject> : ModifyBase<ModifyDerive<Der, GJMapObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMapObject>>;
		using ModifyBase<ModifyDerive<Der, GJMapObject>>::ModifyBase;
		using Base = GJMapObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
