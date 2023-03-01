// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ECharacterMovementTypes : uint8;
#ifdef DEADBYDAYLIGHT_AIMoveToInteractData_generated_h
#error "AIMoveToInteractData.generated.h already included, missing '#pragma once' in AIMoveToInteractData.h"
#endif
#define DEADBYDAYLIGHT_AIMoveToInteractData_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit);


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit);


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMoveToInteractData(); \
	friend struct Z_Construct_UClass_UAIMoveToInteractData_Statics; \
public: \
	DECLARE_CLASS(UAIMoveToInteractData, UAICharacterBehaviourData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAIMoveToInteractData)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAIMoveToInteractData(); \
	friend struct Z_Construct_UClass_UAIMoveToInteractData_Statics; \
public: \
	DECLARE_CLASS(UAIMoveToInteractData, UAICharacterBehaviourData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAIMoveToInteractData)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMoveToInteractData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMoveToInteractData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMoveToInteractData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMoveToInteractData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMoveToInteractData(UAIMoveToInteractData&&); \
	NO_API UAIMoveToInteractData(const UAIMoveToInteractData&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMoveToInteractData(UAIMoveToInteractData&&); \
	NO_API UAIMoveToInteractData(const UAIMoveToInteractData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMoveToInteractData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMoveToInteractData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIMoveToInteractData)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactActor() { return STRUCT_OFFSET(UAIMoveToInteractData, _interactActor); } \
	FORCEINLINE static uint32 __PPO___targetPositionActor() { return STRUCT_OFFSET(UAIMoveToInteractData, _targetPositionActor); } \
	FORCEINLINE static uint32 __PPO___characterMovementTypes() { return STRUCT_OFFSET(UAIMoveToInteractData, _characterMovementTypes); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAIMoveToInteractData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteractData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
