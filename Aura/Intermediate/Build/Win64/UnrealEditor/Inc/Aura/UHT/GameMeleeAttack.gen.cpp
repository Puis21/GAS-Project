// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/GameMeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMeleeAttack() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameDamageGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UGameMeleeAttack();
	AURA_API UClass* Z_Construct_UClass_UGameMeleeAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UGameMeleeAttack::StaticRegisterNativesUGameMeleeAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameMeleeAttack);
	UClass* Z_Construct_UClass_UGameMeleeAttack_NoRegister()
	{
		return UGameMeleeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UGameMeleeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameMeleeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameDamageGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMeleeAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GameMeleeAttack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameMeleeAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameMeleeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameMeleeAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameMeleeAttack_Statics::ClassParams = {
		&UGameMeleeAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameMeleeAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMeleeAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameMeleeAttack()
	{
		if (!Z_Registration_Info_UClass_UGameMeleeAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameMeleeAttack.OuterSingleton, Z_Construct_UClass_UGameMeleeAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameMeleeAttack.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameMeleeAttack>()
	{
		return UGameMeleeAttack::StaticClass();
	}
	UGameMeleeAttack::UGameMeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMeleeAttack);
	UGameMeleeAttack::~UGameMeleeAttack() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameMeleeAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameMeleeAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameMeleeAttack, UGameMeleeAttack::StaticClass, TEXT("UGameMeleeAttack"), &Z_Registration_Info_UClass_UGameMeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameMeleeAttack), 2202549642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameMeleeAttack_h_691538068(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameMeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameMeleeAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
