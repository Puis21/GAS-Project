// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/GameAbilitySystemComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAbilitySystemComponent() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemComponent();
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameAbilitySystemComponent::execClientEffectApplied)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_ActiveEffectHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEffectApplied_Implementation(Z_Param_AbilitySystemComponent,Z_Param_EffectSpec,Z_Param_ActiveEffectHandle);
		P_NATIVE_END;
	}
	struct GameAbilitySystemComponent_eventClientEffectApplied_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayEffectSpec EffectSpec;
		FActiveGameplayEffectHandle ActiveEffectHandle;
	};
	static FName NAME_UGameAbilitySystemComponent_ClientEffectApplied = FName(TEXT("ClientEffectApplied"));
	void UGameAbilitySystemComponent::ClientEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayEffectSpec const& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
	{
		GameAbilitySystemComponent_eventClientEffectApplied_Parms Parms;
		Parms.AbilitySystemComponent=AbilitySystemComponent;
		Parms.EffectSpec=EffectSpec;
		Parms.ActiveEffectHandle=ActiveEffectHandle;
		ProcessEvent(FindFunctionChecked(NAME_UGameAbilitySystemComponent_ClientEffectApplied),&Parms);
	}
	void UGameAbilitySystemComponent::StaticRegisterNativesUGameAbilitySystemComponent()
	{
		UClass* Class = UGameAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientEffectApplied", &UGameAbilitySystemComponent::execClientEffectApplied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemComponent_eventClientEffectApplied_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemComponent_eventClientEffectApplied_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle = { "ActiveEffectHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemComponent_eventClientEffectApplied_Parms, ActiveEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::NewProp_ActiveEffectHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemComponent, nullptr, "ClientEffectApplied", nullptr, nullptr, sizeof(GameAbilitySystemComponent_eventClientEffectApplied_Parms), Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAbilitySystemComponent);
	UClass* Z_Construct_UClass_UGameAbilitySystemComponent_NoRegister()
	{
		return UGameAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAbilitySystemComponent_ClientEffectApplied, "ClientEffectApplied" }, // 2600006990
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/GameAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAbilitySystemComponent_Statics::ClassParams = {
		&UGameAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UGameAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGameAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameAbilitySystemComponent.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameAbilitySystemComponent>()
	{
		return UGameAbilitySystemComponent::StaticClass();
	}
	UGameAbilitySystemComponent::UGameAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAbilitySystemComponent);
	UGameAbilitySystemComponent::~UGameAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameAbilitySystemComponent, UGameAbilitySystemComponent::StaticClass, TEXT("UGameAbilitySystemComponent"), &Z_Registration_Info_UClass_UGameAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAbilitySystemComponent), 3860744225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemComponent_h_2103041355(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
