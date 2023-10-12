// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/Widget/DamageTextComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageTextComponent() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UDamageTextComponent();
	AURA_API UClass* Z_Construct_UClass_UDamageTextComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct DamageTextComponent_eventSetDamageText_Parms
	{
		float Damage;
		bool bBlockedHit;
		bool bCriticalHit;
	};
	static FName NAME_UDamageTextComponent_SetDamageText = FName(TEXT("SetDamageText"));
	void UDamageTextComponent::SetDamageText(float Damage, bool bBlockedHit, bool bCriticalHit)
	{
		DamageTextComponent_eventSetDamageText_Parms Parms;
		Parms.Damage=Damage;
		Parms.bBlockedHit=bBlockedHit ? true : false;
		Parms.bCriticalHit=bCriticalHit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDamageTextComponent_SetDamageText),&Parms);
	}
	void UDamageTextComponent::StaticRegisterNativesUDamageTextComponent()
	{
	}
	struct Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static void NewProp_bBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockedHit;
		static void NewProp_bCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DamageTextComponent_eventSetDamageText_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bBlockedHit_SetBit(void* Obj)
	{
		((DamageTextComponent_eventSetDamageText_Parms*)Obj)->bBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bBlockedHit = { "bBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DamageTextComponent_eventSetDamageText_Parms), &Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bBlockedHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bCriticalHit_SetBit(void* Obj)
	{
		((DamageTextComponent_eventSetDamageText_Parms*)Obj)->bCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bCriticalHit = { "bCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DamageTextComponent_eventSetDamageText_Parms), &Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bCriticalHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bBlockedHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::NewProp_bCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/DamageTextComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageTextComponent, nullptr, "SetDamageText", nullptr, nullptr, sizeof(DamageTextComponent_eventSetDamageText_Parms), Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageTextComponent_SetDamageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageTextComponent_SetDamageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageTextComponent);
	UClass* Z_Construct_UClass_UDamageTextComponent_NoRegister()
	{
		return UDamageTextComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamageTextComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageTextComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageTextComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageTextComponent_SetDamageText, "SetDamageText" }, // 1080696897
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageTextComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/Widget/DamageTextComponent.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/DamageTextComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageTextComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageTextComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageTextComponent_Statics::ClassParams = {
		&UDamageTextComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDamageTextComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTextComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageTextComponent()
	{
		if (!Z_Registration_Info_UClass_UDamageTextComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageTextComponent.OuterSingleton, Z_Construct_UClass_UDamageTextComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageTextComponent.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UDamageTextComponent>()
	{
		return UDamageTextComponent::StaticClass();
	}
	UDamageTextComponent::UDamageTextComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageTextComponent);
	UDamageTextComponent::~UDamageTextComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_DamageTextComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_DamageTextComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageTextComponent, UDamageTextComponent::StaticClass, TEXT("UDamageTextComponent"), &Z_Registration_Info_UClass_UDamageTextComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageTextComponent), 223082490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_DamageTextComponent_h_3152636077(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_DamageTextComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_DamageTextComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
