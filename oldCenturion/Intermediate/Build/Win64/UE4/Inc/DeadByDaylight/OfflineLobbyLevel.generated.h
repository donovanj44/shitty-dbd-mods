// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EOfflineLobbyState : uint8;
#ifdef DEADBYDAYLIGHT_OfflineLobbyLevel_generated_h
#error "OfflineLobbyLevel.generated.h already included, missing '#pragma once' in OfflineLobbyLevel.h"
#endif
#define DEADBYDAYLIGHT_OfflineLobbyLevel_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckDestroyingPawns);


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckDestroyingPawns);


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_EVENT_PARMS \
	struct OfflineLobbyLevel_eventOnStateChanged_Parms \
	{ \
		EOfflineLobbyState lobbyState; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOfflineLobbyLevel(); \
	friend struct Z_Construct_UClass_AOfflineLobbyLevel_Statics; \
public: \
	DECLARE_CLASS(AOfflineLobbyLevel, ALobbyLevel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AOfflineLobbyLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAOfflineLobbyLevel(); \
	friend struct Z_Construct_UClass_AOfflineLobbyLevel_Statics; \
public: \
	DECLARE_CLASS(AOfflineLobbyLevel, ALobbyLevel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AOfflineLobbyLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOfflineLobbyLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOfflineLobbyLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOfflineLobbyLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOfflineLobbyLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOfflineLobbyLevel(AOfflineLobbyLevel&&); \
	NO_API AOfflineLobbyLevel(const AOfflineLobbyLevel&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOfflineLobbyLevel(AOfflineLobbyLevel&&); \
	NO_API AOfflineLobbyLevel(const AOfflineLobbyLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOfflineLobbyLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOfflineLobbyLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOfflineLobbyLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___roleSelectionCamperSpawns() { return STRUCT_OFFSET(AOfflineLobbyLevel, _roleSelectionCamperSpawns); } \
	FORCEINLINE static uint32 __PPO___roleSelectionSlasherSpawns() { return STRUCT_OFFSET(AOfflineLobbyLevel, _roleSelectionSlasherSpawns); } \
	FORCEINLINE static uint32 __PPO___offlineLobbyLocalSlasherSpawn() { return STRUCT_OFFSET(AOfflineLobbyLevel, _offlineLobbyLocalSlasherSpawn); } \
	FORCEINLINE static uint32 __PPO___partyLobbyEmptySlotFxOffset() { return STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyEmptySlotFxOffset); } \
	FORCEINLINE static uint32 __PPO___offlineLobbyLocalCamperSpawn() { return STRUCT_OFFSET(AOfflineLobbyLevel, _offlineLobbyLocalCamperSpawn); } \
	FORCEINLINE static uint32 __PPO___partyLobbySlasherPOVTrackerOffsets() { return STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbySlasherPOVTrackerOffsets); } \
	FORCEINLINE static uint32 __PPO___partyLobbyEmptySlotSilhouette() { return STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyEmptySlotSilhouette); } \
	FORCEINLINE static uint32 __PPO___partyLobbySlasherDisplayStands() { return STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbySlasherDisplayStands); } \
	FORCEINLINE static uint32 __PPO___partyLobbyCamperDisplayStands() { return STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyCamperDisplayStands); } \
	FORCEINLINE static uint32 __PPO___meatHookForCustomization() { return STRUCT_OFFSET(AOfflineLobbyLevel, _meatHookForCustomization); } \
	FORCEINLINE static uint32 __PPO___meatHookSpawn() { return STRUCT_OFFSET(AOfflineLobbyLevel, _meatHookSpawn); } \
	FORCEINLINE static uint32 __PPO___charmForCustomizationZoom() { return STRUCT_OFFSET(AOfflineLobbyLevel, _charmForCustomizationZoom); } \
	FORCEINLINE static uint32 __PPO___camperCharmSpawn() { return STRUCT_OFFSET(AOfflineLobbyLevel, _camperCharmSpawn); } \
	FORCEINLINE static uint32 __PPO___slasherCharmSpawn() { return STRUCT_OFFSET(AOfflineLobbyLevel, _slasherCharmSpawn); } \
	FORCEINLINE static uint32 __PPO___partyLobbyEmptySlotPawns() { return STRUCT_OFFSET(AOfflineLobbyLevel, _partyLobbyEmptySlotPawns); } \
	FORCEINLINE static uint32 __PPO___destroyingPawns() { return STRUCT_OFFSET(AOfflineLobbyLevel, _destroyingPawns); }


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_17_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AOfflineLobbyLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_OfflineLobbyLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
