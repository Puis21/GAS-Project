// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Data/AbilityInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityInfo() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAbilityInfo();
	AURA_API UClass* Z_Construct_UClass_UAbilityInfo_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FGameAbilityInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameAbilityInfo;
class UScriptStruct* FGameAbilityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameAbilityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameAbilityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameAbilityInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("GameAbilityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameAbilityInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FGameAbilityInfo>()
{
	return FGameAbilityInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameAbilityInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackgroundMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameAbilityInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Category", "GameAbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAbilityInfo, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_AbilityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_AbilityTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "GameAbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAbilityInfo, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_InputTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "GameAbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAbilityInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_BackgroundMaterial_MetaData[] = {
		{ "Category", "GameAbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_BackgroundMaterial = { "BackgroundMaterial", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAbilityInfo, BackgroundMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_BackgroundMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_BackgroundMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "GameAbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAbilityInfo, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_CooldownTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_CooldownTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_BackgroundMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewProp_CooldownTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"GameAbilityInfo",
		sizeof(FGameAbilityInfo),
		alignof(FGameAbilityInfo),
		Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameAbilityInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameAbilityInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameAbilityInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameAbilityInfo.InnerSingleton;
	}
	void UAbilityInfo::StaticRegisterNativesUAbilityInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityInfo);
	UClass* Z_Construct_UClass_UAbilityInfo_NoRegister()
	{
		return UAbilityInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AbilitySystem/Data/AbilityInfo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_Inner = { "AbilityInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameAbilityInfo, METADATA_PARAMS(nullptr, 0) }; // 966132362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_MetaData[] = {
		{ "Category", "AbilityInformation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AbilityInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation = { "AbilityInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityInfo, AbilityInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_MetaData)) }; // 966132362
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityInfo_Statics::NewProp_AbilityInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityInfo_Statics::ClassParams = {
		&UAbilityInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilityInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityInfo()
	{
		if (!Z_Registration_Info_UClass_UAbilityInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityInfo.OuterSingleton, Z_Construct_UClass_UAbilityInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityInfo.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAbilityInfo>()
	{
		return UAbilityInfo::StaticClass();
	}
	UAbilityInfo::UAbilityInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityInfo);
	UAbilityInfo::~UAbilityInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics::ScriptStructInfo[] = {
		{ FGameAbilityInfo::StaticStruct, Z_Construct_UScriptStruct_FGameAbilityInfo_Statics::NewStructOps, TEXT("GameAbilityInfo"), &Z_Registration_Info_UScriptStruct_GameAbilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameAbilityInfo), 966132362U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityInfo, UAbilityInfo::StaticClass, TEXT("UAbilityInfo"), &Z_Registration_Info_UClass_UAbilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityInfo), 2925129891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_1882916727(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AbilityInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
