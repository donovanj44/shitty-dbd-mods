// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef THEGUNSLINGER_RedHerring_generated_h
#error "RedHerring.generated.h already included, missing '#pragma once' in RedHerring.h"
#endif
#define THEGUNSLINGER_RedHerring_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MarkedGenerator);


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MarkedGenerator);


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_EVENT_PARMS
#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURedHerring(); \
	friend struct Z_Construct_UClass_URedHerring_Statics; \
public: \
	DECLARE_CLASS(URedHerring, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(URedHerring) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_markedGenerator=NETFIELD_REP_START, \
		NETFIELD_REP_END=_markedGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_INCLASS \
private: \
	static void StaticRegisterNativesURedHerring(); \
	friend struct Z_Construct_UClass_URedHerring_Statics; \
public: \
	DECLARE_CLASS(URedHerring, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(URedHerring) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_markedGenerator=NETFIELD_REP_START, \
		NETFIELD_REP_END=_markedGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URedHerring(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URedHerring) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URedHerring); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URedHerring); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URedHerring(URedHerring&&); \
	NO_API URedHerring(const URedHerring&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URedHerring(URedHerring&&); \
	NO_API URedHerring(const URedHerring&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URedHerring); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URedHerring); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URedHerring)


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___generatorBeingRepaired() { return STRUCT_OFFSET(URedHerring, _generatorBeingRepaired); } \
	FORCEINLINE static uint32 __PPO___markedGenerator() { return STRUCT_OFFSET(URedHerring, _markedGenerator); } \
	FORCEINLINE static uint32 __PPO___secondsToActivatePerk() { return STRUCT_OFFSET(URedHerring, _secondsToActivatePerk); } \
	FORCEINLINE static uint32 __PPO___loudNoiseTriggeredNotifyTime() { return STRUCT_OFFSET(URedHerring, _loudNoiseTriggeredNotifyTime); } \
	FORCEINLINE static uint32 __PPO___cooldownLevels() { return STRUCT_OFFSET(URedHerring, _cooldownLevels); }


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_8_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class URedHerring>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_RedHerring_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
