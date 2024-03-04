#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_frameForType
		#define GEODE_STATICS_frameForType
		GEODE_AS_STATIC_FUNCTION(frameForType) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_nameForType
		#define GEODE_STATICS_nameForType
		GEODE_AS_STATIC_FUNCTION(nameForType) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletNode> : ModifyBase<ModifyDerive<Der, GauntletNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletNode>>;
		using ModifyBase<ModifyDerive<Der, GauntletNode>>::ModifyBase;
		using Base = GauntletNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x189b30, Membercall, GauntletNode, frameForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x188740, Membercall, GauntletNode, init, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x189f90, Optcall, GauntletNode, nameForType, GauntletType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x189b00, Membercall, GauntletNode, onClaimReward, )
		}
	};
}
