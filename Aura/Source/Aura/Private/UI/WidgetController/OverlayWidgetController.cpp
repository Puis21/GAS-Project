// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem/GameAttributeSet.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UGameAttributeSet* GameAttributeset = CastChecked<UGameAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(GameAttributeset->GetHealth());
	OnMaxHealthChanged.Broadcast(GameAttributeset->GetMaxHealth());
	OnManaChanged.Broadcast(GameAttributeset->GetMana());
	OnMaxManaChanged.Broadcast(GameAttributeset->GetMaxMana());

}

void UOverlayWidgetController::BindCallbacksToDependencies()
{
	const UGameAttributeSet* GameAttributeset = CastChecked<UGameAttributeSet>(AttributeSet);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(GameAttributeset->GetHealthAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			OnHealthChanged.Broadcast(Data.NewValue);
		}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(GameAttributeset->GetMaxHealthAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			OnMaxHealthChanged.Broadcast(Data.NewValue);
		}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(GameAttributeset->GetManaAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			OnManaChanged.Broadcast(Data.NewValue);
		}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(GameAttributeset->GetMaxManaAttribute()).AddLambda(
		[this](const FOnAttributeChangeData& Data)
		{
			OnMaxManaChanged.Broadcast(Data.NewValue);
		}
	);


	Cast<UGameAbilitySystemComponent>(AbilitySystemComponent)->EffectAssetTags.AddLambda(
		[this](const FGameplayTagContainer& AssetTags)
		{
			for (const FGameplayTag& Tag : AssetTags)
			{
				FGameplayTag MessageTag = FGameplayTag::RequestGameplayTag(FName("Message"));
				if (Tag.MatchesTag(MessageTag))
				{
					const FUIWidgetRow* Row = GetDataTableRowByTag<FUIWidgetRow>(MessageWidgetDataTable, Tag);
					MessageWidgetRowDelegate.Broadcast(*Row);
				}
			}
		}
	);
}