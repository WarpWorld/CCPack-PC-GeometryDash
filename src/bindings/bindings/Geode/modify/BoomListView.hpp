#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BoomListView.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addObjectToList
		#define GEODE_STATICS_addObjectToList
		GEODE_AS_STATIC_FUNCTION(addObjectToList) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_lockList
		#define GEODE_STATICS_lockList
		GEODE_AS_STATIC_FUNCTION(lockList) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_cellHeightForRowAtIndexPath
		#define GEODE_STATICS_cellHeightForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellHeightForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_numberOfRowsInSection
		#define GEODE_STATICS_numberOfRowsInSection
		GEODE_AS_STATIC_FUNCTION(numberOfRowsInSection) 
	#endif

	#ifndef GEODE_STATICS_cellForRowAtIndexPath
		#define GEODE_STATICS_cellForRowAtIndexPath
		GEODE_AS_STATIC_FUNCTION(cellForRowAtIndexPath) 
	#endif

	#ifndef GEODE_STATICS_getListCell
		#define GEODE_STATICS_getListCell
		GEODE_AS_STATIC_FUNCTION(getListCell) 
	#endif

	#ifndef GEODE_STATICS_loadCell
		#define GEODE_STATICS_loadCell
		GEODE_AS_STATIC_FUNCTION(loadCell) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, BoomListView> : ModifyBase<ModifyDerive<Der, BoomListView>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BoomListView>>;
		using ModifyBase<ModifyDerive<Der, BoomListView>>::ModifyBase;
		using Base = BoomListView;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d400, Membercall, BoomListView, init, cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5c0, Thiscall, BoomListView, setupList, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d650, Thiscall, BoomListView, cellHeightForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d660, Thiscall, BoomListView, numberOfRowsInSection, unsigned, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d670, Thiscall, BoomListView, cellForRowAtIndexPath, CCIndexPath&, TableView*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6d0, Thiscall, BoomListView, getListCell, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d7b0, Thiscall, BoomListView, loadCell, TableViewCell*, int)
		}
	};
}
