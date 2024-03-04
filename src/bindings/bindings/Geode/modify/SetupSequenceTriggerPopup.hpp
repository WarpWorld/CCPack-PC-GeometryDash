#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupSequenceTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddChance
		#define GEODE_STATICS_onAddChance
		GEODE_AS_STATIC_FUNCTION(onAddChance) 
	#endif

	#ifndef GEODE_STATICS_onChangeOrder
		#define GEODE_STATICS_onChangeOrder
		GEODE_AS_STATIC_FUNCTION(onChangeOrder) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_STATICS_onCustomToggleTriggerValue
		#define GEODE_STATICS_onCustomToggleTriggerValue
		GEODE_AS_STATIC_FUNCTION(onCustomToggleTriggerValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupSequenceTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupSequenceTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupSequenceTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupSequenceTriggerPopup>>::ModifyBase;
		using Base = SetupSequenceTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b450, Optcall, SetupSequenceTriggerPopup, create, SequenceTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b4f0, Membercall, SetupSequenceTriggerPopup, init, SequenceTriggerGameObject*)
		}
	};
}
