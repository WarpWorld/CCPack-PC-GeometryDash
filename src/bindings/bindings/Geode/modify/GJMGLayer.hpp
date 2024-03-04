#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMGLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_deactivateGround
		#define GEODE_STATICS_deactivateGround
		GEODE_AS_STATIC_FUNCTION(deactivateGround) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadGroundSprites
		#define GEODE_STATICS_loadGroundSprites
		GEODE_AS_STATIC_FUNCTION(loadGroundSprites) 
	#endif

	#ifndef GEODE_STATICS_scaleGround
		#define GEODE_STATICS_scaleGround
		GEODE_AS_STATIC_FUNCTION(scaleGround) 
	#endif

	#ifndef GEODE_STATICS_toggleVisible01
		#define GEODE_STATICS_toggleVisible01
		GEODE_AS_STATIC_FUNCTION(toggleVisible01) 
	#endif

	#ifndef GEODE_STATICS_toggleVisible02
		#define GEODE_STATICS_toggleVisible02
		GEODE_AS_STATIC_FUNCTION(toggleVisible02) 
	#endif

	#ifndef GEODE_STATICS_updateGroundColor
		#define GEODE_STATICS_updateGroundColor
		GEODE_AS_STATIC_FUNCTION(updateGroundColor) 
	#endif

	#ifndef GEODE_STATICS_updateGroundOpacity
		#define GEODE_STATICS_updateGroundOpacity
		GEODE_AS_STATIC_FUNCTION(updateGroundOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateGroundPos
		#define GEODE_STATICS_updateGroundPos
		GEODE_AS_STATIC_FUNCTION(updateGroundPos) 
	#endif

	#ifndef GEODE_STATICS_updateGroundWidth
		#define GEODE_STATICS_updateGroundWidth
		GEODE_AS_STATIC_FUNCTION(updateGroundWidth) 
	#endif

	#ifndef GEODE_STATICS_updateMG01Blend
		#define GEODE_STATICS_updateMG01Blend
		GEODE_AS_STATIC_FUNCTION(updateMG01Blend) 
	#endif

	#ifndef GEODE_STATICS_updateMG02Blend
		#define GEODE_STATICS_updateMG02Blend
		GEODE_AS_STATIC_FUNCTION(updateMG02Blend) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_showGround
		#define GEODE_STATICS_showGround
		GEODE_AS_STATIC_FUNCTION(showGround) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMGLayer> : ModifyBase<ModifyDerive<Der, GJMGLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMGLayer>>;
		using ModifyBase<ModifyDerive<Der, GJMGLayer>>::ModifyBase;
		using Base = GJMGLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
