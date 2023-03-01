// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAICharacterBehaviour;
class UObject;
class UAICharacterBehaviourData;
#ifdef DEADBYDAYLIGHT_DBDAIPlayerController_generated_h
#error "DBDAIPlayerController.generated.h already included, missing '#pragma once' in DBDAIPlayerController.h"
#endif
#define DEADBYDAYLIGHT_DBDAIPlayerController_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMovePlayerToActor); \
	DECLARE_FUNCTION(execOnBehaviourEndedHandler); \
	DECLARE_FUNCTION(execPauseCharacterBehaviour); \
	DECLARE_FUNCTION(execResumeCharacterBehaviour); \
	DECLARE_FUNCTION(execStartCharacterBehaviour); \
	DECLARE_FUNCTION(execStopAllCharacterBehaviours); \
	DECLARE_FUNCTION(execStopCharacterBehaviour);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovePlayerToActor); \
	DECLARE_FUNCTION(execOnBehaviourEndedHandler); \
	DECLARE_FUNCTION(execPauseCharacterBehaviour); \
	DECLARE_FUNCTION(execResumeCharacterBehaviour); \
	DECLARE_FUNCTION(execStartCharacterBehaviour); \
	DECLARE_FUNCTION(execStopAllCharacterBehaviours); \
	DECLARE_FUNCTION(execStopCharacterBehaviour);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDAIPlayerController(); \
	friend struct Z_Construct_UClass_ADBDAIPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADBDAIPlayerController, ADBDAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDAIPlayerController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADBDAIPlayerController(); \
	friend struct Z_Construct_UClass_ADBDAIPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADBDAIPlayerController, ADBDAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDAIPlayerController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDAIPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDAIPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDAIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDAIPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDAIPlayerController(ADBDAIPlayerController&&); \
	NO_API ADBDAIPlayerController(const ADBDAIPlayerController&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDAIPlayerController(ADBDAIPlayerController&&); \
	NO_API ADBDAIPlayerController(const ADBDAIPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDAIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDAIPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDAIPlayerController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentBehaviours() { return STRUCT_OFFSET(ADBDAIPlayerController, _currentBehaviours); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDAIPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAIPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
