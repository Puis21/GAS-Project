// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GameDamageGameplayAbility.h"
#include "GameProjectileSpell.generated.h"

class AGameProjectile;
class UGameplayEffect;
struct FGameplayTag;

UCLASS()
class AURA_API UGameProjectileSpell : public UGameDamageGameplayAbility
{
	GENERATED_BODY()
	
protected:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag, bool bOverridePitch = false, float PitchOverride = 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AGameProjectile> ProjectileClass;
};
