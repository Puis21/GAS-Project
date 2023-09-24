// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/GameGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameGameplayAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UGameGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UGameGameplayAbility::StaticRegisterNativesUGameGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameGameplayAbility);
	UClass* Z_Construct_UClass_UGameGameplayAbility_NoRegister()
	{
		return UGameGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGameGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GameGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameGameplayAbility_Statics::ClassParams = {
		&UGameGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGameGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameGameplayAbility.OuterSingleton, Z_Construct_UClass_UGameGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameGameplayAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameGameplayAbility>()
	{
		return UGameGameplayAbility::StaticClass();
	}
	UGameGameplayAbility::UGameGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameGameplayAbility);
	UGameGameplayAbility::~UGameGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameGameplayAbility, UGameGameplayAbility::StaticClass, TEXT("UGameGameplayAbility"), &Z_Registration_Info_UClass_UGameGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameGameplayAbility), 1788795103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameGameplayAbility_h_1116308389(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
