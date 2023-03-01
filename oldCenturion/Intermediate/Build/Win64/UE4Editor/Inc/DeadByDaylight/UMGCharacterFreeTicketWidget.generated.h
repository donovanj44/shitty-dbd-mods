// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGCharacterFreeTicketWidget_generated_h
#error "UMGCharacterFreeTicketWidget.generated.h already included, missing '#pragma once' in UMGCharacterFreeTicketWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterFreeTicketWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterFreeTicketWidgetOnUseFreeTicketEvent_Parms \
{ \
	FString ticketId; \
	FString characterName; \
}; \
static inline void FUMGCharacterFreeTicketWidgetOnUseFreeTicketEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterFreeTicketWidgetOnUseFreeTicketEvent, const FString& ticketId, const FString& characterName) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterFreeTicketWidgetOnUseFreeTicketEvent_Parms Parms; \
	Parms.ticketId=ticketId; \
	Parms.characterName=characterName; \
	UMGCharacterFreeTicketWidgetOnUseFreeTicketEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleButtonClickEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleButtonClickEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_EVENT_PARMS \
	struct UMGCharacterFreeTicketWidget_eventUpdateBGColor_Parms \
	{ \
		bool isSlasher; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterFreeTicketWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterFreeTicketWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterFreeTicketWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterFreeTicketWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterFreeTicketWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterFreeTicketWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterFreeTicketWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterFreeTicketWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterFreeTicketWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterFreeTicketWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterFreeTicketWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterFreeTicketWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterFreeTicketWidget(UUMGCharacterFreeTicketWidget&&); \
	NO_API UUMGCharacterFreeTicketWidget(const UUMGCharacterFreeTicketWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterFreeTicketWidget(UUMGCharacterFreeTicketWidget&&); \
	NO_API UUMGCharacterFreeTicketWidget(const UUMGCharacterFreeTicketWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterFreeTicketWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterFreeTicketWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterFreeTicketWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PanelSwitcher() { return STRUCT_OFFSET(UUMGCharacterFreeTicketWidget, PanelSwitcher); } \
	FORCEINLINE static uint32 __PPO__FreeTicketItemButtonBox() { return STRUCT_OFFSET(UUMGCharacterFreeTicketWidget, FreeTicketItemButtonBox); } \
	FORCEINLINE static uint32 __PPO___buttonClass() { return STRUCT_OFFSET(UUMGCharacterFreeTicketWidget, _buttonClass); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterFreeTicketWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterFreeTicketWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
