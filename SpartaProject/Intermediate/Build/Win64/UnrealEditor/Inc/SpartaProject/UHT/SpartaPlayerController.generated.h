// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef SPARTAPROJECT_SpartaPlayerController_generated_h
#error "SpartaPlayerController.generated.h already included, missing '#pragma once' in SpartaPlayerController.h"
#endif
#define SPARTAPROJECT_SpartaPlayerController_generated_h

#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpartaPlayerController(); \
	friend struct Z_Construct_UClass_ASpartaPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASpartaPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaProject"), NO_API) \
	DECLARE_SERIALIZER(ASpartaPlayerController)


#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpartaPlayerController(ASpartaPlayerController&&); \
	ASpartaPlayerController(const ASpartaPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpartaPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpartaPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpartaPlayerController) \
	NO_API virtual ~ASpartaPlayerController();


#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_12_PROLOG
#define FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAPROJECT_API UClass* StaticClass<class ASpartaPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_SpartaPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
