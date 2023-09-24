// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAssetManager.h"
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
}
	