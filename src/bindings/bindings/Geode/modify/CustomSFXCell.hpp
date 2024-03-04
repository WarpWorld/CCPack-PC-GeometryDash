#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_loadFromObject
		#define GEODE_STATICS_loadFromObject
		GEODE_AS_STATIC_FUNCTION(loadFromObject) 
	#endif

	#ifndef GEODE_STATICS_shouldReload
		#define GEODE_STATICS_shouldReload
		GEODE_AS_STATIC_FUNCTION(shouldReload) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_sfxObjectSelected
		#define GEODE_STATICS_sfxObjectSelected
		GEODE_AS_STATIC_FUNCTION(sfxObjectSelected) 
	#endif

	#ifndef GEODE_STATICS_getActiveSFXID
		#define GEODE_STATICS_getActiveSFXID
		GEODE_AS_STATIC_FUNCTION(getActiveSFXID) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXCell> : ModifyBase<ModifyDerive<Der, CustomSFXCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXCell>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXCell>>::ModifyBase;
		using Base = CustomSFXCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83670, Membercall, CustomSFXCell, loadFromObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83760, Membercall, CustomSFXCell, updateBGColor, int)
		}
	};
}
