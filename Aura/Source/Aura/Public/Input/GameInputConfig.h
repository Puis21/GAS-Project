// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "GameplayTagContainer.h"

#include "GameInputConfig.generated.h"

USTRUCT(BlueprintType)
struct FGameInputAction
{
	GENERATED_BODY();

	UPROPERTY(EditDefaultsOnly)
	const class UInputAction* InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag = FGameplayTag();
};
/**
 * 
 */
UCLASS()
class AURA_API UGameInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:

	const UInputAction* FindAbilityInputactionForTag(const FGameplayTag& InputTag, bool bLogNotFound = false) const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FGameInputAction> AbilityInputAction;
	
};
