// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Input/GameInputConfig.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInputConfig() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameInputConfig();
	AURA_API UClass* Z_Construct_UClass_UGameInputConfig_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FGameInputAction();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameInputAction;
class UScriptStruct* FGameInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameInputAction, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("GameInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_GameInputAction.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FGameInputAction>()
{
	return FGameInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/GameInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "GameInputAction" },
		{ "ModuleRelativePath", "Public/Input/GameInputConfig.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Category", "GameInputAction" },
		{ "ModuleRelativePath", "Public/Input/GameInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInputAction_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"GameInputAction",
		sizeof(FGameInputAction),
		alignof(FGameInputAction),
		Z_Construct_UScriptStruct_FGameInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_GameInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameInputAction.InnerSingleton, Z_Construct_UScriptStruct_FGameInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameInputAction.InnerSingleton;
	}
	void UGameInputConfig::StaticRegisterNativesUGameInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInputConfig);
	UClass* Z_Construct_UClass_UGameInputConfig_NoRegister()
	{
		return UGameInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGameInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputAction_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInputConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Input/GameInputConfig.h" },
		{ "ModuleRelativePath", "Public/Input/GameInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction_Inner = { "AbilityInputAction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameInputAction, METADATA_PARAMS(nullptr, 0) }; // 1045723830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction_MetaData[] = {
		{ "Category", "GameInputConfig" },
		{ "ModuleRelativePath", "Public/Input/GameInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction = { "AbilityInputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameInputConfig, AbilityInputAction), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction_MetaData)) }; // 1045723830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInputConfig_Statics::NewProp_AbilityInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInputConfig_Statics::ClassParams = {
		&UGameInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameInputConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInputConfig()
	{
		if (!Z_Registration_Info_UClass_UGameInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInputConfig.OuterSingleton, Z_Construct_UClass_UGameInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInputConfig.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameInputConfig>()
	{
		return UGameInputConfig::StaticClass();
	}
	UGameInputConfig::UGameInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInputConfig);
	UGameInputConfig::~UGameInputConfig() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FGameInputAction::StaticStruct, Z_Construct_UScriptStruct_FGameInputAction_Statics::NewStructOps, TEXT("GameInputAction"), &Z_Registration_Info_UScriptStruct_GameInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameInputAction), 1045723830U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInputConfig, UGameInputConfig::StaticClass, TEXT("UGameInputConfig"), &Z_Registration_Info_UClass_UGameInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInputConfig), 684266730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_2990461605(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
