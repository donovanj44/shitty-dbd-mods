// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMontagePlayer;
struct FAnimationMontageDescriptor;
class AGenerator;
#ifdef DEADBYDAYLIGHT_GeneratorEntity_generated_h
#error "GeneratorEntity.generated.h already included, missing '#pragma once' in GeneratorEntity.h"
#endif
#define DEADBYDAYLIGHT_GeneratorEntity_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execSetAssociatedGenerator); \
	DECLARE_FUNCTION(execSetSkeletalMeshActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execSetAssociatedGenerator); \
	DECLARE_FUNCTION(execSetSkeletalMeshActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeneratorEntity(); \
	friend struct Z_Construct_UClass_AGeneratorEntity_Statics; \
public: \
	DECLARE_CLASS(AGeneratorEntity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGeneratorEntity)


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGeneratorEntity(); \
	friend struct Z_Construct_UClass_AGeneratorEntity_Statics; \
public: \
	DECLARE_CLASS(AGeneratorEntity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGeneratorEntity)


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeneratorEntity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeneratorEntity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeneratorEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeneratorEntity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeneratorEntity(AGeneratorEntity&&); \
	NO_API AGeneratorEntity(const AGeneratorEntity&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeneratorEntity(AGeneratorEntity&&); \
	NO_API AGeneratorEntity(const AGeneratorEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeneratorEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeneratorEntity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGeneratorEntity)


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___associatedGenerator() { return STRUCT_OFFSET(AGeneratorEntity, _associatedGenerator); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(AGeneratorEntity, _montagePlayer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AGeneratorEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GeneratorEntity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
