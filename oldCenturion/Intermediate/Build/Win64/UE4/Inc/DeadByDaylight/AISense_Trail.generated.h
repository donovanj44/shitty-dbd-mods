// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class AActor;
struct FGameplayTag;
#ifdef DEADBYDAYLIGHT_AISense_Trail_generated_h
#error "AISense_Trail.generated.h already included, missing '#pragma once' in AISense_Trail.h"
#endif
#define DEADBYDAYLIGHT_AISense_Trail_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReportTrailEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReportTrailEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Trail(); \
	friend struct Z_Construct_UClass_UAISense_Trail_Statics; \
public: \
	DECLARE_CLASS(UAISense_Trail, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Trail)


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Trail(); \
	friend struct Z_Construct_UClass_UAISense_Trail_Statics; \
public: \
	DECLARE_CLASS(UAISense_Trail, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Trail)


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Trail(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Trail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Trail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Trail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Trail(UAISense_Trail&&); \
	NO_API UAISense_Trail(const UAISense_Trail&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Trail(UAISense_Trail&&); \
	NO_API UAISense_Trail(const UAISense_Trail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Trail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Trail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAISense_Trail)


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Events() { return STRUCT_OFFSET(UAISense_Trail, Events); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAISense_Trail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AISense_Trail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
