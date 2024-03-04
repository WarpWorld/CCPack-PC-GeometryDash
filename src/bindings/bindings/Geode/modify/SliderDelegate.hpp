#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderDelegate> : ModifyBase<ModifyDerive<Der, SliderDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderDelegate>>;
		using ModifyBase<ModifyDerive<Der, SliderDelegate>>::ModifyBase;
		using Base = SliderDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
