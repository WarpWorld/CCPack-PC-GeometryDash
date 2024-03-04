#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ObjectToolbox.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_allKeys
		#define GEODE_STATICS_allKeys
		GEODE_AS_STATIC_FUNCTION(allKeys) 
	#endif

	#ifndef GEODE_STATICS_gridNodeSizeForKey
		#define GEODE_STATICS_gridNodeSizeForKey
		GEODE_AS_STATIC_FUNCTION(gridNodeSizeForKey) 
	#endif

	#ifndef GEODE_STATICS_intKeyToFrame
		#define GEODE_STATICS_intKeyToFrame
		GEODE_AS_STATIC_FUNCTION(intKeyToFrame) 
	#endif

	#ifndef GEODE_STATICS_perspectiveBlockFrame
		#define GEODE_STATICS_perspectiveBlockFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveBlockFrame) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ObjectToolbox> : ModifyBase<ModifyDerive<Der, ObjectToolbox>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ObjectToolbox>>;
		using ModifyBase<ModifyDerive<Der, ObjectToolbox>>::ModifyBase;
		using Base = ObjectToolbox;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b340, Optcall, ObjectToolbox, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2af310, Membercall, ObjectToolbox, gridNodeSizeForKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x166920, Membercall, ObjectToolbox, intKeyToFrame, int)
		}
	};
}
