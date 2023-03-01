// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THEK24_Flashbang_generated_h
#error "Flashbang.generated.h already included, missing '#pragma once' in Flashbang.h"
#endif
#define THEK24_Flashbang_generated_h

#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_RPC_WRAPPERS \
	virtual void Client_OnGeneratorRepairProgressionTargetAchieved_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnRepairProgressApplied); \
	DECLARE_FUNCTION(execClient_OnGeneratorRepairProgressionTargetAchieved); \
	DECLARE_FUNCTION(execOnRep_GeneratorsRepairProgress);


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnGeneratorRepairProgressionTargetAchieved_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnRepairProgressApplied); \
	DECLARE_FUNCTION(execClient_OnGeneratorRepairProgressionTargetAchieved); \
	DECLARE_FUNCTION(execOnRep_GeneratorsRepairProgress);


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_EVENT_PARMS
#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlashbang(); \
	friend struct Z_Construct_UClass_UFlashbang_Statics; \
public: \
	DECLARE_CLASS(UFlashbang, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UFlashbang) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_generatorsRepairTargetProgression=NETFIELD_REP_START, \
		NETFIELD_REP_END=_generatorsRepairTargetProgression	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFlashbang(); \
	friend struct Z_Construct_UClass_UFlashbang_Statics; \
public: \
	DECLARE_CLASS(UFlashbang, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UFlashbang) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_generatorsRepairTargetProgression=NETFIELD_REP_START, \
		NETFIELD_REP_END=_generatorsRepairTargetProgression	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlashbang(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlashbang) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashbang); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashbang); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashbang(UFlashbang&&); \
	NO_API UFlashbang(const UFlashbang&); \
public:


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashbang(UFlashbang&&); \
	NO_API UFlashbang(const UFlashbang&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashbang); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashbang); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlashbang)


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___generatorBeingRepaired() { return STRUCT_OFFSET(UFlashbang, _generatorBeingRepaired); } \
	FORCEINLINE static uint32 __PPO___generatorsRepairTargetProgression() { return STRUCT_OFFSET(UFlashbang, _generatorsRepairTargetProgression); } \
	FORCEINLINE static uint32 __PPO___generatorRepairPercentToCraftFlashbang() { return STRUCT_OFFSET(UFlashbang, _generatorRepairPercentToCraftFlashbang); }


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_9_PROLOG \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_INCLASS \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_Flashbang_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UFlashbang>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_Flashbang_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
