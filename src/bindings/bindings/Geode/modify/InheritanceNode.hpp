#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InheritanceNode.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, InheritanceNode> : ModifyBase<ModifyDerive<Der, InheritanceNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InheritanceNode>>;
		using ModifyBase<ModifyDerive<Der, InheritanceNode>>::ModifyBase;
		using Base = InheritanceNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8b50, Optcall, InheritanceNode, create, int, InheritanceNode*)
		}
	};
}
