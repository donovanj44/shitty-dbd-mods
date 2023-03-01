// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBarColor : uint8;
struct FStatusEffectSlotData;
#ifdef DEADBYDAYLIGHT_UMGChargeableInteractionWidget_generated_h
#error "UMGChargeableInteractionWidget.generated.h already included, missing '#pragma once' in UMGChargeableInteractionWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGChargeableInteractionWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_EVENT_PARMS \
	struct UMGChargeableInteractionWidget_eventSetItemChargeColor_Parms \
	{ \
		EBarColor barColor; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetItemChargeValue_Parms \
	{ \
		float value; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetMessage_Parms \
	{ \
		FString message; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetOpacity_Parms \
	{ \
		float opacity; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetProficiencyData_Parms \
	{ \
		int32 index; \
		FStatusEffectSlotData proficiencyData; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetProgressBarColor_Parms \
	{ \
		EBarColor barColor; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetProgressbarValue_Parms \
	{ \
		float value; \
	}; \
	struct UMGChargeableInteractionWidget_eventSetSecondaryMessage_Parms \
	{ \
		FString secondMessage; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGChargeableInteractionWidget(); \
	friend struct Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGChargeableInteractionWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGChargeableInteractionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGChargeableInteractionWidget(); \
	friend struct Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGChargeableInteractionWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGChargeableInteractionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGChargeableInteractionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGChargeableInteractionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGChargeableInteractionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGChargeableInteractionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGChargeableInteractionWidget(UUMGChargeableInteractionWidget&&); \
	NO_API UUMGChargeableInteractionWidget(const UUMGChargeableInteractionWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGChargeableInteractionWidget(UUMGChargeableInteractionWidget&&); \
	NO_API UUMGChargeableInteractionWidget(const UUMGChargeableInteractionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGChargeableInteractionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGChargeableInteractionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGChargeableInteractionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemIcon() { return STRUCT_OFFSET(UUMGChargeableInteractionWidget, ItemIcon); } \
	FORCEINLINE static uint32 __PPO__InteractionIconVisibility() { return STRUCT_OFFSET(UUMGChargeableInteractionWidget, InteractionIconVisibility); } \
	FORCEINLINE static uint32 __PPO__ItemChargeVisibility() { return STRUCT_OFFSET(UUMGChargeableInteractionWidget, ItemChargeVisibility); } \
	FORCEINLINE static uint32 __PPO__InteractionHudVisibility() { return STRUCT_OFFSET(UUMGChargeableInteractionWidget, InteractionHudVisibility); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGChargeableInteractionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGChargeableInteractionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
