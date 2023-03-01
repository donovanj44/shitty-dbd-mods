// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef THEGUNSLINGER_ForThePeople_generated_h
#error "ForThePeople.generated.h already included, missing '#pragma once' in ForThePeople.h"
#endif
#define THEGUNSLINGER_ForThePeople_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_RPC_WRAPPERS \
	virtual void Multicast_OnHealAbilityUsed_Implementation(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor); \
	virtual bool Server_OnActionInputPressed_Validate(); \
	virtual void Server_OnActionInputPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnHealAbilityUsed); \
	DECLARE_FUNCTION(execServer_OnActionInputPressed);


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnHealAbilityUsed_Implementation(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor); \
	virtual bool Server_OnActionInputPressed_Validate(); \
	virtual void Server_OnActionInputPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_OnHealAbilityUsed); \
	DECLARE_FUNCTION(execServer_OnActionInputPressed);


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_EVENT_PARMS \
	struct ForThePeople_eventMulticast_OnHealAbilityUsed_Parms \
	{ \
		ACamperPlayer* healingSurvivor; \
		ACamperPlayer* healedSurvivor; \
	}; \
	struct ForThePeople_eventOnHealingAbilityUsed_Parms \
	{ \
		ACamperPlayer* healingSurvivor; \
		ACamperPlayer* healedSurvivor; \
	};


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForThePeople(); \
	friend struct Z_Construct_UClass_UForThePeople_Statics; \
public: \
	DECLARE_CLASS(UForThePeople, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UForThePeople)


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUForThePeople(); \
	friend struct Z_Construct_UClass_UForThePeople_Statics; \
public: \
	DECLARE_CLASS(UForThePeople, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UForThePeople)


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForThePeople(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForThePeople) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForThePeople); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForThePeople); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForThePeople(UForThePeople&&); \
	NO_API UForThePeople(const UForThePeople&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForThePeople(UForThePeople&&); \
	NO_API UForThePeople(const UForThePeople&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForThePeople); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForThePeople); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UForThePeople)


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___brokenEffectDurations() { return STRUCT_OFFSET(UForThePeople, _brokenEffectDurations); } \
	FORCEINLINE static uint32 __PPO___secondaryActionProperties() { return STRUCT_OFFSET(UForThePeople, _secondaryActionProperties); }


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_9_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UForThePeople>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_ForThePeople_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
