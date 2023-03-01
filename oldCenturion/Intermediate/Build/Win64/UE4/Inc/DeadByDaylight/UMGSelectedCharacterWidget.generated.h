// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGSelectedCharacterWidget_generated_h
#error "UMGSelectedCharacterWidget.generated.h already included, missing '#pragma once' in UMGSelectedCharacterWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGSelectedCharacterWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_11_DELEGATE \
static inline void FUMGSelectedCharacterWidgetOnCancelPartyButtonClick_DelegateWrapper(const FMulticastScriptDelegate& UMGSelectedCharacterWidgetOnCancelPartyButtonClick) \
{ \
	UMGSelectedCharacterWidgetOnCancelPartyButtonClick.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPrestigeButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPrestigeButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_EVENT_PARMS \
	struct UMGSelectedCharacterWidget_eventSetVisualsForPartyState_Parms \
	{ \
		bool triggerPartyVisuals; \
	}; \
	struct UMGSelectedCharacterWidget_eventSetVisualsForReadyState_Parms \
	{ \
		bool isPlayerReady; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSelectedCharacterWidget(); \
	friend struct Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGSelectedCharacterWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSelectedCharacterWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSelectedCharacterWidget(); \
	friend struct Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGSelectedCharacterWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSelectedCharacterWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSelectedCharacterWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSelectedCharacterWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSelectedCharacterWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSelectedCharacterWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSelectedCharacterWidget(UUMGSelectedCharacterWidget&&); \
	NO_API UUMGSelectedCharacterWidget(const UUMGSelectedCharacterWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSelectedCharacterWidget(UUMGSelectedCharacterWidget&&); \
	NO_API UUMGSelectedCharacterWidget(const UUMGSelectedCharacterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSelectedCharacterWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSelectedCharacterWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGSelectedCharacterWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrestigeButton() { return STRUCT_OFFSET(UUMGSelectedCharacterWidget, PrestigeButton); } \
	FORCEINLINE static uint32 __PPO__CharacterNameText() { return STRUCT_OFFSET(UUMGSelectedCharacterWidget, CharacterNameText); } \
	FORCEINLINE static uint32 __PPO__CharacterLevelText() { return STRUCT_OFFSET(UUMGSelectedCharacterWidget, CharacterLevelText); } \
	FORCEINLINE static uint32 __PPO__CharacterLevelVerticalBox() { return STRUCT_OFFSET(UUMGSelectedCharacterWidget, CharacterLevelVerticalBox); } \
	FORCEINLINE static uint32 __PPO__LeaderIcon() { return STRUCT_OFFSET(UUMGSelectedCharacterWidget, LeaderIcon); } \
	FORCEINLINE static uint32 __PPO___onCancelPartyButtonClick() { return STRUCT_OFFSET(UUMGSelectedCharacterWidget, _onCancelPartyButtonClick); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGSelectedCharacterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGSelectedCharacterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
