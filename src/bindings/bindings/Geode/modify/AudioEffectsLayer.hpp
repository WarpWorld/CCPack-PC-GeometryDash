#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AudioEffectsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_audioStep
		#define GEODE_STATICS_audioStep
		GEODE_AS_STATIC_FUNCTION(audioStep) 
	#endif

	#ifndef GEODE_STATICS_getBGSquare
		#define GEODE_STATICS_getBGSquare
		GEODE_AS_STATIC_FUNCTION(getBGSquare) 
	#endif

	#ifndef GEODE_STATICS_goingDown
		#define GEODE_STATICS_goingDown
		GEODE_AS_STATIC_FUNCTION(goingDown) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetAudioVars
		#define GEODE_STATICS_resetAudioVars
		GEODE_AS_STATIC_FUNCTION(resetAudioVars) 
	#endif

	#ifndef GEODE_STATICS_triggerEffect
		#define GEODE_STATICS_triggerEffect
		GEODE_AS_STATIC_FUNCTION(triggerEffect) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_updateTweenAction
		#define GEODE_STATICS_updateTweenAction
		GEODE_AS_STATIC_FUNCTION(updateTweenAction) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AudioEffectsLayer> : ModifyBase<ModifyDerive<Der, AudioEffectsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AudioEffectsLayer>>;
		using ModifyBase<ModifyDerive<Der, AudioEffectsLayer>>::ModifyBase;
		using Base = AudioEffectsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5beb0, Membercall, AudioEffectsLayer, audioStep, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bf70, Membercall, AudioEffectsLayer, triggerEffect, float)
		}
	};
}
