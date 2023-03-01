// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THETRAPPER_SelfUntrap_generated_h
#error "SelfUntrap.generated.h already included, missing '#pragma once' in SelfUntrap.h"
#endif
#define THETRAPPER_SelfUntrap_generated_h

#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelfUntrap(); \
	friend struct Z_Construct_UClass_USelfUntrap_Statics; \
public: \
	DECLARE_CLASS(USelfUntrap, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(USelfUntrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_canEscape=NETFIELD_REP_START, \
		NETFIELD_REP_END=_canEscape	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSelfUntrap(); \
	friend struct Z_Construct_UClass_USelfUntrap_Statics; \
public: \
	DECLARE_CLASS(USelfUntrap, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(USelfUntrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_canEscape=NETFIELD_REP_START, \
		NETFIELD_REP_END=_canEscape	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelfUntrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelfUntrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelfUntrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelfUntrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelfUntrap(USelfUntrap&&); \
	NO_API USelfUntrap(const USelfUntrap&); \
public:


#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelfUntrap(USelfUntrap&&); \
	NO_API USelfUntrap(const USelfUntrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelfUntrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelfUntrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USelfUntrap)


#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___trapImmunityDuration() { return STRUCT_OFFSET(USelfUntrap, _trapImmunityDuration); } \
	FORCEINLINE static uint32 __PPO___untrapMontage() { return STRUCT_OFFSET(USelfUntrap, _untrapMontage); } \
	FORCEINLINE static uint32 __PPO___successfulEscapeHealthy() { return STRUCT_OFFSET(USelfUntrap, _successfulEscapeHealthy); } \
	FORCEINLINE static uint32 __PPO___successfulEscapeInjured() { return STRUCT_OFFSET(USelfUntrap, _successfulEscapeInjured); } \
	FORCEINLINE static uint32 __PPO___successfulEscapeCrawling() { return STRUCT_OFFSET(USelfUntrap, _successfulEscapeCrawling); } \
	FORCEINLINE static uint32 __PPO___failedEscape() { return STRUCT_OFFSET(USelfUntrap, _failedEscape); } \
	FORCEINLINE static uint32 __PPO___canEscape() { return STRUCT_OFFSET(USelfUntrap, _canEscape); }


#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_10_PROLOG
#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_INCLASS \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAPPER_API UClass* StaticClass<class USelfUntrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTrapper_Public_SelfUntrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
