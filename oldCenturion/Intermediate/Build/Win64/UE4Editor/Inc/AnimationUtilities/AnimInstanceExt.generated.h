// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class AActor;
class ACharacter;
class USkeletalMeshComponent;
class UObject;
#ifdef ANIMATIONUTILITIES_AnimInstanceExt_generated_h
#error "AnimInstanceExt.generated.h already included, missing '#pragma once' in AnimInstanceExt.h"
#endif
#define ANIMATIONUTILITIES_AnimInstanceExt_generated_h

#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_SPARSE_DATA
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetOwningCharacter); \
	DECLARE_FUNCTION(execGetOwningCharacterSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetRootSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetSubAnimInstance);


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetOwningCharacter); \
	DECLARE_FUNCTION(execGetOwningCharacterSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetRootSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetSubAnimInstance);


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstanceExt(); \
	friend struct Z_Construct_UClass_UAnimInstanceExt_Statics; \
public: \
	DECLARE_CLASS(UAnimInstanceExt, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstanceExt)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimInstanceExt(); \
	friend struct Z_Construct_UClass_UAnimInstanceExt_Statics; \
public: \
	DECLARE_CLASS(UAnimInstanceExt, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstanceExt)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstanceExt(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstanceExt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstanceExt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstanceExt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstanceExt(UAnimInstanceExt&&); \
	NO_API UAnimInstanceExt(const UAnimInstanceExt&); \
public:


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstanceExt(UAnimInstanceExt&&); \
	NO_API UAnimInstanceExt(const UAnimInstanceExt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstanceExt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstanceExt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimInstanceExt)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_11_PROLOG
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_INCLASS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONUTILITIES_API UClass* StaticClass<class UAnimInstanceExt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_AnimationUtilities_Public_AnimInstanceExt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
