// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGLevelBannerWidget_generated_h
#error "UMGLevelBannerWidget.generated.h already included, missing '#pragma once' in UMGLevelBannerWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLevelBannerWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTooltipButtonLongPressEvent); \
	DECLARE_FUNCTION(execSetInfo); \
	DECLARE_FUNCTION(execSetProgressBarValue); \
	DECLARE_FUNCTION(execStartHighlight); \
	DECLARE_FUNCTION(execStopHighlight);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTooltipButtonLongPressEvent); \
	DECLARE_FUNCTION(execSetInfo); \
	DECLARE_FUNCTION(execSetProgressBarValue); \
	DECLARE_FUNCTION(execStartHighlight); \
	DECLARE_FUNCTION(execStopHighlight);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_EVENT_PARMS \
	struct UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms \
	{ \
		bool isExperienceVisible; \
		bool isBig; \
	}; \
	struct UMGLevelBannerWidget_eventSetInfoBP_Parms \
	{ \
		int32 playerLevel; \
		int32 playerPrestige; \
		int32 currentExperience; \
		int32 nextLevelExperience; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLevelBannerWidget(); \
	friend struct Z_Construct_UClass_UUMGLevelBannerWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLevelBannerWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLevelBannerWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UUMGLevelBannerWidget*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLevelBannerWidget(); \
	friend struct Z_Construct_UClass_UUMGLevelBannerWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLevelBannerWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLevelBannerWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UUMGLevelBannerWidget*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLevelBannerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLevelBannerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLevelBannerWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLevelBannerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLevelBannerWidget(UUMGLevelBannerWidget&&); \
	NO_API UUMGLevelBannerWidget(const UUMGLevelBannerWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLevelBannerWidget(UUMGLevelBannerWidget&&); \
	NO_API UUMGLevelBannerWidget(const UUMGLevelBannerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLevelBannerWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLevelBannerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLevelBannerWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerLevelText() { return STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerLevelText); } \
	FORCEINLINE static uint32 __PPO__PlayerDevotionText() { return STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerDevotionText); } \
	FORCEINLINE static uint32 __PPO__PlayerCurrentExperienceText() { return STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerCurrentExperienceText); } \
	FORCEINLINE static uint32 __PPO__PlayerNextLevelExperienceText() { return STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerNextLevelExperienceText); } \
	FORCEINLINE static uint32 __PPO__XPProgressBar() { return STRUCT_OFFSET(UUMGLevelBannerWidget, XPProgressBar); } \
	FORCEINLINE static uint32 __PPO__XPTextContainer() { return STRUCT_OFFSET(UUMGLevelBannerWidget, XPTextContainer); } \
	FORCEINLINE static uint32 __PPO__OnLongPressSound() { return STRUCT_OFFSET(UUMGLevelBannerWidget, OnLongPressSound); } \
	FORCEINLINE static uint32 __PPO__TooltipHighlightPicture() { return STRUCT_OFFSET(UUMGLevelBannerWidget, TooltipHighlightPicture); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_14_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLevelBannerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLevelBannerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
