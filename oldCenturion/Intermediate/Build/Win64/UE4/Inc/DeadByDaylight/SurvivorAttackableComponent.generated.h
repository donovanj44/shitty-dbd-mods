// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAttackType : uint8;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_SurvivorAttackableComponent_generated_h
#error "SurvivorAttackableComponent.generated.h already included, missing '#pragma once' in SurvivorAttackableComponent.h"
#endif
#define DEADBYDAYLIGHT_SurvivorAttackableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_RPC_WRAPPERS \
	virtual void Multicast_HitCosmetic_Implementation(const AActor* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit); \
	virtual void Multicast_HitCosmetic_NonLocal_Implementation(const ADBDPlayer* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit); \
 \
	DECLARE_FUNCTION(execAuthority_HitCosmetic); \
	DECLARE_FUNCTION(execMulticast_HitCosmetic); \
	DECLARE_FUNCTION(execMulticast_HitCosmetic_NonLocal);


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_HitCosmetic_Implementation(const AActor* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit); \
	virtual void Multicast_HitCosmetic_NonLocal_Implementation(const ADBDPlayer* attacker, EAttackType attackType, bool causedKO, bool isWeaponHit); \
 \
	DECLARE_FUNCTION(execAuthority_HitCosmetic); \
	DECLARE_FUNCTION(execMulticast_HitCosmetic); \
	DECLARE_FUNCTION(execMulticast_HitCosmetic_NonLocal);


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_EVENT_PARMS \
	struct SurvivorAttackableComponent_eventMulticast_HitCosmetic_Parms \
	{ \
		const AActor* attacker; \
		EAttackType attackType; \
		bool causedKO; \
		bool isWeaponHit; \
	}; \
	struct SurvivorAttackableComponent_eventMulticast_HitCosmetic_NonLocal_Parms \
	{ \
		const ADBDPlayer* attacker; \
		EAttackType attackType; \
		bool causedKO; \
		bool isWeaponHit; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorAttackableComponent(); \
	friend struct Z_Construct_UClass_USurvivorAttackableComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivorAttackableComponent, UAttackableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USurvivorAttackableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorAttackableComponent(); \
	friend struct Z_Construct_UClass_USurvivorAttackableComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivorAttackableComponent, UAttackableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USurvivorAttackableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorAttackableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorAttackableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorAttackableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorAttackableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorAttackableComponent(USurvivorAttackableComponent&&); \
	NO_API USurvivorAttackableComponent(const USurvivorAttackableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorAttackableComponent(USurvivorAttackableComponent&&); \
	NO_API USurvivorAttackableComponent(const USurvivorAttackableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorAttackableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorAttackableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorAttackableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class USurvivorAttackableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SurvivorAttackableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
