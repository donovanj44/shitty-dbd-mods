// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECamperImmobilizeState : uint8;
#ifdef DBDCOMPETENCE_InnerStrength_generated_h
#error "InnerStrength.generated.h already included, missing '#pragma once' in InnerStrength.h"
#endif
#define DBDCOMPETENCE_InnerStrength_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerImmobilizeStateChanged); \
	DECLARE_FUNCTION(execOnRep_PerkEnabled);


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerImmobilizeStateChanged); \
	DECLARE_FUNCTION(execOnRep_PerkEnabled);


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInnerStrength(); \
	friend struct Z_Construct_UClass_UInnerStrength_Statics; \
public: \
	DECLARE_CLASS(UInnerStrength, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UInnerStrength) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_perkEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=_perkEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUInnerStrength(); \
	friend struct Z_Construct_UClass_UInnerStrength_Statics; \
public: \
	DECLARE_CLASS(UInnerStrength, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UInnerStrength) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_perkEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=_perkEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInnerStrength(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInnerStrength) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInnerStrength); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInnerStrength); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInnerStrength(UInnerStrength&&); \
	NO_API UInnerStrength(const UInnerStrength&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInnerStrength(UInnerStrength&&); \
	NO_API UInnerStrength(const UInnerStrength&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInnerStrength); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInnerStrength); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInnerStrength)


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hideDuration() { return STRUCT_OFFSET(UInnerStrength, _hideDuration); } \
	FORCEINLINE static uint32 __PPO___perkEnabled() { return STRUCT_OFFSET(UInnerStrength, _perkEnabled); }


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_7_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UInnerStrength>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_InnerStrength_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
