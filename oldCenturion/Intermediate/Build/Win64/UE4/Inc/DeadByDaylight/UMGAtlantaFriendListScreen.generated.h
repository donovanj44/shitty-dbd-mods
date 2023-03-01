// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActionOnFriendType : uint8;
struct FActionOnFriend;
class UExpandableArea;
#ifdef DEADBYDAYLIGHT_UMGAtlantaFriendListScreen_generated_h
#error "UMGAtlantaFriendListScreen.generated.h already included, missing '#pragma once' in UMGAtlantaFriendListScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGAtlantaFriendListScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCloseButtonClicked); \
	DECLARE_FUNCTION(execHandleContextualMenuAction); \
	DECLARE_FUNCTION(execHandleOnActionOnFriend); \
	DECLARE_FUNCTION(execHandleSearchButtonClicked); \
	DECLARE_FUNCTION(execHandleSearchInputChanged); \
	DECLARE_FUNCTION(execHandleTabButtonClicked); \
	DECLARE_FUNCTION(execOnFinishedOutAnimation); \
	DECLARE_FUNCTION(execVerifyReceivedFriendRequestFocus);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCloseButtonClicked); \
	DECLARE_FUNCTION(execHandleContextualMenuAction); \
	DECLARE_FUNCTION(execHandleOnActionOnFriend); \
	DECLARE_FUNCTION(execHandleSearchButtonClicked); \
	DECLARE_FUNCTION(execHandleSearchInputChanged); \
	DECLARE_FUNCTION(execHandleTabButtonClicked); \
	DECLARE_FUNCTION(execOnFinishedOutAnimation); \
	DECLARE_FUNCTION(execVerifyReceivedFriendRequestFocus);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAtlantaFriendListScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaFriendListScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaFriendListScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAtlantaFriendListScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaFriendListScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaFriendListScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAtlantaFriendListScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAtlantaFriendListScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaFriendListScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaFriendListScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaFriendListScreen(UUMGAtlantaFriendListScreen&&); \
	NO_API UUMGAtlantaFriendListScreen(const UUMGAtlantaFriendListScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaFriendListScreen(UUMGAtlantaFriendListScreen&&); \
	NO_API UUMGAtlantaFriendListScreen(const UUMGAtlantaFriendListScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaFriendListScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaFriendListScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGAtlantaFriendListScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ListSwitcher() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ListSwitcher); } \
	FORCEINLINE static uint32 __PPO__SearchResultSwitcher() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SearchResultSwitcher); } \
	FORCEINLINE static uint32 __PPO__NonFriendSearchResult() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, NonFriendSearchResult); } \
	FORCEINLINE static uint32 __PPO__RequestReceivedSearchResult() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestReceivedSearchResult); } \
	FORCEINLINE static uint32 __PPO__RequestSentSearchResult() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestSentSearchResult); } \
	FORCEINLINE static uint32 __PPO__FriendSearchResult() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendSearchResult); } \
	FORCEINLINE static uint32 __PPO__SearchFailureText() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SearchFailureText); } \
	FORCEINLINE static uint32 __PPO__CloseButton() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, CloseButton); } \
	FORCEINLINE static uint32 __PPO__SearchBar() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SearchBar); } \
	FORCEINLINE static uint32 __PPO__ButtonTabContainer() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ButtonTabContainer); } \
	FORCEINLINE static uint32 __PPO__FriendListTabWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendListTabWidget); } \
	FORCEINLINE static uint32 __PPO__SuggestionListTabWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SuggestionListTabWidget); } \
	FORCEINLINE static uint32 __PPO__RequestListTabWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestListTabWidget); } \
	FORCEINLINE static uint32 __PPO__FriendsTabButton() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendsTabButton); } \
	FORCEINLINE static uint32 __PPO__SuggestionsTabButton() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SuggestionsTabButton); } \
	FORCEINLINE static uint32 __PPO__RequestsTabButton() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestsTabButton); } \
	FORCEINLINE static uint32 __PPO__CurrentContextualMenuWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, CurrentContextualMenuWidget); } \
	FORCEINLINE static uint32 __PPO__FriendWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendWidget); } \
	FORCEINLINE static uint32 __PPO__RequestSentWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestSentWidget); } \
	FORCEINLINE static uint32 __PPO__FriendRequestReceivedWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendRequestReceivedWidget); } \
	FORCEINLINE static uint32 __PPO__FriendsSuggestionWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendsSuggestionWidget); } \
	FORCEINLINE static uint32 __PPO__FriendsSuggestion() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendsSuggestion); } \
	FORCEINLINE static uint32 __PPO__FriendPartyInviteWidgetClass() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendPartyInviteWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ContextualMenuInvite() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ContextualMenuInvite); } \
	FORCEINLINE static uint32 __PPO__ContextualMenuConfirmDeclineAction() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ContextualMenuConfirmDeclineAction); } \
	FORCEINLINE static uint32 __PPO___existingFriendListWidgets() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, _existingFriendListWidgets); } \
	FORCEINLINE static uint32 __PPO___existingFriendInvitePartyWidget() { return STRUCT_OFFSET(UUMGAtlantaFriendListScreen, _existingFriendInvitePartyWidget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_22_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGAtlantaFriendListScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaFriendListScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
