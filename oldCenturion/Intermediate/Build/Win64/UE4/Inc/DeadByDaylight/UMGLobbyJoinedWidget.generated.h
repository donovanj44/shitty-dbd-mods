// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerInfoData;
struct FInventorySlotData;
struct FPlayerReadyStatusData;
 
#ifdef DEADBYDAYLIGHT_UMGLobbyJoinedWidget_generated_h
#error "UMGLobbyJoinedWidget.generated.h already included, missing '#pragma once' in UMGLobbyJoinedWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLobbyJoinedWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLeaveButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLeaveButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_EVENT_PARMS \
	struct UMGLobbyJoinedWidget_eventAddPlayerInfo_Parms \
	{ \
		int32 playerId; \
		FPlayerInfoData playerInfoData; \
		bool isPlayerReady; \
		TArray<FInventorySlotData> loadoutData; \
	}; \
	struct UMGLobbyJoinedWidget_eventRemovePlayersInfo_Parms \
	{ \
		int32 playerId; \
	}; \
	struct UMGLobbyJoinedWidget_eventSetLoadoutDataForLocalPlayer_Parms \
	{ \
		TArray<FInventorySlotData> loadoutData; \
		bool usingMatchRules; \
		bool perkSlotsLockedByAdmin; \
		bool isSlasher; \
	}; \
	struct UMGLobbyJoinedWidget_eventSetLobbyTimer_Parms \
	{ \
		int32 seconds; \
	}; \
	struct UMGLobbyJoinedWidget_eventSetLocalPlayerInfo_Parms \
	{ \
		FPlayerInfoData playerInfoData; \
	}; \
	struct UMGLobbyJoinedWidget_eventSetReadyStatus_Parms \
	{ \
		TArray<FPlayerReadyStatusData> playersReadyStatusData; \
	}; \
	struct UMGLobbyJoinedWidget_eventSetWidgetsVisibility_Parms \
	{ \
		bool widgetsVisibilty; \
	}; \
	struct UMGLobbyJoinedWidget_eventUpdatePlayersLatency_Parms \
	{ \
		TMap<int32,float> playersLatency; \
		bool isHost; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLobbyJoinedWidget(); \
	friend struct Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLobbyJoinedWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLobbyJoinedWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLobbyJoinedWidget(); \
	friend struct Z_Construct_UClass_UUMGLobbyJoinedWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLobbyJoinedWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLobbyJoinedWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLobbyJoinedWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLobbyJoinedWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLobbyJoinedWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLobbyJoinedWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLobbyJoinedWidget(UUMGLobbyJoinedWidget&&); \
	NO_API UUMGLobbyJoinedWidget(const UUMGLobbyJoinedWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLobbyJoinedWidget(UUMGLobbyJoinedWidget&&); \
	NO_API UUMGLobbyJoinedWidget(const UUMGLobbyJoinedWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLobbyJoinedWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLobbyJoinedWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLobbyJoinedWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextLeaveLobby() { return STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextLeaveLobby); } \
	FORCEINLINE static uint32 __PPO__TextPlayerNotReadyYet() { return STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextPlayerNotReadyYet); } \
	FORCEINLINE static uint32 __PPO__TextWaitingPlayers() { return STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextWaitingPlayers); } \
	FORCEINLINE static uint32 __PPO__TextToBeReady() { return STRUCT_OFFSET(UUMGLobbyJoinedWidget, TextToBeReady); } \
	FORCEINLINE static uint32 __PPO__CommandButtonsContainer() { return STRUCT_OFFSET(UUMGLobbyJoinedWidget, CommandButtonsContainer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLobbyJoinedWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyJoinedWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
