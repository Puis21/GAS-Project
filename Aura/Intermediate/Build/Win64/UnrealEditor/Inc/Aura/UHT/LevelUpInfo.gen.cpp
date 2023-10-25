// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Data/LevelUpInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelUpInfo() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_ULevelUpInfo();
	AURA_API UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FGameLevelUpInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameLevelUpInfo;
class UScriptStruct* FGameLevelUpInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameLevelUpInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameLevelUpInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLevelUpInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("GameLevelUpInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameLevelUpInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FGameLevelUpInfo>()
{
	return FGameLevelUpInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelUpRequirement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributePointAward_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributePointAward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellPointAward_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpellPointAward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLevelUpInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_LevelUpRequirement_MetaData[] = {
		{ "Category", "GameLevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_LevelUpRequirement = { "LevelUpRequirement", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameLevelUpInfo, LevelUpRequirement), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_LevelUpRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_LevelUpRequirement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_AttributePointAward_MetaData[] = {
		{ "Category", "GameLevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_AttributePointAward = { "AttributePointAward", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameLevelUpInfo, AttributePointAward), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_AttributePointAward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_AttributePointAward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_SpellPointAward_MetaData[] = {
		{ "Category", "GameLevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_SpellPointAward = { "SpellPointAward", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameLevelUpInfo, SpellPointAward), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_SpellPointAward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_SpellPointAward_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_LevelUpRequirement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_AttributePointAward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewProp_SpellPointAward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"GameLevelUpInfo",
		sizeof(FGameLevelUpInfo),
		alignof(FGameLevelUpInfo),
		Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLevelUpInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameLevelUpInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameLevelUpInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameLevelUpInfo.InnerSingleton;
	}
	void ULevelUpInfo::StaticRegisterNativesULevelUpInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelUpInfo);
	UClass* Z_Construct_UClass_ULevelUpInfo_NoRegister()
	{
		return ULevelUpInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULevelUpInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelUpInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelUpInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelUpInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelUpInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Data/LevelUpInfo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_Inner = { "LevelUpInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameLevelUpInfo, METADATA_PARAMS(nullptr, 0) }; // 352199121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData[] = {
		{ "Category", "LevelUpInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/LevelUpInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation = { "LevelUpInformation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelUpInfo, LevelUpInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_MetaData)) }; // 352199121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelUpInfo_Statics::NewProp_LevelUpInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelUpInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelUpInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelUpInfo_Statics::ClassParams = {
		&ULevelUpInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelUpInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelUpInfo()
	{
		if (!Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton, Z_Construct_UClass_ULevelUpInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelUpInfo.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<ULevelUpInfo>()
	{
		return ULevelUpInfo::StaticClass();
	}
	ULevelUpInfo::ULevelUpInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelUpInfo);
	ULevelUpInfo::~ULevelUpInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo[] = {
		{ FGameLevelUpInfo::StaticStruct, Z_Construct_UScriptStruct_FGameLevelUpInfo_Statics::NewStructOps, TEXT("GameLevelUpInfo"), &Z_Registration_Info_UScriptStruct_GameLevelUpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameLevelUpInfo), 352199121U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelUpInfo, ULevelUpInfo::StaticClass, TEXT("ULevelUpInfo"), &Z_Registration_Info_UClass_ULevelUpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelUpInfo), 595029489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_3243341074(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_LevelUpInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
