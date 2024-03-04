#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSongLayer.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCreateLines
		#define GEODE_STATICS_onCreateLines
		GEODE_AS_STATIC_FUNCTION(onCreateLines) 
	#endif

	#ifndef GEODE_STATICS_onMusicBrowser
		#define GEODE_STATICS_onMusicBrowser
		GEODE_AS_STATIC_FUNCTION(onMusicBrowser) 
	#endif

	#ifndef GEODE_STATICS_onNewgroundsBrowser
		#define GEODE_STATICS_onNewgroundsBrowser
		GEODE_AS_STATIC_FUNCTION(onNewgroundsBrowser) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSongBrowser
		#define GEODE_STATICS_onSongBrowser
		GEODE_AS_STATIC_FUNCTION(onSongBrowser) 
	#endif

	#ifndef GEODE_STATICS_showNewgroundsMessage
		#define GEODE_STATICS_showNewgroundsMessage
		GEODE_AS_STATIC_FUNCTION(showNewgroundsMessage) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_dropDownLayerWillClose
		#define GEODE_STATICS_dropDownLayerWillClose
		GEODE_AS_STATIC_FUNCTION(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_STATICS_musicBrowserClosed
		#define GEODE_STATICS_musicBrowserClosed
		GEODE_AS_STATIC_FUNCTION(musicBrowserClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSongLayer> : ModifyBase<ModifyDerive<Der, CustomSongLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSongLayer>>;
		using ModifyBase<ModifyDerive<Der, CustomSongLayer>>::ModifyBase;
		using Base = CustomSongLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
