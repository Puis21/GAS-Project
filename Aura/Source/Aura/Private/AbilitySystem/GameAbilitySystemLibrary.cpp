// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GameAbilitySystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Player/PlayerCharacterState.h"
#include "UI/HUD/GameHUD.h"
#include "UI/WidgetController/GameWidgetController.h"

UOverlayWidgetController* UGameAbilitySystemLibrary::GetOverlayWidgetController(const UObject* WorldContextObject)
{
	if (APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (AGameHUD* GameHUD = Cast<AGameHUD>(PC->GetHUD()))
		{
			APlayerCharacterState* PS = PC->GetPlayerState<APlayerCharacterState>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS= PS->GetAttributeSet();
			const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
			return GameHUD->GetOverlayWidgetController(WidgetControllerParams);
		}
	}

	return nullptr;
}

UAttributeMenuWidgetController* UGameAbilitySystemLibrary::GetAttributeMenuController(const UObject* WorldContextObject)
{
	if (APlayerController* PC = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (AGameHUD* GameHUD = Cast<AGameHUD>(PC->GetHUD()))
		{
			APlayerCharacterState* PS = PC->GetPlayerState<APlayerCharacterState>();
			UAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
			UAttributeSet* AS = PS->GetAttributeSet();
			const FWidgetControllerParams WidgetControllerParams(PC, PS, ASC, AS);
			return GameHUD->GetAttributeMenuWidgetController(WidgetControllerParams);
		}
	}

	return nullptr;
}
