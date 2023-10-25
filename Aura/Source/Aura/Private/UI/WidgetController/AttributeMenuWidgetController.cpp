// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include "AbilitySystem/GameAttributeSet.h"
#include "AbilitySystem/Data/AttributeInfo.h"
#include "GameGameplayTags.h"
#include "Player/PlayerCharacterState.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"

void UAttributeMenuWidgetController::BindCallbacksToDependencies()
{
	UGameAttributeSet* AS = CastChecked<UGameAttributeSet>(AttributeSet);
	for (auto& Pair : AS->TagsToAttributes)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Pair.Value()).AddLambda(
			[this, Pair, AS](const FOnAttributeChangeData& Data)
			{
				FGameAttributeInfo Info = AttributeInfo->FindAttributeInfoForTag(Pair.Key);
				Info.AttributeValue = Pair.Value().GetNumericValue(AS);
				AttributeInfoDelegate.Broadcast(Info);

			}
		);
	}

	APlayerCharacterState* PlayerCharacterState = CastChecked<APlayerCharacterState>(PlayerState);
	PlayerCharacterState->OnAttributePointsChangedDelegate.AddLambda(
		[this](int32 Points)
		{
			AttributePointsChangedDelegate.Broadcast(Points);
		}
	);
}

void UAttributeMenuWidgetController::UpgradeAttribute(const FGameplayTag& AttributeTag)
{
	UGameAbilitySystemComponent* GameASC = CastChecked<UGameAbilitySystemComponent>(AbilitySystemComponent);
	GameASC->UpgradeAttribute(AttributeTag);
}

void UAttributeMenuWidgetController::BroadcastInitialValues()
{
	UGameAttributeSet* AS = CastChecked<UGameAttributeSet>(AttributeSet);
	//UE_LOG(LogTemp, Log, TEXT("ALO3123213"));
	check(AttributeInfo);

	for (auto& Pair : AS->TagsToAttributes)
	{
		FGameAttributeInfo Info = AttributeInfo->FindAttributeInfoForTag(Pair.Key);
		Info.AttributeValue = Pair.Value().GetNumericValue(AS);
		AttributeInfoDelegate.Broadcast(Info);
	}

	APlayerCharacterState* AuraPlayerState = CastChecked<APlayerCharacterState>(PlayerState);
	AttributePointsChangedDelegate.Broadcast(AuraPlayerState->GetAttributePoints());

}
