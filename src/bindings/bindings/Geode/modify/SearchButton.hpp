#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SearchButton.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, SearchButton> : ModifyBase<ModifyDerive<Der, SearchButton>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SearchButton>>;
		using ModifyBase<ModifyDerive<Der, SearchButton>>::ModifyBase;
		using Base = SearchButton;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x265230, Optcall, SearchButton, create, char const*, char const*, float, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x265320, Membercall, SearchButton, init, char const*, char const*, float, char const*)
		}
	};
}
