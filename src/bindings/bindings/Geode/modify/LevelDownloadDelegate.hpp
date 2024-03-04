#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    

	template<class Der>
	struct ModifyDerive<Der, LevelDownloadDelegate> : ModifyBase<ModifyDerive<Der, LevelDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelDownloadDelegate>>::ModifyBase;
		using Base = LevelDownloadDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
