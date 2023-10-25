// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitCooldownChange() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UWaitCooldownChange();
	AURA_API UClass* Z_Construct_UClass_UWaitCooldownChange_NoRegister();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventCooldownChangeSignature_Parms
		{
			float TimeRemaining;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Aura_eventCooldownChangeSignature_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::NewProp_TimeRemaining,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "CooldownChangeSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::_Script_Aura_eventCooldownChangeSignature_Parms), Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCooldownChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& CooldownChangeSignature, float TimeRemaining)
{
	struct _Script_Aura_eventCooldownChangeSignature_Parms
	{
		float TimeRemaining;
	};
	_Script_Aura_eventCooldownChangeSignature_Parms Parms;
	Parms.TimeRemaining=TimeRemaining;
	CooldownChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UWaitCooldownChange::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaitCooldownChange::execWaitForCooldownChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InCooldownTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaitCooldownChange**)Z_Param__Result=UWaitCooldownChange::WaitForCooldownChange(Z_Param_AbilitySystemComponent,Z_Param_Out_InCooldownTag);
		P_NATIVE_END;
	}
	void UWaitCooldownChange::StaticRegisterNativesUWaitCooldownChange()
	{
		UClass* Class = UWaitCooldownChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &UWaitCooldownChange::execEndTask },
			{ "WaitForCooldownChange", &UWaitCooldownChange::execWaitForCooldownChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaitCooldownChange, nullptr, "EndTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaitCooldownChange_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitCooldownChange_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics
	{
		struct WaitCooldownChange_eventWaitForCooldownChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			FGameplayTag InCooldownTag;
			UWaitCooldownChange* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCooldownTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCooldownTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaitCooldownChange_eventWaitForCooldownChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag = { "InCooldownTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaitCooldownChange_eventWaitForCooldownChange_Parms, InCooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaitCooldownChange_eventWaitForCooldownChange_Parms, ReturnValue), Z_Construct_UClass_UWaitCooldownChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_InCooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaitCooldownChange, nullptr, "WaitForCooldownChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::WaitCooldownChange_eventWaitForCooldownChange_Parms), Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaitCooldownChange);
	UClass* Z_Construct_UClass_UWaitCooldownChange_NoRegister()
	{
		return UWaitCooldownChange::StaticClass();
	}
	struct Z_Construct_UClass_UWaitCooldownChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CooldownStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CooldownEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaitCooldownChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaitCooldownChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaitCooldownChange_EndTask, "EndTask" }, // 2778061176
		{ &Z_Construct_UFunction_UWaitCooldownChange_WaitForCooldownChange, "WaitForCooldownChange" }, // 2452763734
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitCooldownChange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart = { "CooldownStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaitCooldownChange, CooldownStart), Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart_MetaData)) }; // 893397548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd = { "CooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaitCooldownChange, CooldownEnd), Z_Construct_UDelegateFunction_Aura_CooldownChangeSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd_MetaData)) }; // 893397548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AsyncTasks/WaitCooldownChange.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaitCooldownChange, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_CooldownEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitCooldownChange_Statics::NewProp_ASC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaitCooldownChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitCooldownChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaitCooldownChange_Statics::ClassParams = {
		&UWaitCooldownChange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaitCooldownChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaitCooldownChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaitCooldownChange()
	{
		if (!Z_Registration_Info_UClass_UWaitCooldownChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaitCooldownChange.OuterSingleton, Z_Construct_UClass_UWaitCooldownChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaitCooldownChange.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UWaitCooldownChange>()
	{
		return UWaitCooldownChange::StaticClass();
	}
	UWaitCooldownChange::UWaitCooldownChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaitCooldownChange);
	UWaitCooldownChange::~UWaitCooldownChange() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaitCooldownChange, UWaitCooldownChange::StaticClass, TEXT("UWaitCooldownChange"), &Z_Registration_Info_UClass_UWaitCooldownChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaitCooldownChange), 913526483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_956556814(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
