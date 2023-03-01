// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FVector2D;
#ifdef DEADBYDAYLIGHT_UmgSurvivorHud_generated_h
#error "UmgSurvivorHud.generated.h already included, missing '#pragma once' in UmgSurvivorHud.h"
#endif
#define DEADBYDAYLIGHT_UmgSurvivorHud_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCenterItemClicked); \
	DECLARE_FUNCTION(execGetCenterItemIcon); \
	DECLARE_FUNCTION(execGetCenterItemText); \
	DECLARE_FUNCTION(execGetLookBackJoystickIsPressed); \
	DECLARE_FUNCTION(execGetLookBackJoystickNormalizedOffset); \
	DECLARE_FUNCTION(execHasSecondaryActionAvailable); \
	DECLARE_FUNCTION(execOnCancelButtonClicked); \
	DECLARE_FUNCTION(execRespondToVirtualJoystickPressChanged); \
	DECLARE_FUNCTION(execSetLookBackJoystickImage); \
	DECLARE_FUNCTION(execSetLookBackJoystickPosition); \
	DECLARE_FUNCTION(execSetSkillCheckButtonPosition); \
	DECLARE_FUNCTION(execShouldUseContextualItemButton); \
	DECLARE_FUNCTION(execUpdateCancelButton);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCenterItemClicked); \
	DECLARE_FUNCTION(execGetCenterItemIcon); \
	DECLARE_FUNCTION(execGetCenterItemText); \
	DECLARE_FUNCTION(execGetLookBackJoystickIsPressed); \
	DECLARE_FUNCTION(execGetLookBackJoystickNormalizedOffset); \
	DECLARE_FUNCTION(execHasSecondaryActionAvailable); \
	DECLARE_FUNCTION(execOnCancelButtonClicked); \
	DECLARE_FUNCTION(execRespondToVirtualJoystickPressChanged); \
	DECLARE_FUNCTION(execSetLookBackJoystickImage); \
	DECLARE_FUNCTION(execSetLookBackJoystickPosition); \
	DECLARE_FUNCTION(execSetSkillCheckButtonPosition); \
	DECLARE_FUNCTION(execShouldUseContextualItemButton); \
	DECLARE_FUNCTION(execUpdateCancelButton);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_EVENT_PARMS \
	struct UmgSurvivorHud_eventSetNonRestrictedControlsVisibility_Parms \
	{ \
		bool visible; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUmgSurvivorHud(); \
	friend struct Z_Construct_UClass_UUmgSurvivorHud_Statics; \
public: \
	DECLARE_CLASS(UUmgSurvivorHud, UUmgPlayableHud, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgSurvivorHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUmgSurvivorHud(); \
	friend struct Z_Construct_UClass_UUmgSurvivorHud_Statics; \
public: \
	DECLARE_CLASS(UUmgSurvivorHud, UUmgPlayableHud, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgSurvivorHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUmgSurvivorHud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUmgSurvivorHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgSurvivorHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgSurvivorHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgSurvivorHud(UUmgSurvivorHud&&); \
	NO_API UUmgSurvivorHud(const UUmgSurvivorHud&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgSurvivorHud(UUmgSurvivorHud&&); \
	NO_API UUmgSurvivorHud(const UUmgSurvivorHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgSurvivorHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgSurvivorHud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUmgSurvivorHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrouchButton() { return STRUCT_OFFSET(UUmgSurvivorHud, CrouchButton); } \
	FORCEINLINE static uint32 __PPO__CrouchButtonContainer() { return STRUCT_OFFSET(UUmgSurvivorHud, CrouchButtonContainer); } \
	FORCEINLINE static uint32 __PPO__StruggleWidget() { return STRUCT_OFFSET(UUmgSurvivorHud, StruggleWidget); } \
	FORCEINLINE static uint32 __PPO__StruggleWidgetContainer() { return STRUCT_OFFSET(UUmgSurvivorHud, StruggleWidgetContainer); } \
	FORCEINLINE static uint32 __PPO__WiggleWidget() { return STRUCT_OFFSET(UUmgSurvivorHud, WiggleWidget); } \
	FORCEINLINE static uint32 __PPO__WiggleWidgetContainer() { return STRUCT_OFFSET(UUmgSurvivorHud, WiggleWidgetContainer); } \
	FORCEINLINE static uint32 __PPO__Survivor() { return STRUCT_OFFSET(UUmgSurvivorHud, Survivor); } \
	FORCEINLINE static uint32 __PPO__CancelButton() { return STRUCT_OFFSET(UUmgSurvivorHud, CancelButton); } \
	FORCEINLINE static uint32 __PPO__CenterInteractionButtonContainer() { return STRUCT_OFFSET(UUmgSurvivorHud, CenterInteractionButtonContainer); } \
	FORCEINLINE static uint32 __PPO__LookBackButtonContainer() { return STRUCT_OFFSET(UUmgSurvivorHud, LookBackButtonContainer); } \
	FORCEINLINE static uint32 __PPO__LookBackJoystick() { return STRUCT_OFFSET(UUmgSurvivorHud, LookBackJoystick); } \
	FORCEINLINE static uint32 __PPO__SkillCheckButton() { return STRUCT_OFFSET(UUmgSurvivorHud, SkillCheckButton); } \
	FORCEINLINE static uint32 __PPO__SkillCheckButtonCanvas() { return STRUCT_OFFSET(UUmgSurvivorHud, SkillCheckButtonCanvas); } \
	FORCEINLINE static uint32 __PPO__InsaneSkillCheckButtonCanvas() { return STRUCT_OFFSET(UUmgSurvivorHud, InsaneSkillCheckButtonCanvas); } \
	FORCEINLINE static uint32 __PPO___unpressedLookBackJoystickThumbImage() { return STRUCT_OFFSET(UUmgSurvivorHud, _unpressedLookBackJoystickThumbImage); } \
	FORCEINLINE static uint32 __PPO___pressedLookBackJoystickThumbImage() { return STRUCT_OFFSET(UUmgSurvivorHud, _pressedLookBackJoystickThumbImage); } \
	FORCEINLINE static uint32 __PPO___unpressedLookBackJoystickBackgroundImage() { return STRUCT_OFFSET(UUmgSurvivorHud, _unpressedLookBackJoystickBackgroundImage); } \
	FORCEINLINE static uint32 __PPO___pressedLookBackJoystickBackgroundImage() { return STRUCT_OFFSET(UUmgSurvivorHud, _pressedLookBackJoystickBackgroundImage); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUmgSurvivorHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UmgSurvivorHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
