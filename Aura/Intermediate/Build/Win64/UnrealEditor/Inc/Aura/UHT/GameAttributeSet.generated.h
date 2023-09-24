// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/GameAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef AURA_GameAttributeSet_generated_h
#error "GameAttributeSet.generated.h already included, missing '#pragma once' in GameAttributeSet.h"
#endif
#define AURA_GameAttributeSet_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ManaRegeneration); \
	DECLARE_FUNCTION(execOnRep_HealthRegeneration); \
	DECLARE_FUNCTION(execOnRep_CriticalHitResistance); \
	DECLARE_FUNCTION(execOnRep_CriticalHitDamage); \
	DECLARE_FUNCTION(execOnRep_CriticalHitChance); \
	DECLARE_FUNCTION(execOnRep_BlockChance); \
	DECLARE_FUNCTION(execOnRep_ArmorPenetration); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Vigor); \
	DECLARE_FUNCTION(execOnRep_Resilience); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ManaRegeneration); \
	DECLARE_FUNCTION(execOnRep_HealthRegeneration); \
	DECLARE_FUNCTION(execOnRep_CriticalHitResistance); \
	DECLARE_FUNCTION(execOnRep_CriticalHitDamage); \
	DECLARE_FUNCTION(execOnRep_CriticalHitChance); \
	DECLARE_FUNCTION(execOnRep_BlockChance); \
	DECLARE_FUNCTION(execOnRep_ArmorPenetration); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Vigor); \
	DECLARE_FUNCTION(execOnRep_Resilience); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameAttributeSet(); \
	friend struct Z_Construct_UClass_UGameAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGameAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UGameAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Armor=NETFIELD_REP_START, \
		ArmorPenetration, \
		BlockChance, \
		CriticalHitChance, \
		CriticalHitDamage, \
		CriticalHitResistance, \
		HealthRegeneration, \
		ManaRegeneration, \
		Strength, \
		Intelligence, \
		Resilience, \
		Vigor, \
		Health, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGameAttributeSet) \
public:


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUGameAttributeSet(); \
	friend struct Z_Construct_UClass_UGameAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGameAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UGameAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Armor=NETFIELD_REP_START, \
		ArmorPenetration, \
		BlockChance, \
		CriticalHitChance, \
		CriticalHitDamage, \
		CriticalHitResistance, \
		HealthRegeneration, \
		ManaRegeneration, \
		Strength, \
		Intelligence, \
		Resilience, \
		Vigor, \
		Health, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGameAttributeSet) \
public:


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAttributeSet(UGameAttributeSet&&); \
	NO_API UGameAttributeSet(const UGameAttributeSet&); \
public: \
	NO_API virtual ~UGameAttributeSet();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAttributeSet(UGameAttributeSet&&); \
	NO_API UGameAttributeSet(const UGameAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameAttributeSet) \
	NO_API virtual ~UGameAttributeSet();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_56_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_INCLASS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UGameAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
