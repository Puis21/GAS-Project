// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerCharacterState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_PlayerCharacterState_generated_h
#error "PlayerCharacterState.generated.h already included, missing '#pragma once' in PlayerCharacterState.h"
#endif
#define AURA_PlayerCharacterState_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Level);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Level);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacterState(); \
	friend struct Z_Construct_UClass_APlayerCharacterState_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacterState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacterState) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerCharacterState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Level=NETFIELD_REP_START, \
		NETFIELD_REP_END=Level	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacterState(); \
	friend struct Z_Construct_UClass_APlayerCharacterState_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacterState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacterState) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerCharacterState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Level=NETFIELD_REP_START, \
		NETFIELD_REP_END=Level	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacterState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacterState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacterState(APlayerCharacterState&&); \
	NO_API APlayerCharacterState(const APlayerCharacterState&); \
public: \
	NO_API virtual ~APlayerCharacterState();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacterState(APlayerCharacterState&&); \
	NO_API APlayerCharacterState(const APlayerCharacterState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacterState) \
	NO_API virtual ~APlayerCharacterState();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_15_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_INCLASS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class APlayerCharacterState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Player_PlayerCharacterState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
