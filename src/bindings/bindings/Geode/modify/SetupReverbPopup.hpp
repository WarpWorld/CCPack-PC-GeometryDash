#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupReverbPopup.hpp>
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

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onReverb
		#define GEODE_STATICS_onReverb
		GEODE_AS_STATIC_FUNCTION(onReverb) 
	#endif

	#ifndef GEODE_STATICS_updateReverbLabel
		#define GEODE_STATICS_updateReverbLabel
		GEODE_AS_STATIC_FUNCTION(updateReverbLabel) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupReverbPopup> : ModifyBase<ModifyDerive<Der, SetupReverbPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupReverbPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupReverbPopup>>::ModifyBase;
		using Base = SetupReverbPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
