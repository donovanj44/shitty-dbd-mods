// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef DEADBYDAYLIGHT_BubbleIndicator_generated_h
#error "BubbleIndicator.generated.h already included, missing '#pragma once' in BubbleIndicator.h"
#endif
#define DEADBYDAYLIGHT_BubbleIndicator_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_EVENT_PARMS \
	struct BubbleIndicator_eventSetSilhouette_Parms \
	{ \
		UStaticMesh* staticMesh; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABubbleIndicator(); \
	friend struct Z_Construct_UClass_ABubbleIndicator_Statics; \
public: \
	DECLARE_CLASS(ABubbleIndicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABubbleIndicator)


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_INCLASS \
private: \
	static void StaticRegisterNativesABubbleIndicator(); \
	friend struct Z_Construct_UClass_ABubbleIndicator_Statics; \
public: \
	DECLARE_CLASS(ABubbleIndicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABubbleIndicator)


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABubbleIndicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABubbleIndicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABubbleIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABubbleIndicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABubbleIndicator(ABubbleIndicator&&); \
	NO_API ABubbleIndicator(const ABubbleIndicator&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABubbleIndicator(ABubbleIndicator&&); \
	NO_API ABubbleIndicator(const ABubbleIndicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABubbleIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABubbleIndicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABubbleIndicator)


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___lifeTime() { return STRUCT_OFFSET(ABubbleIndicator, _lifeTime); } \
	FORCEINLINE static uint32 __PPO___displayToLocallyObserved() { return STRUCT_OFFSET(ABubbleIndicator, _displayToLocallyObserved); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ABubbleIndicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BubbleIndicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
