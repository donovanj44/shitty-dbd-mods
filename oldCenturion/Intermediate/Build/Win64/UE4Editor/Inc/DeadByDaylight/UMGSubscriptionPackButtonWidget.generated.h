// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGSubscriptionPackButtonWidget_generated_h
#error "UMGSubscriptionPackButtonWidget.generated.h already included, missing '#pragma once' in UMGSubscriptionPackButtonWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGSubscriptionPackButtonWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInfoButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInfoButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSubscriptionPackButtonWidget(); \
	friend struct Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGSubscriptionPackButtonWidget, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSubscriptionPackButtonWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSubscriptionPackButtonWidget(); \
	friend struct Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGSubscriptionPackButtonWidget, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSubscriptionPackButtonWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSubscriptionPackButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSubscriptionPackButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSubscriptionPackButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSubscriptionPackButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSubscriptionPackButtonWidget(UUMGSubscriptionPackButtonWidget&&); \
	NO_API UUMGSubscriptionPackButtonWidget(const UUMGSubscriptionPackButtonWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSubscriptionPackButtonWidget(UUMGSubscriptionPackButtonWidget&&); \
	NO_API UUMGSubscriptionPackButtonWidget(const UUMGSubscriptionPackButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSubscriptionPackButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSubscriptionPackButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGSubscriptionPackButtonWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetPerRewardType() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, WidgetPerRewardType); } \
	FORCEINLINE static uint32 __PPO__ButtonPressedVFX() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ButtonPressedVFX); } \
	FORCEINLINE static uint32 __PPO__PricePanel() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PricePanel); } \
	FORCEINLINE static uint32 __PPO__TitleIcon() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, TitleIcon); } \
	FORCEINLINE static uint32 __PPO__Title() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, Title); } \
	FORCEINLINE static uint32 __PPO__Price() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, Price); } \
	FORCEINLINE static uint32 __PPO__RenewalDatePanel() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, RenewalDatePanel); } \
	FORCEINLINE static uint32 __PPO__RenewalDateText() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, RenewalDateText); } \
	FORCEINLINE static uint32 __PPO__PurchaseRewardsGrid() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PurchaseRewardsGrid); } \
	FORCEINLINE static uint32 __PPO__DailyRewardsGrid() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, DailyRewardsGrid); } \
	FORCEINLINE static uint32 __PPO__PortraitBorder() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PortraitBorder); } \
	FORCEINLINE static uint32 __PPO__InfoButton() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, InfoButton); } \
	FORCEINLINE static uint32 __PPO__ActiveBackgroundImage() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveBackgroundImage); } \
	FORCEINLINE static uint32 __PPO__NonActiveBackgroundImage() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveBackgroundImage); } \
	FORCEINLINE static uint32 __PPO__ActiveTextColor() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveTextColor); } \
	FORCEINLINE static uint32 __PPO__NonActiveTextColor() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveTextColor); } \
	FORCEINLINE static uint32 __PPO__TextColor() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, TextColor); } \
	FORCEINLINE static uint32 __PPO__ActiveSmokeBackgroundTint() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveSmokeBackgroundTint); } \
	FORCEINLINE static uint32 __PPO__NonActiveSmokeBackgroundTint() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveSmokeBackgroundTint); } \
	FORCEINLINE static uint32 __PPO__PurchaseRewardsSmokeBackground() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PurchaseRewardsSmokeBackground); } \
	FORCEINLINE static uint32 __PPO__DailyRewardsSmokeBackground() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, DailyRewardsSmokeBackground); } \
	FORCEINLINE static uint32 __PPO__ActiveTitleBackgroundTint() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveTitleBackgroundTint); } \
	FORCEINLINE static uint32 __PPO__NonActiveTitleBackgroundTint() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveTitleBackgroundTint); } \
	FORCEINLINE static uint32 __PPO__TitleBackground() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, TitleBackground); } \
	FORCEINLINE static uint32 __PPO__ActiveFrame() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveFrame); } \
	FORCEINLINE static uint32 __PPO__NonActiveFrame() { return STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveFrame); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGSubscriptionPackButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGSubscriptionPackButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
