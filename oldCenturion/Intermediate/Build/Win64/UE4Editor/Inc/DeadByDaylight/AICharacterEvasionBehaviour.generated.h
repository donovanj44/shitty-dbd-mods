// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef DEADBYDAYLIGHT_AICharacterEvasionBehaviour_generated_h
#error "AICharacterEvasionBehaviour.generated.h already included, missing '#pragma once' in AICharacterEvasionBehaviour.h"
#endif
#define DEADBYDAYLIGHT_AICharacterEvasionBehaviour_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEscapeDestinationReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEscapeDestinationReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICharacterEvasionBehaviour(); \
	friend struct Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics; \
public: \
	DECLARE_CLASS(UAICharacterEvasionBehaviour, UAICharacterBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAICharacterEvasionBehaviour)


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAICharacterEvasionBehaviour(); \
	friend struct Z_Construct_UClass_UAICharacterEvasionBehaviour_Statics; \
public: \
	DECLARE_CLASS(UAICharacterEvasionBehaviour, UAICharacterBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAICharacterEvasionBehaviour)


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICharacterEvasionBehaviour(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICharacterEvasionBehaviour) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICharacterEvasionBehaviour); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICharacterEvasionBehaviour); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICharacterEvasionBehaviour(UAICharacterEvasionBehaviour&&); \
	NO_API UAICharacterEvasionBehaviour(const UAICharacterEvasionBehaviour&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICharacterEvasionBehaviour(UAICharacterEvasionBehaviour&&); \
	NO_API UAICharacterEvasionBehaviour(const UAICharacterEvasionBehaviour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICharacterEvasionBehaviour); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICharacterEvasionBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAICharacterEvasionBehaviour)


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___prey() { return STRUCT_OFFSET(UAICharacterEvasionBehaviour, _prey); } \
	FORCEINLINE static uint32 __PPO___preyAIController() { return STRUCT_OFFSET(UAICharacterEvasionBehaviour, _preyAIController); } \
	FORCEINLINE static uint32 __PPO___currentEscapePoint() { return STRUCT_OFFSET(UAICharacterEvasionBehaviour, _currentEscapePoint); } \
	FORCEINLINE static uint32 __PPO___characterEvasionData() { return STRUCT_OFFSET(UAICharacterEvasionBehaviour, _characterEvasionData); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAICharacterEvasionBehaviour>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AICharacterEvasionBehaviour_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
