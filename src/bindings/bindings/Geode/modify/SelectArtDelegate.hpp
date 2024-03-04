#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_selectArtClosed
		#define GEODE_STATICS_selectArtClosed
		GEODE_AS_STATIC_FUNCTION(selectArtClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectArtDelegate> : ModifyBase<ModifyDerive<Der, SelectArtDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectArtDelegate>>;
		using ModifyBase<ModifyDerive<Der, SelectArtDelegate>>::ModifyBase;
		using Base = SelectArtDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
