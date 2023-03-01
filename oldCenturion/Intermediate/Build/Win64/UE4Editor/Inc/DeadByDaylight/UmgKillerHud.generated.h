// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionDefinition;
struct FVector2D;
class ACollectable;
enum class EInventoryType : uint8;
enum class EInputInteractionType : uint8;
#ifdef DEADBYDAYLIGHT_UmgKillerHud_generated_h
#error "UmgKillerHud.generated.h already included, missing '#pragma once' in UmgKillerHud.h"
#endif
#define DEADBYDAYLIGHT_UmgKillerHud_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentPowerUseInteraction); \
	DECLARE_FUNCTION(execIsAttackButtonVisible); \
	DECLARE_FUNCTION(execIsCancelPowerButtonAvailable); \
	DECLARE_FUNCTION(execIsPowerButtonAvailable); \
	DECLARE_FUNCTION(execOnActionButtonPressed); \
	DECLARE_FUNCTION(execOnActionButtonReleased); \
	DECLARE_FUNCTION(execOnAttackButtonPressed); \
	DECLARE_FUNCTION(execOnAttackButtonReleased); \
	DECLARE_FUNCTION(execOnCancelButtonPressed); \
	DECLARE_FUNCTION(execOnCancelButtonReleased); \
	DECLARE_FUNCTION(execOnPowerButtonPressed); \
	DECLARE_FUNCTION(execOnPowerButtonReleased); \
	DECLARE_FUNCTION(execOnSecondAbilityButtonLongPressed); \
	DECLARE_FUNCTION(execOnSecondAbilityButtonPressed); \
	DECLARE_FUNCTION(execRespondToVirtualJoystickPressChanged); \
	DECLARE_FUNCTION(execSetPowerAttackJoystickPosition); \
	DECLARE_FUNCTION(execSetPowerAttackJoystickThumbImage); \
	DECLARE_FUNCTION(execSetPowerIconFromItem); \
	DECLARE_FUNCTION(execShouldShowInteractionHighlight); \
	DECLARE_FUNCTION(execUpdatePowerButtonTier);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentPowerUseInteraction); \
	DECLARE_FUNCTION(execIsAttackButtonVisible); \
	DECLARE_FUNCTION(execIsCancelPowerButtonAvailable); \
	DECLARE_FUNCTION(execIsPowerButtonAvailable); \
	DECLARE_FUNCTION(execOnActionButtonPressed); \
	DECLARE_FUNCTION(execOnActionButtonReleased); \
	DECLARE_FUNCTION(execOnAttackButtonPressed); \
	DECLARE_FUNCTION(execOnAttackButtonReleased); \
	DECLARE_FUNCTION(execOnCancelButtonPressed); \
	DECLARE_FUNCTION(execOnCancelButtonReleased); \
	DECLARE_FUNCTION(execOnPowerButtonPressed); \
	DECLARE_FUNCTION(execOnPowerButtonReleased); \
	DECLARE_FUNCTION(execOnSecondAbilityButtonLongPressed); \
	DECLARE_FUNCTION(execOnSecondAbilityButtonPressed); \
	DECLARE_FUNCTION(execRespondToVirtualJoystickPressChanged); \
	DECLARE_FUNCTION(execSetPowerAttackJoystickPosition); \
	DECLARE_FUNCTION(execSetPowerAttackJoystickThumbImage); \
	DECLARE_FUNCTION(execSetPowerIconFromItem); \
	DECLARE_FUNCTION(execShouldShowInteractionHighlight); \
	DECLARE_FUNCTION(execUpdatePowerButtonTier);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUmgKillerHud(); \
	friend struct Z_Construct_UClass_UUmgKillerHud_Statics; \
public: \
	DECLARE_CLASS(UUmgKillerHud, UUmgPlayableHud, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgKillerHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUmgKillerHud(); \
	friend struct Z_Construct_UClass_UUmgKillerHud_Statics; \
public: \
	DECLARE_CLASS(UUmgKillerHud, UUmgPlayableHud, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgKillerHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUmgKillerHud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUmgKillerHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgKillerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgKillerHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgKillerHud(UUmgKillerHud&&); \
	NO_API UUmgKillerHud(const UUmgKillerHud&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgKillerHud(UUmgKillerHud&&); \
	NO_API UUmgKillerHud(const UUmgKillerHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgKillerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgKillerHud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUmgKillerHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Killer() { return STRUCT_OFFSET(UUmgKillerHud, Killer); } \
	FORCEINLINE static uint32 __PPO___isCancelButtonPressed() { return STRUCT_OFFSET(UUmgKillerHud, _isCancelButtonPressed); } \
	FORCEINLINE static uint32 __PPO___isAttackButtonPressed() { return STRUCT_OFFSET(UUmgKillerHud, _isAttackButtonPressed); } \
	FORCEINLINE static uint32 __PPO___isAttackJoystickActivated() { return STRUCT_OFFSET(UUmgKillerHud, _isAttackJoystickActivated); } \
	FORCEINLINE static uint32 __PPO___isPowerAttackJoystickActivated() { return STRUCT_OFFSET(UUmgKillerHud, _isPowerAttackJoystickActivated); } \
	FORCEINLINE static uint32 __PPO___powerAttackJoystickBackgroundImage() { return STRUCT_OFFSET(UUmgKillerHud, _powerAttackJoystickBackgroundImage); } \
	FORCEINLINE static uint32 __PPO___DefaultAttackJoystickIconPressedImage() { return STRUCT_OFFSET(UUmgKillerHud, _DefaultAttackJoystickIconPressedImage); } \
	FORCEINLINE static uint32 __PPO___DefaultAttackJoystickIconUnpressedImage() { return STRUCT_OFFSET(UUmgKillerHud, _DefaultAttackJoystickIconUnpressedImage); } \
	FORCEINLINE static uint32 __PPO___powerAttackJoystickThumbPressedSize() { return STRUCT_OFFSET(UUmgKillerHud, _powerAttackJoystickThumbPressedSize); } \
	FORCEINLINE static uint32 __PPO___powerAttackJoystickThumbUnpressedSize() { return STRUCT_OFFSET(UUmgKillerHud, _powerAttackJoystickThumbUnpressedSize); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_20_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUmgKillerHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UmgKillerHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
