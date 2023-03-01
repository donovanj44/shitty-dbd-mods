// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_Gearhead_generated_h
#error "Gearhead.generated.h already included, missing '#pragma once' in Gearhead.h"
#endif
#define THEGUNSLINGER_Gearhead_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_RevealedGenerators);


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_RevealedGenerators);


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGearhead(); \
	friend struct Z_Construct_UClass_UGearhead_Statics; \
public: \
	DECLARE_CLASS(UGearhead, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UGearhead) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_numAttacksBeforeActivation=NETFIELD_REP_START, \
		_revealedGenerators, \
		NETFIELD_REP_END=_revealedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGearhead(); \
	friend struct Z_Construct_UClass_UGearhead_Statics; \
public: \
	DECLARE_CLASS(UGearhead, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UGearhead) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_numAttacksBeforeActivation=NETFIELD_REP_START, \
		_revealedGenerators, \
		NETFIELD_REP_END=_revealedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGearhead(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGearhead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGearhead); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGearhead); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGearhead(UGearhead&&); \
	NO_API UGearhead(const UGearhead&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGearhead(UGearhead&&); \
	NO_API UGearhead(const UGearhead&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGearhead); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGearhead); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGearhead)


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___perkActivationDuration() { return STRUCT_OFFSET(UGearhead, _perkActivationDuration); } \
	FORCEINLINE static uint32 __PPO___greatSkillCheck() { return STRUCT_OFFSET(UGearhead, _greatSkillCheck); } \
	FORCEINLINE static uint32 __PPO___basicAttack() { return STRUCT_OFFSET(UGearhead, _basicAttack); } \
	FORCEINLINE static uint32 __PPO___minimumAuraRevealDuration() { return STRUCT_OFFSET(UGearhead, _minimumAuraRevealDuration); } \
	FORCEINLINE static uint32 __PPO___attacksNeededToActivate() { return STRUCT_OFFSET(UGearhead, _attacksNeededToActivate); } \
	FORCEINLINE static uint32 __PPO___numAttacksBeforeActivation() { return STRUCT_OFFSET(UGearhead, _numAttacksBeforeActivation); } \
	FORCEINLINE static uint32 __PPO___timersBeforeUnreveal() { return STRUCT_OFFSET(UGearhead, _timersBeforeUnreveal); } \
	FORCEINLINE static uint32 __PPO___markedGenerators() { return STRUCT_OFFSET(UGearhead, _markedGenerators); } \
	FORCEINLINE static uint32 __PPO___revealedGenerators() { return STRUCT_OFFSET(UGearhead, _revealedGenerators); } \
	FORCEINLINE static uint32 __PPO___local_revealedGenerators() { return STRUCT_OFFSET(UGearhead, _local_revealedGenerators); }


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_9_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UGearhead>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_Gearhead_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
