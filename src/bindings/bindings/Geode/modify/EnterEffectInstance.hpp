#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnterEffectInstance.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_animateValue
		#define GEODE_STATICS_animateValue
		GEODE_AS_STATIC_FUNCTION(animateValue) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_loadTransitions
		#define GEODE_STATICS_loadTransitions
		GEODE_AS_STATIC_FUNCTION(loadTransitions) 
	#endif

	#ifndef GEODE_STATICS_loadValuesFromObject
		#define GEODE_STATICS_loadValuesFromObject
		GEODE_AS_STATIC_FUNCTION(loadValuesFromObject) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

	#ifndef GEODE_STATICS_updateTransitions
		#define GEODE_STATICS_updateTransitions
		GEODE_AS_STATIC_FUNCTION(updateTransitions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EnterEffectInstance> : ModifyBase<ModifyDerive<Der, EnterEffectInstance>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnterEffectInstance>>;
		using ModifyBase<ModifyDerive<Der, EnterEffectInstance>>::ModifyBase;
		using Base = EnterEffectInstance;
        using Derived = Der;
		void apply() override {

		}
	};
}
