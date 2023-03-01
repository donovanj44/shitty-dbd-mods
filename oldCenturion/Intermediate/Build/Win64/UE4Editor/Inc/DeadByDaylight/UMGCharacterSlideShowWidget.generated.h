// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterSlideData;
#ifdef DEADBYDAYLIGHT_UMGCharacterSlideShowWidget_generated_h
#error "UMGCharacterSlideShowWidget.generated.h already included, missing '#pragma once' in UMGCharacterSlideShowWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterSlideShowWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execSwitchCharacterSlide); \
	DECLARE_FUNCTION(execWaitAndFadeOut);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execSwitchCharacterSlide); \
	DECLARE_FUNCTION(execWaitAndFadeOut);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_EVENT_PARMS \
	struct UMGCharacterSlideShowWidget_eventDisplayCharacterSlide_Parms \
	{ \
		FCharacterSlideData characterSlide; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterSlideShowWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterSlideShowWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterSlideShowWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterSlideShowWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterSlideShowWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterSlideShowWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterSlideShowWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterSlideShowWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterSlideShowWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterSlideShowWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterSlideShowWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterSlideShowWidget(UUMGCharacterSlideShowWidget&&); \
	NO_API UUMGCharacterSlideShowWidget(const UUMGCharacterSlideShowWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterSlideShowWidget(UUMGCharacterSlideShowWidget&&); \
	NO_API UUMGCharacterSlideShowWidget(const UUMGCharacterSlideShowWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterSlideShowWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterSlideShowWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterSlideShowWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___perkCategoriesIcons() { return STRUCT_OFFSET(UUMGCharacterSlideShowWidget, _perkCategoriesIcons); } \
	FORCEINLINE static uint32 __PPO__SecondsBeforeNextSlide() { return STRUCT_OFFSET(UUMGCharacterSlideShowWidget, SecondsBeforeNextSlide); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterSlideShowWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSlideShowWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
