// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Data/AttributeInfo.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeInfo() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeInfo();
	AURA_API UClass* Z_Construct_UClass_UAttributeInfo_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FGameAttributeInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameAttributeInfo;
class UScriptStruct* FGameAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameAttributeInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("GameAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameAttributeInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FGameAttributeInfo>()
{
	return FGameAttributeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameAttributeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameAttributeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "Category", "GameAttributeInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAttributeInfo, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "GameAttributeInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAttributeInfo, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeDescription_MetaData[] = {
		{ "Category", "GameAttributeInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeDescription = { "AttributeDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAttributeInfo, AttributeDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "GameAttributeInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameAttributeInfo, AttributeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewProp_AttributeValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"GameAttributeInfo",
		sizeof(FGameAttributeInfo),
		alignof(FGameAttributeInfo),
		Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameAttributeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameAttributeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameAttributeInfo.InnerSingleton;
	}
	void UAttributeInfo::StaticRegisterNativesUAttributeInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeInfo);
	UClass* Z_Construct_UClass_UAttributeInfo_NoRegister()
	{
		return UAttributeInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Data/AttributeInfo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_Inner = { "AttributeInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 3004416095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData[] = {
		{ "Category", "AttributeInfo" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/AttributeInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation = { "AttributeInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeInfo, AttributeInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_MetaData)) }; // 3004416095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeInfo_Statics::NewProp_AttributeInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeInfo_Statics::ClassParams = {
		&UAttributeInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeInfo()
	{
		if (!Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton, Z_Construct_UClass_UAttributeInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeInfo.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAttributeInfo>()
	{
		return UAttributeInfo::StaticClass();
	}
	UAttributeInfo::UAttributeInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeInfo);
	UAttributeInfo::~UAttributeInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo[] = {
		{ FGameAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FGameAttributeInfo_Statics::NewStructOps, TEXT("GameAttributeInfo"), &Z_Registration_Info_UScriptStruct_GameAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameAttributeInfo), 3004416095U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeInfo, UAttributeInfo::StaticClass, TEXT("UAttributeInfo"), &Z_Registration_Info_UClass_UAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeInfo), 2248096681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_1960537236(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_AttributeInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
