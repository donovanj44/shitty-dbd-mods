// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_FranklinsDemiseConsumedByEntityComponent_generated_h
#error "FranklinsDemiseConsumedByEntityComponent.generated.h already included, missing '#pragma once' in FranklinsDemiseConsumedByEntityComponent.h"
#endif
#define DEADBYDAYLIGHT_FranklinsDemiseConsumedByEntityComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_StartConsume); \
	DECLARE_FUNCTION(execOnRep_ConsumeTimer);


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_StartConsume); \
	DECLARE_FUNCTION(execOnRep_ConsumeTimer);


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFranklinsDemiseConsumedByEntityComponent(); \
	friend struct Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics; \
public: \
	DECLARE_CLASS(UFranklinsDemiseConsumedByEntityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFranklinsDemiseConsumedByEntityComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_consumeTimer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_consumeTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFranklinsDemiseConsumedByEntityComponent(); \
	friend struct Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics; \
public: \
	DECLARE_CLASS(UFranklinsDemiseConsumedByEntityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFranklinsDemiseConsumedByEntityComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_consumeTimer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_consumeTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFranklinsDemiseConsumedByEntityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFranklinsDemiseConsumedByEntityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFranklinsDemiseConsumedByEntityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFranklinsDemiseConsumedByEntityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFranklinsDemiseConsumedByEntityComponent(UFranklinsDemiseConsumedByEntityComponent&&); \
	NO_API UFranklinsDemiseConsumedByEntityComponent(const UFranklinsDemiseConsumedByEntityComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFranklinsDemiseConsumedByEntityComponent(UFranklinsDemiseConsumedByEntityComponent&&); \
	NO_API UFranklinsDemiseConsumedByEntityComponent(const UFranklinsDemiseConsumedByEntityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFranklinsDemiseConsumedByEntityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFranklinsDemiseConsumedByEntityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFranklinsDemiseConsumedByEntityComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___consumeTimer() { return STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _consumeTimer); } \
	FORCEINLINE static uint32 __PPO___camperStatus() { return STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _camperStatus); } \
	FORCEINLINE static uint32 __PPO___previousOwner() { return STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _previousOwner); } \
	FORCEINLINE static uint32 __PPO___originatingPerkOwner() { return STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _originatingPerkOwner); } \
	FORCEINLINE static uint32 __PPO___itemChargerComponent() { return STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _itemChargerComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UFranklinsDemiseConsumedByEntityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FranklinsDemiseConsumedByEntityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
