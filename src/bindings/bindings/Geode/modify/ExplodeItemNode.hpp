#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ExplodeItemNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createSprites
		#define GEODE_STATICS_createSprites
		GEODE_AS_STATIC_FUNCTION(createSprites) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ExplodeItemNode> : ModifyBase<ModifyDerive<Der, ExplodeItemNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ExplodeItemNode>>;
		using ModifyBase<ModifyDerive<Der, ExplodeItemNode>>::ModifyBase;
		using Base = ExplodeItemNode;
        using Derived = Der;
		void apply() override {

		}
	};
}
