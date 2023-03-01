// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
enum class ETotemState : uint8;
class ADBDPlayer;
class UChargeableInteractionDefinition;
class UInteractor;
class ATotem;
#ifdef DEADBYDAYLIGHT_Totem_generated_h
#error "Totem.generated.h already included, missing '#pragma once' in Totem.h"
#endif
#define DEADBYDAYLIGHT_Totem_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoonAuraRevealColor); \
	DECLARE_FUNCTION(execGetBoonTotemAuraRevealRange); \
	DECLARE_FUNCTION(execGetBoonTotemBlessingRange); \
	DECLARE_FUNCTION(execGetTotemState); \
	DECLARE_FUNCTION(execIsBoundToPerk); \
	DECLARE_FUNCTION(execIsTotemBlockedForPlayer); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnRep_TotemState); \
	DECLARE_FUNCTION(execOnTotemBlockChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoonAuraRevealColor); \
	DECLARE_FUNCTION(execGetBoonTotemAuraRevealRange); \
	DECLARE_FUNCTION(execGetBoonTotemBlessingRange); \
	DECLARE_FUNCTION(execGetTotemState); \
	DECLARE_FUNCTION(execIsBoundToPerk); \
	DECLARE_FUNCTION(execIsTotemBlockedForPlayer); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnRep_TotemState); \
	DECLARE_FUNCTION(execOnTotemBlockChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_EVENT_PARMS \
	struct Totem_eventGetBlessTotemInteraction_Parms \
	{ \
		UChargeableInteractionDefinition* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Totem_eventGetBlessTotemInteraction_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Totem_eventGetCleanseTotemInteraction_Parms \
	{ \
		UChargeableInteractionDefinition* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Totem_eventGetCleanseTotemInteraction_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Totem_eventGetMainInteractor_Parms \
	{ \
		UInteractor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Totem_eventGetMainInteractor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Totem_eventOnBlockTotemCosmetic_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct Totem_eventOnCleanseTotem_Parms \
	{ \
		ATotem* totem; \
		ETotemState oldTotemState; \
	}; \
	struct Totem_eventOnTotemStateChanged_Parms \
	{ \
		ETotemState oldTotemState; \
		ETotemState newTotemState; \
	}; \
	struct Totem_eventOnUnblockTotemCosmetic_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATotem(); \
	friend struct Z_Construct_UClass_ATotem_Statics; \
public: \
	DECLARE_CLASS(ATotem, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATotem) \
	virtual UObject* _getUObject() const override { return const_cast<ATotem*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_boundPerks=NETFIELD_REP_START, \
		_totemState, \
		NETFIELD_REP_END=_totemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_INCLASS \
private: \
	static void StaticRegisterNativesATotem(); \
	friend struct Z_Construct_UClass_ATotem_Statics; \
public: \
	DECLARE_CLASS(ATotem, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATotem) \
	virtual UObject* _getUObject() const override { return const_cast<ATotem*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_boundPerks=NETFIELD_REP_START, \
		_totemState, \
		NETFIELD_REP_END=_totemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATotem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATotem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATotem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATotem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATotem(ATotem&&); \
	NO_API ATotem(const ATotem&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATotem(ATotem&&); \
	NO_API ATotem(const ATotem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATotem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATotem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATotem)


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___boonAuraRevealColor() { return STRUCT_OFFSET(ATotem, _boonAuraRevealColor); } \
	FORCEINLINE static uint32 __PPO___boundPerks() { return STRUCT_OFFSET(ATotem, _boundPerks); } \
	FORCEINLINE static uint32 __PPO___totemState() { return STRUCT_OFFSET(ATotem, _totemState); } \
	FORCEINLINE static uint32 __PPO___baseBoonTotemBlessingRange() { return STRUCT_OFFSET(ATotem, _baseBoonTotemBlessingRange); } \
	FORCEINLINE static uint32 __PPO___baseBoonTotemAuraRevealRange() { return STRUCT_OFFSET(ATotem, _baseBoonTotemAuraRevealRange); } \
	FORCEINLINE static uint32 __PPO___perceptionStimuliComponent() { return STRUCT_OFFSET(ATotem, _perceptionStimuliComponent); } \
	FORCEINLINE static uint32 __PPO___totemBlockableComponent() { return STRUCT_OFFSET(ATotem, _totemBlockableComponent); } \
	FORCEINLINE static uint32 __PPO___localPlayerTracker() { return STRUCT_OFFSET(ATotem, _localPlayerTracker); } \
	FORCEINLINE static uint32 __PPO___activatorComponent() { return STRUCT_OFFSET(ATotem, _activatorComponent); } \
	FORCEINLINE static uint32 __PPO___objectState() { return STRUCT_OFFSET(ATotem, _objectState); } \
	FORCEINLINE static uint32 __PPO___interactionsAttachPoint() { return STRUCT_OFFSET(ATotem, _interactionsAttachPoint); } \
	FORCEINLINE static uint32 __PPO___totemOutlineUpdateStrategy() { return STRUCT_OFFSET(ATotem, _totemOutlineUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___canBeBoundToBoonPerk() { return STRUCT_OFFSET(ATotem, _canBeBoundToBoonPerk); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_23_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Totem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATotem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Totem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
