// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FFirecrackerEffectData;
class UFlashlightComponent;
#ifdef DBDGAMEPLAY_LightBurnable_generated_h
#error "LightBurnable.generated.h already included, missing '#pragma once' in LightBurnable.h"
#endif
#define DBDGAMEPLAY_LightBurnable_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_13_DELEGATE \
struct _Script_DBDGameplay_eventLightBurnableOnBurnChargeCompleteEvent_Parms \
{ \
	TArray<AActor*> instigatorsForCompletion; \
}; \
static inline void FLightBurnableOnBurnChargeCompleteEvent_DelegateWrapper(const FMulticastScriptDelegate& LightBurnableOnBurnChargeCompleteEvent, TArray<AActor*> const& instigatorsForCompletion) \
{ \
	_Script_DBDGameplay_eventLightBurnableOnBurnChargeCompleteEvent_Parms Parms; \
	Parms.instigatorsForCompletion=instigatorsForCompletion; \
	LightBurnableOnBurnChargeCompleteEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnFirecrackerInRangeBegin); \
	DECLARE_FUNCTION(execAuthority_OnFlashlightAddedRemoved); \
	DECLARE_FUNCTION(execOnBurnChargeEmpty); \
	DECLARE_FUNCTION(execOnChargeableCompleteEvent); \
	DECLARE_FUNCTION(execOnRep_IsBurning);


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnFirecrackerInRangeBegin); \
	DECLARE_FUNCTION(execAuthority_OnFlashlightAddedRemoved); \
	DECLARE_FUNCTION(execOnBurnChargeEmpty); \
	DECLARE_FUNCTION(execOnChargeableCompleteEvent); \
	DECLARE_FUNCTION(execOnRep_IsBurning);


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightBurnable(); \
	friend struct Z_Construct_UClass_ULightBurnable_Statics; \
public: \
	DECLARE_CLASS(ULightBurnable, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(ULightBurnable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBurning=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isBurning	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULightBurnable(); \
	friend struct Z_Construct_UClass_ULightBurnable_Statics; \
public: \
	DECLARE_CLASS(ULightBurnable, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(ULightBurnable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBurning=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isBurning	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightBurnable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightBurnable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightBurnable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightBurnable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightBurnable(ULightBurnable&&); \
	NO_API ULightBurnable(const ULightBurnable&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightBurnable(ULightBurnable&&); \
	NO_API ULightBurnable(const ULightBurnable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightBurnable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightBurnable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightBurnable)


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargeable() { return STRUCT_OFFSET(ULightBurnable, _chargeable); } \
	FORCEINLINE static uint32 __PPO___flashlightable() { return STRUCT_OFFSET(ULightBurnable, _flashlightable); } \
	FORCEINLINE static uint32 __PPO___firecrackerEffectHandler() { return STRUCT_OFFSET(ULightBurnable, _firecrackerEffectHandler); } \
	FORCEINLINE static uint32 __PPO___isBurning() { return STRUCT_OFFSET(ULightBurnable, _isBurning); }


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_15_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class ULightBurnable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_LightBurnable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
