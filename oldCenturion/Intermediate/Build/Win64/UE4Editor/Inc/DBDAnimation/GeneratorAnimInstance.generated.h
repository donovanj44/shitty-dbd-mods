// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_GeneratorAnimInstance_generated_h
#error "GeneratorAnimInstance.generated.h already included, missing '#pragma once' in GeneratorAnimInstance.h"
#endif
#define DBDANIMATION_GeneratorAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSkillCheckSuccess);


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSkillCheckSuccess);


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratorAnimInstance(); \
	friend struct Z_Construct_UClass_UGeneratorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGeneratorAnimInstance, USleepingAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratorAnimInstance(); \
	friend struct Z_Construct_UClass_UGeneratorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGeneratorAnimInstance, USleepingAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneratorAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratorAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorAnimInstance(UGeneratorAnimInstance&&); \
	NO_API UGeneratorAnimInstance(const UGeneratorAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorAnimInstance(UGeneratorAnimInstance&&); \
	NO_API UGeneratorAnimInstance(const UGeneratorAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeneratorAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningGenerator() { return STRUCT_OFFSET(UGeneratorAnimInstance, _owningGenerator); } \
	FORCEINLINE static uint32 __PPO___rushFailed() { return STRUCT_OFFSET(UGeneratorAnimInstance, _rushFailed); } \
	FORCEINLINE static uint32 __PPO___isActivated() { return STRUCT_OFFSET(UGeneratorAnimInstance, _isActivated); } \
	FORCEINLINE static uint32 __PPO___percentComplete() { return STRUCT_OFFSET(UGeneratorAnimInstance, _percentComplete); }


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_8_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UGeneratorAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_GeneratorAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
