// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/GameWidgetController.h"

#include "GameplayEffectTypes.h"

#include "OverlayWidgetController.generated.h"

struct FGameAbilityInfo;
USTRUCT(BlueprintType)
struct FUIWidgetRow : public FTableRowBase
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FGameplayTag MessageTag = FGameplayTag();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FText Message = FText();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TSubclassOf<class UGameUserWidget> MessageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UTexture2D* Image = nullptr;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeChangedSignature, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessageWidgetRowSignature, FUIWidgetRow, Row);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityInfoSignature, const FGameAbilityInfo&, Info);

class UAbilityInfo;
class UGameAbilitySystemComponent;

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UGameWidgetController
{
	GENERATED_BODY()


public:

	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnAttributeChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnAttributeChangedSignature OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnAttributeChangedSignature OnManaChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes")
	FOnAttributeChangedSignature OnMaxManaChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Messages")
	FMessageWidgetRowSignature MessageWidgetRowDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Messages")
	FAbilityInfoSignature AbilityInfoDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|XP")
	FOnAttributeChangedSignature OnXPPercentChangedDelegate;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Level")
	FOnPlayerStatChangedSignature OnPlayerLevelChangedDelegate;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widget Data ")
	TObjectPtr<UDataTable> MessageWidgetDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widget Data")
	TObjectPtr<UAbilityInfo> AbilityInfo;

	template<typename T>
	T* GetDataTableRowByTag(UDataTable* DataTable, const FGameplayTag& Tag)
	{
		return DataTable->FindRow<T>(Tag.GetTagName(), TEXT(""));
	}

	void OnInitializeStartupAbilities(UGameAbilitySystemComponent* AuraAbilitySystemComponent);

	void OnXPChanged(int32 NewXP) const;
};
