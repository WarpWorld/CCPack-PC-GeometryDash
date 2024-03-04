#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRobotSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_hideGlow
		#define GEODE_STATICS_hideGlow
		GEODE_AS_STATIC_FUNCTION(hideGlow) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_showGlow
		#define GEODE_STATICS_showGlow
		GEODE_AS_STATIC_FUNCTION(showGlow) 
	#endif

	#ifndef GEODE_STATICS_updateColor01
		#define GEODE_STATICS_updateColor01
		GEODE_AS_STATIC_FUNCTION(updateColor01) 
	#endif

	#ifndef GEODE_STATICS_updateColor02
		#define GEODE_STATICS_updateColor02
		GEODE_AS_STATIC_FUNCTION(updateColor02) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateFrame
		#define GEODE_STATICS_updateFrame
		GEODE_AS_STATIC_FUNCTION(updateFrame) 
	#endif

	#ifndef GEODE_STATICS_updateGlowColor
		#define GEODE_STATICS_updateGlowColor
		GEODE_AS_STATIC_FUNCTION(updateGlowColor) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRobotSprite> : ModifyBase<ModifyDerive<Der, GJRobotSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRobotSprite>>;
		using ModifyBase<ModifyDerive<Der, GJRobotSprite>>::ModifyBase;
		using Base = GJRobotSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217510, Optcall, GJRobotSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2175e0, Membercall, GJRobotSprite, init, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217b70, Membercall, GJRobotSprite, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2180b0, Membercall, GJRobotSprite, updateFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217b10, Membercall, GJRobotSprite, updateGlowColor, cocos2d::ccColor3B, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217ff0, Thiscall, GJRobotSprite, setOpacity, unsigned char)
		}
	};
}
