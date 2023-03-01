// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDMarketingCameraController_generated_h
#error "DBDMarketingCameraController.generated.h already included, missing '#pragma once' in DBDMarketingCameraController.h"
#endif
#define DEADBYDAYLIGHT_DBDMarketingCameraController_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_MarketingCameraToggleDampening); \
	DECLARE_FUNCTION(execDBD_SetMarketingCameraControllerSensitivityModifier); \
	DECLARE_FUNCTION(execDBD_SetMarketingCameraDampeningFactor); \
	DECLARE_FUNCTION(execDBD_SetMarketingCameraTriggerSensitivity);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_MarketingCameraToggleDampening); \
	DECLARE_FUNCTION(execDBD_SetMarketingCameraControllerSensitivityModifier); \
	DECLARE_FUNCTION(execDBD_SetMarketingCameraDampeningFactor); \
	DECLARE_FUNCTION(execDBD_SetMarketingCameraTriggerSensitivity);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDMarketingCameraController(); \
	friend struct Z_Construct_UClass_ADBDMarketingCameraController_Statics; \
public: \
	DECLARE_CLASS(ADBDMarketingCameraController, ADebugCameraController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDMarketingCameraController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_INCLASS \
private: \
	static void StaticRegisterNativesADBDMarketingCameraController(); \
	friend struct Z_Construct_UClass_ADBDMarketingCameraController_Statics; \
public: \
	DECLARE_CLASS(ADBDMarketingCameraController, ADebugCameraController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDMarketingCameraController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDMarketingCameraController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDMarketingCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDMarketingCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDMarketingCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDMarketingCameraController(ADBDMarketingCameraController&&); \
	NO_API ADBDMarketingCameraController(const ADBDMarketingCameraController&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDMarketingCameraController(ADBDMarketingCameraController&&); \
	NO_API ADBDMarketingCameraController(const ADBDMarketingCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDMarketingCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDMarketingCameraController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDMarketingCameraController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDMarketingCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDMarketingCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
