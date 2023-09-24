// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/PlayerCharacterState.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "Player/PlayerCharacterController.h"
#include "UI/HUD/GameHUD.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"


APlayerCharacter::APlayerCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Init Ability Actor Info
	InitAbilityActorInfo();
	AddCharacterAbilities();
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//Init Ability Actor Info
	InitAbilityActorInfo();
}

int32 APlayerCharacter::GetPlayerLevel()
{
	const APlayerCharacterState* PlayerCharacterState = GetPlayerState<APlayerCharacterState>();
	check(PlayerCharacterState);

	return PlayerCharacterState->GetPlayerLevel();
}

void APlayerCharacter::InitAbilityActorInfo()
{
	APlayerCharacterState* PlayerCharacterState = GetPlayerState<APlayerCharacterState>();
	check(PlayerCharacterState);
	PlayerCharacterState->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerCharacterState, this);
	Cast<UGameAbilitySystemComponent>(PlayerCharacterState->GetAbilitySystemComponent())->AbilityActorInfoSet();
	AbilitySystemComponent = PlayerCharacterState->GetAbilitySystemComponent();
	AttributeSet = PlayerCharacterState->GetAttributeSet();

	if (APlayerCharacterController* PlayerCharacterController = Cast<APlayerCharacterController>(GetController()))
	{
		if (AGameHUD* GameHUD = Cast<AGameHUD>(PlayerCharacterController->GetHUD()))
		{
			GameHUD->InitOverlay(PlayerCharacterController, PlayerCharacterState, AbilitySystemComponent, AttributeSet);
		}
	}
	
	InitializeDefaultAttributes();

}
