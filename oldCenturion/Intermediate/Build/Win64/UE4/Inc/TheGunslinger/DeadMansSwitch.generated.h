// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_DeadMansSwitch_generated_h
#error "DeadMansSwitch.generated.h already included, missing '#pragma once' in DeadMansSwitch.h"
#endif
#define THEGUNSLINGER_DeadMansSwitch_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_BlockedGenerators);


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_BlockedGenerators);


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadMansSwitch(); \
	friend struct Z_Construct_UClass_UDeadMansSwitch_Statics; \
public: \
	DECLARE_CLASS(UDeadMansSwitch, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UDeadMansSwitch) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_blockedGenerators=NETFIELD_REP_START, \
		NETFIELD_REP_END=_blockedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUDeadMansSwitch(); \
	friend struct Z_Construct_UClass_UDeadMansSwitch_Statics; \
public: \
	DECLARE_CLASS(UDeadMansSwitch, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UDeadMansSwitch) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_blockedGenerators=NETFIELD_REP_START, \
		NETFIELD_REP_END=_blockedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeadMansSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadMansSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadMansSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadMansSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeadMansSwitch(UDeadMansSwitch&&); \
	NO_API UDeadMansSwitch(const UDeadMansSwitch&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeadMansSwitch(UDeadMansSwitch&&); \
	NO_API UDeadMansSwitch(const UDeadMansSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadMansSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadMansSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeadMansSwitch)


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___activationDurationByLevels() { return STRUCT_OFFSET(UDeadMansSwitch, _activationDurationByLevels); } \
	FORCEINLINE static uint32 __PPO___anySurvivorLetGo() { return STRUCT_OFFSET(UDeadMansSwitch, _anySurvivorLetGo); } \
	FORCEINLINE static uint32 __PPO___blockedGenerators() { return STRUCT_OFFSET(UDeadMansSwitch, _blockedGenerators); }


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_8_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UDeadMansSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_DeadMansSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
