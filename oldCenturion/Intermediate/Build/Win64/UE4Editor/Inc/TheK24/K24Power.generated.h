// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContaminator : uint8;
class ABreakableBase;
class APallet;
class AZombieCharacter;
enum class EAttackType : uint8;
struct FVector;
#ifdef THEK24_K24Power_generated_h
#error "K24Power.generated.h already included, missing '#pragma once' in K24Power.h"
#endif
#define THEK24_K24Power_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_RPC_WRAPPERS \
	virtual void Multicast_PowerDestroyBreakable_Implementation(ABreakableBase* breakable); \
	virtual void Multicast_PowerDestroyPallet_Implementation(APallet* pallet); \
	virtual void Server_KillAZombie_Implementation(AZombieCharacter* zombie, EAttackType attackType); \
	virtual void Server_PowerDestroyBreakable_Implementation(ABreakableBase* breakable); \
	virtual void Server_PowerDestroyPallet_Implementation(APallet* pallet); \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorContaminated); \
	DECLARE_FUNCTION(execGetPowerLevel); \
	DECLARE_FUNCTION(execGetWhipLength); \
	DECLARE_FUNCTION(execIsInPower); \
	DECLARE_FUNCTION(execMulticast_PowerDestroyBreakable); \
	DECLARE_FUNCTION(execMulticast_PowerDestroyPallet); \
	DECLARE_FUNCTION(execOnRep_PowerLevelPoints); \
	DECLARE_FUNCTION(execServer_KillAZombie); \
	DECLARE_FUNCTION(execServer_PowerDestroyBreakable); \
	DECLARE_FUNCTION(execServer_PowerDestroyPallet);


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PowerDestroyBreakable_Implementation(ABreakableBase* breakable); \
	virtual void Multicast_PowerDestroyPallet_Implementation(APallet* pallet); \
	virtual void Server_KillAZombie_Implementation(AZombieCharacter* zombie, EAttackType attackType); \
	virtual void Server_PowerDestroyBreakable_Implementation(ABreakableBase* breakable); \
	virtual void Server_PowerDestroyPallet_Implementation(APallet* pallet); \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorContaminated); \
	DECLARE_FUNCTION(execGetPowerLevel); \
	DECLARE_FUNCTION(execGetWhipLength); \
	DECLARE_FUNCTION(execIsInPower); \
	DECLARE_FUNCTION(execMulticast_PowerDestroyBreakable); \
	DECLARE_FUNCTION(execMulticast_PowerDestroyPallet); \
	DECLARE_FUNCTION(execOnRep_PowerLevelPoints); \
	DECLARE_FUNCTION(execServer_KillAZombie); \
	DECLARE_FUNCTION(execServer_PowerDestroyBreakable); \
	DECLARE_FUNCTION(execServer_PowerDestroyPallet);


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_EVENT_PARMS \
	struct K24Power_eventMulticast_PowerDestroyBreakable_Parms \
	{ \
		ABreakableBase* breakable; \
	}; \
	struct K24Power_eventMulticast_PowerDestroyPallet_Parms \
	{ \
		APallet* pallet; \
	}; \
	struct K24Power_eventOnPowerLevelChanged_Cosmetic_Parms \
	{ \
		int32 powerLevel; \
	}; \
	struct K24Power_eventPowerHitStateEnd_Cosmetic_Parms \
	{ \
		FVector whipStartLocation; \
		FVector whipEndLocation; \
	}; \
	struct K24Power_eventServer_KillAZombie_Parms \
	{ \
		AZombieCharacter* zombie; \
		EAttackType attackType; \
	}; \
	struct K24Power_eventServer_PowerDestroyBreakable_Parms \
	{ \
		ABreakableBase* breakable; \
	}; \
	struct K24Power_eventServer_PowerDestroyPallet_Parms \
	{ \
		APallet* pallet; \
	}; \
	struct K24Power_eventWhipAttackHit_Cosmetic_Parms \
	{ \
		FVector whipStartLocation; \
		FVector impactPointLocation; \
		FVector whipEndLocation; \
		bool isFirstHit; \
		FVector impactNormal; \
		FName phyMaterial; \
		bool hitACharacter; \
	}; \
	struct K24Power_eventWhipAttackMove_Cosmetic_Parms \
	{ \
		FVector whipStartLocation; \
		FVector whipEndLocation; \
		bool isFirstRayCast; \
	};


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK24Power(); \
	friend struct Z_Construct_UClass_AK24Power_Statics; \
public: \
	DECLARE_CLASS(AK24Power, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AK24Power) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_powerLevelPoints=NETFIELD_REP_START, \
		NETFIELD_REP_END=_powerLevelPoints	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAK24Power(); \
	friend struct Z_Construct_UClass_AK24Power_Statics; \
public: \
	DECLARE_CLASS(AK24Power, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AK24Power) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_powerLevelPoints=NETFIELD_REP_START, \
		NETFIELD_REP_END=_powerLevelPoints	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK24Power(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK24Power) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK24Power); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK24Power); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK24Power(AK24Power&&); \
	NO_API AK24Power(const AK24Power&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK24Power(AK24Power&&); \
	NO_API AK24Power(const AK24Power&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK24Power); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK24Power); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK24Power)


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___powerWalkSpeed() { return STRUCT_OFFSET(AK24Power, _powerWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___powerWalkSpeedLevel3() { return STRUCT_OFFSET(AK24Power, _powerWalkSpeedLevel3); } \
	FORCEINLINE static uint32 __PPO___normalWalkSpeed() { return STRUCT_OFFSET(AK24Power, _normalWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___powerMouseYawScale() { return STRUCT_OFFSET(AK24Power, _powerMouseYawScale); } \
	FORCEINLINE static uint32 __PPO___powerYawAdjustTime() { return STRUCT_OFFSET(AK24Power, _powerYawAdjustTime); } \
	FORCEINLINE static uint32 __PPO___powerGamePadYawScale() { return STRUCT_OFFSET(AK24Power, _powerGamePadYawScale); } \
	FORCEINLINE static uint32 __PPO___activateK24PowerCharge() { return STRUCT_OFFSET(AK24Power, _activateK24PowerCharge); } \
	FORCEINLINE static uint32 __PPO___activateK24PowerSecondsToCharge() { return STRUCT_OFFSET(AK24Power, _activateK24PowerSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___activatePowerChargeSpeedCurve() { return STRUCT_OFFSET(AK24Power, _activatePowerChargeSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___activatePowerChargeLvl3SpeedCurve() { return STRUCT_OFFSET(AK24Power, _activatePowerChargeLvl3SpeedCurve); } \
	FORCEINLINE static uint32 __PPO___k24PowerCooldownInteraction() { return STRUCT_OFFSET(AK24Power, _k24PowerCooldownInteraction); } \
	FORCEINLINE static uint32 __PPO___whipLengthLevel1() { return STRUCT_OFFSET(AK24Power, _whipLengthLevel1); } \
	FORCEINLINE static uint32 __PPO___whipLengthLevel2() { return STRUCT_OFFSET(AK24Power, _whipLengthLevel2); } \
	FORCEINLINE static uint32 __PPO___whipLengthLevel3() { return STRUCT_OFFSET(AK24Power, _whipLengthLevel3); } \
	FORCEINLINE static uint32 __PPO___contaminationComponentBP() { return STRUCT_OFFSET(AK24Power, _contaminationComponentBP); } \
	FORCEINLINE static uint32 __PPO___powerChargeSurvivorContaminatedPoint() { return STRUCT_OFFSET(AK24Power, _powerChargeSurvivorContaminatedPoint); } \
	FORCEINLINE static uint32 __PPO___powerChargeZombieKilledPoint() { return STRUCT_OFFSET(AK24Power, _powerChargeZombieKilledPoint); } \
	FORCEINLINE static uint32 __PPO___powerChargeSurvivorHitPoint() { return STRUCT_OFFSET(AK24Power, _powerChargeSurvivorHitPoint); } \
	FORCEINLINE static uint32 __PPO___powerLevelPoints() { return STRUCT_OFFSET(AK24Power, _powerLevelPoints); } \
	FORCEINLINE static uint32 __PPO___powerLevelPointsToLevel2() { return STRUCT_OFFSET(AK24Power, _powerLevelPointsToLevel2); } \
	FORCEINLINE static uint32 __PPO___powerLevelPointsToLevel3() { return STRUCT_OFFSET(AK24Power, _powerLevelPointsToLevel3); }


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_20_PROLOG \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24Power_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24Power_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class AK24Power>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24Power_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
