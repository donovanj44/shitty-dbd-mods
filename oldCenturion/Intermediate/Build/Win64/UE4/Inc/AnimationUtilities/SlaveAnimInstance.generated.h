// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef ANIMATIONUTILITIES_SlaveAnimInstance_generated_h
#error "SlaveAnimInstance.generated.h already included, missing '#pragma once' in SlaveAnimInstance.h"
#endif
#define ANIMATIONUTILITIES_SlaveAnimInstance_generated_h

#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMasterMesh); \
	DECLARE_FUNCTION(execSetMasterMesh);


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMasterMesh); \
	DECLARE_FUNCTION(execSetMasterMesh);


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlaveAnimInstance(); \
	friend struct Z_Construct_UClass_USlaveAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USlaveAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(USlaveAnimInstance)


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSlaveAnimInstance(); \
	friend struct Z_Construct_UClass_USlaveAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USlaveAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(USlaveAnimInstance)


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlaveAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlaveAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlaveAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlaveAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlaveAnimInstance(USlaveAnimInstance&&); \
	NO_API USlaveAnimInstance(const USlaveAnimInstance&); \
public:


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlaveAnimInstance(USlaveAnimInstance&&); \
	NO_API USlaveAnimInstance(const USlaveAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlaveAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlaveAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlaveAnimInstance)


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___masterMesh() { return STRUCT_OFFSET(USlaveAnimInstance, _masterMesh); }


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_8_PROLOG
#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_INCLASS \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONUTILITIES_API UClass* StaticClass<class USlaveAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_AnimationUtilities_Public_SlaveAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
