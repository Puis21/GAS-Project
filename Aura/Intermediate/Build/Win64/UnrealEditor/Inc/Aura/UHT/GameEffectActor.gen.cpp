// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Actor/GameEffectActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEffectActor() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AGameEffectActor();
	AURA_API UClass* Z_Construct_UClass_AGameEffectActor_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy();
	AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplicationPolicy;
	static UEnum* EEffectApplicationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectApplicationPolicy"));
		}
		return Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton;
	}
	template<> AURA_API UEnum* StaticEnum<EEffectApplicationPolicy>()
	{
		return EEffectApplicationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators[] = {
		{ "EEffectApplicationPolicy::ApplyOnOverlap", (int64)EEffectApplicationPolicy::ApplyOnOverlap },
		{ "EEffectApplicationPolicy::ApplyOnEndOverlap", (int64)EEffectApplicationPolicy::ApplyOnEndOverlap },
		{ "EEffectApplicationPolicy::DoNotApply", (int64)EEffectApplicationPolicy::DoNotApply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ApplyOnEndOverlap.Name", "EEffectApplicationPolicy::ApplyOnEndOverlap" },
		{ "ApplyOnOverlap.Name", "EEffectApplicationPolicy::ApplyOnOverlap" },
		{ "BlueprintType", "true" },
		{ "DoNotApply.Name", "EEffectApplicationPolicy::DoNotApply" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		"EEffectApplicationPolicy",
		"EEffectApplicationPolicy",
		Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalPolicy;
	static UEnum* EEffectRemovalPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectRemovalPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectRemovalPolicy"));
		}
		return Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton;
	}
	template<> AURA_API UEnum* StaticEnum<EEffectRemovalPolicy>()
	{
		return EEffectRemovalPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators[] = {
		{ "EEffectRemovalPolicy::RemoveOnEndOverlap", (int64)EEffectRemovalPolicy::RemoveOnEndOverlap },
		{ "EEffectRemovalPolicy::DoNotRemove", (int64)EEffectRemovalPolicy::DoNotRemove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotRemove.Name", "EEffectRemovalPolicy::DoNotRemove" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
		{ "RemoveOnEndOverlap.Name", "EEffectRemovalPolicy::RemoveOnEndOverlap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		"EEffectRemovalPolicy",
		"EEffectRemovalPolicy",
		Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(AGameEffectActor::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEffectActor::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEffectActor::execApplyEffectToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffectToTarget(Z_Param_TargetActor,Z_Param_GameplayEffectClass);
		P_NATIVE_END;
	}
	void AGameEffectActor::StaticRegisterNativesAGameEffectActor()
	{
		UClass* Class = AGameEffectActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectToTarget", &AGameEffectActor::execApplyEffectToTarget },
			{ "OnEndOverlap", &AGameEffectActor::execOnEndOverlap },
			{ "OnOverlap", &AGameEffectActor::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics
	{
		struct GameEffectActor_eventApplyEffectToTarget_Parms
		{
			AActor* TargetActor;
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameEffectActor_eventApplyEffectToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameEffectActor_eventApplyEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEffectActor, nullptr, "ApplyEffectToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::GameEffectActor_eventApplyEffectToTarget_Parms), Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics
	{
		struct GameEffectActor_eventOnEndOverlap_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameEffectActor_eventOnEndOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEffectActor, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::GameEffectActor_eventOnEndOverlap_Parms), Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEffectActor_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameEffectActor_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics
	{
		struct GameEffectActor_eventOnOverlap_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameEffectActor_eventOnOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEffectActor, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::GameEffectActor_eventOnOverlap_Parms), Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEffectActor_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameEffectActor_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameEffectActor);
	UClass* Z_Construct_UClass_AGameEffectActor_NoRegister()
	{
		return AGameEffectActor::StaticClass();
	}
	struct Z_Construct_UClass_AGameEffectActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEffectRemoval_MetaData[];
#endif
		static void NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEffectRemoval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstantGameplayEffectClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InstantEffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InstantEffectApplicationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DurationGameplayEffectClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DurationEffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationEffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationEffectApplicationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InfiniteGameplayEffectClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InfiniteEffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectApplicationPolicy;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InfiniteEffectRemovalPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectRemovalPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectRemovalPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameEffectActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameEffectActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameEffectActor_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 2239988027
		{ &Z_Construct_UFunction_AGameEffectActor_OnEndOverlap, "OnEndOverlap" }, // 3063987240
		{ &Z_Construct_UFunction_AGameEffectActor_OnOverlap, "OnOverlap" }, // 1232263728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/GameEffectActor.h" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	void Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj)
	{
		((AGameEffectActor*)Obj)->bDestroyOnEffectRemoval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval = { "bDestroyOnEffectRemoval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameEffectActor), &Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantGameplayEffectClass = { "InstantGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, InstantGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantGameplayEffectClass_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy = { "InstantEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, InstantEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_MetaData)) }; // 2619666086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationGameplayEffectClass = { "DurationGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, DurationGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationGameplayEffectClass_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy = { "DurationEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, DurationEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_MetaData)) }; // 2619666086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteGameplayEffectClass_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteGameplayEffectClass = { "InfiniteGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, InfiniteGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteGameplayEffectClass_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy = { "InfiniteEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, InfiniteEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_MetaData)) }; // 2619666086
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy = { "InfiniteEffectRemovalPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, InfiniteEffectRemovalPolicy), Z_Construct_UEnum_Aura_EEffectRemovalPolicy, METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_MetaData)) }; // 4120158913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEffectActor_Statics::NewProp_ActorLevel_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/GameEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameEffectActor_Statics::NewProp_ActorLevel = { "ActorLevel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameEffectActor, ActorLevel), METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_ActorLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::NewProp_ActorLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameEffectActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_bDestroyOnEffectRemoval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InstantEffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_DurationEffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEffectActor_Statics::NewProp_ActorLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameEffectActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameEffectActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameEffectActor_Statics::ClassParams = {
		&AGameEffectActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameEffectActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameEffectActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEffectActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameEffectActor()
	{
		if (!Z_Registration_Info_UClass_AGameEffectActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameEffectActor.OuterSingleton, Z_Construct_UClass_AGameEffectActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameEffectActor.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AGameEffectActor>()
	{
		return AGameEffectActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameEffectActor);
	AGameEffectActor::~AGameEffectActor() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics::EnumInfo[] = {
		{ EEffectApplicationPolicy_StaticEnum, TEXT("EEffectApplicationPolicy"), &Z_Registration_Info_UEnum_EEffectApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2619666086U) },
		{ EEffectRemovalPolicy_StaticEnum, TEXT("EEffectRemovalPolicy"), &Z_Registration_Info_UEnum_EEffectRemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4120158913U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameEffectActor, AGameEffectActor::StaticClass, TEXT("AGameEffectActor"), &Z_Registration_Info_UClass_AGameEffectActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameEffectActor), 2957785962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_2507451410(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Actor_GameEffectActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
