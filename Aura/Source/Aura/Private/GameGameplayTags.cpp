// Fill out your copyright notice in the Description page of Project Settings.


#include "GameGameplayTags.h"
#include "GameplayTagsManager.h"

FGameGameplayTags FGameGameplayTags::GameplayTags;

void FGameGameplayTags::InitializeNativeGameplayTags()
{
	/*
	* Secondary Attributes
	*/

	GameplayTags.Attributes_Secondary_Strenght = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Strenght"),
		FString("Increases Physical Dmg")
	);

	GameplayTags.Attributes_Secondary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Intelligence"),
		FString("Increases Magical Dmg")
	);

	GameplayTags.Attributes_Secondary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Resilience"),
		FString("Increases Armor and Armor Penetration")
	);

	GameplayTags.Attributes_Secondary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Vigor"),
		FString("Increases Health")
	);

	/*
	* Basic Attributes
	*/

	GameplayTags.Attributes_Basic_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
	 FName("Attributes.Basic.Armor"),
	 FString("Reduces Damage Taken, Improves Block Chance")
	 );

	GameplayTags.Attributes_Basic_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.ArmorPenetration"),
		FString("Ignores Percentage of enemy Armor, increases Critical Hit Chance")
	);

	GameplayTags.Attributes_Basic_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.BlockChance"),
		FString("Chance to cut incoming damage in half")
	);

	GameplayTags.Attributes_Basic_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.CriticalHitChance"),
		FString("Chance to double damage plus critical hit bonus")
	);

	GameplayTags.Attributes_Basic_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.CriticalHitDamage"),
		FString("Bonus damage added when a critical hit is scored")
	);

	GameplayTags.Attributes_Basic_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.CriticalHitResistance"),
		FString("Reduces Critical Hit Chance of attacking enemies")
	);

	GameplayTags.Attributes_Basic_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.HealthRegeneration"),
		FString("Amount of Health regenerated every 1 second")
	);

	GameplayTags.Attributes_Basic_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.ManaRegeneration"),
		FString("Amount of Mana regenerated every 1 second")
	);

	GameplayTags.Attributes_Basic_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.MaxHealth"),
		FString("Maximum amount of Health obtainable")
	);

	GameplayTags.Attributes_Basic_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Basic.MaxMana"),
		FString("Maximum amount of Mana obtainable")
	);

	/*
	* Input Tags
	*/

	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LMB"),
		FString("InputTag For LMB")
	);

	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.RMB"),
		FString("InputTag For RMB")
	);

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.1"),
		FString("InputTag For 1")
	);

	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.2"),
		FString("InputTag For 2")
	);

	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.2"),
		FString("InputTag For 2")
	);

	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.3"),
		FString("InputTag For 3")
	);

	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.4"),
		FString("InputTag For 4")
	);
}
