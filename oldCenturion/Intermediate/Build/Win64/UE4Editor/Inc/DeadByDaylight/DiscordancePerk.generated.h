// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef DEADBYDAYLIGHT_DiscordancePerk_generated_h
#error "DiscordancePerk.generated.h already included, missing '#pragma once' in DiscordancePerk.h"
#endif
#define DEADBYDAYLIGHT_DiscordancePerk_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_RPC_WRAPPERS \
	virtual void Multicast_AddGeneratorAura_Implementation(AGenerator* generator); \
	virtual void Multicast_AddLingeringGeneratorAura_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execMulticast_AddGeneratorAura); \
	DECLARE_FUNCTION(execMulticast_AddLingeringGeneratorAura);


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddGeneratorAura_Implementation(AGenerator* generator); \
	virtual void Multicast_AddLingeringGeneratorAura_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execMulticast_AddGeneratorAura); \
	DECLARE_FUNCTION(execMulticast_AddLingeringGeneratorAura);


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_EVENT_PARMS \
	struct DiscordancePerk_eventMulticast_AddGeneratorAura_Parms \
	{ \
		AGenerator* generator; \
	}; \
	struct DiscordancePerk_eventMulticast_AddLingeringGeneratorAura_Parms \
	{ \
		AGenerator* generator; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordancePerk(); \
	friend struct Z_Construct_UClass_UDiscordancePerk_Statics; \
public: \
	DECLARE_CLASS(UDiscordancePerk, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDiscordancePerk) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkConsideredActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPerkConsideredActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordancePerk(); \
	friend struct Z_Construct_UClass_UDiscordancePerk_Statics; \
public: \
	DECLARE_CLASS(UDiscordancePerk, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDiscordancePerk) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkConsideredActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPerkConsideredActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordancePerk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordancePerk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordancePerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordancePerk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordancePerk(UDiscordancePerk&&); \
	NO_API UDiscordancePerk(const UDiscordancePerk&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordancePerk(UDiscordancePerk&&); \
	NO_API UDiscordancePerk(const UDiscordancePerk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordancePerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordancePerk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordancePerk)


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___generatorQueryHandlePairs() { return STRUCT_OFFSET(UDiscordancePerk, _generatorQueryHandlePairs); } \
	FORCEINLINE static uint32 __PPO___effectRange() { return STRUCT_OFFSET(UDiscordancePerk, _effectRange); } \
	FORCEINLINE static uint32 __PPO___auraLingerDuration() { return STRUCT_OFFSET(UDiscordancePerk, _auraLingerDuration); } \
	FORCEINLINE static uint32 __PPO___numSurvivorsRepairingToReveal() { return STRUCT_OFFSET(UDiscordancePerk, _numSurvivorsRepairingToReveal); } \
	FORCEINLINE static uint32 __PPO___isPerkConsideredActive() { return STRUCT_OFFSET(UDiscordancePerk, _isPerkConsideredActive); } \
	FORCEINLINE static uint32 __PPO___genratorToCheckNextFrame() { return STRUCT_OFFSET(UDiscordancePerk, _genratorToCheckNextFrame); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDiscordancePerk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DiscordancePerk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
