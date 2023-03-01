// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULightComponent;
#ifdef DEADBYDAYLIGHT_LightFollower_generated_h
#error "LightFollower.generated.h already included, missing '#pragma once' in LightFollower.h"
#endif
#define DEADBYDAYLIGHT_LightFollower_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddFollower); \
	DECLARE_FUNCTION(execSetLeader);


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddFollower); \
	DECLARE_FUNCTION(execSetLeader);


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightFollower(); \
	friend struct Z_Construct_UClass_ULightFollower_Statics; \
public: \
	DECLARE_CLASS(ULightFollower, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULightFollower)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULightFollower(); \
	friend struct Z_Construct_UClass_ULightFollower_Statics; \
public: \
	DECLARE_CLASS(ULightFollower, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULightFollower)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightFollower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightFollower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightFollower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightFollower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightFollower(ULightFollower&&); \
	NO_API ULightFollower(const ULightFollower&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightFollower(ULightFollower&&); \
	NO_API ULightFollower(const ULightFollower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightFollower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightFollower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightFollower)


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ULightFollower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LightFollower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
