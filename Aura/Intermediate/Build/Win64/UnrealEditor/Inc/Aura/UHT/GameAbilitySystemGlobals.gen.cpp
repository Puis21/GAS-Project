// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/GameAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAbilitySystemGlobals() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemGlobals();
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemGlobals_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UGameAbilitySystemGlobals::StaticRegisterNativesUGameAbilitySystemGlobals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAbilitySystemGlobals);
	UClass* Z_Construct_UClass_UGameAbilitySystemGlobals_NoRegister()
	{
		return UGameAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_UGameAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/GameAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemGlobals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAbilitySystemGlobals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::ClassParams = {
		&UGameAbilitySystemGlobals::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAbilitySystemGlobals()
	{
		if (!Z_Registration_Info_UClass_UGameAbilitySystemGlobals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UGameAbilitySystemGlobals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameAbilitySystemGlobals.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameAbilitySystemGlobals>()
	{
		return UGameAbilitySystemGlobals::StaticClass();
	}
	UGameAbilitySystemGlobals::UGameAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAbilitySystemGlobals);
	UGameAbilitySystemGlobals::~UGameAbilitySystemGlobals() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemGlobals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemGlobals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameAbilitySystemGlobals, UGameAbilitySystemGlobals::StaticClass, TEXT("UGameAbilitySystemGlobals"), &Z_Registration_Info_UClass_UGameAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAbilitySystemGlobals), 1046762267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemGlobals_h_1215293650(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemGlobals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
