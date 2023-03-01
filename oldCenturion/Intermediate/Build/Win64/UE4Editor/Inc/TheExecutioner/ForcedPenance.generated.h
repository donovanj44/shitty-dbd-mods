// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_ForcedPenance_generated_h
#error "ForcedPenance.generated.h already included, missing '#pragma once' in ForcedPenance.h"
#endif
#define THEEXECUTIONER_ForcedPenance_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForcedPenance(); \
	friend struct Z_Construct_UClass_UForcedPenance_Statics; \
public: \
	DECLARE_CLASS(UForcedPenance, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UForcedPenance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_camperObliviousEffects=NETFIELD_REP_START, \
		_camperBrokenEffects, \
		NETFIELD_REP_END=_camperBrokenEffects	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUForcedPenance(); \
	friend struct Z_Construct_UClass_UForcedPenance_Statics; \
public: \
	DECLARE_CLASS(UForcedPenance, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UForcedPenance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_camperObliviousEffects=NETFIELD_REP_START, \
		_camperBrokenEffects, \
		NETFIELD_REP_END=_camperBrokenEffects	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForcedPenance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForcedPenance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForcedPenance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForcedPenance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForcedPenance(UForcedPenance&&); \
	NO_API UForcedPenance(const UForcedPenance&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForcedPenance(UForcedPenance&&); \
	NO_API UForcedPenance(const UForcedPenance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForcedPenance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForcedPenance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UForcedPenance)


#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___perkActivationDuration() { return STRUCT_OFFSET(UForcedPenance, _perkActivationDuration); } \
	FORCEINLINE static uint32 __PPO___applyOblivious() { return STRUCT_OFFSET(UForcedPenance, _applyOblivious); } \
	FORCEINLINE static uint32 __PPO___applyBroken() { return STRUCT_OFFSET(UForcedPenance, _applyBroken); } \
	FORCEINLINE static uint32 __PPO___camperObliviousEffects() { return STRUCT_OFFSET(UForcedPenance, _camperObliviousEffects); } \
	FORCEINLINE static uint32 __PPO___camperBrokenEffects() { return STRUCT_OFFSET(UForcedPenance, _camperBrokenEffects); }


#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_8_PROLOG
#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UForcedPenance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_ForcedPenance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
