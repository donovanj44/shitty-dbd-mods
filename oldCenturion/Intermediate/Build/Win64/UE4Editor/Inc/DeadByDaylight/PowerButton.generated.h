// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActionButton;
enum class EActionButtonState : uint8;
enum class ERadialProgressBarType : uint8;
#ifdef DEADBYDAYLIGHT_PowerButton_generated_h
#error "PowerButton.generated.h already included, missing '#pragma once' in PowerButton.h"
#endif
#define DEADBYDAYLIGHT_PowerButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActionButton); \
	DECLARE_FUNCTION(execIsRadialProgressBarActive); \
	DECLARE_FUNCTION(execSetFillProgressPercentage); \
	DECLARE_FUNCTION(execSetPowerIntensityOpacity); \
	DECLARE_FUNCTION(execSetRadialProgressBarActice); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetSwitchIconActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActionButton); \
	DECLARE_FUNCTION(execIsRadialProgressBarActive); \
	DECLARE_FUNCTION(execSetFillProgressPercentage); \
	DECLARE_FUNCTION(execSetPowerIntensityOpacity); \
	DECLARE_FUNCTION(execSetRadialProgressBarActice); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetSwitchIconActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_EVENT_PARMS \
	struct PowerButton_eventOnTierChanged_Parms \
	{ \
		int32 previousTier; \
		int32 currentTier; \
		bool isFirstTime; \
	}; \
	struct PowerButton_eventSetRadialProgressPercentage_Parms \
	{ \
		float progression; \
		ERadialProgressBarType progressBarType; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPowerButton(); \
	friend struct Z_Construct_UClass_UPowerButton_Statics; \
public: \
	DECLARE_CLASS(UPowerButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPowerButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPowerButton(); \
	friend struct Z_Construct_UClass_UPowerButton_Statics; \
public: \
	DECLARE_CLASS(UPowerButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPowerButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPowerButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPowerButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerButton(UPowerButton&&); \
	NO_API UPowerButton(const UPowerButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerButton(UPowerButton&&); \
	NO_API UPowerButton(const UPowerButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPowerButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button() { return STRUCT_OFFSET(UPowerButton, Button); } \
	FORCEINLINE static uint32 __PPO__SwitchIcon() { return STRUCT_OFFSET(UPowerButton, SwitchIcon); } \
	FORCEINLINE static uint32 __PPO__CountContainer() { return STRUCT_OFFSET(UPowerButton, CountContainer); } \
	FORCEINLINE static uint32 __PPO__RadialProgressBarContainer() { return STRUCT_OFFSET(UPowerButton, RadialProgressBarContainer); } \
	FORCEINLINE static uint32 __PPO__CountLabel() { return STRUCT_OFFSET(UPowerButton, CountLabel); } \
	FORCEINLINE static uint32 __PPO__TierImage() { return STRUCT_OFFSET(UPowerButton, TierImage); } \
	FORCEINLINE static uint32 __PPO__AddonsContainer() { return STRUCT_OFFSET(UPowerButton, AddonsContainer); } \
	FORCEINLINE static uint32 __PPO__FirstAddonSlot() { return STRUCT_OFFSET(UPowerButton, FirstAddonSlot); } \
	FORCEINLINE static uint32 __PPO__SecondAddonSlot() { return STRUCT_OFFSET(UPowerButton, SecondAddonSlot); } \
	FORCEINLINE static uint32 __PPO__FillPowerChargeProgression() { return STRUCT_OFFSET(UPowerButton, FillPowerChargeProgression); } \
	FORCEINLINE static uint32 __PPO__DisabledOpacity() { return STRUCT_OFFSET(UPowerButton, DisabledOpacity); } \
	FORCEINLINE static uint32 __PPO__EnabledOpacity() { return STRUCT_OFFSET(UPowerButton, EnabledOpacity); } \
	FORCEINLINE static uint32 __PPO__EnabledLongPressed() { return STRUCT_OFFSET(UPowerButton, EnabledLongPressed); } \
	FORCEINLINE static uint32 __PPO___itemCount() { return STRUCT_OFFSET(UPowerButton, _itemCount); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPowerButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PowerButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
