// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTooltipPressedData;
enum class EPlayerRole : uint8;
#ifdef DEADBYDAYLIGHT_UMGRankBanner_generated_h
#error "UMGRankBanner.generated.h already included, missing '#pragma once' in UMGRankBanner.h"
#endif
#define DEADBYDAYLIGHT_UMGRankBanner_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventUMGRankBannerOnLongPressRankTooltipEvent_Parms \
{ \
	FTooltipPressedData tooltipPressedData; \
}; \
static inline void FUMGRankBannerOnLongPressRankTooltipEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGRankBannerOnLongPressRankTooltipEvent, FTooltipPressedData const& tooltipPressedData) \
{ \
	_Script_DeadByDaylight_eventUMGRankBannerOnLongPressRankTooltipEvent_Parms Parms; \
	Parms.tooltipPressedData=tooltipPressedData; \
	UMGRankBannerOnLongPressRankTooltipEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execStartHighlight); \
	DECLARE_FUNCTION(execStopHighlight);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execStartHighlight); \
	DECLARE_FUNCTION(execStopHighlight);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGRankBanner(); \
	friend struct Z_Construct_UClass_UUMGRankBanner_Statics; \
public: \
	DECLARE_CLASS(UUMGRankBanner, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGRankBanner) \
	virtual UObject* _getUObject() const override { return const_cast<UUMGRankBanner*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUMGRankBanner(); \
	friend struct Z_Construct_UClass_UUMGRankBanner_Statics; \
public: \
	DECLARE_CLASS(UUMGRankBanner, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGRankBanner) \
	virtual UObject* _getUObject() const override { return const_cast<UUMGRankBanner*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGRankBanner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGRankBanner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGRankBanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGRankBanner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGRankBanner(UUMGRankBanner&&); \
	NO_API UUMGRankBanner(const UUMGRankBanner&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGRankBanner(UUMGRankBanner&&); \
	NO_API UUMGRankBanner(const UUMGRankBanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGRankBanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGRankBanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGRankBanner)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RankFrameWidget() { return STRUCT_OFFSET(UUMGRankBanner, RankFrameWidget); } \
	FORCEINLINE static uint32 __PPO__TooltipButton() { return STRUCT_OFFSET(UUMGRankBanner, TooltipButton); } \
	FORCEINLINE static uint32 __PPO__HighlightImage() { return STRUCT_OFFSET(UUMGRankBanner, HighlightImage); } \
	FORCEINLINE static uint32 __PPO__OnLongPressSound() { return STRUCT_OFFSET(UUMGRankBanner, OnLongPressSound); } \
	FORCEINLINE static uint32 __PPO___onLongPressRankTooltipEvent() { return STRUCT_OFFSET(UUMGRankBanner, _onLongPressRankTooltipEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_16_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGRankBanner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGRankBanner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
