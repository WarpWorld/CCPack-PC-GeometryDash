#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SimplePlayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_asyncLoadIcon
		#define GEODE_STATICS_asyncLoadIcon
		GEODE_AS_STATIC_FUNCTION(asyncLoadIcon) 
	#endif

	#ifndef GEODE_STATICS_createRobotSprite
		#define GEODE_STATICS_createRobotSprite
		GEODE_AS_STATIC_FUNCTION(createRobotSprite) 
	#endif

	#ifndef GEODE_STATICS_createSpiderSprite
		#define GEODE_STATICS_createSpiderSprite
		GEODE_AS_STATIC_FUNCTION(createSpiderSprite) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_hideSecondary
		#define GEODE_STATICS_hideSecondary
		GEODE_AS_STATIC_FUNCTION(hideSecondary) 
	#endif

	#ifndef GEODE_STATICS_iconFinishedLoading
		#define GEODE_STATICS_iconFinishedLoading
		GEODE_AS_STATIC_FUNCTION(iconFinishedLoading) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setColors
		#define GEODE_STATICS_setColors
		GEODE_AS_STATIC_FUNCTION(setColors) 
	#endif

	#ifndef GEODE_STATICS_setFrames
		#define GEODE_STATICS_setFrames
		GEODE_AS_STATIC_FUNCTION(setFrames) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerFrame
		#define GEODE_STATICS_updatePlayerFrame
		GEODE_AS_STATIC_FUNCTION(updatePlayerFrame) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SimplePlayer> : ModifyBase<ModifyDerive<Der, SimplePlayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SimplePlayer>>;
		using ModifyBase<ModifyDerive<Der, SimplePlayer>>::ModifyBase;
		using Base = SimplePlayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3e90, Optcall, SimplePlayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f45d0, Membercall, SimplePlayer, createRobotSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4620, Membercall, SimplePlayer, createSpiderSprite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3f30, Membercall, SimplePlayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4dc0, Membercall, SimplePlayer, setFrames, char const*, char const*, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f46d0, Membercall, SimplePlayer, updateColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f49c0, Membercall, SimplePlayer, updatePlayerFrame, int, IconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f4f70, Thiscall, SimplePlayer, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f46a0, Thiscall, SimplePlayer, setColor, cocos2d::ccColor3B const&)
		}
	};
}
