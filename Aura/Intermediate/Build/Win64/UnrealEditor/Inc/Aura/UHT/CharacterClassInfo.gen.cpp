// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Data/CharacterClassInfo.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterClassInfo() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo();
	AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClass();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterClassDefaultInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterClass;
	static UEnum* ECharacterClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_ECharacterClass, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("ECharacterClass"));
		}
		return Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton;
	}
	template<> AURA_API UEnum* StaticEnum<ECharacterClass>()
	{
		return ECharacterClass_StaticEnum();
	}
	struct Z_Construct_UEnum_Aura_ECharacterClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Aura_ECharacterClass_Statics::Enumerators[] = {
		{ "ECharacterClass::Elementalist", (int64)ECharacterClass::Elementalist },
		{ "ECharacterClass::Warrior", (int64)ECharacterClass::Warrior },
		{ "ECharacterClass::Ranger", (int64)ECharacterClass::Ranger },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Aura_ECharacterClass_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Elementalist.Name", "ECharacterClass::Elementalist" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
		{ "Ranger.Name", "ECharacterClass::Ranger" },
		{ "Warrior.Name", "ECharacterClass::Warrior" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_ECharacterClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		"ECharacterClass",
		"ECharacterClass",
		Z_Construct_UEnum_Aura_ECharacterClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_ECharacterClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Aura_ECharacterClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_ECharacterClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Aura_ECharacterClass()
	{
		if (!Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton, Z_Construct_UEnum_Aura_ECharacterClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo;
class UScriptStruct* FCharacterClassDefaultInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("CharacterClassDefaultInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FCharacterClassDefaultInfo>()
{
	return FCharacterClassDefaultInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPReward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPReward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterClassDefaultInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes_MetaData[] = {
		{ "Category", "Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes = { "SecondaryAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharacterClassDefaultInfo, SecondaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharacterClassDefaultInfo, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_XPReward_MetaData[] = {
		{ "Category", "Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_XPReward = { "XPReward", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharacterClassDefaultInfo, XPReward), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_XPReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_XPReward_MetaData)) }; // 1811381276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_SecondaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_StartupAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewProp_XPReward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"CharacterClassDefaultInfo",
		sizeof(FCharacterClassDefaultInfo),
		alignof(FCharacterClassDefaultInfo),
		Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterClassDefaultInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.InnerSingleton, Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo.InnerSingleton;
	}
	void UCharacterClassInfo::StaticRegisterNativesUCharacterClassInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterClassInfo);
	UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister()
	{
		return UCharacterClassInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterClassInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterClassInformation_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClassInformation_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClassInformation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassInformation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterClassInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BasicAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CommonAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageCalculationCoefficients_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamageCalculationCoefficients;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterClassInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Data/CharacterClassInfo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_ValueProp = { "CharacterClassInformation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCharacterClassDefaultInfo, METADATA_PARAMS(nullptr, 0) }; // 97594284
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp = { "CharacterClassInformation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(nullptr, 0) }; // 2707907193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_MetaData[] = {
		{ "Category", "Character Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation = { "CharacterClassInformation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterClassInfo, CharacterClassInformation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_MetaData)) }; // 2707907193 97594284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_BasicAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_BasicAttributes = { "BasicAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterClassInfo, BasicAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_BasicAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_BasicAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_PrimaryAttributes_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_PrimaryAttributes = { "PrimaryAttributes", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterClassInfo, PrimaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_PrimaryAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_PrimaryAttributes_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities_Inner = { "CommonAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities_MetaData[] = {
		{ "Category", "Common Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities = { "CommonAbilities", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterClassInfo, CommonAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Class Defaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterClassInfo, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_DamageCalculationCoefficients_MetaData[] = {
		{ "Category", "Common Class Defaults|Damage" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Data/CharacterClassInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_DamageCalculationCoefficients = { "DamageCalculationCoefficients", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterClassInfo, DamageCalculationCoefficients), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_DamageCalculationCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_DamageCalculationCoefficients_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CharacterClassInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_BasicAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_PrimaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_CommonAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_StartupAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterClassInfo_Statics::NewProp_DamageCalculationCoefficients,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterClassInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterClassInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterClassInfo_Statics::ClassParams = {
		&UCharacterClassInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterClassInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterClassInfo()
	{
		if (!Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton, Z_Construct_UClass_UCharacterClassInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterClassInfo.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UCharacterClassInfo>()
	{
		return UCharacterClassInfo::StaticClass();
	}
	UCharacterClassInfo::UCharacterClassInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterClassInfo);
	UCharacterClassInfo::~UCharacterClassInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::EnumInfo[] = {
		{ ECharacterClass_StaticEnum, TEXT("ECharacterClass"), &Z_Registration_Info_UEnum_ECharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2707907193U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::ScriptStructInfo[] = {
		{ FCharacterClassDefaultInfo::StaticStruct, Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics::NewStructOps, TEXT("CharacterClassDefaultInfo"), &Z_Registration_Info_UScriptStruct_CharacterClassDefaultInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterClassDefaultInfo), 97594284U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterClassInfo, UCharacterClassInfo::StaticClass, TEXT("UCharacterClassInfo"), &Z_Registration_Info_UClass_UCharacterClassInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterClassInfo), 3558445370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_52603897(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
