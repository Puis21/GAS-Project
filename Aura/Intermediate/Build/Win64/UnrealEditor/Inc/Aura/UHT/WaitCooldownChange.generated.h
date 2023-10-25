// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AsyncTasks/WaitCooldownChange.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UWaitCooldownChange;
struct FGameplayTag;
#ifdef AURA_WaitCooldownChange_generated_h
#error "WaitCooldownChange.generated.h already included, missing '#pragma once' in WaitCooldownChange.h"
#endif
#define AURA_WaitCooldownChange_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_15_DELEGATE \
AURA_API void FCooldownChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& CooldownChangeSignature, float TimeRemaining);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execWaitForCooldownChange);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execWaitForCooldownChange);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaitCooldownChange(); \
	friend struct Z_Construct_UClass_UWaitCooldownChange_Statics; \
public: \
	DECLARE_CLASS(UWaitCooldownChange, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UWaitCooldownChange)


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUWaitCooldownChange(); \
	friend struct Z_Construct_UClass_UWaitCooldownChange_Statics; \
public: \
	DECLARE_CLASS(UWaitCooldownChange, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UWaitCooldownChange)


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaitCooldownChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaitCooldownChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaitCooldownChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaitCooldownChange); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaitCooldownChange(UWaitCooldownChange&&); \
	NO_API UWaitCooldownChange(const UWaitCooldownChange&); \
public: \
	NO_API virtual ~UWaitCooldownChange();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaitCooldownChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaitCooldownChange(UWaitCooldownChange&&); \
	NO_API UWaitCooldownChange(const UWaitCooldownChange&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaitCooldownChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaitCooldownChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaitCooldownChange) \
	NO_API virtual ~UWaitCooldownChange();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_20_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_INCLASS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UWaitCooldownChange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_AbilitySystem_AsyncTasks_WaitCooldownChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
