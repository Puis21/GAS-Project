// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/GameAbilitySystemLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAbilitySystemLibrary() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemLibrary();
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemLibrary_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execGetAttributeMenuController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributeMenuWidgetController**)Z_Param__Result=UGameAbilitySystemLibrary::GetAttributeMenuController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execGetOverlayWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlayWidgetController**)Z_Param__Result=UGameAbilitySystemLibrary::GetOverlayWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UGameAbilitySystemLibrary::StaticRegisterNativesUGameAbilitySystemLibrary()
	{
		UClass* Class = UGameAbilitySystemLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeMenuController", &UGameAbilitySystemLibrary::execGetAttributeMenuController },
			{ "GetOverlayWidgetController", &UGameAbilitySystemLibrary::execGetOverlayWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics
	{
		struct GameAbilitySystemLibrary_eventGetAttributeMenuController_Parms
		{
			const UObject* WorldContextObject;
			UAttributeMenuWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetAttributeMenuController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetAttributeMenuController_Parms, ReturnValue), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "GetAttributeMenuController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::GameAbilitySystemLibrary_eventGetAttributeMenuController_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics
	{
		struct GameAbilitySystemLibrary_eventGetOverlayWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UOverlayWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetOverlayWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "GetOverlayWidgetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::GameAbilitySystemLibrary_eventGetOverlayWidgetController_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAbilitySystemLibrary);
	UClass* Z_Construct_UClass_UGameAbilitySystemLibrary_NoRegister()
	{
		return UGameAbilitySystemLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameAbilitySystemLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_GetAttributeMenuController, "GetAttributeMenuController" }, // 3820341067
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 466010615
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/GameAbilitySystemLibrary.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAbilitySystemLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::ClassParams = {
		&UGameAbilitySystemLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAbilitySystemLibrary()
	{
		if (!Z_Registration_Info_UClass_UGameAbilitySystemLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UGameAbilitySystemLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameAbilitySystemLibrary.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameAbilitySystemLibrary>()
	{
		return UGameAbilitySystemLibrary::StaticClass();
	}
	UGameAbilitySystemLibrary::UGameAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAbilitySystemLibrary);
	UGameAbilitySystemLibrary::~UGameAbilitySystemLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameAbilitySystemLibrary, UGameAbilitySystemLibrary::StaticClass, TEXT("UGameAbilitySystemLibrary"), &Z_Registration_Info_UClass_UGameAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAbilitySystemLibrary), 38347606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_3767626065(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
