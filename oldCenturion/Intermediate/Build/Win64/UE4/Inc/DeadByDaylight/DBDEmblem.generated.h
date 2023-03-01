// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProgressionPoints;
#ifdef DEADBYDAYLIGHT_DBDEmblem_generated_h
#error "DBDEmblem.generated.h already included, missing '#pragma once' in DBDEmblem.h"
#endif
#define DEADBYDAYLIGHT_DBDEmblem_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_RPC_WRAPPERS \
	virtual void Client_FinalizeReplication_Implementation(const float points, TArray<FProgressionPoints> const& progressionPoints); \
 \
	DECLARE_FUNCTION(execClient_FinalizeReplication);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_FinalizeReplication_Implementation(const float points, TArray<FProgressionPoints> const& progressionPoints); \
 \
	DECLARE_FUNCTION(execClient_FinalizeReplication);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_EVENT_PARMS \
	struct DBDEmblem_eventClient_FinalizeReplication_Parms \
	{ \
		float points; \
		TArray<FProgressionPoints> progressionPoints; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDEmblem(); \
	friend struct Z_Construct_UClass_UDBDEmblem_Statics; \
public: \
	DECLARE_CLASS(UDBDEmblem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDEmblem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_points=NETFIELD_REP_START, \
		_progressionPoints, \
		NETFIELD_REP_END=_progressionPoints	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUDBDEmblem(); \
	friend struct Z_Construct_UClass_UDBDEmblem_Statics; \
public: \
	DECLARE_CLASS(UDBDEmblem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDEmblem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_points=NETFIELD_REP_START, \
		_progressionPoints, \
		NETFIELD_REP_END=_progressionPoints	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDEmblem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDEmblem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDEmblem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDEmblem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDEmblem(UDBDEmblem&&); \
	NO_API UDBDEmblem(const UDBDEmblem&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDEmblem(UDBDEmblem&&); \
	NO_API UDBDEmblem(const UDBDEmblem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDEmblem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDEmblem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDEmblem)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___points() { return STRUCT_OFFSET(UDBDEmblem, _points); } \
	FORCEINLINE static uint32 __PPO___progressionPoints() { return STRUCT_OFFSET(UDBDEmblem, _progressionPoints); } \
	FORCEINLINE static uint32 __PPO___definition() { return STRUCT_OFFSET(UDBDEmblem, _definition); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDEmblem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDEmblem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
