// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UAICharacterBehaviourData;
struct FAIRequestID;
#ifdef DEADBYDAYLIGHT_AIMoveToPosition_generated_h
#error "AIMoveToPosition.generated.h already included, missing '#pragma once' in AIMoveToPosition.h"
#endif
#define DEADBYDAYLIGHT_AIMoveToPosition_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execTargetPositionReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execTargetPositionReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMoveToPosition(); \
	friend struct Z_Construct_UClass_UAIMoveToPosition_Statics; \
public: \
	DECLARE_CLASS(UAIMoveToPosition, UAICharacterBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAIMoveToPosition)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAIMoveToPosition(); \
	friend struct Z_Construct_UClass_UAIMoveToPosition_Statics; \
public: \
	DECLARE_CLASS(UAIMoveToPosition, UAICharacterBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAIMoveToPosition)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMoveToPosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMoveToPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMoveToPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMoveToPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMoveToPosition(UAIMoveToPosition&&); \
	NO_API UAIMoveToPosition(const UAIMoveToPosition&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMoveToPosition(UAIMoveToPosition&&); \
	NO_API UAIMoveToPosition(const UAIMoveToPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMoveToPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMoveToPosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIMoveToPosition)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___aiBehaviourData() { return STRUCT_OFFSET(UAIMoveToPosition, _aiBehaviourData); } \
	FORCEINLINE static uint32 __PPO___aiController() { return STRUCT_OFFSET(UAIMoveToPosition, _aiController); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAIMoveToPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
