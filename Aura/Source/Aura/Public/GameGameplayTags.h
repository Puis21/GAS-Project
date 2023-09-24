// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * 
 * GameplayTags
 * 
 * Singleton containing native Gameplay Tags
 * 
 */
struct FGameGameplayTags
{

public:

	static const FGameGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	FGameplayTag Attributes_Secondary_Strenght;
	FGameplayTag Attributes_Secondary_Intelligence;
	FGameplayTag Attributes_Secondary_Resilience;
	FGameplayTag Attributes_Secondary_Vigor;

	FGameplayTag Attributes_Basic_Armor;
	FGameplayTag Attributes_Basic_ArmorPenetration;
	FGameplayTag Attributes_Basic_BlockChance;
	FGameplayTag Attributes_Basic_CriticalHitChance;
	FGameplayTag Attributes_Basic_CriticalHitDamage;
	FGameplayTag Attributes_Basic_CriticalHitResistance;
	FGameplayTag Attributes_Basic_HealthRegeneration;
	FGameplayTag Attributes_Basic_ManaRegeneration;
	FGameplayTag Attributes_Basic_MaxHealth;
	FGameplayTag Attributes_Basic_MaxMana;

	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;

protected:

private:

	static FGameGameplayTags GameplayTags;

 };