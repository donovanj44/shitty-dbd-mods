// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_BlockableComponent_generated_h
#error "BlockableComponent.generated.h already included, missing '#pragma once' in BlockableComponent.h"
#endif
#define DEADBYDAYLIGHT_BlockableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_AddBlock); \
	DECLARE_FUNCTION(execAuthority_AddTimedBlock); \
	DECLARE_FUNCTION(execAuthority_RemoveBlock); \
	DECLARE_FUNCTION(execOnRep_ReplicatedDatum);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_AddBlock); \
	DECLARE_FUNCTION(execAuthority_AddTimedBlock); \
	DECLARE_FUNCTION(execAuthority_RemoveBlock); \
	DECLARE_FUNCTION(execOnRep_ReplicatedDatum);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlockableComponent(); \
	friend struct Z_Construct_UClass_UBlockableComponent_Statics; \
public: \
	DECLARE_CLASS(UBlockableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlockableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicatedDatum=NETFIELD_REP_START, \
		NETFIELD_REP_END=_replicatedDatum	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBlockableComponent(); \
	friend struct Z_Construct_UClass_UBlockableComponent_Statics; \
public: \
	DECLARE_CLASS(UBlockableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlockableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicatedDatum=NETFIELD_REP_START, \
		NETFIELD_REP_END=_replicatedDatum	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlockableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlockableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlockableComponent(UBlockableComponent&&); \
	NO_API UBlockableComponent(const UBlockableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlockableComponent(UBlockableComponent&&); \
	NO_API UBlockableComponent(const UBlockableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlockableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___replicatedDatum() { return STRUCT_OFFSET(UBlockableComponent, _replicatedDatum); } \
	FORCEINLINE static uint32 __PPO___blockElements() { return STRUCT_OFFSET(UBlockableComponent, _blockElements); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBlockableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BlockableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
