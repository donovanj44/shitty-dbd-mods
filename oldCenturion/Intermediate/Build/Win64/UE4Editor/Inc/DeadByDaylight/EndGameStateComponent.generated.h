// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EndGameStateComponent_generated_h
#error "EndGameStateComponent.generated.h already included, missing '#pragma once' in EndGameStateComponent.h"
#endif
#define DEADBYDAYLIGHT_EndGameStateComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_RPC_WRAPPERS \
	virtual bool Multicast_SetIsInEndGameSimulation_Validate(bool ); \
	virtual void Multicast_SetIsInEndGameSimulation_Implementation(bool endGameSimulation); \
 \
	DECLARE_FUNCTION(execGetElapsedTimePercent); \
	DECLARE_FUNCTION(execHasEndGameBegun); \
	DECLARE_FUNCTION(execIsEndGameOver); \
	DECLARE_FUNCTION(execIsTimerSlowedDown); \
	DECLARE_FUNCTION(execMulticast_SetIsInEndGameSimulation); \
	DECLARE_FUNCTION(execOnRep_IsEndGameOver); \
	DECLARE_FUNCTION(execOnRep_IsTimerPaused); \
	DECLARE_FUNCTION(execOnRep_TimeDilation); \
	DECLARE_FUNCTION(execOnRep_WorldTimeAtLastDilationModification);


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_SetIsInEndGameSimulation_Validate(bool ); \
	virtual void Multicast_SetIsInEndGameSimulation_Implementation(bool endGameSimulation); \
 \
	DECLARE_FUNCTION(execGetElapsedTimePercent); \
	DECLARE_FUNCTION(execHasEndGameBegun); \
	DECLARE_FUNCTION(execIsEndGameOver); \
	DECLARE_FUNCTION(execIsTimerSlowedDown); \
	DECLARE_FUNCTION(execMulticast_SetIsInEndGameSimulation); \
	DECLARE_FUNCTION(execOnRep_IsEndGameOver); \
	DECLARE_FUNCTION(execOnRep_IsTimerPaused); \
	DECLARE_FUNCTION(execOnRep_TimeDilation); \
	DECLARE_FUNCTION(execOnRep_WorldTimeAtLastDilationModification);


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_EVENT_PARMS \
	struct EndGameStateComponent_eventMulticast_SetIsInEndGameSimulation_Parms \
	{ \
		bool endGameSimulation; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameStateComponent(); \
	friend struct Z_Construct_UClass_UEndGameStateComponent_Statics; \
public: \
	DECLARE_CLASS(UEndGameStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UEndGameStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isEndGameOver=NETFIELD_REP_START, \
		_worldTimeAtLastModification, \
		_timeDilation, \
		_isTimerPaused, \
		_normalTotalTimeElapsedAtLastTimeModification, \
		_endGameScenarioTrigger, \
		NETFIELD_REP_END=_endGameScenarioTrigger	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUEndGameStateComponent(); \
	friend struct Z_Construct_UClass_UEndGameStateComponent_Statics; \
public: \
	DECLARE_CLASS(UEndGameStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UEndGameStateComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isEndGameOver=NETFIELD_REP_START, \
		_worldTimeAtLastModification, \
		_timeDilation, \
		_isTimerPaused, \
		_normalTotalTimeElapsedAtLastTimeModification, \
		_endGameScenarioTrigger, \
		NETFIELD_REP_END=_endGameScenarioTrigger	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameStateComponent(UEndGameStateComponent&&); \
	NO_API UEndGameStateComponent(const UEndGameStateComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameStateComponent(UEndGameStateComponent&&); \
	NO_API UEndGameStateComponent(const UEndGameStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEndGameStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isEndGameOver() { return STRUCT_OFFSET(UEndGameStateComponent, _isEndGameOver); } \
	FORCEINLINE static uint32 __PPO___worldTimeAtLastModification() { return STRUCT_OFFSET(UEndGameStateComponent, _worldTimeAtLastModification); } \
	FORCEINLINE static uint32 __PPO___timeDilation() { return STRUCT_OFFSET(UEndGameStateComponent, _timeDilation); } \
	FORCEINLINE static uint32 __PPO___isTimerPaused() { return STRUCT_OFFSET(UEndGameStateComponent, _isTimerPaused); } \
	FORCEINLINE static uint32 __PPO___normalTotalTimeElapsedAtLastTimeModification() { return STRUCT_OFFSET(UEndGameStateComponent, _normalTotalTimeElapsedAtLastTimeModification); } \
	FORCEINLINE static uint32 __PPO___endGameScenarioTrigger() { return STRUCT_OFFSET(UEndGameStateComponent, _endGameScenarioTrigger); }


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_7_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UEndGameStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EndGameStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
