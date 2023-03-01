// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class ESkillCheckCustomType : uint8;
#ifdef DBDCOMPETENCE_DecisiveStrike_generated_h
#error "DecisiveStrike.generated.h already included, missing '#pragma once' in DecisiveStrike.h"
#endif
#define DBDCOMPETENCE_DecisiveStrike_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOwnerPickedUp); \
	DECLARE_FUNCTION(execOnPickUpEnded); \
	DECLARE_FUNCTION(execOnRep_HasBeenAttempted); \
	DECLARE_FUNCTION(execOnSkillCheck); \
	DECLARE_FUNCTION(execOnUnhookedTimerEnded);


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOwnerPickedUp); \
	DECLARE_FUNCTION(execOnPickUpEnded); \
	DECLARE_FUNCTION(execOnRep_HasBeenAttempted); \
	DECLARE_FUNCTION(execOnSkillCheck); \
	DECLARE_FUNCTION(execOnUnhookedTimerEnded);


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecisiveStrike(); \
	friend struct Z_Construct_UClass_UDecisiveStrike_Statics; \
public: \
	DECLARE_CLASS(UDecisiveStrike, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDecisiveStrike) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasBeenAttempted=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hasBeenAttempted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDecisiveStrike(); \
	friend struct Z_Construct_UClass_UDecisiveStrike_Statics; \
public: \
	DECLARE_CLASS(UDecisiveStrike, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDecisiveStrike) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasBeenAttempted=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hasBeenAttempted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecisiveStrike(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecisiveStrike) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecisiveStrike); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecisiveStrike); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecisiveStrike(UDecisiveStrike&&); \
	NO_API UDecisiveStrike(const UDecisiveStrike&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecisiveStrike(UDecisiveStrike&&); \
	NO_API UDecisiveStrike(const UDecisiveStrike&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecisiveStrike); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecisiveStrike); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDecisiveStrike)


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___timeAfterUnhook() { return STRUCT_OFFSET(UDecisiveStrike, _timeAfterUnhook); } \
	FORCEINLINE static uint32 __PPO___skillCheckDelay() { return STRUCT_OFFSET(UDecisiveStrike, _skillCheckDelay); } \
	FORCEINLINE static uint32 __PPO___skillCheckBuffer() { return STRUCT_OFFSET(UDecisiveStrike, _skillCheckBuffer); } \
	FORCEINLINE static uint32 __PPO___killerHearsSkillCheckCue() { return STRUCT_OFFSET(UDecisiveStrike, _killerHearsSkillCheckCue); } \
	FORCEINLINE static uint32 __PPO___deactivationEvents() { return STRUCT_OFFSET(UDecisiveStrike, _deactivationEvents); } \
	FORCEINLINE static uint32 __PPO___hasBeenAttempted() { return STRUCT_OFFSET(UDecisiveStrike, _hasBeenAttempted); }


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_10_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UDecisiveStrike>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_DecisiveStrike_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
