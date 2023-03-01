// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UCapsuleComponent;
#ifdef DEADBYDAYLIGHT_AuthoritativeMovementComponent_generated_h
#error "AuthoritativeMovementComponent.generated.h already included, missing '#pragma once' in AuthoritativeMovementComponent.h"
#endif
#define DEADBYDAYLIGHT_AuthoritativeMovementComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapEnter); \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapExit); \
	DECLARE_FUNCTION(execOnRep_AuthoritativeIgnoreOverlapCharacters); \
	DECLARE_FUNCTION(execSetPawnDetector);


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapEnter); \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapExit); \
	DECLARE_FUNCTION(execOnRep_AuthoritativeIgnoreOverlapCharacters); \
	DECLARE_FUNCTION(execSetPawnDetector);


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuthoritativeMovementComponent(); \
	friend struct Z_Construct_UClass_UAuthoritativeMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAuthoritativeMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAuthoritativeMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_authoritativeIgnoreOverlapCharacters=NETFIELD_REP_START, \
		NETFIELD_REP_END=_authoritativeIgnoreOverlapCharacters	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAuthoritativeMovementComponent(); \
	friend struct Z_Construct_UClass_UAuthoritativeMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAuthoritativeMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAuthoritativeMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_authoritativeIgnoreOverlapCharacters=NETFIELD_REP_START, \
		NETFIELD_REP_END=_authoritativeIgnoreOverlapCharacters	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuthoritativeMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuthoritativeMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthoritativeMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthoritativeMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthoritativeMovementComponent(UAuthoritativeMovementComponent&&); \
	NO_API UAuthoritativeMovementComponent(const UAuthoritativeMovementComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthoritativeMovementComponent(UAuthoritativeMovementComponent&&); \
	NO_API UAuthoritativeMovementComponent(const UAuthoritativeMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthoritativeMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthoritativeMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuthoritativeMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___charactersToPush() { return STRUCT_OFFSET(UAuthoritativeMovementComponent, _charactersToPush); } \
	FORCEINLINE static uint32 __PPO___stopIgnoreCharacterOnEndOverlap() { return STRUCT_OFFSET(UAuthoritativeMovementComponent, _stopIgnoreCharacterOnEndOverlap); } \
	FORCEINLINE static uint32 __PPO___pawnDetector() { return STRUCT_OFFSET(UAuthoritativeMovementComponent, _pawnDetector); } \
	FORCEINLINE static uint32 __PPO___authoritativeIgnoreOverlapCharacters() { return STRUCT_OFFSET(UAuthoritativeMovementComponent, _authoritativeIgnoreOverlapCharacters); } \
	FORCEINLINE static uint32 __PPO___previousAuthoritativeIgnoreOverlapCharacters() { return STRUCT_OFFSET(UAuthoritativeMovementComponent, _previousAuthoritativeIgnoreOverlapCharacters); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAuthoritativeMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AuthoritativeMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
