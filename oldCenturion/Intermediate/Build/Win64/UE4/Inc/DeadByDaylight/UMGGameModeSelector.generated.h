// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameplayMode : uint8;
#ifdef DEADBYDAYLIGHT_UMGGameModeSelector_generated_h
#error "UMGGameModeSelector.generated.h already included, missing '#pragma once' in UMGGameModeSelector.h"
#endif
#define DEADBYDAYLIGHT_UMGGameModeSelector_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGameplayMode);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGameplayMode);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_EVENT_PARMS \
	struct UMGGameModeSelector_eventSetActiveGameplayMode_Parms \
	{ \
		EGameplayMode mode; \
		bool visible; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGGameModeSelector(); \
	friend struct Z_Construct_UClass_UUMGGameModeSelector_Statics; \
public: \
	DECLARE_CLASS(UUMGGameModeSelector, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGGameModeSelector)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUUMGGameModeSelector(); \
	friend struct Z_Construct_UClass_UUMGGameModeSelector_Statics; \
public: \
	DECLARE_CLASS(UUMGGameModeSelector, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGGameModeSelector)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGGameModeSelector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGGameModeSelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGGameModeSelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGGameModeSelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGGameModeSelector(UUMGGameModeSelector&&); \
	NO_API UUMGGameModeSelector(const UUMGGameModeSelector&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGGameModeSelector(UUMGGameModeSelector&&); \
	NO_API UUMGGameModeSelector(const UUMGGameModeSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGGameModeSelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGGameModeSelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGGameModeSelector)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_7_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGGameModeSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGGameModeSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
