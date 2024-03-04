#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DrawGridLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addAudioLineObject
		#define GEODE_STATICS_addAudioLineObject
		GEODE_AS_STATIC_FUNCTION(addAudioLineObject) 
	#endif

	#ifndef GEODE_STATICS_addToEffects
		#define GEODE_STATICS_addToEffects
		GEODE_AS_STATIC_FUNCTION(addToEffects) 
	#endif

	#ifndef GEODE_STATICS_addToGuides
		#define GEODE_STATICS_addToGuides
		GEODE_AS_STATIC_FUNCTION(addToGuides) 
	#endif

	#ifndef GEODE_STATICS_addToSpeedObjects
		#define GEODE_STATICS_addToSpeedObjects
		GEODE_AS_STATIC_FUNCTION(addToSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_getPortalMinMax
		#define GEODE_STATICS_getPortalMinMax
		GEODE_AS_STATIC_FUNCTION(getPortalMinMax) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadTimeMarkers
		#define GEODE_STATICS_loadTimeMarkers
		GEODE_AS_STATIC_FUNCTION(loadTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_removeAudioLineObject
		#define GEODE_STATICS_removeAudioLineObject
		GEODE_AS_STATIC_FUNCTION(removeAudioLineObject) 
	#endif

	#ifndef GEODE_STATICS_removeFromEffects
		#define GEODE_STATICS_removeFromEffects
		GEODE_AS_STATIC_FUNCTION(removeFromEffects) 
	#endif

	#ifndef GEODE_STATICS_removeFromGuides
		#define GEODE_STATICS_removeFromGuides
		GEODE_AS_STATIC_FUNCTION(removeFromGuides) 
	#endif

	#ifndef GEODE_STATICS_removeFromSpeedObjects
		#define GEODE_STATICS_removeFromSpeedObjects
		GEODE_AS_STATIC_FUNCTION(removeFromSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_sortSpeedObjects
		#define GEODE_STATICS_sortSpeedObjects
		GEODE_AS_STATIC_FUNCTION(sortSpeedObjects) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_updateMusicGuideTime
		#define GEODE_STATICS_updateMusicGuideTime
		GEODE_AS_STATIC_FUNCTION(updateMusicGuideTime) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMarkers
		#define GEODE_STATICS_updateTimeMarkers
		GEODE_AS_STATIC_FUNCTION(updateTimeMarkers) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DrawGridLayer> : ModifyBase<ModifyDerive<Der, DrawGridLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DrawGridLayer>>;
		using ModifyBase<ModifyDerive<Der, DrawGridLayer>>::ModifyBase;
		using Base = DrawGridLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24ae00, Membercall, DrawGridLayer, addAudioLineObject, AudioLineGuideGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24adc0, Membercall, DrawGridLayer, addToSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24afa0, Membercall, DrawGridLayer, loadTimeMarkers, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24ae60, Membercall, DrawGridLayer, removeAudioLineObject, AudioLineGuideGameObject*)
		}
	};
}
