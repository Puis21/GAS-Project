// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/PlayerCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_APlayerCharacterBase();
	AURA_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UGameCombatInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void APlayerCharacterBase::StaticRegisterNativesAPlayerCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterBase);
	UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister()
	{
		return APlayerCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSecondayAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSecondayAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBasicAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultBasicAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPrimaryAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPrimaryAttributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultSecondayAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultSecondayAttributes = { "DefaultSecondayAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, DefaultSecondayAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultSecondayAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultSecondayAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultBasicAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultBasicAttributes = { "DefaultBasicAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, DefaultBasicAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultBasicAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultBasicAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultPrimaryAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultPrimaryAttributes = { "DefaultPrimaryAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, DefaultPrimaryAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultPrimaryAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultPrimaryAttributes_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCharacterBase, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultSecondayAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultBasicAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_DefaultPrimaryAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacterBase_Statics::NewProp_StartupAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacterBase, IAbilitySystemInterface), false },  // 220555618
			{ Z_Construct_UClass_UGameCombatInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacterBase, IGameCombatInterface), false },  // 1686324775
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams = {
		&APlayerCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterBase()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton, Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<APlayerCharacterBase>()
	{
		return APlayerCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterBase);
	APlayerCharacterBase::~APlayerCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Character_PlayerCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Character_PlayerCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterBase, APlayerCharacterBase::StaticClass, TEXT("APlayerCharacterBase"), &Z_Registration_Info_UClass_APlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterBase), 2681039054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Character_PlayerCharacterBase_h_1859532914(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Character_PlayerCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Character_PlayerCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
