// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include "AbilitySystem/GameAttributeSet.h"
#include "AbilitySystem/Data/AttributeInfo.h"
#include "GameGameplayTags.h"

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

}