// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class ACamperPlayer;
struct FChaseUpdateInfo;
#ifdef DEADBYDAYLIGHT_ChaserCharacterComponent_generated_h
#error "ChaserCharacterComponent.generated.h already included, missing '#pragma once' in ChaserCharacterComponent.h"
#endif
#define DEADBYDAYLIGHT_ChaserCharacterComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_RPC_WRAPPERS \
	virtual void Multicast_OnAllChaseEnd_Implementation(); \
	virtual void Multicast_OnChaseEnd_Implementation(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo); \
	virtual void Multicast_OnChaseStart_Implementation(ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execAuthority_OnChaseTargetFound); \
	DECLARE_FUNCTION(execMulticast_OnAllChaseEnd); \
	DECLARE_FUNCTION(execMulticast_OnChaseEnd); \
	DECLARE_FUNCTION(execMulticast_OnChaseStart); \
	DECLARE_FUNCTION(execOnKillerLocallyObservedChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnAllChaseEnd_Implementation(); \
	virtual void Multicast_OnChaseEnd_Implementation(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo); \
	virtual void Multicast_OnChaseStart_Implementation(ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execAuthority_OnChaseTargetFound); \
	DECLARE_FUNCTION(execMulticast_OnAllChaseEnd); \
	DECLARE_FUNCTION(execMulticast_OnChaseEnd); \
	DECLARE_FUNCTION(execMulticast_OnChaseStart); \
	DECLARE_FUNCTION(execOnKillerLocallyObservedChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_EVENT_PARMS \
	struct ChaserCharacterComponent_eventMulticast_OnChaseEnd_Parms \
	{ \
		ACamperPlayer* survivor; \
		FChaseUpdateInfo chaseUpdateInfo; \
	}; \
	struct ChaserCharacterComponent_eventMulticast_OnChaseStart_Parms \
	{ \
		ACamperPlayer* survivor; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaserCharacterComponent(); \
	friend struct Z_Construct_UClass_UChaserCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(UChaserCharacterComponent, UChaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChaserCharacterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chasedPlayers=NETFIELD_REP_START, \
		NETFIELD_REP_END=_chasedPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUChaserCharacterComponent(); \
	friend struct Z_Construct_UClass_UChaserCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(UChaserCharacterComponent, UChaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChaserCharacterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chasedPlayers=NETFIELD_REP_START, \
		NETFIELD_REP_END=_chasedPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaserCharacterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaserCharacterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaserCharacterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaserCharacterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaserCharacterComponent(UChaserCharacterComponent&&); \
	NO_API UChaserCharacterComponent(const UChaserCharacterComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaserCharacterComponent(UChaserCharacterComponent&&); \
	NO_API UChaserCharacterComponent(const UChaserCharacterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaserCharacterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaserCharacterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaserCharacterComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___camperSensor() { return STRUCT_OFFSET(UChaserCharacterComponent, _camperSensor); } \
	FORCEINLINE static uint32 __PPO___chaseUpdateInfo() { return STRUCT_OFFSET(UChaserCharacterComponent, _chaseUpdateInfo); } \
	FORCEINLINE static uint32 __PPO___chasedPlayers() { return STRUCT_OFFSET(UChaserCharacterComponent, _chasedPlayers); } \
	FORCEINLINE static uint32 __PPO___authority_survivorsWhoStunnedKillerByPalletDuringChase() { return STRUCT_OFFSET(UChaserCharacterComponent, _authority_survivorsWhoStunnedKillerByPalletDuringChase); } \
	FORCEINLINE static uint32 __PPO___preventChaseTags() { return STRUCT_OFFSET(UChaserCharacterComponent, _preventChaseTags); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UChaserCharacterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ChaserCharacterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
