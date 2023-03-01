// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_StateMachine_generated_h
#error "StateMachine.generated.h already included, missing '#pragma once' in StateMachine.h"
#endif
#define DEADBYDAYLIGHT_StateMachine_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_RPC_WRAPPERS \
	virtual bool Multicast_SetStateStack_Validate(TArray<uint16> const& ); \
	virtual void Multicast_SetStateStack_Implementation(TArray<uint16> const& netStateIDStack); \
	virtual bool Server_SetStateStack_Validate(TArray<uint16> const& ); \
	virtual void Server_SetStateStack_Implementation(TArray<uint16> const& netStateIDStack); \
 \
	DECLARE_FUNCTION(execMulticast_SetStateStack); \
	DECLARE_FUNCTION(execNetIDStackChanged); \
	DECLARE_FUNCTION(execServer_SetStateStack);


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_SetStateStack_Validate(TArray<uint16> const& ); \
	virtual void Multicast_SetStateStack_Implementation(TArray<uint16> const& netStateIDStack); \
	virtual bool Server_SetStateStack_Validate(TArray<uint16> const& ); \
	virtual void Server_SetStateStack_Implementation(TArray<uint16> const& netStateIDStack); \
 \
	DECLARE_FUNCTION(execMulticast_SetStateStack); \
	DECLARE_FUNCTION(execNetIDStackChanged); \
	DECLARE_FUNCTION(execServer_SetStateStack);


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_EVENT_PARMS \
	struct StateMachine_eventMulticast_SetStateStack_Parms \
	{ \
		TArray<uint16> netStateIDStack; \
	}; \
	struct StateMachine_eventServer_SetStateStack_Parms \
	{ \
		TArray<uint16> netStateIDStack; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend struct Z_Construct_UClass_UStateMachine_Statics; \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_netStateIDStackInitial=NETFIELD_REP_START, \
		NETFIELD_REP_END=_netStateIDStackInitial	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend struct Z_Construct_UClass_UStateMachine_Statics; \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_netStateIDStackInitial=NETFIELD_REP_START, \
		NETFIELD_REP_END=_netStateIDStackInitial	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateMachine)


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___enableJoinInProgress() { return STRUCT_OFFSET(UStateMachine, _enableJoinInProgress); } \
	FORCEINLINE static uint32 __PPO___netStateIDStackInitial() { return STRUCT_OFFSET(UStateMachine, _netStateIDStackInitial); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStateMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
