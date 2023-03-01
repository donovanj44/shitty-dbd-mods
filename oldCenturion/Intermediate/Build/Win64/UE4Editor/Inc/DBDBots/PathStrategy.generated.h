// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_PathStrategy_generated_h
#error "PathStrategy.generated.h already included, missing '#pragma once' in PathStrategy.h"
#endif
#define DBDBOTS_PathStrategy_generated_h

#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathStrategy(); \
	friend struct Z_Construct_UClass_UPathStrategy_Statics; \
public: \
	DECLARE_CLASS(UPathStrategy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UPathStrategy) \
	virtual UObject* _getUObject() const override { return const_cast<UPathStrategy*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPathStrategy(); \
	friend struct Z_Construct_UClass_UPathStrategy_Statics; \
public: \
	DECLARE_CLASS(UPathStrategy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UPathStrategy) \
	virtual UObject* _getUObject() const override { return const_cast<UPathStrategy*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathStrategy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathStrategy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathStrategy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathStrategy(UPathStrategy&&); \
	NO_API UPathStrategy(const UPathStrategy&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathStrategy(UPathStrategy&&); \
	NO_API UPathStrategy(const UPathStrategy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathStrategy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathStrategy)


#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___aiOwner() { return STRUCT_OFFSET(UPathStrategy, _aiOwner); } \
	FORCEINLINE static uint32 __PPO___pathBuilders() { return STRUCT_OFFSET(UPathStrategy, _pathBuilders); }


#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_11_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class UPathStrategy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_PathStrategy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
