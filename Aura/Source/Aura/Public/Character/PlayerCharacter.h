// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacterBase.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API APlayerCharacter : public APlayerCharacterBase
{
	GENERATED_BODY()
	
public:

	APlayerCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	//Combat Interface
	virtual int32 GetPlayerLevel() override;

private:

	void InitAbilityActorInfo() override;

};
