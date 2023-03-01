// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_PathStrategySelector_generated_h
#error "PathStrategySelector.generated.h already included, missing '#pragma once' in PathStrategySelector.h"
#endif
#define DBDBOTS_PathStrategySelector_generated_h

#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathStrategySelector(); \
	friend struct Z_Construct_UClass_UPathStrategySelector_Statics; \
public: \
	DECLARE_CLASS(UPathStrategySelector, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UPathStrategySelector) \
	virtual UObject* _getUObject() const override { return const_cast<UPathStrategySelector*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPathStrategySelector(); \
	friend struct Z_Construct_UClass_UPathStrategySelector_Statics; \
public: \
	DECLARE_CLASS(UPathStrategySelector, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UPathStrategySelector) \
	virtual UObject* _getUObject() const override { return const_cast<UPathStrategySelector*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathStrategySelector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathStrategySelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathStrategySelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathStrategySelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathStrategySelector(UPathStrategySelector&&); \
	NO_API UPathStrategySelector(const UPathStrategySelector&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathStrategySelector(UPathStrategySelector&&); \
	NO_API UPathStrategySelector(const UPathStrategySelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathStrategySelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathStrategySelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathStrategySelector)


#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___aiOwner() { return STRUCT_OFFSET(UPathStrategySelector, _aiOwner); } \
	FORCEINLINE static uint32 __PPO___activePathStrategies() { return STRUCT_OFFSET(UPathStrategySelector, _activePathStrategies); } \
	FORCEINLINE static uint32 __PPO___nextPathStrategies() { return STRUCT_OFFSET(UPathStrategySelector, _nextPathStrategies); }


#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_10_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class UPathStrategySelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_PathStrategySelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
