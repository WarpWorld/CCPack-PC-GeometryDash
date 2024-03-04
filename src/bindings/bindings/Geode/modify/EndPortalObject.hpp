#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EndPortalObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getSpawnPos
		#define GEODE_STATICS_getSpawnPos
		GEODE_AS_STATIC_FUNCTION(getSpawnPos) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_updateColors
		#define GEODE_STATICS_updateColors
		GEODE_AS_STATIC_FUNCTION(updateColors) 
	#endif

	#ifndef GEODE_STATICS_updateEndPos
		#define GEODE_STATICS_updateEndPos
		GEODE_AS_STATIC_FUNCTION(updateEndPos) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EndPortalObject> : ModifyBase<ModifyDerive<Der, EndPortalObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EndPortalObject>>;
		using ModifyBase<ModifyDerive<Der, EndPortalObject>>::ModifyBase;
		using Base = EndPortalObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb140, Optcall, EndPortalObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb740, Membercall, EndPortalObject, getSpawnPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb6c0, Membercall, EndPortalObject, triggerObject, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb5b0, Membercall, EndPortalObject, updateColors, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb920, Membercall, EndPortalObject, updateEndPos, bool)
		}
	};
}
