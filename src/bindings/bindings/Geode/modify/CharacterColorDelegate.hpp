#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CharacterColorDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_playerColorChanged
		#define GEODE_STATICS_playerColorChanged
		GEODE_AS_STATIC_FUNCTION(playerColorChanged) 
	#endif

	#ifndef GEODE_STATICS_showUnlockPopup
		#define GEODE_STATICS_showUnlockPopup
		GEODE_AS_STATIC_FUNCTION(showUnlockPopup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CharacterColorDelegate> : ModifyBase<ModifyDerive<Der, CharacterColorDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CharacterColorDelegate>>;
		using ModifyBase<ModifyDerive<Der, CharacterColorDelegate>>::ModifyBase;
		using Base = CharacterColorDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
