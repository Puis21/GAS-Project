// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacterBase.h"

#include "Interaction/EnemyInterface.h"

#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemyCharacter : public APlayerCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	
	AEnemyCharacter();
	
	//Enemy Interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	//Combat Interface
	virtual int32 GetPlayerLevel() override;

protected:

	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;
};
