// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInboxScreenButton : uint8;
enum class EInboxMessageUIType : uint8;
class UPanelWidget;
class UUMGInboxMessageEntryWidget;
struct FInboxMessageUIData;
#ifdef DEADBYDAYLIGHT_UMGInboxScreen_generated_h
#error "UMGInboxScreen.generated.h already included, missing '#pragma once' in UMGInboxScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGInboxScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execButtonClickEvent); \
	DECLARE_FUNCTION(execClaimAllMessagesEvent); \
	DECLARE_FUNCTION(execClaimMessageEvent); \
	DECLARE_FUNCTION(execCleanAllMessagesEvent); \
	DECLARE_FUNCTION(execCleanMessageEvent); \
	DECLARE_FUNCTION(execFindMessageWidgetById); \
	DECLARE_FUNCTION(execFindWidgetIndexByMessageId); \
	DECLARE_FUNCTION(execReadAllMessagesEvent); \
	DECLARE_FUNCTION(execReadMessageEvent); \
	DECLARE_FUNCTION(execRemoveMessageFromPanel);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execButtonClickEvent); \
	DECLARE_FUNCTION(execClaimAllMessagesEvent); \
	DECLARE_FUNCTION(execClaimMessageEvent); \
	DECLARE_FUNCTION(execCleanAllMessagesEvent); \
	DECLARE_FUNCTION(execCleanMessageEvent); \
	DECLARE_FUNCTION(execFindMessageWidgetById); \
	DECLARE_FUNCTION(execFindWidgetIndexByMessageId); \
	DECLARE_FUNCTION(execReadAllMessagesEvent); \
	DECLARE_FUNCTION(execReadMessageEvent); \
	DECLARE_FUNCTION(execRemoveMessageFromPanel);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_EVENT_PARMS \
	struct UMGInboxScreen_eventRemoveMessage_Parms \
	{ \
		FString messageId; \
	}; \
	struct UMGInboxScreen_eventSetNewsMessages_Parms \
	{ \
		TArray<FInboxMessageUIData> messages; \
		int32 unreadCount; \
		int32 totalCount; \
	}; \
	struct UMGInboxScreen_eventSetRewardsMessages_Parms \
	{ \
		TArray<FInboxMessageUIData> messages; \
		int32 unclaimedCount; \
		int32 unreadCount; \
		int32 totalCount; \
	}; \
	struct UMGInboxScreen_eventSetSocialMessages_Parms \
	{ \
		TArray<FInboxMessageUIData> messages; \
		int32 unreadCount; \
		int32 totalCount; \
	}; \
	struct UMGInboxScreen_eventUpdateMessage_Parms \
	{ \
		FInboxMessageUIData message; \
	}; \
	struct UMGInboxScreen_eventUpdateMessagesCount_Parms \
	{ \
		EInboxMessageUIType messageType; \
		int32 unclaimedCount; \
		int32 unreadCount; \
		int32 totalCount; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGInboxScreen(); \
	friend struct Z_Construct_UClass_UUMGInboxScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGInboxScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGInboxScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGInboxScreen(); \
	friend struct Z_Construct_UClass_UUMGInboxScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGInboxScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGInboxScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGInboxScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGInboxScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGInboxScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGInboxScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGInboxScreen(UUMGInboxScreen&&); \
	NO_API UUMGInboxScreen(const UUMGInboxScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGInboxScreen(UUMGInboxScreen&&); \
	NO_API UUMGInboxScreen(const UUMGInboxScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGInboxScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGInboxScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGInboxScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGInboxScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGInboxScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
