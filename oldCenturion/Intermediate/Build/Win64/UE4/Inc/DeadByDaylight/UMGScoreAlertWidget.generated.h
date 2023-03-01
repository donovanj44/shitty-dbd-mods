// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDBDScoreCategory : uint8;
#ifdef DEADBYDAYLIGHT_UMGScoreAlertWidget_generated_h
#error "UMGScoreAlertWidget.generated.h already included, missing '#pragma once' in UMGScoreAlertWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGScoreAlertWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_EVENT_PARMS \
	struct UMGScoreAlertWidget_eventUpdateWidget_Parms \
	{ \
		EDBDScoreCategory scoreType; \
		FString title; \
		int32 scoreValue; \
		float progress; \
		FText defaultScoreText; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGScoreAlertWidget(); \
	friend struct Z_Construct_UClass_UUMGScoreAlertWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGScoreAlertWidget, UUMGBaseAlertWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGScoreAlertWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUUMGScoreAlertWidget(); \
	friend struct Z_Construct_UClass_UUMGScoreAlertWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGScoreAlertWidget, UUMGBaseAlertWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGScoreAlertWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGScoreAlertWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGScoreAlertWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGScoreAlertWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGScoreAlertWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGScoreAlertWidget(UUMGScoreAlertWidget&&); \
	NO_API UUMGScoreAlertWidget(const UUMGScoreAlertWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGScoreAlertWidget(UUMGScoreAlertWidget&&); \
	NO_API UUMGScoreAlertWidget(const UUMGScoreAlertWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGScoreAlertWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGScoreAlertWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGScoreAlertWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_7_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGScoreAlertWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGScoreAlertWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
