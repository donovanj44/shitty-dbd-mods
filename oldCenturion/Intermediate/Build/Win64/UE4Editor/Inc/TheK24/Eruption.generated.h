// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
class ADBDPlayer;
#ifdef THEK24_Eruption_generated_h
#error "Eruption.generated.h already included, missing '#pragma once' in Eruption.h"
#endif
#define THEK24_Eruption_generated_h

#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_RPC_WRAPPERS \
	virtual void Multicast_HighlightGenerator_Implementation(AGenerator* generator); \
	virtual void Multicast_TriggerPerk_Implementation(TArray<AGenerator*> const& explodingGenerators); \
 \
	DECLARE_FUNCTION(execGetScreamRevealLocationDuration); \
	DECLARE_FUNCTION(execMulticast_HighlightGenerator); \
	DECLARE_FUNCTION(execMulticast_TriggerPerk); \
	DECLARE_FUNCTION(execOnRep_IsPerkEnabled);


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_HighlightGenerator_Implementation(AGenerator* generator); \
	virtual void Multicast_TriggerPerk_Implementation(TArray<AGenerator*> const& explodingGenerators); \
 \
	DECLARE_FUNCTION(execGetScreamRevealLocationDuration); \
	DECLARE_FUNCTION(execMulticast_HighlightGenerator); \
	DECLARE_FUNCTION(execMulticast_TriggerPerk); \
	DECLARE_FUNCTION(execOnRep_IsPerkEnabled);


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_EVENT_PARMS \
	struct Eruption_eventCosmetic_OnGeneratorHighlightEnd_Parms \
	{ \
		AGenerator* highlightedGenerator; \
	}; \
	struct Eruption_eventCosmetic_OnGeneratorHighlightStart_Parms \
	{ \
		AGenerator* highlightedGenerator; \
	}; \
	struct Eruption_eventMakeSurvivorScreamCosmetic_Parms \
	{ \
		const ADBDPlayer* screamingSurvivor; \
	}; \
	struct Eruption_eventMulticast_HighlightGenerator_Parms \
	{ \
		AGenerator* generator; \
	}; \
	struct Eruption_eventMulticast_TriggerPerk_Parms \
	{ \
		TArray<AGenerator*> explodingGenerators; \
	};


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEruption(); \
	friend struct Z_Construct_UClass_UEruption_Statics; \
public: \
	DECLARE_CLASS(UEruption, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UEruption) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPerkEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEruption(); \
	friend struct Z_Construct_UClass_UEruption_Statics; \
public: \
	DECLARE_CLASS(UEruption, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UEruption) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPerkEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEruption(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEruption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEruption); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEruption); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEruption(UEruption&&); \
	NO_API UEruption(const UEruption&); \
public:


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEruption(UEruption&&); \
	NO_API UEruption(const UEruption&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEruption); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEruption); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEruption)


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___server_highlightedGenerators() { return STRUCT_OFFSET(UEruption, _server_highlightedGenerators); } \
	FORCEINLINE static uint32 __PPO___isPerkEnabled() { return STRUCT_OFFSET(UEruption, _isPerkEnabled); } \
	FORCEINLINE static uint32 __PPO___generatorRegressPercentage() { return STRUCT_OFFSET(UEruption, _generatorRegressPercentage); } \
	FORCEINLINE static uint32 __PPO___survivorImposedStatusEffectDuration() { return STRUCT_OFFSET(UEruption, _survivorImposedStatusEffectDuration); } \
	FORCEINLINE static uint32 __PPO___perkCooldownDuration() { return STRUCT_OFFSET(UEruption, _perkCooldownDuration); } \
	FORCEINLINE static uint32 __PPO___screamRevealLocationDuration() { return STRUCT_OFFSET(UEruption, _screamRevealLocationDuration); }


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_9_PROLOG \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_INCLASS \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_Eruption_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_Eruption_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UEruption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_Eruption_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
