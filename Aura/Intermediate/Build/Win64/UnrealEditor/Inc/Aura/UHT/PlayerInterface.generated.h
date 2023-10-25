// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/PlayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_PlayerInterface_generated_h
#error "PlayerInterface.generated.h already included, missing '#pragma once' in PlayerInterface.h"
#endif
#define AURA_PlayerInterface_generated_h

#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_SPARSE_DATA
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_RPC_WRAPPERS \
	virtual void LevelUp_Implementation() {}; \
	virtual int32 GetSpellPoints_Implementation() const { return 0; }; \
	virtual void AddToSpellPoints_Implementation(int32 InSpellPoints) {}; \
	virtual int32 GetAttributePoints_Implementation() const { return 0; }; \
	virtual void AddToAttributePoints_Implementation(int32 InAttributePoints) {}; \
	virtual void AddToPlayerLevel_Implementation(int32 InPlayerLevel) {}; \
	virtual void AddToXP_Implementation(int32 InXP) {}; \
	virtual int32 GetSpellPointsReward_Implementation(int32 Level) const { return 0; }; \
	virtual int32 GetAttributePointsReward_Implementation(int32 Level) const { return 0; }; \
	virtual int32 GetXP_Implementation() const { return 0; }; \
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const { return 0; }; \
 \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execGetSpellPoints); \
	DECLARE_FUNCTION(execAddToSpellPoints); \
	DECLARE_FUNCTION(execGetAttributePoints); \
	DECLARE_FUNCTION(execAddToAttributePoints); \
	DECLARE_FUNCTION(execAddToPlayerLevel); \
	DECLARE_FUNCTION(execAddToXP); \
	DECLARE_FUNCTION(execGetSpellPointsReward); \
	DECLARE_FUNCTION(execGetAttributePointsReward); \
	DECLARE_FUNCTION(execGetXP); \
	DECLARE_FUNCTION(execFindLevelForXP);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LevelUp_Implementation() {}; \
	virtual int32 GetSpellPoints_Implementation() const { return 0; }; \
	virtual void AddToSpellPoints_Implementation(int32 InSpellPoints) {}; \
	virtual int32 GetAttributePoints_Implementation() const { return 0; }; \
	virtual void AddToAttributePoints_Implementation(int32 InAttributePoints) {}; \
	virtual void AddToPlayerLevel_Implementation(int32 InPlayerLevel) {}; \
	virtual void AddToXP_Implementation(int32 InXP) {}; \
	virtual int32 GetSpellPointsReward_Implementation(int32 Level) const { return 0; }; \
	virtual int32 GetAttributePointsReward_Implementation(int32 Level) const { return 0; }; \
	virtual int32 GetXP_Implementation() const { return 0; }; \
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const { return 0; }; \
 \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execGetSpellPoints); \
	DECLARE_FUNCTION(execAddToSpellPoints); \
	DECLARE_FUNCTION(execGetAttributePoints); \
	DECLARE_FUNCTION(execAddToAttributePoints); \
	DECLARE_FUNCTION(execAddToPlayerLevel); \
	DECLARE_FUNCTION(execAddToXP); \
	DECLARE_FUNCTION(execGetSpellPointsReward); \
	DECLARE_FUNCTION(execGetAttributePointsReward); \
	DECLARE_FUNCTION(execGetXP); \
	DECLARE_FUNCTION(execFindLevelForXP);


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_ACCESSORS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURA_API UPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURA_API, UPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AURA_API UPlayerInterface(UPlayerInterface&&); \
	AURA_API UPlayerInterface(const UPlayerInterface&); \
public: \
	AURA_API virtual ~UPlayerInterface();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURA_API UPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AURA_API UPlayerInterface(UPlayerInterface&&); \
	AURA_API UPlayerInterface(const UPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURA_API, UPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInterface) \
	AURA_API virtual ~UPlayerInterface();


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerInterface(); \
	friend struct Z_Construct_UClass_UPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Aura"), AURA_API) \
	DECLARE_SERIALIZER(UPlayerInterface)


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerInterface() {} \
public: \
	typedef UPlayerInterface UClassType; \
	typedef IPlayerInterface ThisClass; \
	static void Execute_AddToAttributePoints(UObject* O, int32 InAttributePoints); \
	static void Execute_AddToPlayerLevel(UObject* O, int32 InPlayerLevel); \
	static void Execute_AddToSpellPoints(UObject* O, int32 InSpellPoints); \
	static void Execute_AddToXP(UObject* O, int32 InXP); \
	static int32 Execute_FindLevelForXP(const UObject* O, int32 InXP); \
	static int32 Execute_GetAttributePoints(const UObject* O); \
	static int32 Execute_GetAttributePointsReward(const UObject* O, int32 Level); \
	static int32 Execute_GetSpellPoints(const UObject* O); \
	static int32 Execute_GetSpellPointsReward(const UObject* O, int32 Level); \
	static int32 Execute_GetXP(const UObject* O); \
	static void Execute_LevelUp(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerInterface() {} \
public: \
	typedef UPlayerInterface UClassType; \
	typedef IPlayerInterface ThisClass; \
	static void Execute_AddToAttributePoints(UObject* O, int32 InAttributePoints); \
	static void Execute_AddToPlayerLevel(UObject* O, int32 InPlayerLevel); \
	static void Execute_AddToSpellPoints(UObject* O, int32 InSpellPoints); \
	static void Execute_AddToXP(UObject* O, int32 InXP); \
	static int32 Execute_FindLevelForXP(const UObject* O, int32 InXP); \
	static int32 Execute_GetAttributePoints(const UObject* O); \
	static int32 Execute_GetAttributePointsReward(const UObject* O, int32 Level); \
	static int32 Execute_GetSpellPoints(const UObject* O); \
	static int32 Execute_GetSpellPointsReward(const UObject* O, int32 Level); \
	static int32 Execute_GetXP(const UObject* O); \
	static void Execute_LevelUp(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_10_PROLOG
#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_RPC_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_SPARSE_DATA \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_ACCESSORS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_GenTl_OneDrive_Documents_GitHub_Aura_GAS_Project_Aura_Source_Aura_Public_Interaction_PlayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
