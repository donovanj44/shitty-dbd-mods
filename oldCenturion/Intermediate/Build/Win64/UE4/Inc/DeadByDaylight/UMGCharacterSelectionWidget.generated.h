// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGCharacterSelectionWidget_generated_h
#error "UMGCharacterSelectionWidget.generated.h already included, missing '#pragma once' in UMGCharacterSelectionWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterSelectionWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_13_DELEGATE \
static inline void FUMGCharacterSelectionWidgetOnCharacterInfoButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterSelectionWidgetOnCharacterInfoButtonClicked) \
{ \
	UMGCharacterSelectionWidgetOnCharacterInfoButtonClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_12_DELEGATE \
static inline void FUMGCharacterSelectionWidgetOnCharacterRoleButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterSelectionWidgetOnCharacterRoleButtonClicked) \
{ \
	UMGCharacterSelectionWidgetOnCharacterRoleButtonClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterSelectionWidgetOnCharacterSelected_Parms \
{ \
	int32 charIndex; \
}; \
static inline void FUMGCharacterSelectionWidgetOnCharacterSelected_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterSelectionWidgetOnCharacterSelected, int32 charIndex) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterSelectionWidgetOnCharacterSelected_Parms Parms; \
	Parms.charIndex=charIndex; \
	UMGCharacterSelectionWidgetOnCharacterSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastRoleButtonClicked); \
	DECLARE_FUNCTION(execBroadcastSelectedCharacter); \
	DECLARE_FUNCTION(execSwitchPanel);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastRoleButtonClicked); \
	DECLARE_FUNCTION(execBroadcastSelectedCharacter); \
	DECLARE_FUNCTION(execSwitchPanel);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterSelectionWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterSelectionWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterSelectionWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterSelectionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterSelectionWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterSelectionWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterSelectionWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterSelectionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterSelectionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterSelectionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterSelectionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterSelectionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterSelectionWidget(UUMGCharacterSelectionWidget&&); \
	NO_API UUMGCharacterSelectionWidget(const UUMGCharacterSelectionWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterSelectionWidget(UUMGCharacterSelectionWidget&&); \
	NO_API UUMGCharacterSelectionWidget(const UUMGCharacterSelectionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterSelectionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterSelectionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterSelectionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterPageScrollWidget() { return STRUCT_OFFSET(UUMGCharacterSelectionWidget, CharacterPageScrollWidget); } \
	FORCEINLINE static uint32 __PPO__CharacterSelectSubMenu() { return STRUCT_OFFSET(UUMGCharacterSelectionWidget, CharacterSelectSubMenu); } \
	FORCEINLINE static uint32 __PPO__CharacterInfoWidget() { return STRUCT_OFFSET(UUMGCharacterSelectionWidget, CharacterInfoWidget); } \
	FORCEINLINE static uint32 __PPO__CharacterSwitcher() { return STRUCT_OFFSET(UUMGCharacterSelectionWidget, CharacterSwitcher); } \
	FORCEINLINE static uint32 __PPO___isKiller() { return STRUCT_OFFSET(UUMGCharacterSelectionWidget, _isKiller); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_15_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterSelectionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterSelectionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
