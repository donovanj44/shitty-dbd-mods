// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_Entity_generated_h
#error "Entity.generated.h already included, missing '#pragma once' in Entity.h"
#endif
#define DEADBYDAYLIGHT_Entity_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEntity(); \
	friend struct Z_Construct_UClass_AEntity_Statics; \
public: \
	DECLARE_CLASS(AEntity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AEntity)


#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEntity(); \
	friend struct Z_Construct_UClass_AEntity_Statics; \
public: \
	DECLARE_CLASS(AEntity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AEntity)


#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEntity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEntity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEntity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEntity(AEntity&&); \
	NO_API AEntity(const AEntity&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEntity(AEntity&&); \
	NO_API AEntity(const AEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEntity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEntity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEntity)


#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___dissolveCurve() { return STRUCT_OFFSET(AEntity, _dissolveCurve); } \
	FORCEINLINE static uint32 __PPO___revealsCurve() { return STRUCT_OFFSET(AEntity, _revealsCurve); } \
	FORCEINLINE static uint32 __PPO___materialHelper() { return STRUCT_OFFSET(AEntity, _materialHelper); } \
	FORCEINLINE static uint32 __PPO___skeletalMesh() { return STRUCT_OFFSET(AEntity, _skeletalMesh); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Entity_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Entity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
