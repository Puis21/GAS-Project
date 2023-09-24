// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/PlayerCharacterState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterState() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_APlayerCharacterState();
	AURA_API UClass* Z_Construct_UClass_APlayerCharacterState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacterState::execOnRep_Level)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Level(Z_Param_OldLevel);
		P_NATIVE_END;
	}
	void APlayerCharacterState::StaticRegisterNativesAPlayerCharacterState()
	{
		UClass* Class = APlayerCharacterState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Level", &APlayerCharacterState::execOnRep_Level },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics
	{
		struct PlayerCharacterState_eventOnRep_Level_Parms
		{
			int32 OldLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCharacterState_eventOnRep_Level_Parms, OldLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::NewProp_OldLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacterState, nullptr, "OnRep_Level", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::PlayerCharacterState_eventOnRep_Level_Parms), Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacterState_OnRep_Level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacterState_OnRep_Level_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterState);
	UClass* Z_Construct_UClass_APlayerCharacterState_NoRegister()
	{
		return APlayerCharacterState::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacterState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacterState_OnRep_Level, "OnRep_Level" }, // 1946655903
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/PlayerCharacterState.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "PlayerCharacterState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterState, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "PlayerCharacterState" },
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_Level = { "Level", "OnRep_Level", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterState, Level), METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterState_Statics::NewProp_Level,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerCharacterState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacterState, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterState_Statics::ClassParams = {
		&APlayerCharacterState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacterState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterState()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacterState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterState.OuterSingleton, Z_Construct_UClass_APlayerCharacterState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacterState.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<APlayerCharacterState>()
	{
		return APlayerCharacterState::StaticClass();
	}

	void APlayerCharacterState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Level(TEXT("Level"));

		const bool bIsValid = true
			&& Name_Level == ClassReps[(int32)ENetFields_Private::Level].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerCharacterState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterState);
	APlayerCharacterState::~APlayerCharacterState() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterState, APlayerCharacterState::StaticClass, TEXT("APlayerCharacterState"), &Z_Registration_Info_UClass_APlayerCharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterState), 3865953063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_1628374458(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
