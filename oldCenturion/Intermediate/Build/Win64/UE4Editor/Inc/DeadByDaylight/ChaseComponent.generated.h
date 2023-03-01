// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_ChaseComponent_generated_h
#error "ChaseComponent.generated.h already included, missing '#pragma once' in ChaseComponent.h"
#endif
#define DEADBYDAYLIGHT_ChaseComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_12_DELEGATE \
static inline void FChaseComponentOnAllChaseEnded_DelegateWrapper(const FMulticastScriptDelegate& ChaseComponentOnAllChaseEnded) \
{ \
	ChaseComponentOnAllChaseEnded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventChaseComponentOnIsInChaseChanged_Parms \
{ \
	bool isInChase; \
}; \
static inline void FChaseComponentOnIsInChaseChanged_DelegateWrapper(const FMulticastScriptDelegate& ChaseComponentOnIsInChaseChanged, bool isInChase) \
{ \
	_Script_DeadByDaylight_eventChaseComponentOnIsInChaseChanged_Parms Parms; \
	Parms.isInChase=isInChase ? true : false; \
	ChaseComponentOnIsInChaseChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventChaseComponentOnChaseEnded_Parms \
{ \
	ADBDPlayer* player; \
	float chaseTime; \
}; \
static inline void FChaseComponentOnChaseEnded_DelegateWrapper(const FMulticastScriptDelegate& ChaseComponentOnChaseEnded, ADBDPlayer* player, float chaseTime) \
{ \
	_Script_DeadByDaylight_eventChaseComponentOnChaseEnded_Parms Parms; \
	Parms.player=player; \
	Parms.chaseTime=chaseTime; \
	ChaseComponentOnChaseEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventChaseComponentOnChaseStarted_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FChaseComponentOnChaseStarted_DelegateWrapper(const FMulticastScriptDelegate& ChaseComponentOnChaseStarted, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventChaseComponentOnChaseStarted_Parms Parms; \
	Parms.player=player; \
	ChaseComponentOnChaseStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInChase); \
	DECLARE_FUNCTION(execOnRep_IsInChase);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInChase); \
	DECLARE_FUNCTION(execOnRep_IsInChase);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaseComponent(); \
	friend struct Z_Construct_UClass_UChaseComponent_Statics; \
public: \
	DECLARE_CLASS(UChaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChaseComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInChase=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInChase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUChaseComponent(); \
	friend struct Z_Construct_UClass_UChaseComponent_Statics; \
public: \
	DECLARE_CLASS(UChaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChaseComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInChase=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInChase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaseComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaseComponent(UChaseComponent&&); \
	NO_API UChaseComponent(const UChaseComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaseComponent(UChaseComponent&&); \
	NO_API UChaseComponent(const UChaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaseComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInChase() { return STRUCT_OFFSET(UChaseComponent, _isInChase); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UChaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ChaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
