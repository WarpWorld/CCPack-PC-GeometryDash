#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicBrowserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, MusicBrowserDelegate> : ModifyBase<ModifyDerive<Der, MusicBrowserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicBrowserDelegate>>;
		using ModifyBase<ModifyDerive<Der, MusicBrowserDelegate>>::ModifyBase;
		using Base = MusicBrowserDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
