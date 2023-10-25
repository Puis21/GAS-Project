// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/GameSummonAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSummonAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UGameSummonAbility();
	AURA_API UClass* Z_Construct_UClass_UGameSummonAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameSummonAbility::execGetRandomMinionClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<APawn> *)Z_Param__Result=P_THIS->GetRandomMinionClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSummonAbility::execGetSpawnLocations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetSpawnLocations();
		P_NATIVE_END;
	}
	void UGameSummonAbility::StaticRegisterNativesUGameSummonAbility()
	{
		UClass* Class = UGameSummonAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomMinionClass", &UGameSummonAbility::execGetRandomMinionClass },
			{ "GetSpawnLocations", &UGameSummonAbility::execGetSpawnLocations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics
	{
		struct GameSummonAbility_eventGetRandomMinionClass_Parms
		{
			TSubclassOf<APawn>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSummonAbility_eventGetRandomMinionClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSummonAbility, nullptr, "GetRandomMinionClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::GameSummonAbility_eventGetRandomMinionClass_Parms), Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics
	{
		struct GameSummonAbility_eventGetSpawnLocations_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameSummonAbility_eventGetSpawnLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSummonAbility, nullptr, "GetSpawnLocations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::GameSummonAbility_eventGetSpawnLocations_Parms), Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSummonAbility);
	UClass* Z_Construct_UClass_UGameSummonAbility_NoRegister()
	{
		return UGameSummonAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGameSummonAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMinions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMinions;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MinionClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinionClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnSpread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSummonAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSummonAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSummonAbility_GetRandomMinionClass, "GetRandomMinionClass" }, // 814592063
		{ &Z_Construct_UFunction_UGameSummonAbility_GetSpawnLocations, "GetSpawnLocations" }, // 2703904411
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSummonAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GameSummonAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_NumMinions_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_NumMinions = { "NumMinions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSummonAbility, NumMinions), METADATA_PARAMS(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_NumMinions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_NumMinions_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses_Inner = { "MinionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses = { "MinionClasses", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSummonAbility, MinionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinSpawnDistance_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinSpawnDistance = { "MinSpawnDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSummonAbility, MinSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MaxSpawnDistance_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MaxSpawnDistance = { "MaxSpawnDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSummonAbility, MaxSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MaxSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MaxSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_SpawnSpread_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_SpawnSpread = { "SpawnSpread", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameSummonAbility, SpawnSpread), METADATA_PARAMS(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_SpawnSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_SpawnSpread_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSummonAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_NumMinions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinionClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MinSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_MaxSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSummonAbility_Statics::NewProp_SpawnSpread,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSummonAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSummonAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSummonAbility_Statics::ClassParams = {
		&UGameSummonAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSummonAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSummonAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSummonAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSummonAbility()
	{
		if (!Z_Registration_Info_UClass_UGameSummonAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSummonAbility.OuterSingleton, Z_Construct_UClass_UGameSummonAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSummonAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameSummonAbility>()
	{
		return UGameSummonAbility::StaticClass();
	}
	UGameSummonAbility::UGameSummonAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSummonAbility);
	UGameSummonAbility::~UGameSummonAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameSummonAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameSummonAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSummonAbility, UGameSummonAbility::StaticClass, TEXT("UGameSummonAbility"), &Z_Registration_Info_UClass_UGameSummonAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSummonAbility), 537695568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameSummonAbility_h_1063386438(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameSummonAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameSummonAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
