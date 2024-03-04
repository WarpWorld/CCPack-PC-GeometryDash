#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AchievementBar.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AchievementBar> : ModifyBase<ModifyDerive<Der, AchievementBar>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AchievementBar>>;
		using ModifyBase<ModifyDerive<Der, AchievementBar>>::ModifyBase;
		using Base = AchievementBar;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59720, Optcall, AchievementBar, create, char const*, char const*, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59800, Membercall, AchievementBar, init, char const*, char const*, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a610, Membercall, AchievementBar, show, )
		}
	};
}
