// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAssetManager.h"
#include "AbilitySystemGlobals.h"
#include "GameGameplayTags.h"

UGameAssetManager& UGameAssetManager::Get()
{
	check(GEngine);

	UGameAssetManager* GameAssetManager = Cast<UGameAssetManager>(GEngine->AssetManager);
	return *GameAssetManager;
}

void UGameAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FGameGameplayTags::InitializeNativeGameplayTags();

	// This is required to use Target Data!
	UAbilitySystemGlobals::Get().InitGlobalData();
}
	