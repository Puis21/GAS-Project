// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Input/GameInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInputComponent() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameInputComponent();
	AURA_API UClass* Z_Construct_UClass_UGameInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UGameInputComponent::StaticRegisterNativesUGameInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInputComponent);
	UClass* Z_Construct_UClass_UGameInputComponent_NoRegister()
	{
		return UGameInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInputComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/GameInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/GameInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInputComponent_Statics::ClassParams = {
		&UGameInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UGameInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInputComponent()
	{
		if (!Z_Registration_Info_UClass_UGameInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInputComponent.OuterSingleton, Z_Construct_UClass_UGameInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInputComponent.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameInputComponent>()
	{
		return UGameInputComponent::StaticClass();
	}
	UGameInputComponent::UGameInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInputComponent);
	UGameInputComponent::~UGameInputComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInputComponent, UGameInputComponent::StaticClass, TEXT("UGameInputComponent"), &Z_Registration_Info_UClass_UGameInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInputComponent), 3126975544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputComponent_h_437576876(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Input_GameInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
