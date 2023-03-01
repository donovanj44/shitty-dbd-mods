// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_DBDBlackboardComponent_generated_h
#error "DBDBlackboardComponent.generated.h already included, missing '#pragma once' in DBDBlackboardComponent.h"
#endif
#define DBDBOTS_DBDBlackboardComponent_generated_h

#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDBlackboardComponent(); \
	friend struct Z_Construct_UClass_UDBDBlackboardComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDBlackboardComponent, UBlackboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UDBDBlackboardComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDBDBlackboardComponent*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDBDBlackboardComponent(); \
	friend struct Z_Construct_UClass_UDBDBlackboardComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDBlackboardComponent, UBlackboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UDBDBlackboardComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDBDBlackboardComponent*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDBlackboardComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDBlackboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDBlackboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDBlackboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDBlackboardComponent(UDBDBlackboardComponent&&); \
	NO_API UDBDBlackboardComponent(const UDBDBlackboardComponent&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDBlackboardComponent(UDBDBlackboardComponent&&); \
	NO_API UDBDBlackboardComponent(const UDBDBlackboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDBlackboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDBlackboardComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDBlackboardComponent)


#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___mindFocusEntries() { return STRUCT_OFFSET(UDBDBlackboardComponent, _mindFocusEntries); } \
	FORCEINLINE static uint32 __PPO___pinLocations() { return STRUCT_OFFSET(UDBDBlackboardComponent, _pinLocations); } \
	FORCEINLINE static uint32 __PPO___pinObjects() { return STRUCT_OFFSET(UDBDBlackboardComponent, _pinObjects); } \
	FORCEINLINE static uint32 __PPO___lostMindFocusEntries() { return STRUCT_OFFSET(UDBDBlackboardComponent, _lostMindFocusEntries); } \
	FORCEINLINE static uint32 __PPO___objectWishListMap() { return STRUCT_OFFSET(UDBDBlackboardComponent, _objectWishListMap); } \
	FORCEINLINE static uint32 __PPO___discoveredObjects() { return STRUCT_OFFSET(UDBDBlackboardComponent, _discoveredObjects); } \
	FORCEINLINE static uint32 __PPO___intentionValidators() { return STRUCT_OFFSET(UDBDBlackboardComponent, _intentionValidators); }


#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_13_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class UDBDBlackboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_DBDBlackboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
