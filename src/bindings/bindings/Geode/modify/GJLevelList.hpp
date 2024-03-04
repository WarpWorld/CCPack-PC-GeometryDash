#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJLevelList.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addLevelToList
		#define GEODE_STATICS_addLevelToList
		GEODE_AS_STATIC_FUNCTION(addLevelToList) 
	#endif

	#ifndef GEODE_STATICS_completedLevels
		#define GEODE_STATICS_completedLevels
		GEODE_AS_STATIC_FUNCTION(completedLevels) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_duplicateListLevels
		#define GEODE_STATICS_duplicateListLevels
		GEODE_AS_STATIC_FUNCTION(duplicateListLevels) 
	#endif

	#ifndef GEODE_STATICS_frameForListDifficulty
		#define GEODE_STATICS_frameForListDifficulty
		GEODE_AS_STATIC_FUNCTION(frameForListDifficulty) 
	#endif

	#ifndef GEODE_STATICS_getListLevelsArray
		#define GEODE_STATICS_getListLevelsArray
		GEODE_AS_STATIC_FUNCTION(getListLevelsArray) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedDescription
		#define GEODE_STATICS_getUnpackedDescription
		GEODE_AS_STATIC_FUNCTION(getUnpackedDescription) 
	#endif

	#ifndef GEODE_STATICS_orderForLevel
		#define GEODE_STATICS_orderForLevel
		GEODE_AS_STATIC_FUNCTION(orderForLevel) 
	#endif

	#ifndef GEODE_STATICS_parseListLevels
		#define GEODE_STATICS_parseListLevels
		GEODE_AS_STATIC_FUNCTION(parseListLevels) 
	#endif

	#ifndef GEODE_STATICS_removeLevelFromList
		#define GEODE_STATICS_removeLevelFromList
		GEODE_AS_STATIC_FUNCTION(removeLevelFromList) 
	#endif

	#ifndef GEODE_STATICS_reorderLevel
		#define GEODE_STATICS_reorderLevel
		GEODE_AS_STATIC_FUNCTION(reorderLevel) 
	#endif

	#ifndef GEODE_STATICS_reorderLevelStep
		#define GEODE_STATICS_reorderLevelStep
		GEODE_AS_STATIC_FUNCTION(reorderLevelStep) 
	#endif

	#ifndef GEODE_STATICS_showListInfo
		#define GEODE_STATICS_showListInfo
		GEODE_AS_STATIC_FUNCTION(showListInfo) 
	#endif

	#ifndef GEODE_STATICS_totalLevels
		#define GEODE_STATICS_totalLevels
		GEODE_AS_STATIC_FUNCTION(totalLevels) 
	#endif

	#ifndef GEODE_STATICS_updateLevelsString
		#define GEODE_STATICS_updateLevelsString
		GEODE_AS_STATIC_FUNCTION(updateLevelsString) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_canEncode
		#define GEODE_STATICS_canEncode
		GEODE_AS_STATIC_FUNCTION(canEncode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJLevelList> : ModifyBase<ModifyDerive<Der, GJLevelList>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJLevelList>>;
		using ModifyBase<ModifyDerive<Der, GJLevelList>>::ModifyBase;
		using Base = GJLevelList;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11bf40, Optcall, GJLevelList, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11cdd0, Membercall, GJLevelList, completedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d290, Membercall, GJLevelList, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d7e0, Membercall, GJLevelList, frameForListDifficulty, int, DifficultyIconType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c1b0, Membercall, GJLevelList, getUnpackedDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11cef0, Membercall, GJLevelList, showListInfo, )
		}
	};
}
