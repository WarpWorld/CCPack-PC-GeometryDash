#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getCopy
		#define GEODE_STATICS_getCopy
		GEODE_AS_STATIC_FUNCTION(getCopy) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isInUse
		#define GEODE_STATICS_isInUse
		GEODE_AS_STATIC_FUNCTION(isInUse) 
	#endif

	#ifndef GEODE_STATICS_loadFromState
		#define GEODE_STATICS_loadFromState
		GEODE_AS_STATIC_FUNCTION(loadFromState) 
	#endif

	#ifndef GEODE_STATICS_resetAction
		#define GEODE_STATICS_resetAction
		GEODE_AS_STATIC_FUNCTION(resetAction) 
	#endif

	#ifndef GEODE_STATICS_saveToState
		#define GEODE_STATICS_saveToState
		GEODE_AS_STATIC_FUNCTION(saveToState) 
	#endif

	#ifndef GEODE_STATICS_setupFromMap
		#define GEODE_STATICS_setupFromMap
		GEODE_AS_STATIC_FUNCTION(setupFromMap) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColor
		#define GEODE_STATICS_updateCustomColor
		GEODE_AS_STATIC_FUNCTION(updateCustomColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorAction> : ModifyBase<ModifyDerive<Der, ColorAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorAction>>;
		using ModifyBase<ModifyDerive<Der, ColorAction>>::ModifyBase;
		using Base = ColorAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8fa0, Membercall, ColorAction, isInUse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9090, Membercall, ColorAction, loadFromState, CAState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8ff0, Membercall, ColorAction, saveToState, CAState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9a30, Membercall, ColorAction, setupFromMap, gd::map<gd::string, gd::string>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d9950, Membercall, ColorAction, setupFromString, gd::string)
		}
	};
}
