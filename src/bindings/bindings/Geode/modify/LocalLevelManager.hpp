#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LocalLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_getAllLevelsInDict
		#define GEODE_STATICS_getAllLevelsInDict
		GEODE_AS_STATIC_FUNCTION(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_STATICS_getAllLevelsWithName
		#define GEODE_STATICS_getAllLevelsWithName
		GEODE_AS_STATIC_FUNCTION(getAllLevelsWithName) 
	#endif

	#ifndef GEODE_STATICS_getCreatedLevels
		#define GEODE_STATICS_getCreatedLevels
		GEODE_AS_STATIC_FUNCTION(getCreatedLevels) 
	#endif

	#ifndef GEODE_STATICS_getCreatedLists
		#define GEODE_STATICS_getCreatedLists
		GEODE_AS_STATIC_FUNCTION(getCreatedLists) 
	#endif

	#ifndef GEODE_STATICS_getLevelsInNameGroups
		#define GEODE_STATICS_getLevelsInNameGroups
		GEODE_AS_STATIC_FUNCTION(getLevelsInNameGroups) 
	#endif

	#ifndef GEODE_STATICS_getMainLevelString
		#define GEODE_STATICS_getMainLevelString
		GEODE_AS_STATIC_FUNCTION(getMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_markLevelsAsUnmodified
		#define GEODE_STATICS_markLevelsAsUnmodified
		GEODE_AS_STATIC_FUNCTION(markLevelsAsUnmodified) 
	#endif

	#ifndef GEODE_STATICS_moveLevelToTop
		#define GEODE_STATICS_moveLevelToTop
		GEODE_AS_STATIC_FUNCTION(moveLevelToTop) 
	#endif

	#ifndef GEODE_STATICS_reorderLevels
		#define GEODE_STATICS_reorderLevels
		GEODE_AS_STATIC_FUNCTION(reorderLevels) 
	#endif

	#ifndef GEODE_STATICS_tryLoadMainLevelString
		#define GEODE_STATICS_tryLoadMainLevelString
		GEODE_AS_STATIC_FUNCTION(tryLoadMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrder
		#define GEODE_STATICS_updateLevelOrder
		GEODE_AS_STATIC_FUNCTION(updateLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRevision
		#define GEODE_STATICS_updateLevelRevision
		GEODE_AS_STATIC_FUNCTION(updateLevelRevision) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LocalLevelManager> : ModifyBase<ModifyDerive<Der, LocalLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LocalLevelManager>>;
		using ModifyBase<ModifyDerive<Der, LocalLevelManager>>::ModifyBase;
		using Base = LocalLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x277760, Optcall, LocalLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x277cb0, Membercall, LocalLevelManager, getAllLevelsInDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x277e00, Membercall, LocalLevelManager, getAllLevelsWithName, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2784f0, Membercall, LocalLevelManager, getCreatedLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x277a90, Membercall, LocalLevelManager, getMainLevelString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x277900, Membercall, LocalLevelManager, tryLoadMainLevelString, int)
		}
	};
}
