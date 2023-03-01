// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInputInteractionType : uint8;
class UInteractionDefinition;
struct FSlateBrush;
#ifdef DEADBYDAYLIGHT_UmgPlayerHud_generated_h
#error "UmgPlayerHud.generated.h already included, missing '#pragma once' in UmgPlayerHud.h"
#endif
#define DEADBYDAYLIGHT_UmgPlayerHud_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_32_DELEGATE \
static inline void FUmgPlayerHudOnSettingsClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& UmgPlayerHudOnSettingsClickedEvent) \
{ \
	UmgPlayerHudOnSettingsClickedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_31_DELEGATE \
static inline void FUmgPlayerHudOnTutorialNextClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& UmgPlayerHudOnTutorialNextClickedEvent) \
{ \
	UmgPlayerHudOnTutorialNextClickedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_30_DELEGATE \
static inline void FUmgPlayerHudOnTutorialLeaveClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& UmgPlayerHudOnTutorialLeaveClickedEvent) \
{ \
	UmgPlayerHudOnTutorialLeaveClickedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_29_DELEGATE \
struct _Script_DeadByDaylight_eventUmgPlayerHudOnPerkClickedEvent_Parms \
{ \
	FName perkId; \
	bool clickedOnPerksWidget; \
}; \
static inline void FUmgPlayerHudOnPerkClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& UmgPlayerHudOnPerkClickedEvent, FName perkId, bool clickedOnPerksWidget) \
{ \
	_Script_DeadByDaylight_eventUmgPlayerHudOnPerkClickedEvent_Parms Parms; \
	Parms.perkId=perkId; \
	Parms.clickedOnPerksWidget=clickedOnPerksWidget ? true : false; \
	UmgPlayerHudOnPerkClickedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_RPC_WRAPPERS \
	virtual bool IsInitialized_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetCurrentOrAvailableInteractionOfType); \
	DECLARE_FUNCTION(execGetInteractionIconByType); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsInteractionAllowed); \
	DECLARE_FUNCTION(execIsInteractionAvailable); \
	DECLARE_FUNCTION(execOnInteractionEnded); \
	DECLARE_FUNCTION(execOnInteractionStarted); \
	DECLARE_FUNCTION(execOnPerkClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonPressed); \
	DECLARE_FUNCTION(execSetVirtualJoystickThumbImage); \
	DECLARE_FUNCTION(execTutorialTallyLeaveSelected); \
	DECLARE_FUNCTION(execTutorialTallyNextSelected);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsInitialized_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetCurrentOrAvailableInteractionOfType); \
	DECLARE_FUNCTION(execGetInteractionIconByType); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsInteractionAllowed); \
	DECLARE_FUNCTION(execIsInteractionAvailable); \
	DECLARE_FUNCTION(execOnInteractionEnded); \
	DECLARE_FUNCTION(execOnInteractionStarted); \
	DECLARE_FUNCTION(execOnPerkClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonPressed); \
	DECLARE_FUNCTION(execSetVirtualJoystickThumbImage); \
	DECLARE_FUNCTION(execTutorialTallyLeaveSelected); \
	DECLARE_FUNCTION(execTutorialTallyNextSelected);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_EVENT_PARMS \
	struct UmgPlayerHud_eventIsInitialized_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UmgPlayerHud_eventIsInitialized_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUmgPlayerHud(); \
	friend struct Z_Construct_UClass_UUmgPlayerHud_Statics; \
public: \
	DECLARE_CLASS(UUmgPlayerHud, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgPlayerHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUUmgPlayerHud(); \
	friend struct Z_Construct_UClass_UUmgPlayerHud_Statics; \
public: \
	DECLARE_CLASS(UUmgPlayerHud, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgPlayerHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUmgPlayerHud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUmgPlayerHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgPlayerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgPlayerHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgPlayerHud(UUmgPlayerHud&&); \
	NO_API UUmgPlayerHud(const UUmgPlayerHud&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgPlayerHud(UUmgPlayerHud&&); \
	NO_API UUmgPlayerHud(const UUmgPlayerHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgPlayerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgPlayerHud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUmgPlayerHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalController() { return STRUCT_OFFSET(UUmgPlayerHud, LocalController); } \
	FORCEINLINE static uint32 __PPO__AtlantaDirectionalStick() { return STRUCT_OFFSET(UUmgPlayerHud, AtlantaDirectionalStick); } \
	FORCEINLINE static uint32 __PPO__AtlantaDirectionalStickContainer() { return STRUCT_OFFSET(UUmgPlayerHud, AtlantaDirectionalStickContainer); } \
	FORCEINLINE static uint32 __PPO___localPlayer() { return STRUCT_OFFSET(UUmgPlayerHud, _localPlayer); } \
	FORCEINLINE static uint32 __PPO___unlockedVirtualJoystickThumbImage() { return STRUCT_OFFSET(UUmgPlayerHud, _unlockedVirtualJoystickThumbImage); } \
	FORCEINLINE static uint32 __PPO___lockedVirtualJoystickThumbImage() { return STRUCT_OFFSET(UUmgPlayerHud, _lockedVirtualJoystickThumbImage); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_34_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUmgPlayerHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UmgPlayerHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
