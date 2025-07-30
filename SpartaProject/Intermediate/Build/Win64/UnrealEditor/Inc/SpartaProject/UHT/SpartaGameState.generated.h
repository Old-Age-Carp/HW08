// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAPROJECT_SpartaGameState_generated_h
#error "SpartaGameState.generated.h already included, missing '#pragma once' in SpartaGameState.h"
#endif
#define SPARTAPROJECT_SpartaGameState_generated_h

#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpartaGameState(); \
	friend struct Z_Construct_UClass_ASpartaGameState_Statics; \
public: \
	DECLARE_CLASS(ASpartaGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaProject"), NO_API) \
	DECLARE_SERIALIZER(ASpartaGameState)


#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpartaGameState(ASpartaGameState&&); \
	ASpartaGameState(const ASpartaGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpartaGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpartaGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpartaGameState) \
	NO_API virtual ~ASpartaGameState();


#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_9_PROLOG
#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAPROJECT_API UClass* StaticClass<class ASpartaGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
