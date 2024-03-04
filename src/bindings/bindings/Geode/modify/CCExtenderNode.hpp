#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCExtenderNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCExtenderNode> : ModifyBase<ModifyDerive<Der, CCExtenderNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCExtenderNode>>;
		using ModifyBase<ModifyDerive<Der, CCExtenderNode>>::ModifyBase;
		using Base = CCExtenderNode;
        using Derived = Der;
		void apply() override {

		}
	};
}
