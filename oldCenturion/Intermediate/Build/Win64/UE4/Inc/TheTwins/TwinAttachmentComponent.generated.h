// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableComponent;
enum class ECamperDamageState : uint8;
enum class ECamperImmobilizeState : uint8;
struct FAnimationMontageDescriptor;
class ADBDPlayer;
#ifdef THETWINS_TwinAttachmentComponent_generated_h
#error "TwinAttachmentComponent.generated.h already included, missing '#pragma once' in TwinAttachmentComponent.h"
#endif
#define THETWINS_TwinAttachmentComponent_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_RPC_WRAPPERS \
	virtual void Multicast_QuickDestroyTwin_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnRemoveTwinChargePercentChanged); \
	DECLARE_FUNCTION(execIsAttachedToSister); \
	DECLARE_FUNCTION(execIsAttachedToSurvivor); \
	DECLARE_FUNCTION(execMulticast_QuickDestroyTwin); \
	DECLARE_FUNCTION(execOnAttachedSurvivorDamageStateChanged); \
	DECLARE_FUNCTION(execOnImmobilizedStateChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnMoriMontageEnd); \
	DECLARE_FUNCTION(execOnRep_AttachedPlayer);


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_QuickDestroyTwin_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnRemoveTwinChargePercentChanged); \
	DECLARE_FUNCTION(execIsAttachedToSister); \
	DECLARE_FUNCTION(execIsAttachedToSurvivor); \
	DECLARE_FUNCTION(execMulticast_QuickDestroyTwin); \
	DECLARE_FUNCTION(execOnAttachedSurvivorDamageStateChanged); \
	DECLARE_FUNCTION(execOnImmobilizedStateChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnMoriMontageEnd); \
	DECLARE_FUNCTION(execOnRep_AttachedPlayer);


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_EVENT_PARMS \
	struct TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSister_Parms \
	{ \
		ADBDPlayer* sister; \
		ADBDPlayer* brother; \
		bool isFirstAttachment; \
	}; \
	struct TwinAttachmentComponent_eventCosmetic_OnTwinAttachedToSurvivor_Parms \
	{ \
		ADBDPlayer* survivor; \
		ADBDPlayer* brother; \
	}; \
	struct TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSister_Parms \
	{ \
		ADBDPlayer* sister; \
		ADBDPlayer* brother; \
	}; \
	struct TwinAttachmentComponent_eventCosmetic_OnTwinDetachedFromSurvivor_Parms \
	{ \
		ADBDPlayer* survivor; \
		ADBDPlayer* brother; \
	};


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwinAttachmentComponent(); \
	friend struct Z_Construct_UClass_UTwinAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UTwinAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinAttachmentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachedPlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachedPlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTwinAttachmentComponent(); \
	friend struct Z_Construct_UClass_UTwinAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UTwinAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinAttachmentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachedPlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachedPlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinAttachmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinAttachmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinAttachmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinAttachmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinAttachmentComponent(UTwinAttachmentComponent&&); \
	NO_API UTwinAttachmentComponent(const UTwinAttachmentComponent&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinAttachmentComponent(UTwinAttachmentComponent&&); \
	NO_API UTwinAttachmentComponent(const UTwinAttachmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinAttachmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinAttachmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinAttachmentComponent)


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___attachedPlayer() { return STRUCT_OFFSET(UTwinAttachmentComponent, _attachedPlayer); } \
	FORCEINLINE static uint32 __PPO___gateBlockerStatusEffect() { return STRUCT_OFFSET(UTwinAttachmentComponent, _gateBlockerStatusEffect); } \
	FORCEINLINE static uint32 __PPO___hasBeenDetachedBySurvivorDamageChanged() { return STRUCT_OFFSET(UTwinAttachmentComponent, _hasBeenDetachedBySurvivorDamageChanged); } \
	FORCEINLINE static uint32 __PPO___cantEscapeByGateLingerDuration() { return STRUCT_OFFSET(UTwinAttachmentComponent, _cantEscapeByGateLingerDuration); } \
	FORCEINLINE static uint32 __PPO___escapeBlockerLingerTimers() { return STRUCT_OFFSET(UTwinAttachmentComponent, _escapeBlockerLingerTimers); }


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_15_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTwinAttachmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TwinAttachmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
