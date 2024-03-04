#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer3.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_animateEyes
		#define GEODE_STATICS_animateEyes
		GEODE_AS_STATIC_FUNCTION(animateEyes) 
	#endif

	#ifndef GEODE_STATICS_firstInteractionStep1
		#define GEODE_STATICS_firstInteractionStep1
		GEODE_AS_STATIC_FUNCTION(firstInteractionStep1) 
	#endif

	#ifndef GEODE_STATICS_firstInteractionStep2
		#define GEODE_STATICS_firstInteractionStep2
		GEODE_AS_STATIC_FUNCTION(firstInteractionStep2) 
	#endif

	#ifndef GEODE_STATICS_firstInteractionStep3
		#define GEODE_STATICS_firstInteractionStep3
		GEODE_AS_STATIC_FUNCTION(firstInteractionStep3) 
	#endif

	#ifndef GEODE_STATICS_firstInteractionStep4
		#define GEODE_STATICS_firstInteractionStep4
		GEODE_AS_STATIC_FUNCTION(firstInteractionStep4) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onChest01
		#define GEODE_STATICS_onChest01
		GEODE_AS_STATIC_FUNCTION(onChest01) 
	#endif

	#ifndef GEODE_STATICS_onChest02
		#define GEODE_STATICS_onChest02
		GEODE_AS_STATIC_FUNCTION(onChest02) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_revealStep1
		#define GEODE_STATICS_revealStep1
		GEODE_AS_STATIC_FUNCTION(revealStep1) 
	#endif

	#ifndef GEODE_STATICS_revealStep2
		#define GEODE_STATICS_revealStep2
		GEODE_AS_STATIC_FUNCTION(revealStep2) 
	#endif

	#ifndef GEODE_STATICS_revealStep3
		#define GEODE_STATICS_revealStep3
		GEODE_AS_STATIC_FUNCTION(revealStep3) 
	#endif

	#ifndef GEODE_STATICS_revealStep4
		#define GEODE_STATICS_revealStep4
		GEODE_AS_STATIC_FUNCTION(revealStep4) 
	#endif

	#ifndef GEODE_STATICS_revealStep5
		#define GEODE_STATICS_revealStep5
		GEODE_AS_STATIC_FUNCTION(revealStep5) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_showUnlockDialog
		#define GEODE_STATICS_showUnlockDialog
		GEODE_AS_STATIC_FUNCTION(showUnlockDialog) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer3> : ModifyBase<ModifyDerive<Der, SecretLayer3>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer3>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer3>>::ModifyBase;
		using Base = SecretLayer3;
        using Derived = Der;
		void apply() override {

		}
	};
}
