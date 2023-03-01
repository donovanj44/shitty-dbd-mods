// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATotem;
class AActor;
#ifdef DEADBYDAYLIGHT_TotemBoundPerk_generated_h
#error "TotemBoundPerk.generated.h already included, missing '#pragma once' in TotemBoundPerk.h"
#endif
#define DEADBYDAYLIGHT_TotemBoundPerk_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_BindToDullTotems); \
	DECLARE_FUNCTION(execAuthority_UnbindFromTotem); \
	DECLARE_FUNCTION(execGetBoundTotems); \
	DECLARE_FUNCTION(execGetDistanceToOwner); \
	DECLARE_FUNCTION(execGetTotems); \
	DECLARE_FUNCTION(execOnRep_BoundTotems);


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_BindToDullTotems); \
	DECLARE_FUNCTION(execAuthority_UnbindFromTotem); \
	DECLARE_FUNCTION(execGetBoundTotems); \
	DECLARE_FUNCTION(execGetDistanceToOwner); \
	DECLARE_FUNCTION(execGetTotems); \
	DECLARE_FUNCTION(execOnRep_BoundTotems);


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTotemBoundPerk(); \
	friend struct Z_Construct_UClass_UTotemBoundPerk_Statics; \
public: \
	DECLARE_CLASS(UTotemBoundPerk, UPerk, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTotemBoundPerk) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_boundTotems=NETFIELD_REP_START, \
		NETFIELD_REP_END=_boundTotems	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTotemBoundPerk(); \
	friend struct Z_Construct_UClass_UTotemBoundPerk_Statics; \
public: \
	DECLARE_CLASS(UTotemBoundPerk, UPerk, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTotemBoundPerk) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_boundTotems=NETFIELD_REP_START, \
		NETFIELD_REP_END=_boundTotems	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTotemBoundPerk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTotemBoundPerk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTotemBoundPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTotemBoundPerk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTotemBoundPerk(UTotemBoundPerk&&); \
	NO_API UTotemBoundPerk(const UTotemBoundPerk&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTotemBoundPerk(UTotemBoundPerk&&); \
	NO_API UTotemBoundPerk(const UTotemBoundPerk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTotemBoundPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTotemBoundPerk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTotemBoundPerk)


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TotemBoundState() { return STRUCT_OFFSET(UTotemBoundPerk, TotemBoundState); } \
	FORCEINLINE static uint32 __PPO___doNotBindToTotemOnInit() { return STRUCT_OFFSET(UTotemBoundPerk, _doNotBindToTotemOnInit); } \
	FORCEINLINE static uint32 __PPO___boundTotems() { return STRUCT_OFFSET(UTotemBoundPerk, _boundTotems); } \
	FORCEINLINE static uint32 __PPO___local_boundTotems() { return STRUCT_OFFSET(UTotemBoundPerk, _local_boundTotems); } \
	FORCEINLINE static uint32 __PPO___authorityPrevTotemActors() { return STRUCT_OFFSET(UTotemBoundPerk, _authorityPrevTotemActors); } \
	FORCEINLINE static uint32 __PPO___numTotemsToBind() { return STRUCT_OFFSET(UTotemBoundPerk, _numTotemsToBind); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UTotemBoundPerk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TotemBoundPerk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
