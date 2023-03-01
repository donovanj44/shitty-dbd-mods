// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THEGUNSLINGER_RiflePlayerLinker_generated_h
#error "RiflePlayerLinker.generated.h already included, missing '#pragma once' in RiflePlayerLinker.h"
#endif
#define THEGUNSLINGER_RiflePlayerLinker_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_9_DELEGATE \
struct _Script_TheGunslinger_eventRiflePlayerLinkerOnLinkedPlayerSet_Parms \
{ \
	ADBDPlayer* linkedPlayer; \
}; \
static inline void FRiflePlayerLinkerOnLinkedPlayerSet_DelegateWrapper(const FMulticastScriptDelegate& RiflePlayerLinkerOnLinkedPlayerSet, ADBDPlayer* linkedPlayer) \
{ \
	_Script_TheGunslinger_eventRiflePlayerLinkerOnLinkedPlayerSet_Parms Parms; \
	Parms.linkedPlayer=linkedPlayer; \
	RiflePlayerLinkerOnLinkedPlayerSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_RPC_WRAPPERS \
	virtual void Client_OnAuthorityTensionBreakChain_Implementation(ADBDPlayer* player); \
	virtual void Multicast_Link_Implementation(ADBDPlayer* linkedPlayer); \
	virtual void Multicast_Unlink_Implementation(); \
	virtual bool Server_OnClientConfirmTensionBreakChain_Validate(ADBDPlayer* ); \
	virtual void Server_OnClientConfirmTensionBreakChain_Implementation(ADBDPlayer* player); \
 \
	DECLARE_FUNCTION(execClient_OnAuthorityTensionBreakChain); \
	DECLARE_FUNCTION(execGetLinkedPlayer); \
	DECLARE_FUNCTION(execGetLinkOwner); \
	DECLARE_FUNCTION(execMulticast_Link); \
	DECLARE_FUNCTION(execMulticast_Unlink); \
	DECLARE_FUNCTION(execServer_OnClientConfirmTensionBreakChain);


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnAuthorityTensionBreakChain_Implementation(ADBDPlayer* player); \
	virtual void Multicast_Link_Implementation(ADBDPlayer* linkedPlayer); \
	virtual void Multicast_Unlink_Implementation(); \
	virtual bool Server_OnClientConfirmTensionBreakChain_Validate(ADBDPlayer* ); \
	virtual void Server_OnClientConfirmTensionBreakChain_Implementation(ADBDPlayer* player); \
 \
	DECLARE_FUNCTION(execClient_OnAuthorityTensionBreakChain); \
	DECLARE_FUNCTION(execGetLinkedPlayer); \
	DECLARE_FUNCTION(execGetLinkOwner); \
	DECLARE_FUNCTION(execMulticast_Link); \
	DECLARE_FUNCTION(execMulticast_Unlink); \
	DECLARE_FUNCTION(execServer_OnClientConfirmTensionBreakChain);


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_EVENT_PARMS \
	struct RiflePlayerLinker_eventClient_OnAuthorityTensionBreakChain_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct RiflePlayerLinker_eventMulticast_Link_Parms \
	{ \
		ADBDPlayer* linkedPlayer; \
	}; \
	struct RiflePlayerLinker_eventServer_OnClientConfirmTensionBreakChain_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURiflePlayerLinker(); \
	friend struct Z_Construct_UClass_URiflePlayerLinker_Statics; \
public: \
	DECLARE_CLASS(URiflePlayerLinker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(URiflePlayerLinker) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_desiredLinkLength=NETFIELD_REP_START, \
		NETFIELD_REP_END=_desiredLinkLength	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_INCLASS \
private: \
	static void StaticRegisterNativesURiflePlayerLinker(); \
	friend struct Z_Construct_UClass_URiflePlayerLinker_Statics; \
public: \
	DECLARE_CLASS(URiflePlayerLinker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(URiflePlayerLinker) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_desiredLinkLength=NETFIELD_REP_START, \
		NETFIELD_REP_END=_desiredLinkLength	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URiflePlayerLinker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URiflePlayerLinker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiflePlayerLinker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiflePlayerLinker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URiflePlayerLinker(URiflePlayerLinker&&); \
	NO_API URiflePlayerLinker(const URiflePlayerLinker&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URiflePlayerLinker(URiflePlayerLinker&&); \
	NO_API URiflePlayerLinker(const URiflePlayerLinker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URiflePlayerLinker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URiflePlayerLinker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URiflePlayerLinker)


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___linkedPlayer() { return STRUCT_OFFSET(URiflePlayerLinker, _linkedPlayer); } \
	FORCEINLINE static uint32 __PPO___linkedPlayerDuringAttack() { return STRUCT_OFFSET(URiflePlayerLinker, _linkedPlayerDuringAttack); } \
	FORCEINLINE static uint32 __PPO___linkOwner() { return STRUCT_OFFSET(URiflePlayerLinker, _linkOwner); } \
	FORCEINLINE static uint32 __PPO___desiredLinkLength() { return STRUCT_OFFSET(URiflePlayerLinker, _desiredLinkLength); } \
	FORCEINLINE static uint32 __PPO___elasticLength() { return STRUCT_OFFSET(URiflePlayerLinker, _elasticLength); } \
	FORCEINLINE static uint32 __PPO___minimumLinkLength() { return STRUCT_OFFSET(URiflePlayerLinker, _minimumLinkLength); } \
	FORCEINLINE static uint32 __PPO___breakFreeCloseRangeMaxDistance() { return STRUCT_OFFSET(URiflePlayerLinker, _breakFreeCloseRangeMaxDistance); } \
	FORCEINLINE static uint32 __PPO___movementLinkReductionThreshold() { return STRUCT_OFFSET(URiflePlayerLinker, _movementLinkReductionThreshold); } \
	FORCEINLINE static uint32 __PPO___movementAccelerationTreshold() { return STRUCT_OFFSET(URiflePlayerLinker, _movementAccelerationTreshold); }


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_11_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class URiflePlayerLinker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_RiflePlayerLinker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
