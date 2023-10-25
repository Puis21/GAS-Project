// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/GameAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAttributeSet() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameAttributeSet();
	AURA_API UClass* Z_Construct_UClass_UGameAttributeSet_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FEffectProperties>()
{
	return FEffectProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"EffectProperties",
		sizeof(FEffectProperties),
		alignof(FEffectProperties),
		Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_ManaRegeneration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegeneration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegeneration(Z_Param_Out_OldManaRegeneration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_HealthRegeneration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegeneration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegeneration(Z_Param_Out_OldHealthRegeneration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_CriticalHitResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitResistance(Z_Param_Out_OldCriticalHitResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_CriticalHitDamage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitDamage(Z_Param_Out_OldCriticalHitDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_CriticalHitChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitChance(Z_Param_Out_OldCriticalHitChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_BlockChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBlockChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockChance(Z_Param_Out_OldBlockChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_ArmorPenetration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmorPenetration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ArmorPenetration(Z_Param_Out_OldArmorPenetration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Vigor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldVigor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Vigor(Z_Param_Out_OldVigor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Resilience)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldResilience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Resilience(Z_Param_Out_OldResilience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Intelligence)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldIntelligence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Intelligence(Z_Param_Out_OldIntelligence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Strength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Strength(Z_Param_Out_OldStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_PhysicalResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPhysicalResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PhysicalResistance(Z_Param_Out_OldPhysicalResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_ArcaneResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArcaneResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ArcaneResistance(Z_Param_Out_OldArcaneResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_LightningResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLightningResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LightningResistance(Z_Param_Out_OldLightningResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_FireResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFireResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FireResistance(Z_Param_Out_OldFireResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UGameAttributeSet::StaticRegisterNativesUGameAttributeSet()
	{
		UClass* Class = UGameAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ArcaneResistance", &UGameAttributeSet::execOnRep_ArcaneResistance },
			{ "OnRep_Armor", &UGameAttributeSet::execOnRep_Armor },
			{ "OnRep_ArmorPenetration", &UGameAttributeSet::execOnRep_ArmorPenetration },
			{ "OnRep_BlockChance", &UGameAttributeSet::execOnRep_BlockChance },
			{ "OnRep_CriticalHitChance", &UGameAttributeSet::execOnRep_CriticalHitChance },
			{ "OnRep_CriticalHitDamage", &UGameAttributeSet::execOnRep_CriticalHitDamage },
			{ "OnRep_CriticalHitResistance", &UGameAttributeSet::execOnRep_CriticalHitResistance },
			{ "OnRep_FireResistance", &UGameAttributeSet::execOnRep_FireResistance },
			{ "OnRep_Health", &UGameAttributeSet::execOnRep_Health },
			{ "OnRep_HealthRegeneration", &UGameAttributeSet::execOnRep_HealthRegeneration },
			{ "OnRep_Intelligence", &UGameAttributeSet::execOnRep_Intelligence },
			{ "OnRep_LightningResistance", &UGameAttributeSet::execOnRep_LightningResistance },
			{ "OnRep_Mana", &UGameAttributeSet::execOnRep_Mana },
			{ "OnRep_ManaRegeneration", &UGameAttributeSet::execOnRep_ManaRegeneration },
			{ "OnRep_MaxHealth", &UGameAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UGameAttributeSet::execOnRep_MaxMana },
			{ "OnRep_PhysicalResistance", &UGameAttributeSet::execOnRep_PhysicalResistance },
			{ "OnRep_Resilience", &UGameAttributeSet::execOnRep_Resilience },
			{ "OnRep_Strength", &UGameAttributeSet::execOnRep_Strength },
			{ "OnRep_Vigor", &UGameAttributeSet::execOnRep_Vigor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics
	{
		struct GameAttributeSet_eventOnRep_ArcaneResistance_Parms
		{
			FGameplayAttributeData OldArcaneResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArcaneResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArcaneResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::NewProp_OldArcaneResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::NewProp_OldArcaneResistance = { "OldArcaneResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_ArcaneResistance_Parms, OldArcaneResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::NewProp_OldArcaneResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::NewProp_OldArcaneResistance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::NewProp_OldArcaneResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_ArcaneResistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::GameAttributeSet_eventOnRep_ArcaneResistance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics
	{
		struct GameAttributeSet_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::GameAttributeSet_eventOnRep_Armor_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics
	{
		struct GameAttributeSet_eventOnRep_ArmorPenetration_Parms
		{
			FGameplayAttributeData OldArmorPenetration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmorPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmorPenetration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration = { "OldArmorPenetration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_ArmorPenetration_Parms, OldArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_ArmorPenetration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::GameAttributeSet_eventOnRep_ArmorPenetration_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics
	{
		struct GameAttributeSet_eventOnRep_BlockChance_Parms
		{
			FGameplayAttributeData OldBlockChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldBlockChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldBlockChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance = { "OldBlockChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_BlockChance_Parms, OldBlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::GameAttributeSet_eventOnRep_BlockChance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics
	{
		struct GameAttributeSet_eventOnRep_CriticalHitChance_Parms
		{
			FGameplayAttributeData OldCriticalHitChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance = { "OldCriticalHitChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_CriticalHitChance_Parms, OldCriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldCriticalHitChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_CriticalHitChance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::GameAttributeSet_eventOnRep_CriticalHitChance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics
	{
		struct GameAttributeSet_eventOnRep_CriticalHitDamage_Parms
		{
			FGameplayAttributeData OldCriticalHitDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage = { "OldCriticalHitDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_CriticalHitDamage_Parms, OldCriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::NewProp_OldCriticalHitDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_CriticalHitDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::GameAttributeSet_eventOnRep_CriticalHitDamage_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics
	{
		struct GameAttributeSet_eventOnRep_CriticalHitResistance_Parms
		{
			FGameplayAttributeData OldCriticalHitResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance = { "OldCriticalHitResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_CriticalHitResistance_Parms, OldCriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_CriticalHitResistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::GameAttributeSet_eventOnRep_CriticalHitResistance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics
	{
		struct GameAttributeSet_eventOnRep_FireResistance_Parms
		{
			FGameplayAttributeData OldFireResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldFireResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldFireResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance = { "OldFireResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_FireResistance_Parms, OldFireResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::NewProp_OldFireResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_FireResistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::GameAttributeSet_eventOnRep_FireResistance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics
	{
		struct GameAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::GameAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics
	{
		struct GameAttributeSet_eventOnRep_HealthRegeneration_Parms
		{
			FGameplayAttributeData OldHealthRegeneration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration = { "OldHealthRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_HealthRegeneration_Parms, OldHealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::NewProp_OldHealthRegeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_HealthRegeneration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::GameAttributeSet_eventOnRep_HealthRegeneration_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics
	{
		struct GameAttributeSet_eventOnRep_Intelligence_Parms
		{
			FGameplayAttributeData OldIntelligence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldIntelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldIntelligence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence = { "OldIntelligence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Intelligence_Parms, OldIntelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Intelligence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::GameAttributeSet_eventOnRep_Intelligence_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics
	{
		struct GameAttributeSet_eventOnRep_LightningResistance_Parms
		{
			FGameplayAttributeData OldLightningResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldLightningResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLightningResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance = { "OldLightningResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_LightningResistance_Parms, OldLightningResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::NewProp_OldLightningResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_LightningResistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::GameAttributeSet_eventOnRep_LightningResistance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics
	{
		struct GameAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::GameAttributeSet_eventOnRep_Mana_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics
	{
		struct GameAttributeSet_eventOnRep_ManaRegeneration_Parms
		{
			FGameplayAttributeData OldManaRegeneration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegeneration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration = { "OldManaRegeneration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_ManaRegeneration_Parms, OldManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::NewProp_OldManaRegeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_ManaRegeneration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::GameAttributeSet_eventOnRep_ManaRegeneration_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics
	{
		struct GameAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::GameAttributeSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics
	{
		struct GameAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::GameAttributeSet_eventOnRep_MaxMana_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics
	{
		struct GameAttributeSet_eventOnRep_PhysicalResistance_Parms
		{
			FGameplayAttributeData OldPhysicalResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPhysicalResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPhysicalResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::NewProp_OldPhysicalResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::NewProp_OldPhysicalResistance = { "OldPhysicalResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_PhysicalResistance_Parms, OldPhysicalResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::NewProp_OldPhysicalResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::NewProp_OldPhysicalResistance_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::NewProp_OldPhysicalResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_PhysicalResistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::GameAttributeSet_eventOnRep_PhysicalResistance_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics
	{
		struct GameAttributeSet_eventOnRep_Resilience_Parms
		{
			FGameplayAttributeData OldResilience;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldResilience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldResilience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience = { "OldResilience", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Resilience_Parms, OldResilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::NewProp_OldResilience,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Resilience", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::GameAttributeSet_eventOnRep_Resilience_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics
	{
		struct GameAttributeSet_eventOnRep_Strength_Parms
		{
			FGameplayAttributeData OldStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength = { "OldStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Strength_Parms, OldStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::GameAttributeSet_eventOnRep_Strength_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics
	{
		struct GameAttributeSet_eventOnRep_Vigor_Parms
		{
			FGameplayAttributeData OldVigor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldVigor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldVigor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor = { "OldVigor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAttributeSet_eventOnRep_Vigor_Parms, OldVigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::NewProp_OldVigor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "OnRep_Vigor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::GameAttributeSet_eventOnRep_Vigor_Parms), Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAttributeSet);
	UClass* Z_Construct_UClass_UGameAttributeSet_NoRegister()
	{
		return UGameAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGameAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vigor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightningResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcaneResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcaneResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomingXP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingXP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_ArcaneResistance, "OnRep_ArcaneResistance" }, // 2691434981
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 3339845675
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_ArmorPenetration, "OnRep_ArmorPenetration" }, // 893447896
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 2893426450
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitChance, "OnRep_CriticalHitChance" }, // 1378847180
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitDamage, "OnRep_CriticalHitDamage" }, // 102524587
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_CriticalHitResistance, "OnRep_CriticalHitResistance" }, // 1050118048
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_FireResistance, "OnRep_FireResistance" }, // 2724781619
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Health, "OnRep_Health" }, // 4147260753
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_HealthRegeneration, "OnRep_HealthRegeneration" }, // 557713788
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 417691877
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_LightningResistance, "OnRep_LightningResistance" }, // 779914128
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 1848597734
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_ManaRegeneration, "OnRep_ManaRegeneration" }, // 3474669466
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3022758941
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 4093661663
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_PhysicalResistance, "OnRep_PhysicalResistance" }, // 2759056995
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Resilience, "OnRep_Resilience" }, // 2527418741
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 1427296307
		{ &Z_Construct_UFunction_UGameAttributeSet_OnRep_Vigor, "OnRep_Vigor" }, // 1177950679
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/GameAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "Comment", "/*\n\x09 * Basic Attributes\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
		{ "ToolTip", "* Basic Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Armor_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", "OnRep_ArmorPenetration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, ArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArmorPenetration_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_BlockChance_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_BlockChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_BlockChance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitChance_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitChance = { "CriticalHitChance", "OnRep_CriticalHitChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, CriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitChance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitDamage_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitDamage = { "CriticalHitDamage", "OnRep_CriticalHitDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, CriticalHitDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitDamage_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitResistance = { "CriticalHitResistance", "OnRep_CriticalHitResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, CriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_HealthRegeneration_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_HealthRegeneration = { "HealthRegeneration", "OnRep_HealthRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, HealthRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_HealthRegeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_HealthRegeneration_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ManaRegeneration_MetaData[] = {
		{ "Category", "Basic Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ManaRegeneration = { "ManaRegeneration", "OnRep_ManaRegeneration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, ManaRegeneration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ManaRegeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ManaRegeneration_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "Comment", "/*\n\x09 * Secondary Attributes\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
		{ "ToolTip", "* Secondary Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Strength_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Intelligence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Intelligence_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Resilience_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Resilience = { "Resilience", "OnRep_Resilience", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Resilience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Resilience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Resilience_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Vigor_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Vigor = { "Vigor", "OnRep_Vigor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Vigor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Vigor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Vigor_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_FireResistance_MetaData[] = {
		{ "Category", "Resistance Attributes" },
		{ "Comment", "/*\n\x09* Resistance Attributes\n\x09*/" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
		{ "ToolTip", "* Resistance Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_FireResistance = { "FireResistance", "OnRep_FireResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, FireResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_FireResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_FireResistance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_LightningResistance_MetaData[] = {
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_LightningResistance = { "LightningResistance", "OnRep_LightningResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, LightningResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_LightningResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_LightningResistance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArcaneResistance_MetaData[] = {
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArcaneResistance = { "ArcaneResistance", "OnRep_ArcaneResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, ArcaneResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArcaneResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArcaneResistance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_PhysicalResistance_MetaData[] = {
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_PhysicalResistance = { "PhysicalResistance", "OnRep_PhysicalResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, PhysicalResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_PhysicalResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_PhysicalResistance_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "Comment", "/*\n\x09 * Primary Attributes\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
		{ "ToolTip", "* Primary Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Mana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Primary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxMana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingDamage_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "Comment", "/*\n\x09* Meta Attributes\n\x09*/" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
		{ "ToolTip", "* Meta Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, IncomingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingDamage_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingXP_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingXP = { "IncomingXP", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameAttributeSet, IncomingXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingXP_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArmorPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_BlockChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_CriticalHitResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_HealthRegeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ManaRegeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Intelligence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Resilience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Vigor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_FireResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_LightningResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_ArcaneResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_PhysicalResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAttributeSet_Statics::NewProp_IncomingXP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAttributeSet_Statics::ClassParams = {
		&UGameAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton, Z_Construct_UClass_UGameAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameAttributeSet>()
	{
		return UGameAttributeSet::StaticClass();
	}

	void UGameAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_ArmorPenetration(TEXT("ArmorPenetration"));
		static const FName Name_BlockChance(TEXT("BlockChance"));
		static const FName Name_CriticalHitChance(TEXT("CriticalHitChance"));
		static const FName Name_CriticalHitDamage(TEXT("CriticalHitDamage"));
		static const FName Name_CriticalHitResistance(TEXT("CriticalHitResistance"));
		static const FName Name_HealthRegeneration(TEXT("HealthRegeneration"));
		static const FName Name_ManaRegeneration(TEXT("ManaRegeneration"));
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_Intelligence(TEXT("Intelligence"));
		static const FName Name_Resilience(TEXT("Resilience"));
		static const FName Name_Vigor(TEXT("Vigor"));
		static const FName Name_FireResistance(TEXT("FireResistance"));
		static const FName Name_LightningResistance(TEXT("LightningResistance"));
		static const FName Name_ArcaneResistance(TEXT("ArcaneResistance"));
		static const FName Name_PhysicalResistance(TEXT("PhysicalResistance"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));

		const bool bIsValid = true
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_ArmorPenetration == ClassReps[(int32)ENetFields_Private::ArmorPenetration].Property->GetFName()
			&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
			&& Name_CriticalHitChance == ClassReps[(int32)ENetFields_Private::CriticalHitChance].Property->GetFName()
			&& Name_CriticalHitDamage == ClassReps[(int32)ENetFields_Private::CriticalHitDamage].Property->GetFName()
			&& Name_CriticalHitResistance == ClassReps[(int32)ENetFields_Private::CriticalHitResistance].Property->GetFName()
			&& Name_HealthRegeneration == ClassReps[(int32)ENetFields_Private::HealthRegeneration].Property->GetFName()
			&& Name_ManaRegeneration == ClassReps[(int32)ENetFields_Private::ManaRegeneration].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
			&& Name_Resilience == ClassReps[(int32)ENetFields_Private::Resilience].Property->GetFName()
			&& Name_Vigor == ClassReps[(int32)ENetFields_Private::Vigor].Property->GetFName()
			&& Name_FireResistance == ClassReps[(int32)ENetFields_Private::FireResistance].Property->GetFName()
			&& Name_LightningResistance == ClassReps[(int32)ENetFields_Private::LightningResistance].Property->GetFName()
			&& Name_ArcaneResistance == ClassReps[(int32)ENetFields_Private::ArcaneResistance].Property->GetFName()
			&& Name_PhysicalResistance == ClassReps[(int32)ENetFields_Private::PhysicalResistance].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAttributeSet);
	UGameAttributeSet::~UGameAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics::ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 585162877U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameAttributeSet, UGameAttributeSet::StaticClass, TEXT("UGameAttributeSet"), &Z_Registration_Info_UClass_UGameAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAttributeSet), 994976901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_710531761(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAttributeSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
