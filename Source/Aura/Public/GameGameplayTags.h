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

	FGameplayTag Attributes_Resistance_Fire;
	FGameplayTag Attributes_Resistance_Lightning;
	FGameplayTag Attributes_Resistance_Arcane;
	FGameplayTag Attributes_Resistance_Physical;

	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;

	FGameplayTag Damage;
	FGameplayTag Damage_Fire;
	FGameplayTag Damage_Lightning;
	FGameplayTag Damage_Arcane;
	FGameplayTag Damage_Physical;

	FGameplayTag Attributes_Meta_IncomingXP;

	FGameplayTag Abilities_Attack;
	FGameplayTag Abilities_Summon;

	FGameplayTag Abilities_Fire_FireBolt;

	FGameplayTag Cooldown_Fire_FireBolt;

	FGameplayTag CombatSocket_Weapon;
	FGameplayTag CombatSocket_RightHand;
	FGameplayTag CombatSocket_LeftHand;
	FGameplayTag CombatSocket_Tail;

	FGameplayTag Montage_Attack_1;
	FGameplayTag Montage_Attack_2;
	FGameplayTag Montage_Attack_3;
	FGameplayTag Montage_Attack_4;

	TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;

	FGameplayTag Effects_HitReact;

private:

	static FGameGameplayTags GameplayTags;

 };