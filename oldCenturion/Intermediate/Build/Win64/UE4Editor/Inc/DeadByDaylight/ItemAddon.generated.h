// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ACollectable;
#ifdef DEADBYDAYLIGHT_ItemAddon_generated_h
#error "ItemAddon.generated.h already included, missing '#pragma once' in ItemAddon.h"
#endif
#define DEADBYDAYLIGHT_ItemAddon_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_RPC_WRAPPERS \
	virtual void Authority_OnCollectablePickedUp_Implementation(ADBDPlayer* player); \
	virtual bool IsReadyForSetUp_Implementation() const; \
	virtual void Multicast_AddAddonToItem_Implementation(ACollectable* item); \
	virtual bool Multicast_SetBaseItem_Validate(ACollectable* ); \
	virtual void Multicast_SetBaseItem_Implementation(ACollectable* baseItem); \
 \
	DECLARE_FUNCTION(execAuthority_ApplyMetaModifiers); \
	DECLARE_FUNCTION(execAuthority_OnCollectablePickedUp); \
	DECLARE_FUNCTION(execIsReadyForSetUp); \
	DECLARE_FUNCTION(execIsSecondaryAction); \
	DECLARE_FUNCTION(execMulticast_AddAddonToItem); \
	DECLARE_FUNCTION(execMulticast_SetBaseItem); \
	DECLARE_FUNCTION(execOnRep_AddonInitializationData);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Authority_OnCollectablePickedUp_Implementation(ADBDPlayer* player); \
	virtual bool IsReadyForSetUp_Implementation() const; \
	virtual void Multicast_AddAddonToItem_Implementation(ACollectable* item); \
	virtual bool Multicast_SetBaseItem_Validate(ACollectable* ); \
	virtual void Multicast_SetBaseItem_Implementation(ACollectable* baseItem); \
 \
	DECLARE_FUNCTION(execAuthority_ApplyMetaModifiers); \
	DECLARE_FUNCTION(execAuthority_OnCollectablePickedUp); \
	DECLARE_FUNCTION(execIsReadyForSetUp); \
	DECLARE_FUNCTION(execIsSecondaryAction); \
	DECLARE_FUNCTION(execMulticast_AddAddonToItem); \
	DECLARE_FUNCTION(execMulticast_SetBaseItem); \
	DECLARE_FUNCTION(execOnRep_AddonInitializationData);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_EVENT_PARMS \
	struct ItemAddon_eventAuthority_OnCollectableDropped_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct ItemAddon_eventAuthority_OnCollectablePickedUp_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct ItemAddon_eventIsReadyForSetUp_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ItemAddon_eventIsReadyForSetUp_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ItemAddon_eventMulticast_AddAddonToItem_Parms \
	{ \
		ACollectable* item; \
	}; \
	struct ItemAddon_eventMulticast_SetBaseItem_Parms \
	{ \
		ACollectable* baseItem; \
	}; \
	struct ItemAddon_eventOnPostItemAddonsCreation_Parms \
	{ \
		ADBDPlayer* player; \
		ACollectable* item; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemAddon(); \
	friend struct Z_Construct_UClass_UItemAddon_Statics; \
public: \
	DECLARE_CLASS(UItemAddon, UItemModifier, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UItemAddon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_addonInitializationData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_addonInitializationData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUItemAddon(); \
	friend struct Z_Construct_UClass_UItemAddon_Statics; \
public: \
	DECLARE_CLASS(UItemAddon, UItemModifier, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UItemAddon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_addonInitializationData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_addonInitializationData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemAddon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemAddon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemAddon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemAddon(UItemAddon&&); \
	NO_API UItemAddon(const UItemAddon&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemAddon(UItemAddon&&); \
	NO_API UItemAddon(const UItemAddon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemAddon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemAddon)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___needsSetup() { return STRUCT_OFFSET(UItemAddon, _needsSetup); } \
	FORCEINLINE static uint32 __PPO___addonInitializationData() { return STRUCT_OFFSET(UItemAddon, _addonInitializationData); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UItemAddon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ItemAddon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
