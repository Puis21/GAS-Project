// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/HUD/GameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AGameHUD();
	AURA_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UGameUserWidget_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameHUD);
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMenuWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeMenuWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMenuWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeMenuWidgetControllerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/GameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameHUD, OverlayWidget), Z_Construct_UClass_UGameUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameHUD, OverlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetController = { "AttributeMenuWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameHUD, AttributeMenuWidgetController), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetControllerClass_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetControllerClass = { "AttributeMenuWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameHUD, AttributeMenuWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetControllerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_OverlayWidgetControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_AttributeMenuWidgetControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
		&AGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameHUD()
	{
		if (!Z_Registration_Info_UClass_AGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameHUD.OuterSingleton, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameHUD.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AGameHUD>()
	{
		return AGameHUD::StaticClass();
	}
	AGameHUD::AGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
	AGameHUD::~AGameHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_HUD_GameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_HUD_GameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameHUD, AGameHUD::StaticClass, TEXT("AGameHUD"), &Z_Registration_Info_UClass_AGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameHUD), 2659621071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_HUD_GameHUD_h_2573444410(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_HUD_GameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_UI_HUD_GameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
