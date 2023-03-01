// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
#ifdef DEADBYDAYLIGHT_PortalPlacerStateComponent_generated_h
#error "PortalPlacerStateComponent.generated.h already included, missing '#pragma once' in PortalPlacerStateComponent.h"
#endif
#define DEADBYDAYLIGHT_PortalPlacerStateComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_10_DELEGATE \
static inline void FPortalPlacerStateComponentOnTeleportCooldownComplete_DelegateWrapper(const FMulticastScriptDelegate& PortalPlacerStateComponentOnTeleportCooldownComplete) \
{ \
	PortalPlacerStateComponentOnTeleportCooldownComplete.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRemainingPortalCount); \
	DECLARE_FUNCTION(execGetTeleportDuration); \
	DECLARE_FUNCTION(execInitializeTunableValues); \
	DECLARE_FUNCTION(execIsUsePortalCooldownDone); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execUpdateRemainingPortalCount);


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRemainingPortalCount); \
	DECLARE_FUNCTION(execGetTeleportDuration); \
	DECLARE_FUNCTION(execInitializeTunableValues); \
	DECLARE_FUNCTION(execIsUsePortalCooldownDone); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execUpdateRemainingPortalCount);


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortalPlacerStateComponent(); \
	friend struct Z_Construct_UClass_UPortalPlacerStateComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalPlacerStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPortalPlacerStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_remainingPortals=NETFIELD_REP_START, \
		_placedPortals, \
		_restrictedPortalLocations, \
		NETFIELD_REP_END=_restrictedPortalLocations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPortalPlacerStateComponent(); \
	friend struct Z_Construct_UClass_UPortalPlacerStateComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalPlacerStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPortalPlacerStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_remainingPortals=NETFIELD_REP_START, \
		_placedPortals, \
		_restrictedPortalLocations, \
		NETFIELD_REP_END=_restrictedPortalLocations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalPlacerStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalPlacerStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalPlacerStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalPlacerStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalPlacerStateComponent(UPortalPlacerStateComponent&&); \
	NO_API UPortalPlacerStateComponent(const UPortalPlacerStateComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalPlacerStateComponent(UPortalPlacerStateComponent&&); \
	NO_API UPortalPlacerStateComponent(const UPortalPlacerStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalPlacerStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalPlacerStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPortalPlacerStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___remainingPortals() { return STRUCT_OFFSET(UPortalPlacerStateComponent, _remainingPortals); } \
	FORCEINLINE static uint32 __PPO___placedPortals() { return STRUCT_OFFSET(UPortalPlacerStateComponent, _placedPortals); } \
	FORCEINLINE static uint32 __PPO___restrictedPortalLocations() { return STRUCT_OFFSET(UPortalPlacerStateComponent, _restrictedPortalLocations); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPortalPlacerStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PortalPlacerStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
