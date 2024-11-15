// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameAIController.generated.h"

class UBlackboardComponent;
class UBehaviorTreeComponent;
/**
 * 
 */
UCLASS()
class AURA_API AGameAIController : public AAIController
{
	GENERATED_BODY()

public:

	AGameAIController();

protected:

	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;
};
