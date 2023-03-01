// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKnivesLauncher;
class ASlasherPlayer;
#ifdef THEK23_ThrowingKnives_generated_h
#error "ThrowingKnives.generated.h already included, missing '#pragma once' in ThrowingKnives.h"
#endif
#define THEK23_ThrowingKnives_generated_h

#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_RPC_WRAPPERS \
	virtual void Multicast_OnUsePowerWhenInCooldown_Implementation(); \
	virtual void Multicast_OnUsePowerWhenOutOfAmmo_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_SpawnReloadInteractionOnLockers); \
	DECLARE_FUNCTION(execGetLauncher); \
	DECLARE_FUNCTION(execGetSlasher); \
	DECLARE_FUNCTION(execMulticast_OnUsePowerWhenInCooldown); \
	DECLARE_FUNCTION(execMulticast_OnUsePowerWhenOutOfAmmo); \
	DECLARE_FUNCTION(execOnItemUsedStateChanged);


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnUsePowerWhenInCooldown_Implementation(); \
	virtual void Multicast_OnUsePowerWhenOutOfAmmo_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_SpawnReloadInteractionOnLockers); \
	DECLARE_FUNCTION(execGetLauncher); \
	DECLARE_FUNCTION(execGetSlasher); \
	DECLARE_FUNCTION(execMulticast_OnUsePowerWhenInCooldown); \
	DECLARE_FUNCTION(execMulticast_OnUsePowerWhenOutOfAmmo); \
	DECLARE_FUNCTION(execOnItemUsedStateChanged);


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_EVENT_PARMS \
	struct ThrowingKnives_eventCosmetic_OnComboFinished_Parms \
	{ \
		bool isSRankCombo; \
	}; \
	struct ThrowingKnives_eventCosmetic_OnComboScoreChanged_Parms \
	{ \
		float scoreNormalizedForAudio; \
	};


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowingKnives(); \
	friend struct Z_Construct_UClass_AThrowingKnives_Statics; \
public: \
	DECLARE_CLASS(AThrowingKnives, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(AThrowingKnives) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_flurryScoreComponent=NETFIELD_REP_START, \
		_superModeComponent, \
		NETFIELD_REP_END=_superModeComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAThrowingKnives(); \
	friend struct Z_Construct_UClass_AThrowingKnives_Statics; \
public: \
	DECLARE_CLASS(AThrowingKnives, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(AThrowingKnives) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_flurryScoreComponent=NETFIELD_REP_START, \
		_superModeComponent, \
		NETFIELD_REP_END=_superModeComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrowingKnives(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowingKnives) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowingKnives); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowingKnives); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowingKnives(AThrowingKnives&&); \
	NO_API AThrowingKnives(const AThrowingKnives&); \
public:


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowingKnives(AThrowingKnives&&); \
	NO_API AThrowingKnives(const AThrowingKnives&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowingKnives); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowingKnives); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowingKnives)


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___flurryScoreComponent() { return STRUCT_OFFSET(AThrowingKnives, _flurryScoreComponent); } \
	FORCEINLINE static uint32 __PPO___superModeComponent() { return STRUCT_OFFSET(AThrowingKnives, _superModeComponent); } \
	FORCEINLINE static uint32 __PPO___superModeChargePresentationComponent() { return STRUCT_OFFSET(AThrowingKnives, _superModeChargePresentationComponent); } \
	FORCEINLINE static uint32 __PPO___superModeChargeComponent() { return STRUCT_OFFSET(AThrowingKnives, _superModeChargeComponent); } \
	FORCEINLINE static uint32 __PPO___knivesProvider() { return STRUCT_OFFSET(AThrowingKnives, _knivesProvider); } \
	FORCEINLINE static uint32 __PPO___knivesLauncher() { return STRUCT_OFFSET(AThrowingKnives, _knivesLauncher); } \
	FORCEINLINE static uint32 __PPO___lacerationComponentClass() { return STRUCT_OFFSET(AThrowingKnives, _lacerationComponentClass); } \
	FORCEINLINE static uint32 __PPO___reloadInteractionClass() { return STRUCT_OFFSET(AThrowingKnives, _reloadInteractionClass); } \
	FORCEINLINE static uint32 __PPO___closetReloadActor() { return STRUCT_OFFSET(AThrowingKnives, _closetReloadActor); } \
	FORCEINLINE static uint32 __PPO___minimumTimeBetweenBroadcast() { return STRUCT_OFFSET(AThrowingKnives, _minimumTimeBetweenBroadcast); }


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_18_PROLOG \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_INCLASS \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class AThrowingKnives>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_ThrowingKnives_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
