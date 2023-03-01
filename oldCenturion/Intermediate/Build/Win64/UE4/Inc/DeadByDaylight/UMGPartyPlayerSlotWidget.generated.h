// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPartyPlayerSlotWidgetState : uint8;
#ifdef DEADBYDAYLIGHT_UMGPartyPlayerSlotWidget_generated_h
#error "UMGPartyPlayerSlotWidget.generated.h already included, missing '#pragma once' in UMGPartyPlayerSlotWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGPartyPlayerSlotWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleKickPlayerButtonEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleKickPlayerButtonEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_EVENT_PARMS \
	struct UMGPartyPlayerSlotWidget_eventSetVisualsFromState_Parms \
	{ \
		EPartyPlayerSlotWidgetState widgetState; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGPartyPlayerSlotWidget(); \
	friend struct Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGPartyPlayerSlotWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGPartyPlayerSlotWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGPartyPlayerSlotWidget(); \
	friend struct Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGPartyPlayerSlotWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGPartyPlayerSlotWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGPartyPlayerSlotWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGPartyPlayerSlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGPartyPlayerSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGPartyPlayerSlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGPartyPlayerSlotWidget(UUMGPartyPlayerSlotWidget&&); \
	NO_API UUMGPartyPlayerSlotWidget(const UUMGPartyPlayerSlotWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGPartyPlayerSlotWidget(UUMGPartyPlayerSlotWidget&&); \
	NO_API UUMGPartyPlayerSlotWidget(const UUMGPartyPlayerSlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGPartyPlayerSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGPartyPlayerSlotWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGPartyPlayerSlotWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerName() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerName); } \
	FORCEINLINE static uint32 __PPO__AdditionalInformationText() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, AdditionalInformationText); } \
	FORCEINLINE static uint32 __PPO__FriendIcon() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, FriendIcon); } \
	FORCEINLINE static uint32 __PPO__KickPlayerButton() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, KickPlayerButton); } \
	FORCEINLINE static uint32 __PPO__CharacterNameStyle() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, CharacterNameStyle); } \
	FORCEINLINE static uint32 __PPO__PlayerInMatchStyle() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInMatchStyle); } \
	FORCEINLINE static uint32 __PPO__PlayerInMatchOpacity() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInMatchOpacity); } \
	FORCEINLINE static uint32 __PPO__PlayerInLobbyOpacity() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInLobbyOpacity); } \
	FORCEINLINE static uint32 __PPO__PlayerInformationContainer() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInformationContainer); } \
	FORCEINLINE static uint32 __PPO__ReadyIconsCanvas() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, ReadyIconsCanvas); } \
	FORCEINLINE static uint32 __PPO__RequestRoleIconsCanvas() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, RequestRoleIconsCanvas); } \
	FORCEINLINE static uint32 __PPO__RoleSwitcher() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, RoleSwitcher); } \
	FORCEINLINE static uint32 __PPO__LeaderIcon() { return STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, LeaderIcon); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGPartyPlayerSlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGPartyPlayerSlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
