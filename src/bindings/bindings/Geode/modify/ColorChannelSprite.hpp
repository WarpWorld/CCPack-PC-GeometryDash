#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorChannelSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_updateBlending
		#define GEODE_STATICS_updateBlending
		GEODE_AS_STATIC_FUNCTION(updateBlending) 
	#endif

	#ifndef GEODE_STATICS_updateCopyLabel
		#define GEODE_STATICS_updateCopyLabel
		GEODE_AS_STATIC_FUNCTION(updateCopyLabel) 
	#endif

	#ifndef GEODE_STATICS_updateOpacity
		#define GEODE_STATICS_updateOpacity
		GEODE_AS_STATIC_FUNCTION(updateOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateValues
		#define GEODE_STATICS_updateValues
		GEODE_AS_STATIC_FUNCTION(updateValues) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorChannelSprite> : ModifyBase<ModifyDerive<Der, ColorChannelSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorChannelSprite>>;
		using ModifyBase<ModifyDerive<Der, ColorChannelSprite>>::ModifyBase;
		using Base = ColorChannelSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d85c0, Optcall, ColorChannelSprite, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8990, Membercall, ColorChannelSprite, updateBlending, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d86c0, Membercall, ColorChannelSprite, updateCopyLabel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8840, Membercall, ColorChannelSprite, updateOpacity, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d8a80, Membercall, ColorChannelSprite, updateValues, ColorAction*)
		}
	};
}
