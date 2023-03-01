// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTallyItemChangedData;
#ifdef DEADBYDAYLIGHT_UMGTallyBloodpointsWidget_generated_h
#error "UMGTallyBloodpointsWidget.generated.h already included, missing '#pragma once' in UMGTallyBloodpointsWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGTallyBloodpointsWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_EVENT_PARMS \
	struct UMGTallyBloodpointsWidget_eventShowTallyItemWidget_Parms \
	{ \
		bool isShow; \
	}; \
	struct UMGTallyBloodpointsWidget_eventUpdateTallyItemWidget_Parms \
	{ \
		FTallyItemChangedData data; \
	}; \
	struct UMGTallyBloodpointsWidget_eventUpdateTallyRewardWidget_Parms \
	{ \
		FString rewardName; \
		int32 existReward; \
		int32 addReward; \
	}; \
	struct UMGTallyBloodpointsWidget_eventUpdateTallyTotalBloodpoints_Parms \
	{ \
		int32 totalValue; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTallyBloodpointsWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyBloodpointsWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyBloodpointsWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTallyBloodpointsWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyBloodpointsWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyBloodpointsWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTallyBloodpointsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTallyBloodpointsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyBloodpointsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyBloodpointsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyBloodpointsWidget(UUMGTallyBloodpointsWidget&&); \
	NO_API UUMGTallyBloodpointsWidget(const UUMGTallyBloodpointsWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyBloodpointsWidget(UUMGTallyBloodpointsWidget&&); \
	NO_API UUMGTallyBloodpointsWidget(const UUMGTallyBloodpointsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyBloodpointsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyBloodpointsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTallyBloodpointsWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___itemBoxVisibility() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _itemBoxVisibility); } \
	FORCEINLINE static uint32 __PPO___labelTotalScore() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelTotalScore); } \
	FORCEINLINE static uint32 __PPO___labelItemTitle() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelItemTitle); } \
	FORCEINLINE static uint32 __PPO___labelItemAddOnTitle() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelItemAddOnTitle); } \
	FORCEINLINE static uint32 __PPO___labelItemTitleColor() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelItemTitleColor); } \
	FORCEINLINE static uint32 __PPO__BoxScoreCategory() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, BoxScoreCategory); } \
	FORCEINLINE static uint32 __PPO___scoreCategoryExtraDataMap() { return STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _scoreCategoryExtraDataMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTallyBloodpointsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyBloodpointsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
