// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPartyPlayerSlotWidgetState : uint8;
#ifdef DEADBYDAYLIGHT_UMGPartySlotsWidget_generated_h
#error "UMGPartySlotsWidget.generated.h already included, missing '#pragma once' in UMGPartySlotsWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGPartySlotsWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleBotEditButtonClickEvent); \
	DECLARE_FUNCTION(execHandleInviteFriendButtonClickEvent); \
	DECLARE_FUNCTION(execHandleKickPlayerButtonClickEvent); \
	DECLARE_FUNCTION(execRearrangePartySlots); \
	DECLARE_FUNCTION(execSetWidgetState); \
	DECLARE_FUNCTION(execSwapWidgets);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleBotEditButtonClickEvent); \
	DECLARE_FUNCTION(execHandleInviteFriendButtonClickEvent); \
	DECLARE_FUNCTION(execHandleKickPlayerButtonClickEvent); \
	DECLARE_FUNCTION(execRearrangePartySlots); \
	DECLARE_FUNCTION(execSetWidgetState); \
	DECLARE_FUNCTION(execSwapWidgets);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGPartySlotsWidget(); \
	friend struct Z_Construct_UClass_UUMGPartySlotsWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGPartySlotsWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGPartySlotsWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUMGPartySlotsWidget(); \
	friend struct Z_Construct_UClass_UUMGPartySlotsWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGPartySlotsWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGPartySlotsWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGPartySlotsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGPartySlotsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGPartySlotsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGPartySlotsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGPartySlotsWidget(UUMGPartySlotsWidget&&); \
	NO_API UUMGPartySlotsWidget(const UUMGPartySlotsWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGPartySlotsWidget(UUMGPartySlotsWidget&&); \
	NO_API UUMGPartySlotsWidget(const UUMGPartySlotsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGPartySlotsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGPartySlotsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGPartySlotsWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PartyPlayerSlotsContainer() { return STRUCT_OFFSET(UUMGPartySlotsWidget, PartyPlayerSlotsContainer); } \
	FORCEINLINE static uint32 __PPO___partyPlayerSlots() { return STRUCT_OFFSET(UUMGPartySlotsWidget, _partyPlayerSlots); } \
	FORCEINLINE static uint32 __PPO__PartyBotSlotsContainer() { return STRUCT_OFFSET(UUMGPartySlotsWidget, PartyBotSlotsContainer); } \
	FORCEINLINE static uint32 __PPO__PartyBotSlotWidgetClass() { return STRUCT_OFFSET(UUMGPartySlotsWidget, PartyBotSlotWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MaxSlotCount() { return STRUCT_OFFSET(UUMGPartySlotsWidget, MaxSlotCount); } \
	FORCEINLINE static uint32 __PPO__ConflictingCharacterColor() { return STRUCT_OFFSET(UUMGPartySlotsWidget, ConflictingCharacterColor); } \
	FORCEINLINE static uint32 __PPO__NormalCharacterColor() { return STRUCT_OFFSET(UUMGPartySlotsWidget, NormalCharacterColor); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGPartySlotsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGPartySlotsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
