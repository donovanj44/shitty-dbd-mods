// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUMGDailyRewardWidgetState : uint8;
struct FColor;
#ifdef DEADBYDAYLIGHT_UMGDailyRewardWidget_generated_h
#error "UMGDailyRewardWidget.generated.h already included, missing '#pragma once' in UMGDailyRewardWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGDailyRewardWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventUMGDailyRewardWidgetOnDailyRewardStateChanged_Parms \
{ \
	int32 param1; \
	int32 param2; \
}; \
static inline void FUMGDailyRewardWidgetOnDailyRewardStateChanged_DelegateWrapper(const FMulticastScriptDelegate& UMGDailyRewardWidgetOnDailyRewardStateChanged, int32 param1, int32 param2) \
{ \
	_Script_DeadByDaylight_eventUMGDailyRewardWidgetOnDailyRewardStateChanged_Parms Parms; \
	Parms.param1=param1; \
	Parms.param2=param2; \
	UMGDailyRewardWidgetOnDailyRewardStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCollectButtonClick); \
	DECLARE_FUNCTION(execHandleCollectRewardAnimationFinished); \
	DECLARE_FUNCTION(execHandleDiscoverRewardAnimationFinished); \
	DECLARE_FUNCTION(execHandleUnlockMysteryRewardAnimationFinished); \
	DECLARE_FUNCTION(execHandleUnlockRewardAnimationFinished);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCollectButtonClick); \
	DECLARE_FUNCTION(execHandleCollectRewardAnimationFinished); \
	DECLARE_FUNCTION(execHandleDiscoverRewardAnimationFinished); \
	DECLARE_FUNCTION(execHandleUnlockMysteryRewardAnimationFinished); \
	DECLARE_FUNCTION(execHandleUnlockRewardAnimationFinished);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_EVENT_PARMS \
	struct UMGDailyRewardWidget_eventPlayIdleAnimationForState_Parms \
	{ \
		EUMGDailyRewardWidgetState inState; \
	}; \
	struct UMGDailyRewardWidget_eventSetRarityColors_Parms \
	{ \
		FColor backgroundColor; \
		FColor tintColor; \
	}; \
	struct UMGDailyRewardWidget_eventSetStateVisuals_Parms \
	{ \
		EUMGDailyRewardWidgetState inState; \
	}; \
	struct UMGDailyRewardWidget_eventStopIdleAnimationForState_Parms \
	{ \
		EUMGDailyRewardWidgetState inState; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGDailyRewardWidget(); \
	friend struct Z_Construct_UClass_UUMGDailyRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGDailyRewardWidget, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGDailyRewardWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGDailyRewardWidget(); \
	friend struct Z_Construct_UClass_UUMGDailyRewardWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGDailyRewardWidget, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGDailyRewardWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGDailyRewardWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGDailyRewardWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGDailyRewardWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGDailyRewardWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGDailyRewardWidget(UUMGDailyRewardWidget&&); \
	NO_API UUMGDailyRewardWidget(const UUMGDailyRewardWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGDailyRewardWidget(UUMGDailyRewardWidget&&); \
	NO_API UUMGDailyRewardWidget(const UUMGDailyRewardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGDailyRewardWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGDailyRewardWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGDailyRewardWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsMarkedSpecial() { return STRUCT_OFFSET(UUMGDailyRewardWidget, IsMarkedSpecial); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UUMGDailyRewardWidget, State); } \
	FORCEINLINE static uint32 __PPO__AmountText() { return STRUCT_OFFSET(UUMGDailyRewardWidget, AmountText); } \
	FORCEINLINE static uint32 __PPO__ItemNameText() { return STRUCT_OFFSET(UUMGDailyRewardWidget, ItemNameText); } \
	FORCEINLINE static uint32 __PPO__RewardNumberText() { return STRUCT_OFFSET(UUMGDailyRewardWidget, RewardNumberText); } \
	FORCEINLINE static uint32 __PPO__RewardTypeSwitcher() { return STRUCT_OFFSET(UUMGDailyRewardWidget, RewardTypeSwitcher); } \
	FORCEINLINE static uint32 __PPO__ItemInfoPanel() { return STRUCT_OFFSET(UUMGDailyRewardWidget, ItemInfoPanel); } \
	FORCEINLINE static uint32 __PPO__OfferingInfoPanel() { return STRUCT_OFFSET(UUMGDailyRewardWidget, OfferingInfoPanel); } \
	FORCEINLINE static uint32 __PPO__GenericInfoPanel() { return STRUCT_OFFSET(UUMGDailyRewardWidget, GenericInfoPanel); } \
	FORCEINLINE static uint32 __PPO__FreeTicketInfoPanel() { return STRUCT_OFFSET(UUMGDailyRewardWidget, FreeTicketInfoPanel); } \
	FORCEINLINE static uint32 __PPO__CrateKeyInfoPanel() { return STRUCT_OFFSET(UUMGDailyRewardWidget, CrateKeyInfoPanel); } \
	FORCEINLINE static uint32 __PPO__ItemIcon() { return STRUCT_OFFSET(UUMGDailyRewardWidget, ItemIcon); } \
	FORCEINLINE static uint32 __PPO__OfferingIcon() { return STRUCT_OFFSET(UUMGDailyRewardWidget, OfferingIcon); } \
	FORCEINLINE static uint32 __PPO__GenericRewardIcon() { return STRUCT_OFFSET(UUMGDailyRewardWidget, GenericRewardIcon); } \
	FORCEINLINE static uint32 __PPO__FreeTicketRewardIcon() { return STRUCT_OFFSET(UUMGDailyRewardWidget, FreeTicketRewardIcon); } \
	FORCEINLINE static uint32 __PPO__ParentItemIcon() { return STRUCT_OFFSET(UUMGDailyRewardWidget, ParentItemIcon); } \
	FORCEINLINE static uint32 __PPO__CrateKeyRewardIcon() { return STRUCT_OFFSET(UUMGDailyRewardWidget, CrateKeyRewardIcon); } \
	FORCEINLINE static uint32 __PPO__ParentItemPanel() { return STRUCT_OFFSET(UUMGDailyRewardWidget, ParentItemPanel); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGDailyRewardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGDailyRewardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
