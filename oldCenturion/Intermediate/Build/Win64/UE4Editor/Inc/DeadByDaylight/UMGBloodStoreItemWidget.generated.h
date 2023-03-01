// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGBloodStoreItemWidget_generated_h
#error "UMGBloodStoreItemWidget.generated.h already included, missing '#pragma once' in UMGBloodStoreItemWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGBloodStoreItemWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_RPC_WRAPPERS \
	virtual void CollectNode_Implementation(); \
	virtual void ConsumeNode_Implementation(); \
	virtual void FocusNode_Implementation(); \
	virtual void UnFocusNode_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastBloodNodeSelected); \
	DECLARE_FUNCTION(execCollectNode); \
	DECLARE_FUNCTION(execConsumeNode); \
	DECLARE_FUNCTION(execFocusNode); \
	DECLARE_FUNCTION(execUnFocusNode);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CollectNode_Implementation(); \
	virtual void ConsumeNode_Implementation(); \
	virtual void FocusNode_Implementation(); \
	virtual void UnFocusNode_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastBloodNodeSelected); \
	DECLARE_FUNCTION(execCollectNode); \
	DECLARE_FUNCTION(execConsumeNode); \
	DECLARE_FUNCTION(execFocusNode); \
	DECLARE_FUNCTION(execUnFocusNode);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_EVENT_PARMS \
	struct UMGBloodStoreItemWidget_eventPlayConsumedAnimation_Parms \
	{ \
		bool skipIntro; \
	}; \
	struct UMGBloodStoreItemWidget_eventSetSelectedVisibilities_Parms \
	{ \
		bool isSelected; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreItemWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreItemWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreItemWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreItemWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreItemWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreItemWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBloodStoreItemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBloodStoreItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreItemWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreItemWidget(UUMGBloodStoreItemWidget&&); \
	NO_API UUMGBloodStoreItemWidget(const UUMGBloodStoreItemWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreItemWidget(UUMGBloodStoreItemWidget&&); \
	NO_API UUMGBloodStoreItemWidget(const UUMGBloodStoreItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreItemWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreItemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBloodStoreItemWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeImage() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, NodeImage); } \
	FORCEINLINE static uint32 __PPO__BackgroundImage() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, BackgroundImage); } \
	FORCEINLINE static uint32 __PPO__RarityBackground() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, RarityBackground); } \
	FORCEINLINE static uint32 __PPO__ItemPanel() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, ItemPanel); } \
	FORCEINLINE static uint32 __PPO__MysteryBoxPanel() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, MysteryBoxPanel); } \
	FORCEINLINE static uint32 __PPO__MysteryBoxRarityBackground() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, MysteryBoxRarityBackground); } \
	FORCEINLINE static uint32 __PPO__CollectedPanel() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, CollectedPanel); } \
	FORCEINLINE static uint32 __PPO__ConsumedPanel() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, ConsumedPanel); } \
	FORCEINLINE static uint32 __PPO___contentType() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, _contentType); } \
	FORCEINLINE static uint32 __PPO___isMysteryBox() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, _isMysteryBox); } \
	FORCEINLINE static uint32 __PPO___bigItemScale() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, _bigItemScale); } \
	FORCEINLINE static uint32 __PPO___normalItemScale() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, _normalItemScale); } \
	FORCEINLINE static uint32 __PPO___consumedOpacity() { return STRUCT_OFFSET(UUMGBloodStoreItemWidget, _consumedOpacity); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGBloodStoreItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
