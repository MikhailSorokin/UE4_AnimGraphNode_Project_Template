// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGame.h"

class FDevProjectModule : public FDefaultGameModuleImpl {
#if WITH_EDITOR
	virtual void StartupModule() override {
		// Note the addition of AnimGraphRunTime      
		FModuleManager::Get().LoadModule(TEXT("BlueprintGraph"));
		FModuleManager::Get().LoadModule(TEXT("AnimGraph"));
		FModuleManager::Get().LoadModule(TEXT("AnimGraphRunTime"));
		FModuleManager::Get().LoadModule(TEXT("MyGameEditor"));
	}
#endif
};

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, MyGame, "MyGame" );