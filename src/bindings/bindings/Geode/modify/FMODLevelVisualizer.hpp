#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FMODLevelVisualizer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateVisualizer
		#define GEODE_STATICS_updateVisualizer
		GEODE_AS_STATIC_FUNCTION(updateVisualizer) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FMODLevelVisualizer> : ModifyBase<ModifyDerive<Der, FMODLevelVisualizer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FMODLevelVisualizer>>;
		using ModifyBase<ModifyDerive<Der, FMODLevelVisualizer>>::ModifyBase;
		using Base = FMODLevelVisualizer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2129f0, Optcall, FMODLevelVisualizer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212e70, Membercall, FMODLevelVisualizer, updateVisualizer, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212aa0, Thiscall, FMODLevelVisualizer, init, )
		}
	};
}
