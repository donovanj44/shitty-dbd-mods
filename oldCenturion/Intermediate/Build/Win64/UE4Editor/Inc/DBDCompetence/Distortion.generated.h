// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_Distortion_generated_h
#error "Distortion.generated.h already included, missing '#pragma once' in Distortion.h"
#endif
#define DBDCOMPETENCE_Distortion_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuraBlockCanBeActive); \
	DECLARE_FUNCTION(execOnRep_AuraBlockIsActive);


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuraBlockCanBeActive); \
	DECLARE_FUNCTION(execOnRep_AuraBlockIsActive);


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistortion(); \
	friend struct Z_Construct_UClass_UDistortion_Statics; \
public: \
	DECLARE_CLASS(UDistortion, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDistortion) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_auraBlockIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=_auraBlockIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUDistortion(); \
	friend struct Z_Construct_UClass_UDistortion_Statics; \
public: \
	DECLARE_CLASS(UDistortion, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDistortion) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_auraBlockIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=_auraBlockIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDistortion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistortion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistortion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistortion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDistortion(UDistortion&&); \
	NO_API UDistortion(const UDistortion&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDistortion(UDistortion&&); \
	NO_API UDistortion(const UDistortion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistortion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistortion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDistortion)


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___activationDurations() { return STRUCT_OFFSET(UDistortion, _activationDurations); } \
	FORCEINLINE static uint32 __PPO___auraBlockIsActive() { return STRUCT_OFFSET(UDistortion, _auraBlockIsActive); }


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_6_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Distortion_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UDistortion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_Distortion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
