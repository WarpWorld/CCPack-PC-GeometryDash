#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UndoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithArray
		#define GEODE_STATICS_createWithArray
		GEODE_AS_STATIC_FUNCTION(createWithArray) 
	#endif

	#ifndef GEODE_STATICS_createWithTransformObjects
		#define GEODE_STATICS_createWithTransformObjects
		GEODE_AS_STATIC_FUNCTION(createWithTransformObjects) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_initWithTransformObjects
		#define GEODE_STATICS_initWithTransformObjects
		GEODE_AS_STATIC_FUNCTION(initWithTransformObjects) 
	#endif

	#ifndef GEODE_STATICS_setObjects
		#define GEODE_STATICS_setObjects
		GEODE_AS_STATIC_FUNCTION(setObjects) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UndoObject> : ModifyBase<ModifyDerive<Der, UndoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UndoObject>>;
		using ModifyBase<ModifyDerive<Der, UndoObject>>::ModifyBase;
		using Base = UndoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a4b0, Optcall, UndoObject, create, GameObject*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a760, Optcall, UndoObject, createWithArray, cocos2d::CCArray*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a580, Optcall, UndoObject, createWithTransformObjects, cocos2d::CCArray*, UndoCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a650, Membercall, UndoObject, initWithTransformObjects, cocos2d::CCArray*, UndoCommand)
		}
	};
}
