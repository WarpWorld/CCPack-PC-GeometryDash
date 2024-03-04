#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextAreaDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_fadeInTextFinished
		#define GEODE_STATICS_fadeInTextFinished
		GEODE_AS_STATIC_FUNCTION(fadeInTextFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextAreaDelegate> : ModifyBase<ModifyDerive<Der, TextAreaDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextAreaDelegate>>;
		using ModifyBase<ModifyDerive<Der, TextAreaDelegate>>::ModifyBase;
		using Base = TextAreaDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
