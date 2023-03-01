// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EComparisonOperation : uint8;
#ifdef DBDCOMPETENCE_IsOriginatingPerkBoundToTotems_generated_h
#error "IsOriginatingPerkBoundToTotems.generated.h already included, missing '#pragma once' in IsOriginatingPerkBoundToTotems.h"
#endif
#define DBDCOMPETENCE_IsOriginatingPerkBoundToTotems_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execOnRep_TotemCount);


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execOnRep_TotemCount);


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsOriginatingPerkBoundToTotems(); \
	friend struct Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics; \
public: \
	DECLARE_CLASS(UIsOriginatingPerkBoundToTotems, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UIsOriginatingPerkBoundToTotems) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_comparisonOperator=NETFIELD_REP_START, \
		_totemCount, \
		NETFIELD_REP_END=_totemCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUIsOriginatingPerkBoundToTotems(); \
	friend struct Z_Construct_UClass_UIsOriginatingPerkBoundToTotems_Statics; \
public: \
	DECLARE_CLASS(UIsOriginatingPerkBoundToTotems, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UIsOriginatingPerkBoundToTotems) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_comparisonOperator=NETFIELD_REP_START, \
		_totemCount, \
		NETFIELD_REP_END=_totemCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsOriginatingPerkBoundToTotems(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsOriginatingPerkBoundToTotems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsOriginatingPerkBoundToTotems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsOriginatingPerkBoundToTotems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsOriginatingPerkBoundToTotems(UIsOriginatingPerkBoundToTotems&&); \
	NO_API UIsOriginatingPerkBoundToTotems(const UIsOriginatingPerkBoundToTotems&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsOriginatingPerkBoundToTotems(UIsOriginatingPerkBoundToTotems&&); \
	NO_API UIsOriginatingPerkBoundToTotems(const UIsOriginatingPerkBoundToTotems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsOriginatingPerkBoundToTotems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsOriginatingPerkBoundToTotems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsOriginatingPerkBoundToTotems)


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___comparisonOperator() { return STRUCT_OFFSET(UIsOriginatingPerkBoundToTotems, _comparisonOperator); } \
	FORCEINLINE static uint32 __PPO___totemCount() { return STRUCT_OFFSET(UIsOriginatingPerkBoundToTotems, _totemCount); }


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_7_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UIsOriginatingPerkBoundToTotems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_IsOriginatingPerkBoundToTotems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
