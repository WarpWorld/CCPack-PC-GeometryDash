#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGroundLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createLine
		#define GEODE_STATICS_createLine
		GEODE_AS_STATIC_FUNCTION(createLine) 
	#endif

	#ifndef GEODE_STATICS_deactivateGround
		#define GEODE_STATICS_deactivateGround
		GEODE_AS_STATIC_FUNCTION(deactivateGround) 
	#endif

	#ifndef GEODE_STATICS_fadeInFinished
		#define GEODE_STATICS_fadeInFinished
		GEODE_AS_STATIC_FUNCTION(fadeInFinished) 
	#endif

	#ifndef GEODE_STATICS_getGroundY
		#define GEODE_STATICS_getGroundY
		GEODE_AS_STATIC_FUNCTION(getGroundY) 
	#endif

	#ifndef GEODE_STATICS_hideShadows
		#define GEODE_STATICS_hideShadows
		GEODE_AS_STATIC_FUNCTION(hideShadows) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadGroundSprites
		#define GEODE_STATICS_loadGroundSprites
		GEODE_AS_STATIC_FUNCTION(loadGroundSprites) 
	#endif

	#ifndef GEODE_STATICS_positionGround
		#define GEODE_STATICS_positionGround
		GEODE_AS_STATIC_FUNCTION(positionGround) 
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

	#ifndef GEODE_STATICS_updateGround01Color
		#define GEODE_STATICS_updateGround01Color
		GEODE_AS_STATIC_FUNCTION(updateGround01Color) 
	#endif

	#ifndef GEODE_STATICS_updateGround02Color
		#define GEODE_STATICS_updateGround02Color
		GEODE_AS_STATIC_FUNCTION(updateGround02Color) 
	#endif

	#ifndef GEODE_STATICS_updateGroundPos
		#define GEODE_STATICS_updateGroundPos
		GEODE_AS_STATIC_FUNCTION(updateGroundPos) 
	#endif

	#ifndef GEODE_STATICS_updateGroundWidth
		#define GEODE_STATICS_updateGroundWidth
		GEODE_AS_STATIC_FUNCTION(updateGroundWidth) 
	#endif

	#ifndef GEODE_STATICS_updateLineBlend
		#define GEODE_STATICS_updateLineBlend
		GEODE_AS_STATIC_FUNCTION(updateLineBlend) 
	#endif

	#ifndef GEODE_STATICS_updateShadows
		#define GEODE_STATICS_updateShadows
		GEODE_AS_STATIC_FUNCTION(updateShadows) 
	#endif

	#ifndef GEODE_STATICS_updateShadowXPos
		#define GEODE_STATICS_updateShadowXPos
		GEODE_AS_STATIC_FUNCTION(updateShadowXPos) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_showGround
		#define GEODE_STATICS_showGround
		GEODE_AS_STATIC_FUNCTION(showGround) 
	#endif

	#ifndef GEODE_STATICS_fadeInGround
		#define GEODE_STATICS_fadeInGround
		GEODE_AS_STATIC_FUNCTION(fadeInGround) 
	#endif

	#ifndef GEODE_STATICS_fadeOutGround
		#define GEODE_STATICS_fadeOutGround
		GEODE_AS_STATIC_FUNCTION(fadeOutGround) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGroundLayer> : ModifyBase<ModifyDerive<Der, GJGroundLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGroundLayer>>;
		using ModifyBase<ModifyDerive<Der, GJGroundLayer>>::ModifyBase;
		using Base = GJGroundLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f73f0, Optcall, GJGroundLayer, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7b70, Membercall, GJGroundLayer, createLine, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f74a0, Membercall, GJGroundLayer, init, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7900, Membercall, GJGroundLayer, loadGroundSprites, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7ab0, Membercall, GJGroundLayer, updateGround01Color, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f7b10, Membercall, GJGroundLayer, updateGround02Color, cocos2d::ccColor3B)
		}
	};
}
