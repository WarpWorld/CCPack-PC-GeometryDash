#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, MusicDownloadDelegate> : ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadDelegate>>::ModifyBase;
		using Base = MusicDownloadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
