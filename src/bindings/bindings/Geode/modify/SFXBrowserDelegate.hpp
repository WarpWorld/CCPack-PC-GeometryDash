#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXBrowserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sfxBrowserClosed
		#define GEODE_STATICS_sfxBrowserClosed
		GEODE_AS_STATIC_FUNCTION(sfxBrowserClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXBrowserDelegate> : ModifyBase<ModifyDerive<Der, SFXBrowserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowserDelegate>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowserDelegate>>::ModifyBase;
		using Base = SFXBrowserDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
