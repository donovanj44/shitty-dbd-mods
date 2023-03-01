// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
class AGenerator;
class UObject;
class AActor;
class UChargeableComponent;
class ACamperPlayer;
enum class ESkillCheckCustomType : uint8;
struct FPlayerFloatTuple;
class USkeletalMeshComponent;
class UInteractor;
class UAkAudioEvent;
struct FAkExternalSourceInfo;
#ifdef DEADBYDAYLIGHT_Generator_generated_h
#error "Generator.generated.h already included, missing '#pragma once' in Generator.h"
#endif
#define DEADBYDAYLIGHT_Generator_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_32_DELEGATE \
struct _Script_DeadByDaylight_eventGeneratorOnGeneratorRepairedBySurvivor_Parms \
{ \
	ADBDPlayer* repairingSurvivor; \
}; \
static inline void FGeneratorOnGeneratorRepairedBySurvivor_DelegateWrapper(const FMulticastScriptDelegate& GeneratorOnGeneratorRepairedBySurvivor, ADBDPlayer* repairingSurvivor) \
{ \
	_Script_DeadByDaylight_eventGeneratorOnGeneratorRepairedBySurvivor_Parms Parms; \
	Parms.repairingSurvivor=repairingSurvivor; \
	GeneratorOnGeneratorRepairedBySurvivor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_31_DELEGATE \
struct _Script_DeadByDaylight_eventGeneratorPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FGeneratorPostEventCallback_DelegateWrapper(const FScriptDelegate& GeneratorPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_DeadByDaylight_eventGeneratorPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	GeneratorPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_30_DELEGATE \
struct _Script_DeadByDaylight_eventGeneratorOnGeneratorRepaired_Parms \
{ \
	bool isAutoCompleted; \
}; \
static inline void FGeneratorOnGeneratorRepaired_DelegateWrapper(const FMulticastScriptDelegate& GeneratorOnGeneratorRepaired, bool isAutoCompleted) \
{ \
	_Script_DeadByDaylight_eventGeneratorOnGeneratorRepaired_Parms Parms; \
	Parms.isAutoCompleted=isAutoCompleted ? true : false; \
	GeneratorOnGeneratorRepaired.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_29_DELEGATE \
struct _Script_DeadByDaylight_eventGeneratorOnIsDamagedChanged_Parms \
{ \
	AGenerator* generator; \
	ADBDPlayer* player; \
}; \
static inline void FGeneratorOnIsDamagedChanged_DelegateWrapper(const FMulticastScriptDelegate& GeneratorOnIsDamagedChanged, AGenerator* generator, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventGeneratorOnIsDamagedChanged_Parms Parms; \
	Parms.generator=generator; \
	Parms.player=player; \
	GeneratorOnIsDamagedChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_RPC_WRAPPERS \
	virtual UChargeableComponent* GetGeneratorChargeComponent_Implementation() const; \
	virtual void Multicast_DamageCosmetic_Implementation(bool intense); \
	virtual void Multicast_OnRepaired_Implementation(bool showGeneratorCloneLoudNoise, bool isAutoCompleted, const int32 updatedRemainingGeneratorCount); \
	virtual void Multicast_PlayFailSparksFX_Implementation(ADBDPlayer* player, bool explode); \
	virtual void OnUpdateChargeProgress_Implementation(float newPercentComplete); \
 \
	DECLARE_FUNCTION(execAddPlayerStartTime); \
	DECLARE_FUNCTION(execAuthority_AddBlockingSource); \
	DECLARE_FUNCTION(execAuthority_Damage); \
	DECLARE_FUNCTION(execAuthority_HasRepairedDamage); \
	DECLARE_FUNCTION(execAuthority_OnChargeApplied); \
	DECLARE_FUNCTION(execAuthority_OnChargeChanged); \
	DECLARE_FUNCTION(execAuthority_RemoveBlockingSource); \
	DECLARE_FUNCTION(execAuthority_RepairDamage); \
	DECLARE_FUNCTION(execBroadcastGeneratorRepairedBySurvivor); \
	DECLARE_FUNCTION(execBroadcastIsDamagedChangedEvent); \
	DECLARE_FUNCTION(execCanSurvivorReactToBlockingEntity); \
	DECLARE_FUNCTION(execClearGeneratorOvercharge); \
	DECLARE_FUNCTION(execDisableInaccessibleInteractors); \
	DECLARE_FUNCTION(execGetGeneratorChargeComponent); \
	DECLARE_FUNCTION(execGetIsAutoCompleted); \
	DECLARE_FUNCTION(execGetIsBlockedFromCharging); \
	DECLARE_FUNCTION(execGetOverchargeLevel); \
	DECLARE_FUNCTION(execGetOverchargeSkillCheckToTrigger); \
	DECLARE_FUNCTION(execGetPlayerStartTime); \
	DECLARE_FUNCTION(execGetPlayerStartTimes); \
	DECLARE_FUNCTION(execGetRepairers); \
	DECLARE_FUNCTION(execIsBeingRepaired); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsIntenseDamage); \
	DECLARE_FUNCTION(execIsRegressing); \
	DECLARE_FUNCTION(execMulticast_DamageCosmetic); \
	DECLARE_FUNCTION(execMulticast_OnRepaired); \
	DECLARE_FUNCTION(execMulticast_PlayFailSparksFX); \
	DECLARE_FUNCTION(execOnChargeApplied); \
	DECLARE_FUNCTION(execOnChargeChanged); \
	DECLARE_FUNCTION(execOnRep_DamageData); \
	DECLARE_FUNCTION(execOnRep_IsBlocked); \
	DECLARE_FUNCTION(execOnUpdateChargeProgress); \
	DECLARE_FUNCTION(execRemovePlayerStartTime); \
	DECLARE_FUNCTION(execResetGenerator); \
	DECLARE_FUNCTION(execSetIsAutoCompleted); \
	DECLARE_FUNCTION(execSetIsBlockedFromCharging); \
	DECLARE_FUNCTION(execSetOverchargeLevel); \
	DECLARE_FUNCTION(execSetRepaired); \
	DECLARE_FUNCTION(execTriggerSkillCheckFailureLoudNoise);


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UChargeableComponent* GetGeneratorChargeComponent_Implementation() const; \
	virtual void Multicast_DamageCosmetic_Implementation(bool intense); \
	virtual void Multicast_OnRepaired_Implementation(bool showGeneratorCloneLoudNoise, bool isAutoCompleted, const int32 updatedRemainingGeneratorCount); \
	virtual void Multicast_PlayFailSparksFX_Implementation(ADBDPlayer* player, bool explode); \
	virtual void OnUpdateChargeProgress_Implementation(float newPercentComplete); \
 \
	DECLARE_FUNCTION(execAddPlayerStartTime); \
	DECLARE_FUNCTION(execAuthority_AddBlockingSource); \
	DECLARE_FUNCTION(execAuthority_Damage); \
	DECLARE_FUNCTION(execAuthority_HasRepairedDamage); \
	DECLARE_FUNCTION(execAuthority_OnChargeApplied); \
	DECLARE_FUNCTION(execAuthority_OnChargeChanged); \
	DECLARE_FUNCTION(execAuthority_RemoveBlockingSource); \
	DECLARE_FUNCTION(execAuthority_RepairDamage); \
	DECLARE_FUNCTION(execBroadcastGeneratorRepairedBySurvivor); \
	DECLARE_FUNCTION(execBroadcastIsDamagedChangedEvent); \
	DECLARE_FUNCTION(execCanSurvivorReactToBlockingEntity); \
	DECLARE_FUNCTION(execClearGeneratorOvercharge); \
	DECLARE_FUNCTION(execDisableInaccessibleInteractors); \
	DECLARE_FUNCTION(execGetGeneratorChargeComponent); \
	DECLARE_FUNCTION(execGetIsAutoCompleted); \
	DECLARE_FUNCTION(execGetIsBlockedFromCharging); \
	DECLARE_FUNCTION(execGetOverchargeLevel); \
	DECLARE_FUNCTION(execGetOverchargeSkillCheckToTrigger); \
	DECLARE_FUNCTION(execGetPlayerStartTime); \
	DECLARE_FUNCTION(execGetPlayerStartTimes); \
	DECLARE_FUNCTION(execGetRepairers); \
	DECLARE_FUNCTION(execIsBeingRepaired); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsIntenseDamage); \
	DECLARE_FUNCTION(execIsRegressing); \
	DECLARE_FUNCTION(execMulticast_DamageCosmetic); \
	DECLARE_FUNCTION(execMulticast_OnRepaired); \
	DECLARE_FUNCTION(execMulticast_PlayFailSparksFX); \
	DECLARE_FUNCTION(execOnChargeApplied); \
	DECLARE_FUNCTION(execOnChargeChanged); \
	DECLARE_FUNCTION(execOnRep_DamageData); \
	DECLARE_FUNCTION(execOnRep_IsBlocked); \
	DECLARE_FUNCTION(execOnUpdateChargeProgress); \
	DECLARE_FUNCTION(execRemovePlayerStartTime); \
	DECLARE_FUNCTION(execResetGenerator); \
	DECLARE_FUNCTION(execSetIsAutoCompleted); \
	DECLARE_FUNCTION(execSetIsBlockedFromCharging); \
	DECLARE_FUNCTION(execSetOverchargeLevel); \
	DECLARE_FUNCTION(execSetRepaired); \
	DECLARE_FUNCTION(execTriggerSkillCheckFailureLoudNoise);


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_EVENT_PARMS \
	struct Generator_eventActivateTeleportGeneratorIndicator_Parms \
	{ \
		bool activate; \
	}; \
	struct Generator_eventGetChargePercentComplete_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventGetChargePercentComplete_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Generator_eventGetGeneratorChargeComponent_Parms \
	{ \
		UChargeableComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventGetGeneratorChargeComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Generator_eventGetRepairPercentComplete_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventGetRepairPercentComplete_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Generator_eventGetSkeletalMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventGetSkeletalMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Generator_eventIsBeingDamagedByKiller_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventIsBeingDamagedByKiller_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Generator_eventMulticast_DamageCosmetic_Parms \
	{ \
		bool intense; \
	}; \
	struct Generator_eventMulticast_OnRepaired_Parms \
	{ \
		bool showGeneratorCloneLoudNoise; \
		bool isAutoCompleted; \
		int32 updatedRemainingGeneratorCount; \
	}; \
	struct Generator_eventMulticast_PlayFailSparksFX_Parms \
	{ \
		ADBDPlayer* player; \
		bool explode; \
	}; \
	struct Generator_eventNotifyRepairFinish_Parms \
	{ \
		const ADBDPlayer* player; \
		UInteractor* interactor; \
	}; \
	struct Generator_eventNotifyRepairStart_Parms \
	{ \
		const ADBDPlayer* player; \
	}; \
	struct Generator_eventOnBlockingStatusChanged_Parms \
	{ \
		bool NewIsBlocked; \
	}; \
	struct Generator_eventOnDamageCosmetic_Parms \
	{ \
		bool intense; \
	}; \
	struct Generator_eventOnRepairedBP_Parms \
	{ \
		bool showGeneratorCloneLoudNoise; \
	}; \
	struct Generator_eventOnUpdateChargeProgress_Parms \
	{ \
		float newPercentComplete; \
	}; \
	struct Generator_eventPlayFailSparksFX_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
		bool explode; \
	}; \
	struct Generator_eventPostAkEvent_Parms \
	{ \
		UAkAudioEvent* AkEvent; \
		int32 CallbackMask; \
		FGeneratorPostEventCallback PostEventCallback; \
		TArray<FAkExternalSourceInfo> ExternalSources; \
		FString in_EventName; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventPostAkEvent_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Generator_eventSetComplete_Parms \
	{ \
		bool complete; \
	}; \
	struct Generator_eventShouldDoOverchargeSkillcheck_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Generator_eventShouldDoOverchargeSkillcheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Generator_eventSpawnBloodEffectToSocket_Parms \
	{ \
		FName name; \
	}; \
	struct Generator_eventTriggerSkillCheck_Parms \
	{ \
		ADBDPlayer* instigatingPlayer; \
	}; \
	struct Generator_eventVFXClampTopActivationSingleLight_Parms \
	{ \
		float distance; \
		FName parameterName; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenerator(); \
	friend struct Z_Construct_UClass_AGenerator_Statics; \
public: \
	DECLARE_CLASS(AGenerator, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<AGenerator*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_damageData=NETFIELD_REP_START, \
		_isBlocked, \
		NETFIELD_REP_END=_isBlocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAGenerator(); \
	friend struct Z_Construct_UClass_AGenerator_Statics; \
public: \
	DECLARE_CLASS(AGenerator, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<AGenerator*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_damageData=NETFIELD_REP_START, \
		_isBlocked, \
		NETFIELD_REP_END=_isBlocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenerator(AGenerator&&); \
	NO_API AGenerator(const AGenerator&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenerator(AGenerator&&); \
	NO_API AGenerator(const AGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenerator)


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireLevelScoreEventOnFix() { return STRUCT_OFFSET(AGenerator, FireLevelScoreEventOnFix); } \
	FORCEINLINE static uint32 __PPO___activatedTopLightsTransformMap() { return STRUCT_OFFSET(AGenerator, _activatedTopLightsTransformMap); } \
	FORCEINLINE static uint32 __PPO___perceptionStimuliComponent() { return STRUCT_OFFSET(AGenerator, _perceptionStimuliComponent); } \
	FORCEINLINE static uint32 __PPO___repairSemanticTag() { return STRUCT_OFFSET(AGenerator, _repairSemanticTag); } \
	FORCEINLINE static uint32 __PPO___damageData() { return STRUCT_OFFSET(AGenerator, _damageData); } \
	FORCEINLINE static uint32 __PPO___isBlocked() { return STRUCT_OFFSET(AGenerator, _isBlocked); } \
	FORCEINLINE static uint32 __PPO___isBlockedFromCharging() { return STRUCT_OFFSET(AGenerator, _isBlockedFromCharging); } \
	FORCEINLINE static uint32 __PPO___blockingSources() { return STRUCT_OFFSET(AGenerator, _blockingSources); } \
	FORCEINLINE static uint32 __PPO___generatorCharge() { return STRUCT_OFFSET(AGenerator, _generatorCharge); } \
	FORCEINLINE static uint32 __PPO___playerStartTimes() { return STRUCT_OFFSET(AGenerator, _playerStartTimes); } \
	FORCEINLINE static uint32 __PPO___isAutoCompleted() { return STRUCT_OFFSET(AGenerator, _isAutoCompleted); } \
	FORCEINLINE static uint32 __PPO___overchargeLevel() { return STRUCT_OFFSET(AGenerator, _overchargeLevel); } \
	FORCEINLINE static uint32 __PPO___coopRepairTracker() { return STRUCT_OFFSET(AGenerator, _coopRepairTracker); } \
	FORCEINLINE static uint32 __PPO___VFX_LightDistanceDefault() { return STRUCT_OFFSET(AGenerator, _VFX_LightDistanceDefault); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_34_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Generator_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
