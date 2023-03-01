// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACollectable;
enum class EInventoryType : uint8;
struct FVector;
struct FRotator;
class UItemAddon;
#ifdef DEADBYDAYLIGHT_CharacterInventoryComponent_generated_h
#error "CharacterInventoryComponent.generated.h already included, missing '#pragma once' in CharacterInventoryComponent.h"
#endif
#define DEADBYDAYLIGHT_CharacterInventoryComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_RPC_WRAPPERS \
	virtual void Multicast_AddToInventory_Implementation(ACollectable* item, EInventoryType inventoryType); \
	virtual void Multicast_ClearAndDestroyInventory_Implementation(); \
	virtual void Multicast_RemoveFromInventory_Implementation(ACollectable* item); \
 \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execAuthority_UseInventoryItem); \
	DECLARE_FUNCTION(execClearAndDestroyInventory); \
	DECLARE_FUNCTION(execCollect); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execGetAddons); \
	DECLARE_FUNCTION(execGetFirstItemFromInventory); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetItemCount); \
	DECLARE_FUNCTION(execGetItemCountByID); \
	DECLARE_FUNCTION(execGetItemID); \
	DECLARE_FUNCTION(execHasEquippedItem); \
	DECLARE_FUNCTION(execHasInInventory); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execHasMaximumItemCount); \
	DECLARE_FUNCTION(execHasStoredItem); \
	DECLARE_FUNCTION(execIsUsingAimItem); \
	DECLARE_FUNCTION(execMulticast_AddToInventory); \
	DECLARE_FUNCTION(execMulticast_ClearAndDestroyInventory); \
	DECLARE_FUNCTION(execMulticast_RemoveFromInventory); \
	DECLARE_FUNCTION(execOnRep_BackpackInventory); \
	DECLARE_FUNCTION(execOnRep_GeneralAddons); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execSpawnCollectedItem); \
	DECLARE_FUNCTION(execStartDrop); \
	DECLARE_FUNCTION(execStoreItem);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddToInventory_Implementation(ACollectable* item, EInventoryType inventoryType); \
	virtual void Multicast_ClearAndDestroyInventory_Implementation(); \
	virtual void Multicast_RemoveFromInventory_Implementation(ACollectable* item); \
 \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execAuthority_UseInventoryItem); \
	DECLARE_FUNCTION(execClearAndDestroyInventory); \
	DECLARE_FUNCTION(execCollect); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execGetAddons); \
	DECLARE_FUNCTION(execGetFirstItemFromInventory); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetItemCount); \
	DECLARE_FUNCTION(execGetItemCountByID); \
	DECLARE_FUNCTION(execGetItemID); \
	DECLARE_FUNCTION(execHasEquippedItem); \
	DECLARE_FUNCTION(execHasInInventory); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execHasMaximumItemCount); \
	DECLARE_FUNCTION(execHasStoredItem); \
	DECLARE_FUNCTION(execIsUsingAimItem); \
	DECLARE_FUNCTION(execMulticast_AddToInventory); \
	DECLARE_FUNCTION(execMulticast_ClearAndDestroyInventory); \
	DECLARE_FUNCTION(execMulticast_RemoveFromInventory); \
	DECLARE_FUNCTION(execOnRep_BackpackInventory); \
	DECLARE_FUNCTION(execOnRep_GeneralAddons); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execSpawnCollectedItem); \
	DECLARE_FUNCTION(execStartDrop); \
	DECLARE_FUNCTION(execStoreItem);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_EVENT_PARMS \
	struct CharacterInventoryComponent_eventMulticast_AddToInventory_Parms \
	{ \
		ACollectable* item; \
		EInventoryType inventoryType; \
	}; \
	struct CharacterInventoryComponent_eventMulticast_RemoveFromInventory_Parms \
	{ \
		ACollectable* item; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterInventoryComponent(); \
	friend struct Z_Construct_UClass_UCharacterInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_inventory=NETFIELD_REP_START, \
		_generalAddons, \
		_backpackInventory, \
		NETFIELD_REP_END=_backpackInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterInventoryComponent(); \
	friend struct Z_Construct_UClass_UCharacterInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_inventory=NETFIELD_REP_START, \
		_generalAddons, \
		_backpackInventory, \
		NETFIELD_REP_END=_backpackInventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterInventoryComponent(UCharacterInventoryComponent&&); \
	NO_API UCharacterInventoryComponent(const UCharacterInventoryComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterInventoryComponent(UCharacterInventoryComponent&&); \
	NO_API UCharacterInventoryComponent(const UCharacterInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterInventoryComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___inventory() { return STRUCT_OFFSET(UCharacterInventoryComponent, _inventory); } \
	FORCEINLINE static uint32 __PPO___generalAddons() { return STRUCT_OFFSET(UCharacterInventoryComponent, _generalAddons); } \
	FORCEINLINE static uint32 __PPO___backpackInventory() { return STRUCT_OFFSET(UCharacterInventoryComponent, _backpackInventory); } \
	FORCEINLINE static uint32 __PPO___allAddons() { return STRUCT_OFFSET(UCharacterInventoryComponent, _allAddons); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCharacterInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharacterInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
