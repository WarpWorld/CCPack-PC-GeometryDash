#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoLayer.hpp>
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

	#ifndef GEODE_STATICS_onBPM
		#define GEODE_STATICS_onBPM
		GEODE_AS_STATIC_FUNCTION(onBPM) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDownload
		#define GEODE_STATICS_onDownload
		GEODE_AS_STATIC_FUNCTION(onDownload) 
	#endif

	#ifndef GEODE_STATICS_onFB
		#define GEODE_STATICS_onFB
		GEODE_AS_STATIC_FUNCTION(onFB) 
	#endif

	#ifndef GEODE_STATICS_onMenuMusic
		#define GEODE_STATICS_onMenuMusic
		GEODE_AS_STATIC_FUNCTION(onMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_onNG
		#define GEODE_STATICS_onNG
		GEODE_AS_STATIC_FUNCTION(onNG) 
	#endif

	#ifndef GEODE_STATICS_onPracticeMusic
		#define GEODE_STATICS_onPracticeMusic
		GEODE_AS_STATIC_FUNCTION(onPracticeMusic) 
	#endif

	#ifndef GEODE_STATICS_onYT
		#define GEODE_STATICS_onYT
		GEODE_AS_STATIC_FUNCTION(onYT) 
	#endif

	#ifndef GEODE_STATICS_showCustomMusicUnlockInfo
		#define GEODE_STATICS_showCustomMusicUnlockInfo
		GEODE_AS_STATIC_FUNCTION(showCustomMusicUnlockInfo) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoLayer> : ModifyBase<ModifyDerive<Der, SongInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, SongInfoLayer>>::ModifyBase;
		using Base = SongInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38aba0, Optcall, SongInfoLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38ae50, Membercall, SongInfoLayer, init, gd::string, gd::string, gd::string, gd::string, gd::string, gd::string, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38bd20, Membercall, SongInfoLayer, onMenuMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38bda0, Membercall, SongInfoLayer, onPracticeMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x38baa0, Membercall, SongInfoLayer, showCustomMusicUnlockInfo, )
		}
	};
}
