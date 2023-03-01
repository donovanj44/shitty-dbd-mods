// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_PathBuilder_generated_h
#error "PathBuilder.generated.h already included, missing '#pragma once' in PathBuilder.h"
#endif
#define DBDBOTS_PathBuilder_generated_h

#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathBuilder(); \
	friend struct Z_Construct_UClass_UPathBuilder_Statics; \
public: \
	DECLARE_CLASS(UPathBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UPathBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UPathBuilder*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPathBuilder(); \
	friend struct Z_Construct_UClass_UPathBuilder_Statics; \
public: \
	DECLARE_CLASS(UPathBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UPathBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UPathBuilder*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathBuilder(UPathBuilder&&); \
	NO_API UPathBuilder(const UPathBuilder&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathBuilder(UPathBuilder&&); \
	NO_API UPathBuilder(const UPathBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathBuilder)


#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___path() { return STRUCT_OFFSET(UPathBuilder, _path); } \
	FORCEINLINE static uint32 __PPO___aiOwner() { return STRUCT_OFFSET(UPathBuilder, _aiOwner); }


#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_11_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_PathBuilder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class UPathBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_PathBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
