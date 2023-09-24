// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/GameCombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCombatInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameCombatInterface();
	AURA_API UClass* Z_Construct_UClass_UGameCombatInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UGameCombatInterface::StaticRegisterNativesUGameCombatInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameCombatInterface);
	UClass* Z_Construct_UClass_UGameCombatInterface_NoRegister()
	{
		return UGameCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameCombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameCombatInterface_Statics::ClassParams = {
		&UGameCombatInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameCombatInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameCombatInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UGameCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameCombatInterface.OuterSingleton, Z_Construct_UClass_UGameCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameCombatInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameCombatInterface>()
	{
		return UGameCombatInterface::StaticClass();
	}
	UGameCombatInterface::UGameCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameCombatInterface);
	UGameCombatInterface::~UGameCombatInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameCombatInterface, UGameCombatInterface::StaticClass, TEXT("UGameCombatInterface"), &Z_Registration_Info_UClass_UGameCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameCombatInterface), 1686324775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_1471580398(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
