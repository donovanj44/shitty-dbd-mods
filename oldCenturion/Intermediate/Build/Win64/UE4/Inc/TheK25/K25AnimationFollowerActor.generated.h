// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimationMontageDescriptor;
#ifdef THEK25_K25AnimationFollowerActor_generated_h
#error "K25AnimationFollowerActor.generated.h already included, missing '#pragma once' in K25AnimationFollowerActor.h"
#endif
#define THEK25_K25AnimationFollowerActor_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMontageEnd); \
	DECLARE_FUNCTION(execOnMontageStarted); \
	DECLARE_FUNCTION(execOnMontageStopped);


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMontageEnd); \
	DECLARE_FUNCTION(execOnMontageStarted); \
	DECLARE_FUNCTION(execOnMontageStopped);


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25AnimationFollowerActor(); \
	friend struct Z_Construct_UClass_AK25AnimationFollowerActor_Statics; \
public: \
	DECLARE_CLASS(AK25AnimationFollowerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25AnimationFollowerActor)


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAK25AnimationFollowerActor(); \
	friend struct Z_Construct_UClass_AK25AnimationFollowerActor_Statics; \
public: \
	DECLARE_CLASS(AK25AnimationFollowerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25AnimationFollowerActor)


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25AnimationFollowerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25AnimationFollowerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25AnimationFollowerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25AnimationFollowerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25AnimationFollowerActor(AK25AnimationFollowerActor&&); \
	NO_API AK25AnimationFollowerActor(const AK25AnimationFollowerActor&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25AnimationFollowerActor(AK25AnimationFollowerActor&&); \
	NO_API AK25AnimationFollowerActor(const AK25AnimationFollowerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25AnimationFollowerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25AnimationFollowerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25AnimationFollowerActor)


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___skeletalMesh() { return STRUCT_OFFSET(AK25AnimationFollowerActor, _skeletalMesh); } \
	FORCEINLINE static uint32 __PPO___montageFollower() { return STRUCT_OFFSET(AK25AnimationFollowerActor, _montageFollower); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(AK25AnimationFollowerActor, _montagePlayer); }


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_11_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25AnimationFollowerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25AnimationFollowerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
