// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class ADBDPlayer;
struct FVector;
class ACamperPlayer;
struct FPalletPushSettings;
enum class EPalletStunZoneSideStrategy : uint8;
class USkeletalMeshComponent;
enum class EPalletState : uint8;
#ifdef DEADBYDAYLIGHT_Pallet_generated_h
#error "Pallet.generated.h already included, missing '#pragma once' in Pallet.h"
#endif
#define DEADBYDAYLIGHT_Pallet_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_RPC_WRAPPERS \
	virtual void GetDestructibleAreaPrimitiveComponents_Implementation(TArray<UPrimitiveComponent*>& prims) const; \
	virtual void Multicast_PulldownPallet_Implementation(); \
	virtual void Multicast_ResetPallet_Implementation(); \
	virtual void Multicast_StunPlayer_Implementation(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet); \
 \
	DECLARE_FUNCTION(execAuthority_OnOverlapPushBox); \
	DECLARE_FUNCTION(execAuthority_StunSlashersinStunZone); \
	DECLARE_FUNCTION(execCanPulldown); \
	DECLARE_FUNCTION(execGetDestructibleAreaPrimitiveComponents); \
	DECLARE_FUNCTION(execGetFallDuration); \
	DECLARE_FUNCTION(execGetIsDreamPallet); \
	DECLARE_FUNCTION(execGetIsPulledDown); \
	DECLARE_FUNCTION(execGetPlayerDoingPulldown); \
	DECLARE_FUNCTION(execIsPulldownBlockedByEntity); \
	DECLARE_FUNCTION(execMulticast_PulldownPallet); \
	DECLARE_FUNCTION(execMulticast_ResetPallet); \
	DECLARE_FUNCTION(execMulticast_StunPlayer); \
	DECLARE_FUNCTION(execOnStunOverlap); \
	DECLARE_FUNCTION(execPullDown); \
	DECLARE_FUNCTION(execSetIllusionaryPallet); \
	DECLARE_FUNCTION(execSetPalletState); \
	DECLARE_FUNCTION(execUpdateIllusionaryPallet);


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetDestructibleAreaPrimitiveComponents_Implementation(TArray<UPrimitiveComponent*>& prims) const; \
	virtual void Multicast_PulldownPallet_Implementation(); \
	virtual void Multicast_ResetPallet_Implementation(); \
	virtual void Multicast_StunPlayer_Implementation(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet); \
 \
	DECLARE_FUNCTION(execAuthority_OnOverlapPushBox); \
	DECLARE_FUNCTION(execAuthority_StunSlashersinStunZone); \
	DECLARE_FUNCTION(execCanPulldown); \
	DECLARE_FUNCTION(execGetDestructibleAreaPrimitiveComponents); \
	DECLARE_FUNCTION(execGetFallDuration); \
	DECLARE_FUNCTION(execGetIsDreamPallet); \
	DECLARE_FUNCTION(execGetIsPulledDown); \
	DECLARE_FUNCTION(execGetPlayerDoingPulldown); \
	DECLARE_FUNCTION(execIsPulldownBlockedByEntity); \
	DECLARE_FUNCTION(execMulticast_PulldownPallet); \
	DECLARE_FUNCTION(execMulticast_ResetPallet); \
	DECLARE_FUNCTION(execMulticast_StunPlayer); \
	DECLARE_FUNCTION(execOnStunOverlap); \
	DECLARE_FUNCTION(execPullDown); \
	DECLARE_FUNCTION(execSetIllusionaryPallet); \
	DECLARE_FUNCTION(execSetPalletState); \
	DECLARE_FUNCTION(execUpdateIllusionaryPallet);


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_EVENT_PARMS \
	struct Pallet_eventExplodePallet_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct Pallet_eventExplodeStunPallet_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct Pallet_eventGetDestructibleAreaPrimitiveComponents_Parms \
	{ \
		TArray<UPrimitiveComponent*> prims; \
	}; \
	struct Pallet_eventMulticast_StunPlayer_Parms \
	{ \
		AActor* actor; \
		ACamperPlayer* survivor; \
		bool stunBreakPallet; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPallet(); \
	friend struct Z_Construct_UClass_APallet_Statics; \
public: \
	DECLARE_CLASS(APallet, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APallet)


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPallet(); \
	friend struct Z_Construct_UClass_APallet_Statics; \
public: \
	DECLARE_CLASS(APallet, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APallet)


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APallet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APallet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APallet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APallet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APallet(APallet&&); \
	NO_API APallet(const APallet&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APallet(APallet&&); \
	NO_API APallet(const APallet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APallet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APallet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APallet)


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___state() { return STRUCT_OFFSET(APallet, _state); } \
	FORCEINLINE static uint32 __PPO___isIllusionaryPalletDown() { return STRUCT_OFFSET(APallet, _isIllusionaryPalletDown); } \
	FORCEINLINE static uint32 __PPO___illusionaryPallet() { return STRUCT_OFFSET(APallet, _illusionaryPallet); } \
	FORCEINLINE static uint32 __PPO___destroyLeft() { return STRUCT_OFFSET(APallet, _destroyLeft); } \
	FORCEINLINE static uint32 __PPO___destroyRight() { return STRUCT_OFFSET(APallet, _destroyRight); } \
	FORCEINLINE static uint32 __PPO___pushBox() { return STRUCT_OFFSET(APallet, _pushBox); } \
	FORCEINLINE static uint32 __PPO___maxDotproductThresholdForPulldownAccross() { return STRUCT_OFFSET(APallet, _maxDotproductThresholdForPulldownAccross); } \
	FORCEINLINE static uint32 __PPO___fallDuration() { return STRUCT_OFFSET(APallet, _fallDuration); } \
	FORCEINLINE static uint32 __PPO___stunBoxLeft() { return STRUCT_OFFSET(APallet, _stunBoxLeft); } \
	FORCEINLINE static uint32 __PPO___stunBoxRight() { return STRUCT_OFFSET(APallet, _stunBoxRight); } \
	FORCEINLINE static uint32 __PPO___stunnedActors() { return STRUCT_OFFSET(APallet, _stunnedActors); } \
	FORCEINLINE static uint32 __PPO___playerExecutingPulldown() { return STRUCT_OFFSET(APallet, _playerExecutingPulldown); } \
	FORCEINLINE static uint32 __PPO___pushSettings() { return STRUCT_OFFSET(APallet, _pushSettings); } \
	FORCEINLINE static uint32 __PPO___navEvadeLoopComponent() { return STRUCT_OFFSET(APallet, _navEvadeLoopComponent); } \
	FORCEINLINE static uint32 __PPO___palletPulldownBlockerComponent() { return STRUCT_OFFSET(APallet, _palletPulldownBlockerComponent); } \
	FORCEINLINE static uint32 __PPO___isDreamPallet() { return STRUCT_OFFSET(APallet, _isDreamPallet); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_21_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class APallet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Pallet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
