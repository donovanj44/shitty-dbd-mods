// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
struct FCharmIdSlot;
enum class ELoadoutSlot : uint8;
#ifdef DEADBYDAYLIGHT_DBDPlayerState_Menu_generated_h
#error "DBDPlayerState_Menu.generated.h already included, missing '#pragma once' in DBDPlayerState_Menu.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayerState_Menu_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_RPC_WRAPPERS \
	virtual void Multicast_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole forRole, int32 id, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual void Multicast_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole forRole, int32 id, TArray<FName> const& customizationItemIds); \
	virtual bool Server_SetEquipment_Validate(ELoadoutSlot , FName , bool ); \
	virtual void Server_SetEquipment_Implementation(ELoadoutSlot slot, FName itemId, bool callOnRep); \
	virtual bool Server_SetSelectedCharacterCustomizationCharms_Validate(EPlayerRole , int32 , TArray<FCharmIdSlot> const& ); \
	virtual void Server_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole forRole, int32 id, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual bool Server_SetSelectedCharacterCustomizationMesh_Validate(EPlayerRole , int32 , TArray<FName> const& ); \
	virtual void Server_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole forRole, int32 id, TArray<FName> const& customizationItemIds); \
 \
	DECLARE_FUNCTION(execMulticast_SetSelectedCharacterCustomizationCharms); \
	DECLARE_FUNCTION(execMulticast_SetSelectedCharacterCustomizationMesh); \
	DECLARE_FUNCTION(execServer_SetEquipment); \
	DECLARE_FUNCTION(execServer_SetSelectedCharacterCustomizationCharms); \
	DECLARE_FUNCTION(execServer_SetSelectedCharacterCustomizationMesh);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole forRole, int32 id, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual void Multicast_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole forRole, int32 id, TArray<FName> const& customizationItemIds); \
	virtual bool Server_SetEquipment_Validate(ELoadoutSlot , FName , bool ); \
	virtual void Server_SetEquipment_Implementation(ELoadoutSlot slot, FName itemId, bool callOnRep); \
	virtual bool Server_SetSelectedCharacterCustomizationCharms_Validate(EPlayerRole , int32 , TArray<FCharmIdSlot> const& ); \
	virtual void Server_SetSelectedCharacterCustomizationCharms_Implementation(EPlayerRole forRole, int32 id, TArray<FCharmIdSlot> const& customizationCharms); \
	virtual bool Server_SetSelectedCharacterCustomizationMesh_Validate(EPlayerRole , int32 , TArray<FName> const& ); \
	virtual void Server_SetSelectedCharacterCustomizationMesh_Implementation(EPlayerRole forRole, int32 id, TArray<FName> const& customizationItemIds); \
 \
	DECLARE_FUNCTION(execMulticast_SetSelectedCharacterCustomizationCharms); \
	DECLARE_FUNCTION(execMulticast_SetSelectedCharacterCustomizationMesh); \
	DECLARE_FUNCTION(execServer_SetEquipment); \
	DECLARE_FUNCTION(execServer_SetSelectedCharacterCustomizationCharms); \
	DECLARE_FUNCTION(execServer_SetSelectedCharacterCustomizationMesh);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_EVENT_PARMS \
	struct DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationCharms_Parms \
	{ \
		EPlayerRole forRole; \
		int32 id; \
		TArray<FCharmIdSlot> customizationCharms; \
	}; \
	struct DBDPlayerState_Menu_eventMulticast_SetSelectedCharacterCustomizationMesh_Parms \
	{ \
		EPlayerRole forRole; \
		int32 id; \
		TArray<FName> customizationItemIds; \
	}; \
	struct DBDPlayerState_Menu_eventServer_SetEquipment_Parms \
	{ \
		ELoadoutSlot slot; \
		FName itemId; \
		bool callOnRep; \
	}; \
	struct DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationCharms_Parms \
	{ \
		EPlayerRole forRole; \
		int32 id; \
		TArray<FCharmIdSlot> customizationCharms; \
	}; \
	struct DBDPlayerState_Menu_eventServer_SetSelectedCharacterCustomizationMesh_Parms \
	{ \
		EPlayerRole forRole; \
		int32 id; \
		TArray<FName> customizationItemIds; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDPlayerState_Menu(); \
	friend struct Z_Construct_UClass_ADBDPlayerState_Menu_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerState_Menu, ADBDPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerState_Menu)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_INCLASS \
private: \
	static void StaticRegisterNativesADBDPlayerState_Menu(); \
	friend struct Z_Construct_UClass_ADBDPlayerState_Menu_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerState_Menu, ADBDPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerState_Menu)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDPlayerState_Menu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDPlayerState_Menu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerState_Menu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerState_Menu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerState_Menu(ADBDPlayerState_Menu&&); \
	NO_API ADBDPlayerState_Menu(const ADBDPlayerState_Menu&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerState_Menu(ADBDPlayerState_Menu&&); \
	NO_API ADBDPlayerState_Menu(const ADBDPlayerState_Menu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerState_Menu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerState_Menu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDPlayerState_Menu)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDPlayerState_Menu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_Menu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
