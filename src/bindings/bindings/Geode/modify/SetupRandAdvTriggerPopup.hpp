#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupRandAdvTriggerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addChance
		#define GEODE_STATICS_addChance
		GEODE_AS_STATIC_FUNCTION(addChance) 
	#endif

	#ifndef GEODE_STATICS_addChanceToObject
		#define GEODE_STATICS_addChanceToObject
		GEODE_AS_STATIC_FUNCTION(addChanceToObject) 
	#endif

	#ifndef GEODE_STATICS_callRemoveFromGroup
		#define GEODE_STATICS_callRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(callRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddChance
		#define GEODE_STATICS_onAddChance
		GEODE_AS_STATIC_FUNCTION(onAddChance) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFromGroup
		#define GEODE_STATICS_onRemoveFromGroup
		GEODE_AS_STATIC_FUNCTION(onRemoveFromGroup) 
	#endif

	#ifndef GEODE_STATICS_removeGroupID
		#define GEODE_STATICS_removeGroupID
		GEODE_AS_STATIC_FUNCTION(removeGroupID) 
	#endif

	#ifndef GEODE_STATICS_removeGroupIDFromObject
		#define GEODE_STATICS_removeGroupIDFromObject
		GEODE_AS_STATIC_FUNCTION(removeGroupIDFromObject) 
	#endif

	#ifndef GEODE_STATICS_updateGroupIDButtons
		#define GEODE_STATICS_updateGroupIDButtons
		GEODE_AS_STATIC_FUNCTION(updateGroupIDButtons) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupRandAdvTriggerPopup> : ModifyBase<ModifyDerive<Der, SetupRandAdvTriggerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupRandAdvTriggerPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupRandAdvTriggerPopup>>::ModifyBase;
		using Base = SetupRandAdvTriggerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x346250, Optcall, SetupRandAdvTriggerPopup, create, RandTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x346300, Membercall, SetupRandAdvTriggerPopup, init, RandTriggerGameObject*, cocos2d::CCArray*)
		}
	};
}
