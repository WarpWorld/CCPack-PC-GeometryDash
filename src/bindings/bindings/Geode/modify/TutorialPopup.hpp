#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TutorialPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_animateMenu
		#define GEODE_STATICS_animateMenu
		GEODE_AS_STATIC_FUNCTION(animateMenu) 
	#endif

	#ifndef GEODE_STATICS_closeTutorial
		#define GEODE_STATICS_closeTutorial
		GEODE_AS_STATIC_FUNCTION(closeTutorial) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerForCallback
		#define GEODE_STATICS_registerForCallback
		GEODE_AS_STATIC_FUNCTION(registerForCallback) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TutorialPopup> : ModifyBase<ModifyDerive<Der, TutorialPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TutorialPopup>>;
		using ModifyBase<ModifyDerive<Der, TutorialPopup>>::ModifyBase;
		using Base = TutorialPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
