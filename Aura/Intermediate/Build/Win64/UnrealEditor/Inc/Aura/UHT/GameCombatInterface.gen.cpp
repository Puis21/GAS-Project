// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/GameCombatInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCombatInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UGameCombatInterface();
	AURA_API UClass* Z_Construct_UClass_UGameCombatInterface_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClass();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedMontage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaggedMontage;
class UScriptStruct* FTaggedMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaggedMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedMontage, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("TaggedMontage"));
	}
	return Z_Registration_Info_UScriptStruct_TaggedMontage.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FTaggedMontage>()
{
	return FTaggedMontage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTaggedMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedMontage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaggedMontage, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaggedMontage, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag = { "SocketTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaggedMontage, SocketTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "TaggedMontage" },
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTaggedMontage, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_SocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewProp_ImpactSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"TaggedMontage",
		sizeof(FTaggedMontage),
		alignof(FTaggedMontage),
		Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaggedMontage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaggedMontage()
	{
		if (!Z_Registration_Info_UScriptStruct_TaggedMontage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaggedMontage.InnerSingleton, Z_Construct_UScriptStruct_FTaggedMontage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TaggedMontage.InnerSingleton;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetCharacterClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterClass*)Z_Param__Result=P_THIS->GetCharacterClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execIncremenetMinionCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncremenetMinionCount_Implementation(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetMinionCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinionCount_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetTaggedMontageByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTaggedMontage*)Z_Param__Result=P_THIS->GetTaggedMontageByTag_Implementation(Z_Param_Out_MontageTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetBloodEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSystem**)Z_Param__Result=P_THIS->GetBloodEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetAttackMontages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTaggedMontage>*)Z_Param__Result=P_THIS->GetAttackMontages_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetAvatar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetHitReactMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetHitReactMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetCombatSocketLocation)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_MontageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation_Implementation(Z_Param_Out_MontageTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameCombatInterface::execGetPlayerLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerLevel_Implementation();
		P_NATIVE_END;
	}
	struct GameCombatInterface_eventGetAttackMontages_Parms
	{
		TArray<FTaggedMontage> ReturnValue;
	};
	struct GameCombatInterface_eventGetAvatar_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetAvatar_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameCombatInterface_eventGetBloodEffect_Parms
	{
		UNiagaraSystem* ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetBloodEffect_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameCombatInterface_eventGetCharacterClass_Parms
	{
		ECharacterClass ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetCharacterClass_Parms()
			: ReturnValue((ECharacterClass)0)
		{
		}
	};
	struct GameCombatInterface_eventGetCombatSocketLocation_Parms
	{
		FGameplayTag MontageTag;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetCombatSocketLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct GameCombatInterface_eventGetHitReactMontage_Parms
	{
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetHitReactMontage_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameCombatInterface_eventGetMinionCount_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetMinionCount_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GameCombatInterface_eventGetPlayerLevel_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventGetPlayerLevel_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct GameCombatInterface_eventGetTaggedMontageByTag_Parms
	{
		FGameplayTag MontageTag;
		FTaggedMontage ReturnValue;
	};
	struct GameCombatInterface_eventIncremenetMinionCount_Parms
	{
		int32 Amount;
	};
	struct GameCombatInterface_eventIsDead_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameCombatInterface_eventIsDead_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GameCombatInterface_eventUpdateFacingTarget_Parms
	{
		FVector Target;
	};
	TArray<FTaggedMontage> IGameCombatInterface::GetAttackMontages()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackMontages instead.");
		GameCombatInterface_eventGetAttackMontages_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* IGameCombatInterface::GetAvatar()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvatar instead.");
		GameCombatInterface_eventGetAvatar_Parms Parms;
		return Parms.ReturnValue;
	}
	UNiagaraSystem* IGameCombatInterface::GetBloodEffect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBloodEffect instead.");
		GameCombatInterface_eventGetBloodEffect_Parms Parms;
		return Parms.ReturnValue;
	}
	ECharacterClass IGameCombatInterface::GetCharacterClass()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCharacterClass instead.");
		GameCombatInterface_eventGetCharacterClass_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IGameCombatInterface::GetCombatSocketLocation(FGameplayTag const& MontageTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCombatSocketLocation instead.");
		GameCombatInterface_eventGetCombatSocketLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	UAnimMontage* IGameCombatInterface::GetHitReactMontage()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHitReactMontage instead.");
		GameCombatInterface_eventGetHitReactMontage_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IGameCombatInterface::GetMinionCount()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMinionCount instead.");
		GameCombatInterface_eventGetMinionCount_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IGameCombatInterface::GetPlayerLevel()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerLevel instead.");
		GameCombatInterface_eventGetPlayerLevel_Parms Parms;
		return Parms.ReturnValue;
	}
	FTaggedMontage IGameCombatInterface::GetTaggedMontageByTag(FGameplayTag const& MontageTag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTaggedMontageByTag instead.");
		GameCombatInterface_eventGetTaggedMontageByTag_Parms Parms;
		return Parms.ReturnValue;
	}
	void IGameCombatInterface::IncremenetMinionCount(int32 Amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IncremenetMinionCount instead.");
	}
	bool IGameCombatInterface::IsDead() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsDead instead.");
		GameCombatInterface_eventIsDead_Parms Parms;
		return Parms.ReturnValue;
	}
	void IGameCombatInterface::UpdateFacingTarget(FVector const& Target)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateFacingTarget instead.");
	}
	void UGameCombatInterface::StaticRegisterNativesUGameCombatInterface()
	{
		UClass* Class = UGameCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackMontages", &IGameCombatInterface::execGetAttackMontages },
			{ "GetAvatar", &IGameCombatInterface::execGetAvatar },
			{ "GetBloodEffect", &IGameCombatInterface::execGetBloodEffect },
			{ "GetCharacterClass", &IGameCombatInterface::execGetCharacterClass },
			{ "GetCombatSocketLocation", &IGameCombatInterface::execGetCombatSocketLocation },
			{ "GetHitReactMontage", &IGameCombatInterface::execGetHitReactMontage },
			{ "GetMinionCount", &IGameCombatInterface::execGetMinionCount },
			{ "GetPlayerLevel", &IGameCombatInterface::execGetPlayerLevel },
			{ "GetTaggedMontageByTag", &IGameCombatInterface::execGetTaggedMontageByTag },
			{ "IncremenetMinionCount", &IGameCombatInterface::execIncremenetMinionCount },
			{ "IsDead", &IGameCombatInterface::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(nullptr, 0) }; // 3019652357
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetAttackMontages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3019652357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetAttackMontages", nullptr, nullptr, sizeof(GameCombatInterface_eventGetAttackMontages_Parms), Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetAvatar", nullptr, nullptr, sizeof(GameCombatInterface_eventGetAvatar_Parms), Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetBloodEffect_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetBloodEffect", nullptr, nullptr, sizeof(GameCombatInterface_eventGetBloodEffect_Parms), Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetCharacterClass_Parms, ReturnValue), Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(nullptr, 0) }; // 2707907193
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetCharacterClass", nullptr, nullptr, sizeof(GameCombatInterface_eventGetCharacterClass_Parms), Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetCombatSocketLocation_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetCombatSocketLocation", nullptr, nullptr, sizeof(GameCombatInterface_eventGetCombatSocketLocation_Parms), Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetHitReactMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetHitReactMontage", nullptr, nullptr, sizeof(GameCombatInterface_eventGetHitReactMontage_Parms), Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetMinionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetMinionCount", nullptr, nullptr, sizeof(GameCombatInterface_eventGetMinionCount_Parms), Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetMinionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetMinionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetPlayerLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetPlayerLevel", nullptr, nullptr, sizeof(GameCombatInterface_eventGetPlayerLevel_Parms), Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag = { "MontageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetTaggedMontageByTag_Parms, MontageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventGetTaggedMontageByTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaggedMontage, METADATA_PARAMS(nullptr, 0) }; // 3019652357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_MontageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "GetTaggedMontageByTag", nullptr, nullptr, sizeof(GameCombatInterface_eventGetTaggedMontageByTag_Parms), Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventIncremenetMinionCount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "IncremenetMinionCount", nullptr, nullptr, sizeof(GameCombatInterface_eventIncremenetMinionCount_Parms), Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameCombatInterface_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameCombatInterface_eventIsDead_Parms), &Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "IsDead", nullptr, nullptr, sizeof(GameCombatInterface_eventIsDead_Parms), Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameCombatInterface_eventUpdateFacingTarget_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameCombatInterface, nullptr, "UpdateFacingTarget", nullptr, nullptr, sizeof(GameCombatInterface_eventUpdateFacingTarget_Parms), Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameCombatInterface);
	UClass* Z_Construct_UClass_UGameCombatInterface_NoRegister()
	{
		return UGameCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameCombatInterface_GetAttackMontages, "GetAttackMontages" }, // 2700674215
		{ &Z_Construct_UFunction_UGameCombatInterface_GetAvatar, "GetAvatar" }, // 3384391114
		{ &Z_Construct_UFunction_UGameCombatInterface_GetBloodEffect, "GetBloodEffect" }, // 1193163565
		{ &Z_Construct_UFunction_UGameCombatInterface_GetCharacterClass, "GetCharacterClass" }, // 3760282496
		{ &Z_Construct_UFunction_UGameCombatInterface_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 1244914822
		{ &Z_Construct_UFunction_UGameCombatInterface_GetHitReactMontage, "GetHitReactMontage" }, // 2117934969
		{ &Z_Construct_UFunction_UGameCombatInterface_GetMinionCount, "GetMinionCount" }, // 4029179603
		{ &Z_Construct_UFunction_UGameCombatInterface_GetPlayerLevel, "GetPlayerLevel" }, // 2813486284
		{ &Z_Construct_UFunction_UGameCombatInterface_GetTaggedMontageByTag, "GetTaggedMontageByTag" }, // 3787323857
		{ &Z_Construct_UFunction_UGameCombatInterface_IncremenetMinionCount, "IncremenetMinionCount" }, // 409586882
		{ &Z_Construct_UFunction_UGameCombatInterface_IsDead, "IsDead" }, // 434071502
		{ &Z_Construct_UFunction_UGameCombatInterface_UpdateFacingTarget, "UpdateFacingTarget" }, // 2225578701
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GameCombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameCombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameCombatInterface_Statics::ClassParams = {
		&UGameCombatInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameCombatInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameCombatInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UGameCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameCombatInterface.OuterSingleton, Z_Construct_UClass_UGameCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameCombatInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UGameCombatInterface>()
	{
		return UGameCombatInterface::StaticClass();
	}
	UGameCombatInterface::UGameCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameCombatInterface);
	UGameCombatInterface::~UGameCombatInterface() {}
	static FName NAME_UGameCombatInterface_GetAttackMontages = FName(TEXT("GetAttackMontages"));
	TArray<FTaggedMontage> IGameCombatInterface::Execute_GetAttackMontages(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetAttackMontages_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetAttackMontages);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttackMontages_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetAvatar = FName(TEXT("GetAvatar"));
	AActor* IGameCombatInterface::Execute_GetAvatar(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetAvatar_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetAvatar);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAvatar_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetBloodEffect = FName(TEXT("GetBloodEffect"));
	UNiagaraSystem* IGameCombatInterface::Execute_GetBloodEffect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetBloodEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetBloodEffect);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBloodEffect_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetCharacterClass = FName(TEXT("GetCharacterClass"));
	ECharacterClass IGameCombatInterface::Execute_GetCharacterClass(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetCharacterClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetCharacterClass);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCharacterClass_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetCombatSocketLocation = FName(TEXT("GetCombatSocketLocation"));
	FVector IGameCombatInterface::Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetCombatSocketLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetCombatSocketLocation);
		if (Func)
		{
			Parms.MontageTag=MontageTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCombatSocketLocation_Implementation(MontageTag);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetHitReactMontage = FName(TEXT("GetHitReactMontage"));
	UAnimMontage* IGameCombatInterface::Execute_GetHitReactMontage(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetHitReactMontage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetHitReactMontage);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHitReactMontage_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetMinionCount = FName(TEXT("GetMinionCount"));
	int32 IGameCombatInterface::Execute_GetMinionCount(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetMinionCount_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetMinionCount);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMinionCount_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetPlayerLevel = FName(TEXT("GetPlayerLevel"));
	int32 IGameCombatInterface::Execute_GetPlayerLevel(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetPlayerLevel_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetPlayerLevel);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerLevel_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_GetTaggedMontageByTag = FName(TEXT("GetTaggedMontageByTag"));
	FTaggedMontage IGameCombatInterface::Execute_GetTaggedMontageByTag(UObject* O, FGameplayTag const& MontageTag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventGetTaggedMontageByTag_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_GetTaggedMontageByTag);
		if (Func)
		{
			Parms.MontageTag=MontageTag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTaggedMontageByTag_Implementation(MontageTag);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_IncremenetMinionCount = FName(TEXT("IncremenetMinionCount"));
	void IGameCombatInterface::Execute_IncremenetMinionCount(UObject* O, int32 Amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventIncremenetMinionCount_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_IncremenetMinionCount);
		if (Func)
		{
			Parms.Amount=Amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			I->IncremenetMinionCount_Implementation(Amount);
		}
	}
	static FName NAME_UGameCombatInterface_IsDead = FName(TEXT("IsDead"));
	bool IGameCombatInterface::Execute_IsDead(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventIsDead_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_IsDead);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IGameCombatInterface*)(O->GetNativeInterfaceAddress(UGameCombatInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsDead_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameCombatInterface_UpdateFacingTarget = FName(TEXT("UpdateFacingTarget"));
	void IGameCombatInterface::Execute_UpdateFacingTarget(UObject* O, FVector const& Target)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameCombatInterface::StaticClass()));
		GameCombatInterface_eventUpdateFacingTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameCombatInterface_UpdateFacingTarget);
		if (Func)
		{
			Parms.Target=Target;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ScriptStructInfo[] = {
		{ FTaggedMontage::StaticStruct, Z_Construct_UScriptStruct_FTaggedMontage_Statics::NewStructOps, TEXT("TaggedMontage"), &Z_Registration_Info_UScriptStruct_TaggedMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaggedMontage), 3019652357U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameCombatInterface, UGameCombatInterface::StaticClass, TEXT("UGameCombatInterface"), &Z_Registration_Info_UClass_UGameCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameCombatInterface), 3373068678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_3274354067(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
