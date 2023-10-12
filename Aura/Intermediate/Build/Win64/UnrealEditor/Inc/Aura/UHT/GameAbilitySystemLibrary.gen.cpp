// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/GameAbilitySystemLibrary.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAbilitySystemLibrary() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemLibrary();
	AURA_API UClass* Z_Construct_UClass_UGameAbilitySystemLibrary_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execIsNotFriend)
	{
		P_GET_OBJECT(AActor,Z_Param_FirstActor);
		P_GET_OBJECT(AActor,Z_Param_SecondActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameAbilitySystemLibrary::IsNotFriend(Z_Param_FirstActor,Z_Param_SecondActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execGetLivePlayersWithinRadius)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutOverlappingActors);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SphereOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAbilitySystemLibrary::GetLivePlayersWithinRadius(Z_Param_WorldContextObject,Z_Param_Out_OutOverlappingActors,Z_Param_Out_ActorsToIgnore,Z_Param_Radius,Z_Param_Out_SphereOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execSetIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsCriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAbilitySystemLibrary::SetIsCriticalHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsCriticalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execSetIsBlockedHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_GET_UBOOL(Z_Param_bInIsBlockedHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAbilitySystemLibrary::SetIsBlockedHit(Z_Param_Out_EffectContextHandle,Z_Param_bInIsBlockedHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execIsCriticalHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameAbilitySystemLibrary::IsCriticalHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execIsBlockedHit)
	{
		P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameAbilitySystemLibrary::IsBlockedHit(Z_Param_Out_EffectContextHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execGetCharacterClassInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterClassInfo**)Z_Param__Result=UGameAbilitySystemLibrary::GetCharacterClassInfo(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execGiveStartupAbilities)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_GET_ENUM(ECharacterClass,Z_Param_CharacterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAbilitySystemLibrary::GiveStartupAbilities(Z_Param_WorldContextObject,Z_Param_ASC,ECharacterClass(Z_Param_CharacterClass));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAbilitySystemLibrary::execInitializeDefaultAttributes)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ECharacterClass,Z_Param_CharacterClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAbilitySystemLibrary::InitializeDefaultAttributes(Z_Param_WorldContextObject,ECharacterClass(Z_Param_CharacterClass),Z_Param_Level,Z_Param_ASC);
		P_NATIVE_END;
	}
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
			{ "GetCharacterClassInfo", &UGameAbilitySystemLibrary::execGetCharacterClassInfo },
			{ "GetLivePlayersWithinRadius", &UGameAbilitySystemLibrary::execGetLivePlayersWithinRadius },
			{ "GetOverlayWidgetController", &UGameAbilitySystemLibrary::execGetOverlayWidgetController },
			{ "GiveStartupAbilities", &UGameAbilitySystemLibrary::execGiveStartupAbilities },
			{ "InitializeDefaultAttributes", &UGameAbilitySystemLibrary::execInitializeDefaultAttributes },
			{ "IsBlockedHit", &UGameAbilitySystemLibrary::execIsBlockedHit },
			{ "IsCriticalHit", &UGameAbilitySystemLibrary::execIsCriticalHit },
			{ "IsNotFriend", &UGameAbilitySystemLibrary::execIsNotFriend },
			{ "SetIsBlockedHit", &UGameAbilitySystemLibrary::execSetIsBlockedHit },
			{ "SetIsCriticalHit", &UGameAbilitySystemLibrary::execSetIsCriticalHit },
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
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics
	{
		struct GameAbilitySystemLibrary_eventGetCharacterClassInfo_Parms
		{
			const UObject* WorldContextObject;
			UCharacterClassInfo* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetCharacterClassInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetCharacterClassInfo_Parms, ReturnValue), Z_Construct_UClass_UCharacterClassInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "GetCharacterClassInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::GameAbilitySystemLibrary_eventGetCharacterClassInfo_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics
	{
		struct GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms
		{
			const UObject* WorldContextObject;
			TArray<AActor*> OutOverlappingActors;
			TArray<AActor*> ActorsToIgnore;
			float Radius;
			FVector SphereOrigin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutOverlappingActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutOverlappingActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors_Inner = { "OutOverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors = { "OutOverlappingActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, OutOverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin = { "SphereOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_OutOverlappingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::NewProp_SphereOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayMechanics" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "GetLivePlayersWithinRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::GameAbilitySystemLibrary_eventGetLivePlayersWithinRadius_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics
	{
		struct GameAbilitySystemLibrary_eventGiveStartupAbilities_Parms
		{
			const UObject* WorldContextObject;
			UAbilitySystemComponent* ASC;
			ECharacterClass CharacterClass;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGiveStartupAbilities_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGiveStartupAbilities_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventGiveStartupAbilities_Parms, CharacterClass), Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(nullptr, 0) }; // 2707907193
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::NewProp_CharacterClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "GiveStartupAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::GameAbilitySystemLibrary_eventGiveStartupAbilities_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics
	{
		struct GameAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms
		{
			const UObject* WorldContextObject;
			ECharacterClass CharacterClass;
			float Level;
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, CharacterClass), Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(nullptr, 0) }; // 2707907193
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, Level), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "InitializeDefaultAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::GameAbilitySystemLibrary_eventInitializeDefaultAttributes_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics
	{
		struct GameAbilitySystemLibrary_eventIsBlockedHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle_MetaData)) }; // 668201340
	void Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameAbilitySystemLibrary_eventIsBlockedHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameAbilitySystemLibrary_eventIsBlockedHit_Parms), &Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "IsBlockedHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::GameAbilitySystemLibrary_eventIsBlockedHit_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics
	{
		struct GameAbilitySystemLibrary_eventIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle_MetaData)) }; // 668201340
	void Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameAbilitySystemLibrary_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameAbilitySystemLibrary_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "IsCriticalHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::GameAbilitySystemLibrary_eventIsCriticalHit_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics
	{
		struct GameAbilitySystemLibrary_eventIsNotFriend_Parms
		{
			AActor* FirstActor;
			AActor* SecondActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_FirstActor = { "FirstActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventIsNotFriend_Parms, FirstActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_SecondActor = { "SecondActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventIsNotFriend_Parms, SecondActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameAbilitySystemLibrary_eventIsNotFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameAbilitySystemLibrary_eventIsNotFriend_Parms), &Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_FirstActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_SecondActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|GameplayMechanics" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "IsNotFriend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::GameAbilitySystemLibrary_eventIsNotFriend_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics
	{
		struct GameAbilitySystemLibrary_eventSetIsBlockedHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsBlockedHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsBlockedHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsBlockedHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventSetIsBlockedHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(nullptr, 0) }; // 668201340
	void Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit(void* Obj)
	{
		((GameAbilitySystemLibrary_eventSetIsBlockedHit_Parms*)Obj)->bInIsBlockedHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit = { "bInIsBlockedHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameAbilitySystemLibrary_eventSetIsBlockedHit_Parms), &Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::NewProp_bInIsBlockedHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "SetIsBlockedHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::GameAbilitySystemLibrary_eventSetIsBlockedHit_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics
	{
		struct GameAbilitySystemLibrary_eventSetIsCriticalHit_Parms
		{
			FGameplayEffectContextHandle EffectContextHandle;
			bool bInIsCriticalHit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
		static void NewProp_bInIsCriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsCriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameAbilitySystemLibrary_eventSetIsCriticalHit_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(nullptr, 0) }; // 668201340
	void Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit(void* Obj)
	{
		((GameAbilitySystemLibrary_eventSetIsCriticalHit_Parms*)Obj)->bInIsCriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit = { "bInIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameAbilitySystemLibrary_eventSetIsCriticalHit_Parms), &Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_EffectContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::NewProp_bInIsCriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAbilitySystemLibrary|GameplayEffects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAbilitySystemLibrary, nullptr, "SetIsCriticalHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::GameAbilitySystemLibrary_eventSetIsCriticalHit_Parms), Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_GetCharacterClassInfo, "GetCharacterClassInfo" }, // 1808225661
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_GetLivePlayersWithinRadius, "GetLivePlayersWithinRadius" }, // 423221040
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 466010615
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_GiveStartupAbilities, "GiveStartupAbilities" }, // 1331155612
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_InitializeDefaultAttributes, "InitializeDefaultAttributes" }, // 185567899
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_IsBlockedHit, "IsBlockedHit" }, // 1497545543
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_IsCriticalHit, "IsCriticalHit" }, // 1632791116
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_IsNotFriend, "IsNotFriend" }, // 3548565634
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsBlockedHit, "SetIsBlockedHit" }, // 4282650697
		{ &Z_Construct_UFunction_UGameAbilitySystemLibrary_SetIsCriticalHit, "SetIsCriticalHit" }, // 3797605157
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
		{ Z_Construct_UClass_UGameAbilitySystemLibrary, UGameAbilitySystemLibrary::StaticClass, TEXT("UGameAbilitySystemLibrary"), &Z_Registration_Info_UClass_UGameAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAbilitySystemLibrary), 1215677716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_2542385276(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_GameAbilitySystemLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
