// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GameAbilitySystemGlobals.h"
#include "GameAbilityTypes.h"


FGameplayEffectContext* UGameAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FGameGameplayEffectContext();
}