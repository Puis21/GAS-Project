// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerCharacterState.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "AbilitySystem/GameAttributeSet.h"
#include "Net/UnrealNetWork.h"

APlayerCharacterState::APlayerCharacterState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UGameAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UGameAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.f;
}

void APlayerCharacterState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerCharacterState, Level);
}

UAbilitySystemComponent* APlayerCharacterState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void APlayerCharacterState::OnRep_Level(int32 OldLevel)
{

}
