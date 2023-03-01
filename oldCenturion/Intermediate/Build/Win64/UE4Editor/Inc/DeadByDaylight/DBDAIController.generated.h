// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ECharacterMovementTypes : uint8;
#ifdef DEADBYDAYLIGHT_DBDAIController_generated_h
#error "DBDAIController.generated.h already included, missing '#pragma once' in DBDAIController.h"
#endif
#define DEADBYDAYLIGHT_DBDAIController_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_RPC_WRAPPERS \
	virtual bool Server_SetAIPlayerRank_Validate(int32 ); \
	virtual void Server_SetAIPlayerRank_Implementation(int32 playerRank); \
 \
	DECLARE_FUNCTION(execActionRequest); \
	DECLARE_FUNCTION(execAttackRequest); \
	DECLARE_FUNCTION(execDropItemRequest); \
	DECLARE_FUNCTION(execEndActionRequest); \
	DECLARE_FUNCTION(execEndDropItemRequest); \
	DECLARE_FUNCTION(execEndFastInteractRequest); \
	DECLARE_FUNCTION(execEndInteractRequest); \
	DECLARE_FUNCTION(execEndSecondAttackRequest); \
	DECLARE_FUNCTION(execEndUseItemRequest); \
	DECLARE_FUNCTION(execFastInteractRequest); \
	DECLARE_FUNCTION(execGesture01Request); \
	DECLARE_FUNCTION(execGesture02Request); \
	DECLARE_FUNCTION(execGesture03Request); \
	DECLARE_FUNCTION(execGesture04Request); \
	DECLARE_FUNCTION(execInteractRequest); \
	DECLARE_FUNCTION(execInteractRequestRelease); \
	DECLARE_FUNCTION(execSecondaryActionRequest); \
	DECLARE_FUNCTION(execSecondAttackRequest); \
	DECLARE_FUNCTION(execServer_SetAIPlayerRank); \
	DECLARE_FUNCTION(execSetCharacterMovement); \
	DECLARE_FUNCTION(execStruggleRequest); \
	DECLARE_FUNCTION(execUseItemRequest); \
	DECLARE_FUNCTION(execWiggleRequest);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetAIPlayerRank_Validate(int32 ); \
	virtual void Server_SetAIPlayerRank_Implementation(int32 playerRank); \
 \
	DECLARE_FUNCTION(execActionRequest); \
	DECLARE_FUNCTION(execAttackRequest); \
	DECLARE_FUNCTION(execDropItemRequest); \
	DECLARE_FUNCTION(execEndActionRequest); \
	DECLARE_FUNCTION(execEndDropItemRequest); \
	DECLARE_FUNCTION(execEndFastInteractRequest); \
	DECLARE_FUNCTION(execEndInteractRequest); \
	DECLARE_FUNCTION(execEndSecondAttackRequest); \
	DECLARE_FUNCTION(execEndUseItemRequest); \
	DECLARE_FUNCTION(execFastInteractRequest); \
	DECLARE_FUNCTION(execGesture01Request); \
	DECLARE_FUNCTION(execGesture02Request); \
	DECLARE_FUNCTION(execGesture03Request); \
	DECLARE_FUNCTION(execGesture04Request); \
	DECLARE_FUNCTION(execInteractRequest); \
	DECLARE_FUNCTION(execInteractRequestRelease); \
	DECLARE_FUNCTION(execSecondaryActionRequest); \
	DECLARE_FUNCTION(execSecondAttackRequest); \
	DECLARE_FUNCTION(execServer_SetAIPlayerRank); \
	DECLARE_FUNCTION(execSetCharacterMovement); \
	DECLARE_FUNCTION(execStruggleRequest); \
	DECLARE_FUNCTION(execUseItemRequest); \
	DECLARE_FUNCTION(execWiggleRequest);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_EVENT_PARMS \
	struct DBDAIController_eventServer_SetAIPlayerRank_Parms \
	{ \
		int32 playerRank; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDAIController(); \
	friend struct Z_Construct_UClass_ADBDAIController_Statics; \
public: \
	DECLARE_CLASS(ADBDAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDAIController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADBDAIController(); \
	friend struct Z_Construct_UClass_ADBDAIController_Statics; \
public: \
	DECLARE_CLASS(ADBDAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDAIController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDAIController(ADBDAIController&&); \
	NO_API ADBDAIController(const ADBDAIController&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDAIController(ADBDAIController&&); \
	NO_API ADBDAIController(const ADBDAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDAIController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___aiPawn() { return STRUCT_OFFSET(ADBDAIController, _aiPawn); } \
	FORCEINLINE static uint32 __PPO___lastAiPawn() { return STRUCT_OFFSET(ADBDAIController, _lastAiPawn); } \
	FORCEINLINE static uint32 __PPO___contextualPathSpeedFactors() { return STRUCT_OFFSET(ADBDAIController, _contextualPathSpeedFactors); } \
	FORCEINLINE static uint32 __PPO___objOverridingDefaultNavigationFilter() { return STRUCT_OFFSET(ADBDAIController, _objOverridingDefaultNavigationFilter); } \
	FORCEINLINE static uint32 __PPO___originalDefaultNavigationFilter() { return STRUCT_OFFSET(ADBDAIController, _originalDefaultNavigationFilter); } \
	FORCEINLINE static uint32 __PPO___inputLocks() { return STRUCT_OFFSET(ADBDAIController, _inputLocks); } \
	FORCEINLINE static uint32 __PPO___movementLock() { return STRUCT_OFFSET(ADBDAIController, _movementLock); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_14_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
