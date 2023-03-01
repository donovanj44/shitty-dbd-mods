// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USectionnedChargeableComponent;
struct FGameplayTag;
struct FGameEventData;
#ifdef DEADBYDAYLIGHT_HalloweenEventComponent_generated_h
#error "HalloweenEventComponent.generated.h already included, missing '#pragma once' in HalloweenEventComponent.h"
#endif
#define DEADBYDAYLIGHT_HalloweenEventComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_RPC_WRAPPERS \
	virtual bool Server_SpawnVial_Validate(float ); \
	virtual void Server_SpawnVial_Implementation(float initialCharge); \
 \
	DECLARE_FUNCTION(execGetVial); \
	DECLARE_FUNCTION(execIsVialFull); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnRep_Vial); \
	DECLARE_FUNCTION(execServer_SpawnVial);


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SpawnVial_Validate(float ); \
	virtual void Server_SpawnVial_Implementation(float initialCharge); \
 \
	DECLARE_FUNCTION(execGetVial); \
	DECLARE_FUNCTION(execIsVialFull); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnRep_Vial); \
	DECLARE_FUNCTION(execServer_SpawnVial);


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_EVENT_PARMS \
	struct HalloweenEventComponent_eventServer_SpawnVial_Parms \
	{ \
		float initialCharge; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHalloweenEventComponent(); \
	friend struct Z_Construct_UClass_UHalloweenEventComponent_Statics; \
public: \
	DECLARE_CLASS(UHalloweenEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UHalloweenEventComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_toxinVialComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=_toxinVialComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHalloweenEventComponent(); \
	friend struct Z_Construct_UClass_UHalloweenEventComponent_Statics; \
public: \
	DECLARE_CLASS(UHalloweenEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UHalloweenEventComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_toxinVialComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=_toxinVialComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHalloweenEventComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHalloweenEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHalloweenEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHalloweenEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHalloweenEventComponent(UHalloweenEventComponent&&); \
	NO_API UHalloweenEventComponent(const UHalloweenEventComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHalloweenEventComponent(UHalloweenEventComponent&&); \
	NO_API UHalloweenEventComponent(const UHalloweenEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHalloweenEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHalloweenEventComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHalloweenEventComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___toxinVialComponent() { return STRUCT_OFFSET(UHalloweenEventComponent, _toxinVialComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UHalloweenEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_HalloweenEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
