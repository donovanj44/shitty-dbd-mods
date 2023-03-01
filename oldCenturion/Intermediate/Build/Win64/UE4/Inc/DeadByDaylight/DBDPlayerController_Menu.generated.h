// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGamePresetData;
struct FPlayerDataSync;
struct FPlayerLoadoutData;
#ifdef DEADBYDAYLIGHT_DBDPlayerController_Menu_generated_h
#error "DBDPlayerController_Menu.generated.h already included, missing '#pragma once' in DBDPlayerController_Menu.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayerController_Menu_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_RPC_WRAPPERS \
	virtual bool Server_GamePresetDataFromClient_Validate(FGamePresetData const& ); \
	virtual void Server_GamePresetDataFromClient_Implementation(FGamePresetData const& gameState); \
	virtual bool Server_SetCharacterData_Validate(int32 , FPlayerDataSync const& ); \
	virtual void Server_SetCharacterData_Implementation(int32 characterIndex, FPlayerDataSync const& playerDataSync); \
	virtual bool Server_SetCharacterLevel_Validate(int32 , int32 , bool ); \
	virtual void Server_SetCharacterLevel_Implementation(int32 characterLevel, int32 prestigeLevel, bool callOnRep); \
	virtual bool Server_SetCustomizationCharm_Validate(FName , int8 ); \
	virtual void Server_SetCustomizationCharm_Implementation(FName charmId, int8 slotIndex); \
	virtual bool Server_SetCustomizationMeshes_Validate(TArray<FName> const& ); \
	virtual void Server_SetCustomizationMeshes_Implementation(TArray<FName> const& itemIds); \
	virtual bool Server_SetEquipedPerks_Validate(TArray<FName> const& , TArray<int32> const& , bool ); \
	virtual void Server_SetEquipedPerks_Implementation(TArray<FName> const& perkIds, TArray<int32> const& perkLevels, bool callOnRep); \
	virtual bool Server_SetPlayerLoadout_Validate(FPlayerLoadoutData ); \
	virtual void Server_SetPlayerLoadout_Implementation(FPlayerLoadoutData desiredLoadout); \
	virtual bool Server_SetPlayerReady_Validate(bool ); \
	virtual void Server_SetPlayerReady_Implementation(bool isReady); \
	virtual bool Server_SetReadyToTravel_Validate(); \
	virtual void Server_SetReadyToTravel_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_SetPlayerReady); \
	DECLARE_FUNCTION(execAuthority_TogglePlayerReadyState); \
	DECLARE_FUNCTION(execServer_GamePresetDataFromClient); \
	DECLARE_FUNCTION(execServer_SetCharacterData); \
	DECLARE_FUNCTION(execServer_SetCharacterLevel); \
	DECLARE_FUNCTION(execServer_SetCustomizationCharm); \
	DECLARE_FUNCTION(execServer_SetCustomizationMeshes); \
	DECLARE_FUNCTION(execServer_SetEquipedPerks); \
	DECLARE_FUNCTION(execServer_SetPlayerLoadout); \
	DECLARE_FUNCTION(execServer_SetPlayerReady); \
	DECLARE_FUNCTION(execServer_SetReadyToTravel); \
	DECLARE_FUNCTION(execSetPlayerReady); \
	DECLARE_FUNCTION(execTogglePlayerReadyState);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_GamePresetDataFromClient_Validate(FGamePresetData const& ); \
	virtual void Server_GamePresetDataFromClient_Implementation(FGamePresetData const& gameState); \
	virtual bool Server_SetCharacterData_Validate(int32 , FPlayerDataSync const& ); \
	virtual void Server_SetCharacterData_Implementation(int32 characterIndex, FPlayerDataSync const& playerDataSync); \
	virtual bool Server_SetCharacterLevel_Validate(int32 , int32 , bool ); \
	virtual void Server_SetCharacterLevel_Implementation(int32 characterLevel, int32 prestigeLevel, bool callOnRep); \
	virtual bool Server_SetCustomizationCharm_Validate(FName , int8 ); \
	virtual void Server_SetCustomizationCharm_Implementation(FName charmId, int8 slotIndex); \
	virtual bool Server_SetCustomizationMeshes_Validate(TArray<FName> const& ); \
	virtual void Server_SetCustomizationMeshes_Implementation(TArray<FName> const& itemIds); \
	virtual bool Server_SetEquipedPerks_Validate(TArray<FName> const& , TArray<int32> const& , bool ); \
	virtual void Server_SetEquipedPerks_Implementation(TArray<FName> const& perkIds, TArray<int32> const& perkLevels, bool callOnRep); \
	virtual bool Server_SetPlayerLoadout_Validate(FPlayerLoadoutData ); \
	virtual void Server_SetPlayerLoadout_Implementation(FPlayerLoadoutData desiredLoadout); \
	virtual bool Server_SetPlayerReady_Validate(bool ); \
	virtual void Server_SetPlayerReady_Implementation(bool isReady); \
	virtual bool Server_SetReadyToTravel_Validate(); \
	virtual void Server_SetReadyToTravel_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_SetPlayerReady); \
	DECLARE_FUNCTION(execAuthority_TogglePlayerReadyState); \
	DECLARE_FUNCTION(execServer_GamePresetDataFromClient); \
	DECLARE_FUNCTION(execServer_SetCharacterData); \
	DECLARE_FUNCTION(execServer_SetCharacterLevel); \
	DECLARE_FUNCTION(execServer_SetCustomizationCharm); \
	DECLARE_FUNCTION(execServer_SetCustomizationMeshes); \
	DECLARE_FUNCTION(execServer_SetEquipedPerks); \
	DECLARE_FUNCTION(execServer_SetPlayerLoadout); \
	DECLARE_FUNCTION(execServer_SetPlayerReady); \
	DECLARE_FUNCTION(execServer_SetReadyToTravel); \
	DECLARE_FUNCTION(execSetPlayerReady); \
	DECLARE_FUNCTION(execTogglePlayerReadyState);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_EVENT_PARMS \
	struct DBDPlayerController_Menu_eventServer_GamePresetDataFromClient_Parms \
	{ \
		FGamePresetData gameState; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetCharacterData_Parms \
	{ \
		int32 characterIndex; \
		FPlayerDataSync playerDataSync; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetCharacterLevel_Parms \
	{ \
		int32 characterLevel; \
		int32 prestigeLevel; \
		bool callOnRep; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetCustomizationCharm_Parms \
	{ \
		FName charmId; \
		int8 slotIndex; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetCustomizationMeshes_Parms \
	{ \
		TArray<FName> itemIds; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetEquipedPerks_Parms \
	{ \
		TArray<FName> perkIds; \
		TArray<int32> perkLevels; \
		bool callOnRep; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetPlayerLoadout_Parms \
	{ \
		FPlayerLoadoutData desiredLoadout; \
	}; \
	struct DBDPlayerController_Menu_eventServer_SetPlayerReady_Parms \
	{ \
		bool isReady; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDPlayerController_Menu(); \
	friend struct Z_Construct_UClass_ADBDPlayerController_Menu_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerController_Menu, ADBDPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerController_Menu)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_INCLASS \
private: \
	static void StaticRegisterNativesADBDPlayerController_Menu(); \
	friend struct Z_Construct_UClass_ADBDPlayerController_Menu_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerController_Menu, ADBDPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerController_Menu)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDPlayerController_Menu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDPlayerController_Menu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerController_Menu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerController_Menu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerController_Menu(ADBDPlayerController_Menu&&); \
	NO_API ADBDPlayerController_Menu(const ADBDPlayerController_Menu&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerController_Menu(ADBDPlayerController_Menu&&); \
	NO_API ADBDPlayerController_Menu(const ADBDPlayerController_Menu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerController_Menu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerController_Menu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDPlayerController_Menu)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDPlayerController_Menu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_Menu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
