#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_commandForKey
		#define GEODE_STATICS_commandForKey
		GEODE_AS_STATIC_FUNCTION(commandForKey) 
	#endif

	#ifndef GEODE_STATICS_commandForKeyMods
		#define GEODE_STATICS_commandForKeyMods
		GEODE_AS_STATIC_FUNCTION(commandForKeyMods) 
	#endif

	#ifndef GEODE_STATICS_commandForKeyNoMods
		#define GEODE_STATICS_commandForKeyNoMods
		GEODE_AS_STATIC_FUNCTION(commandForKeyNoMods) 
	#endif

	#ifndef GEODE_STATICS_commandToKeyForGroup
		#define GEODE_STATICS_commandToKeyForGroup
		GEODE_AS_STATIC_FUNCTION(commandToKeyForGroup) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_groupForCommand
		#define GEODE_STATICS_groupForCommand
		GEODE_AS_STATIC_FUNCTION(groupForCommand) 
	#endif

	#ifndef GEODE_STATICS_keyForCommand
		#define GEODE_STATICS_keyForCommand
		GEODE_AS_STATIC_FUNCTION(keyForCommand) 
	#endif

	#ifndef GEODE_STATICS_keyToCommandForGroup
		#define GEODE_STATICS_keyToCommandForGroup
		GEODE_AS_STATIC_FUNCTION(keyToCommandForGroup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindingsManager> : ModifyBase<ModifyDerive<Der, KeybindingsManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsManager>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsManager>>::ModifyBase;
		using Base = KeybindingsManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22d570, Membercall, KeybindingsManager, dataLoaded, DS_Dictionary*)
		}
	};
}
