#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCircleWaveDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_circleWaveWillBeRemoved
		#define GEODE_STATICS_circleWaveWillBeRemoved
		GEODE_AS_STATIC_FUNCTION(circleWaveWillBeRemoved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCircleWaveDelegate> : ModifyBase<ModifyDerive<Der, CCCircleWaveDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCircleWaveDelegate>>;
		using ModifyBase<ModifyDerive<Der, CCCircleWaveDelegate>>::ModifyBase;
		using Base = CCCircleWaveDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
