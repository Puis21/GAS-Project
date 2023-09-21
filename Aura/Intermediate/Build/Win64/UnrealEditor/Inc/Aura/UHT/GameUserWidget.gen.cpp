// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/Widget/GameUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUserWidget() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameUserWidget();
	AURA_API UClass* Z_Construct_UClass_UGameUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameUserWidget::execSetWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_InWidgetController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetController(Z_Param_InWidgetController);
		P_NATIVE_END;
	}
	static FName NAME_UGameUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UGameUserWidget::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameUserWidget_WidgetControllerSet),NULL);
	}
	void UGameUserWidget::StaticRegisterNativesUGameUserWidget()
	{
		UClass* Class = UGameUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetController", &UGameUserWidget::execSetWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics
	{
		struct GameUserWidget_eventSetWidgetController_Parms
		{
			UObject* InWidgetController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/GameUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::GameUserWidget_eventSetWidgetController_Parms), Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserWidget_SetWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserWidget_SetWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/GameUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameUserWidget);
	UClass* Z_Construct_UClass_UGameUserWidget_NoRegister()
	{
		return UGameUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameUserWidget_SetWidgetController, "SetWidgetController" }, // 2373992632
		{ &Z_Construct_UFunction_UGameUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 661607271
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Widget/GameUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/GameUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserWidget_Statics::NewProp_WidgetController_MetaData[] = {
		{ "Category", "GameUserWidget" },
		{ "ModuleRelativePath", "Public/UI/Widget/GameUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUserWidget_Statics::NewProp_WidgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserWidget_Statics::NewProp_WidgetController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserWidget_Statics::NewProp_WidgetController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameUserWidget_Statics::ClassParams = {
		&UGameUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameUserWidget()
	{
		if (!Z_Registration_Info_UClass_UGameUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameUserWidget.OuterSingleton, Z_Construct_UClass_UGameUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameUserWidget.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameUserWidget>()
	{
		return UGameUserWidget::StaticClass();
	}
	UGameUserWidget::UGameUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUserWidget);
	UGameUserWidget::~UGameUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_GameUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_GameUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameUserWidget, UGameUserWidget::StaticClass, TEXT("UGameUserWidget"), &Z_Registration_Info_UClass_UGameUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameUserWidget), 4218794833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_GameUserWidget_h_2477676595(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_GameUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_Widget_GameUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
