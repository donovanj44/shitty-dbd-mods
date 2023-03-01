// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTooltipPressedData;
enum class ECurrencyType : uint8;
#ifdef DEADBYDAYLIGHT_UMGBankAndPlayerInfoWidget_generated_h
#error "UMGBankAndPlayerInfoWidget.generated.h already included, missing '#pragma once' in UMGBankAndPlayerInfoWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGBankAndPlayerInfoWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_16_DELEGATE \
static inline void FUMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent) \
{ \
	UMGBankAndPlayerInfoWidgetOnCancelPartyButtonClickedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCancelPartyButtonClicked); \
	DECLARE_FUNCTION(execOnMainMenuSubscriptionClicked); \
	DECLARE_FUNCTION(execOnPrestigeButtonClicked); \
	DECLARE_FUNCTION(execOnPurchaseAuricCellsButtonClicked); \
	DECLARE_FUNCTION(execOnTooltipTriggeredByCurrency); \
	DECLARE_FUNCTION(execOnTooltipTriggeredByLevelBannerWidget); \
	DECLARE_FUNCTION(execOnTooltipTriggeredByRankBanner);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCancelPartyButtonClicked); \
	DECLARE_FUNCTION(execOnMainMenuSubscriptionClicked); \
	DECLARE_FUNCTION(execOnPrestigeButtonClicked); \
	DECLARE_FUNCTION(execOnPurchaseAuricCellsButtonClicked); \
	DECLARE_FUNCTION(execOnTooltipTriggeredByCurrency); \
	DECLARE_FUNCTION(execOnTooltipTriggeredByLevelBannerWidget); \
	DECLARE_FUNCTION(execOnTooltipTriggeredByRankBanner);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_EVENT_PARMS \
	struct UMGBankAndPlayerInfoWidget_eventSetPlayerLevelBP_Parms \
	{ \
		int32 level; \
		int32 devotion; \
		int32 currentLevelXp; \
		int32 totalLevelXp; \
		bool isSlasher; \
		bool playUpdateAnim; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBankAndPlayerInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBankAndPlayerInfoWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBankAndPlayerInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBankAndPlayerInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBankAndPlayerInfoWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBankAndPlayerInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBankAndPlayerInfoWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBankAndPlayerInfoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBankAndPlayerInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBankAndPlayerInfoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBankAndPlayerInfoWidget(UUMGBankAndPlayerInfoWidget&&); \
	NO_API UUMGBankAndPlayerInfoWidget(const UUMGBankAndPlayerInfoWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBankAndPlayerInfoWidget(UUMGBankAndPlayerInfoWidget&&); \
	NO_API UUMGBankAndPlayerInfoWidget(const UUMGBankAndPlayerInfoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBankAndPlayerInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBankAndPlayerInfoWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBankAndPlayerInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BankWidget() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, BankWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerNameText() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, PlayerNameText); } \
	FORCEINLINE static uint32 __PPO__SelectedCharacterWidget() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, SelectedCharacterWidget); } \
	FORCEINLINE static uint32 __PPO__RankWidgetVisibility() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, RankWidgetVisibility); } \
	FORCEINLINE static uint32 __PPO__LevelBanner() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, LevelBanner); } \
	FORCEINLINE static uint32 __PPO__RankBanner() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, RankBanner); } \
	FORCEINLINE static uint32 __PPO__MonthlyPassButton() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, MonthlyPassButton); } \
	FORCEINLINE static uint32 __PPO___onCancelPartyButtonClickedEvent() { return STRUCT_OFFSET(UUMGBankAndPlayerInfoWidget, _onCancelPartyButtonClickedEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_18_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGBankAndPlayerInfoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGBankAndPlayerInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
