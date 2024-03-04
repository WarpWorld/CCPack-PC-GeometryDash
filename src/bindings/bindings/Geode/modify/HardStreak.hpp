#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/HardStreak.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addPoint
		#define GEODE_STATICS_addPoint
		GEODE_AS_STATIC_FUNCTION(addPoint) 
	#endif

	#ifndef GEODE_STATICS_clearAboveXPos
		#define GEODE_STATICS_clearAboveXPos
		GEODE_AS_STATIC_FUNCTION(clearAboveXPos) 
	#endif

	#ifndef GEODE_STATICS_clearBehindXPos
		#define GEODE_STATICS_clearBehindXPos
		GEODE_AS_STATIC_FUNCTION(clearBehindXPos) 
	#endif

	#ifndef GEODE_STATICS_createDuplicate
		#define GEODE_STATICS_createDuplicate
		GEODE_AS_STATIC_FUNCTION(createDuplicate) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_normalizeAngle
		#define GEODE_STATICS_normalizeAngle
		GEODE_AS_STATIC_FUNCTION(normalizeAngle) 
	#endif

	#ifndef GEODE_STATICS_quadCornerOffset
		#define GEODE_STATICS_quadCornerOffset
		GEODE_AS_STATIC_FUNCTION(quadCornerOffset) 
	#endif

	#ifndef GEODE_STATICS_reset
		#define GEODE_STATICS_reset
		GEODE_AS_STATIC_FUNCTION(reset) 
	#endif

	#ifndef GEODE_STATICS_resumeStroke
		#define GEODE_STATICS_resumeStroke
		GEODE_AS_STATIC_FUNCTION(resumeStroke) 
	#endif

	#ifndef GEODE_STATICS_scheduleAutoUpdate
		#define GEODE_STATICS_scheduleAutoUpdate
		GEODE_AS_STATIC_FUNCTION(scheduleAutoUpdate) 
	#endif

	#ifndef GEODE_STATICS_stopStroke
		#define GEODE_STATICS_stopStroke
		GEODE_AS_STATIC_FUNCTION(stopStroke) 
	#endif

	#ifndef GEODE_STATICS_updateStroke
		#define GEODE_STATICS_updateStroke
		GEODE_AS_STATIC_FUNCTION(updateStroke) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, HardStreak> : ModifyBase<ModifyDerive<Der, HardStreak>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, HardStreak>>;
		using ModifyBase<ModifyDerive<Der, HardStreak>>::ModifyBase;
		using Base = HardStreak;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x227250, Membercall, HardStreak, addPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x226960, Thiscall, HardStreak, updateStroke, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x226860, Thiscall, HardStreak, init, )
		}
	};
}
