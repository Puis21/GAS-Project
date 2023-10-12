// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AI/BTService_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Attack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	AURA_API UClass* Z_Construct_UClass_UBTService_Attack();
	AURA_API UClass* Z_Construct_UClass_UBTService_Attack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UBTService_Attack::StaticRegisterNativesUBTService_Attack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_Attack);
	UClass* Z_Construct_UClass_UBTService_Attack_NoRegister()
	{
		return UBTService_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Attack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTService_Attack.h" },
		{ "ModuleRelativePath", "Public/AI/BTService_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Attack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Attack_Statics::ClassParams = {
		&UBTService_Attack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_Attack()
	{
		if (!Z_Registration_Info_UClass_UBTService_Attack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_Attack.OuterSingleton, Z_Construct_UClass_UBTService_Attack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_Attack.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UBTService_Attack>()
	{
		return UBTService_Attack::StaticClass();
	}
	UBTService_Attack::UBTService_Attack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Attack);
	UBTService_Attack::~UBTService_Attack() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AI_BTService_Attack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AI_BTService_Attack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_Attack, UBTService_Attack::StaticClass, TEXT("UBTService_Attack"), &Z_Registration_Info_UClass_UBTService_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_Attack), 2224383228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AI_BTService_Attack_h_2565806649(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AI_BTService_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AI_BTService_Attack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
