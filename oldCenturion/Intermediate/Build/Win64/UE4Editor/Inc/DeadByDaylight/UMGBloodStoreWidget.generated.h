// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGBloodStoreWidget_generated_h
#error "UMGBloodStoreWidget.generated.h already included, missing '#pragma once' in UMGBloodStoreWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGBloodStoreWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_13_DELEGATE \
static inline void FUMGBloodStoreWidgetOnCharacterRoleButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGBloodStoreWidgetOnCharacterRoleButtonClicked) \
{ \
	UMGBloodStoreWidgetOnCharacterRoleButtonClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventUMGBloodStoreWidgetOnBloodNodePurchase_Parms \
{ \
	int32 characterId; \
}; \
static inline void FUMGBloodStoreWidgetOnBloodNodePurchase_DelegateWrapper(const FMulticastScriptDelegate& UMGBloodStoreWidgetOnBloodNodePurchase, int32 characterId) \
{ \
	_Script_DeadByDaylight_eventUMGBloodStoreWidgetOnBloodNodePurchase_Parms Parms; \
	Parms.characterId=characterId; \
	UMGBloodStoreWidgetOnBloodNodePurchase.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventUMGBloodStoreWidgetOnBloodStoreRegenerate_Parms \
{ \
	int32 characterId; \
}; \
static inline void FUMGBloodStoreWidgetOnBloodStoreRegenerate_DelegateWrapper(const FMulticastScriptDelegate& UMGBloodStoreWidgetOnBloodStoreRegenerate, int32 characterId) \
{ \
	_Script_DeadByDaylight_eventUMGBloodStoreWidgetOnBloodStoreRegenerate_Parms Parms; \
	Parms.characterId=characterId; \
	UMGBloodStoreWidgetOnBloodStoreRegenerate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventUMGBloodStoreWidgetOnBloodNodeSelected_Parms \
{ \
	int32 characterId; \
	int32 nodeId; \
	int32 nodeDepth; \
}; \
static inline void FUMGBloodStoreWidgetOnBloodNodeSelected_DelegateWrapper(const FMulticastScriptDelegate& UMGBloodStoreWidgetOnBloodNodeSelected, int32 characterId, int32 nodeId, int32 nodeDepth) \
{ \
	_Script_DeadByDaylight_eventUMGBloodStoreWidgetOnBloodNodeSelected_Parms Parms; \
	Parms.characterId=characterId; \
	Parms.nodeId=nodeId; \
	Parms.nodeDepth=nodeDepth; \
	UMGBloodStoreWidgetOnBloodNodeSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPurchaseSelectedNode); \
	DECLARE_FUNCTION(execRegenerateBloodStore); \
	DECLARE_FUNCTION(execSetSelectedNode); \
	DECLARE_FUNCTION(execSwitchRole); \
	DECLARE_FUNCTION(execUnselectNode);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPurchaseSelectedNode); \
	DECLARE_FUNCTION(execRegenerateBloodStore); \
	DECLARE_FUNCTION(execSetSelectedNode); \
	DECLARE_FUNCTION(execSwitchRole); \
	DECLARE_FUNCTION(execUnselectNode);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_EVENT_PARMS \
	struct UMGBloodStoreWidget_eventSetFaction_Parms \
	{ \
		bool isKiller; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBloodStoreWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBloodStoreWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreWidget(UUMGBloodStoreWidget&&); \
	NO_API UUMGBloodStoreWidget(const UUMGBloodStoreWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreWidget(UUMGBloodStoreWidget&&); \
	NO_API UUMGBloodStoreWidget(const UUMGBloodStoreWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBloodStoreWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BloodStoreArrayWidget() { return STRUCT_OFFSET(UUMGBloodStoreWidget, BloodStoreArrayWidget); } \
	FORCEINLINE static uint32 __PPO__ItemPreviewWidget() { return STRUCT_OFFSET(UUMGBloodStoreWidget, ItemPreviewWidget); } \
	FORCEINLINE static uint32 __PPO__BloodStoreSubMenuWidget() { return STRUCT_OFFSET(UUMGBloodStoreWidget, BloodStoreSubMenuWidget); } \
	FORCEINLINE static uint32 __PPO___bloodStoreTitle() { return STRUCT_OFFSET(UUMGBloodStoreWidget, _bloodStoreTitle); } \
	FORCEINLINE static uint32 __PPO___killersTitle() { return STRUCT_OFFSET(UUMGBloodStoreWidget, _killersTitle); } \
	FORCEINLINE static uint32 __PPO___survivorsTitle() { return STRUCT_OFFSET(UUMGBloodStoreWidget, _survivorsTitle); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGBloodStoreWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
