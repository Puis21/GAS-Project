// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GameAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAbilityTypes() {}
// Cross Module References
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FGameGameplayEffectContext();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

static_assert(std::is_polymorphic<FGameGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGameGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameGameplayEffectContext;
class UScriptStruct* FGameGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("GameGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameGameplayEffectContext.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FGameGameplayEffectContext>()
{
	return FGameGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlockedHit_MetaData[];
#endif
		static void NewProp_bIsBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlockedHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[];
#endif
		static void NewProp_bIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit(void* Obj)
	{
		((FGameGameplayEffectContext*)Obj)->bIsBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit = { "bIsBlockedHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameGameplayEffectContext), &Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
	{
		((FGameGameplayEffectContext*)Obj)->bIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameGameplayEffectContext), &Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsBlockedHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewProp_bIsCriticalHit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"GameGameplayEffectContext",
		sizeof(FGameGameplayEffectContext),
		alignof(FGameGameplayEffectContext),
		Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GameGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameGameplayEffectContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_GameAbilityTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_GameAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGameGameplayEffectContext_Statics::NewStructOps, TEXT("GameGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GameGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameGameplayEffectContext), 3756759642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_GameAbilityTypes_h_1318874134(TEXT("/Script/Aura"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_GameAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_GameAbilityTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
