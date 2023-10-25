// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/GameDamageGameplayAbility.h"
#include "Aura/Public/Interaction/GameCombatInterface.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDamageGameplayAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameDamageGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UGameDamageGameplayAbility_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UGameGameplayAbility();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedMontage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameDamageGameplayAbility::execGetRandomTaggedMontageFromArray)
	{
		P_GET_TARRAY_REF(FTaggedMontage,Z_Param_Out_TaggedMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTaggedMontage*)Z_Param__Result=P_THIS->GetRandomTaggedMontageFromArray(Z_Param_Out_TaggedMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDamageGameplayAbility::execCauseDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CauseDamage(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void UGameDamageGameplayAbility::StaticRegisterNativesUGameDamageGameplayAbility()
	{
		UClass* Class = UGameDamageGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CauseDamage", &UGameDamageGameplayAbility::execCauseDamage },
			{ "GetRandomTaggedMontageFromArray", &UGameDamageGameplayAbility::execGetRandomTaggedMontageFromArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics
	{
		struct GameDamageGameplayAbility_eventCauseDamage_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameDamageGameplayAbility_eventCauseDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameDamageGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDamageGameplayAbility, nullptr, "CauseDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::GameDamageGameplayAbility_eventCauseDamage_Parms), Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics
	{
		struct GameDamageGameplayAbility_eventGetRandomTaggedMontageFromArray_Parms
		{
			TArray<FTaggedMontage> TaggedMontages;
			FTaggedMontage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaggedMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedMontages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages_Inner = { "TaggedMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(nullptr, 0) }; // 3019652357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages = { "TaggedMontages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameDamageGameplayAbility_eventGetRandomTaggedMontageFromArray_Parms, TaggedMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages_MetaData)) }; // 3019652357
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameDamageGameplayAbility_eventGetRandomTaggedMontageFromArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(nullptr, 0) }; // 3019652357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_TaggedMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameDamageGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDamageGameplayAbility, nullptr, "GetRandomTaggedMontageFromArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::GameDamageGameplayAbility_eventGetRandomTaggedMontageFromArray_Parms), Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameDamageGameplayAbility);
	UClass* Z_Construct_UClass_UGameDamageGameplayAbility_NoRegister()
	{
		return UGameDamageGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGameDamageGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTypes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamageTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameDamageGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameDamageGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameDamageGameplayAbility_CauseDamage, "CauseDamage" }, // 1508921088
		{ &Z_Construct_UFunction_UGameDamageGameplayAbility_GetRandomTaggedMontageFromArray, "GetRandomTaggedMontageFromArray" }, // 2708257238
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameDamageGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GameDamageGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameDamageGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "GameDamageGameplayAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameDamageGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameDamageGameplayAbility, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageEffectClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_ValueProp = { "DamageTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(nullptr, 0) }; // 1811381276
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_Key_KeyProp = { "DamageTypes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameDamageGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes = { "DamageTypes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameDamageGameplayAbility, DamageTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_MetaData)) }; // 1225434376 1811381276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameDamageGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDamageGameplayAbility_Statics::NewProp_DamageTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameDamageGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameDamageGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameDamageGameplayAbility_Statics::ClassParams = {
		&UGameDamageGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameDamageGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameDamageGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameDamageGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGameDamageGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameDamageGameplayAbility.OuterSingleton, Z_Construct_UClass_UGameDamageGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameDamageGameplayAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameDamageGameplayAbility>()
	{
		return UGameDamageGameplayAbility::StaticClass();
	}
	UGameDamageGameplayAbility::UGameDamageGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDamageGameplayAbility);
	UGameDamageGameplayAbility::~UGameDamageGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameDamageGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameDamageGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameDamageGameplayAbility, UGameDamageGameplayAbility::StaticClass, TEXT("UGameDamageGameplayAbility"), &Z_Registration_Info_UClass_UGameDamageGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameDamageGameplayAbility), 1461339787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameDamageGameplayAbility_h_363548561(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameDamageGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameDamageGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
