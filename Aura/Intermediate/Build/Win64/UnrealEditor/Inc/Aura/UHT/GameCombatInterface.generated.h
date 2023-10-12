// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/GameCombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
struct FGameplayTag;
struct FTaggedMontage;
#ifdef AURA_GameCombatInterface_generated_h
#error "GameCombatInterface.generated.h already included, missing '#pragma once' in GameCombatInterface.h"
#endif
#define AURA_GameCombatInterface_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaggedMontage_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FTaggedMontage>();

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_RPC_WRAPPERS \
	virtual TArray<FTaggedMontage> GetAttackMontages_Implementation() { return TArray<FTaggedMontage>(); }; \
	virtual AActor* GetAvatar_Implementation() { return NULL; }; \
	virtual bool IsDead_Implementation() const { return false; }; \
	virtual UAnimMontage* GetHitReactMontage_Implementation() { return NULL; }; \
	virtual FVector GetCombatSocketLocation_Implementation(FGameplayTag const& MontageTag) { return FVector(ForceInit); }; \
 \
	DECLARE_FUNCTION(execGetAttackMontages); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetHitReactMontage); \
	DECLARE_FUNCTION(execGetCombatSocketLocation);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<FTaggedMontage> GetAttackMontages_Implementation() { return TArray<FTaggedMontage>(); }; \
	virtual AActor* GetAvatar_Implementation() { return NULL; }; \
	virtual bool IsDead_Implementation() const { return false; }; \
	virtual UAnimMontage* GetHitReactMontage_Implementation() { return NULL; }; \
	virtual FVector GetCombatSocketLocation_Implementation(FGameplayTag const& MontageTag) { return FVector(ForceInit); }; \
 \
	DECLARE_FUNCTION(execGetAttackMontages); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetHitReactMontage); \
	DECLARE_FUNCTION(execGetCombatSocketLocation);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_CALLBACK_WRAPPERS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURA_API UGameCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameCombatInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURA_API, UGameCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameCombatInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AURA_API UGameCombatInterface(UGameCombatInterface&&); \
	AURA_API UGameCombatInterface(const UGameCombatInterface&); \
public: \
	AURA_API virtual ~UGameCombatInterface();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURA_API UGameCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AURA_API UGameCombatInterface(UGameCombatInterface&&); \
	AURA_API UGameCombatInterface(const UGameCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURA_API, UGameCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameCombatInterface) \
	AURA_API virtual ~UGameCombatInterface();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameCombatInterface(); \
	friend struct Z_Construct_UClass_UGameCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UGameCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Aura"), AURA_API) \
	DECLARE_SERIALIZER(UGameCombatInterface)


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameCombatInterface() {} \
public: \
	typedef UGameCombatInterface UClassType; \
	typedef IGameCombatInterface ThisClass; \
	static TArray<FTaggedMontage> Execute_GetAttackMontages(UObject* O); \
	static AActor* Execute_GetAvatar(UObject* O); \
	static FVector Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag); \
	static UAnimMontage* Execute_GetHitReactMontage(UObject* O); \
	static bool Execute_IsDead(const UObject* O); \
	static void Execute_UpdateFacingTarget(UObject* O, FVector const& Target); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameCombatInterface() {} \
public: \
	typedef UGameCombatInterface UClassType; \
	typedef IGameCombatInterface ThisClass; \
	static TArray<FTaggedMontage> Execute_GetAttackMontages(UObject* O); \
	static AActor* Execute_GetAvatar(UObject* O); \
	static FVector Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag); \
	static UAnimMontage* Execute_GetHitReactMontage(UObject* O); \
	static bool Execute_IsDead(const UObject* O); \
	static void Execute_UpdateFacingTarget(UObject* O, FVector const& Target); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_25_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_CALLBACK_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_CALLBACK_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UGameCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_GameCombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
