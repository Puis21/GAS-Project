// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/GameProjectileSpell.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameProjectileSpell() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AGameProjectile_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UGameDamageGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UGameProjectileSpell();
	AURA_API UClass* Z_Construct_UClass_UGameProjectileSpell_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameProjectileSpell::execSpawnProjectile)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectileTargetLocation);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SocketTag);
		P_GET_UBOOL(Z_Param_bOverridePitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile(Z_Param_Out_ProjectileTargetLocation,Z_Param_Out_SocketTag,Z_Param_bOverridePitch,Z_Param_PitchOverride);
		P_NATIVE_END;
	}
	void UGameProjectileSpell::StaticRegisterNativesUGameProjectileSpell()
	{
		UClass* Class = UGameProjectileSpell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UGameProjectileSpell::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics
	{
		struct GameProjectileSpell_eventSpawnProjectile_Parms
		{
			FVector ProjectileTargetLocation;
			FGameplayTag SocketTag;
			bool bOverridePitch;
			float PitchOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
		static void NewProp_bOverridePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation = { "ProjectileTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameProjectileSpell_eventSpawnProjectile_Parms, ProjectileTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameProjectileSpell_eventSpawnProjectile_Parms, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch_SetBit(void* Obj)
	{
		((GameProjectileSpell_eventSpawnProjectile_Parms*)Obj)->bOverridePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch = { "bOverridePitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameProjectileSpell_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_PitchOverride = { "PitchOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameProjectileSpell_eventSpawnProjectile_Parms, PitchOverride), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_ProjectileTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_bOverridePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::NewProp_PitchOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "CPP_Default_bOverridePitch", "false" },
		{ "CPP_Default_PitchOverride", "0.000000" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameProjectileSpell, nullptr, "SpawnProjectile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::GameProjectileSpell_eventSpawnProjectile_Parms), Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameProjectileSpell);
	UClass* Z_Construct_UClass_UGameProjectileSpell_NoRegister()
	{
		return UGameProjectileSpell::StaticClass();
	}
	struct Z_Construct_UClass_UGameProjectileSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameProjectileSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameDamageGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameProjectileSpell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameProjectileSpell_SpawnProjectile, "SpawnProjectile" }, // 163911797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameProjectileSpell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/GameProjectileSpell.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameProjectileSpell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameProjectileSpell_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "GameProjectileSpell" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GameProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameProjectileSpell_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameProjectileSpell, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameProjectileSpell_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameProjectileSpell_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameProjectileSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameProjectileSpell_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameProjectileSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameProjectileSpell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameProjectileSpell_Statics::ClassParams = {
		&UGameProjectileSpell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameProjectileSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameProjectileSpell_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameProjectileSpell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameProjectileSpell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameProjectileSpell()
	{
		if (!Z_Registration_Info_UClass_UGameProjectileSpell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameProjectileSpell.OuterSingleton, Z_Construct_UClass_UGameProjectileSpell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameProjectileSpell.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameProjectileSpell>()
	{
		return UGameProjectileSpell::StaticClass();
	}
	UGameProjectileSpell::UGameProjectileSpell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameProjectileSpell);
	UGameProjectileSpell::~UGameProjectileSpell() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameProjectileSpell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameProjectileSpell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameProjectileSpell, UGameProjectileSpell::StaticClass, TEXT("UGameProjectileSpell"), &Z_Registration_Info_UClass_UGameProjectileSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameProjectileSpell), 690211946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameProjectileSpell_h_220839152(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameProjectileSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Abilities_GameProjectileSpell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
