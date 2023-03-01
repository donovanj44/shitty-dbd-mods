// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef THEK25_K25P01_generated_h
#error "K25P01.generated.h already included, missing '#pragma once' in K25P01.h"
#endif
#define THEK25_K25P01_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnBlockTimerDone); \
	DECLARE_FUNCTION(execOnRep_GeneratorsBlocked);


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnBlockTimerDone); \
	DECLARE_FUNCTION(execOnRep_GeneratorsBlocked);


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25P01(); \
	friend struct Z_Construct_UClass_UK25P01_Statics; \
public: \
	DECLARE_CLASS(UK25P01, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25P01) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_generatorsBlocked=NETFIELD_REP_START, \
		NETFIELD_REP_END=_generatorsBlocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK25P01(); \
	friend struct Z_Construct_UClass_UK25P01_Statics; \
public: \
	DECLARE_CLASS(UK25P01, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25P01) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_generatorsBlocked=NETFIELD_REP_START, \
		NETFIELD_REP_END=_generatorsBlocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25P01(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25P01) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25P01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25P01); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25P01(UK25P01&&); \
	NO_API UK25P01(const UK25P01&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25P01(UK25P01&&); \
	NO_API UK25P01(const UK25P01&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25P01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25P01); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25P01)


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___generatorBlockDuration() { return STRUCT_OFFSET(UK25P01, _generatorBlockDuration); } \
	FORCEINLINE static uint32 __PPO___auraRevealDuration() { return STRUCT_OFFSET(UK25P01, _auraRevealDuration); } \
	FORCEINLINE static uint32 __PPO___allowPerkToBlockZeroProgressionGenerators() { return STRUCT_OFFSET(UK25P01, _allowPerkToBlockZeroProgressionGenerators); } \
	FORCEINLINE static uint32 __PPO___generatorAuraColorForKiller() { return STRUCT_OFFSET(UK25P01, _generatorAuraColorForKiller); } \
	FORCEINLINE static uint32 __PPO___generatorBlockingTimers() { return STRUCT_OFFSET(UK25P01, _generatorBlockingTimers); } \
	FORCEINLINE static uint32 __PPO___generatorsBlocked() { return STRUCT_OFFSET(UK25P01, _generatorsBlocked); } \
	FORCEINLINE static uint32 __PPO___local_generatorsBlocked() { return STRUCT_OFFSET(UK25P01, _local_generatorsBlocked); }


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_10_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25P01_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25P01_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25P01>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25P01_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
