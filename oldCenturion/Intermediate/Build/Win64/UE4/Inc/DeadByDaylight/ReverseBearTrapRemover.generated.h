// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AReverseBearTrap;
class UPrimitiveComponent;
class UMapActorComponent;
#ifdef DEADBYDAYLIGHT_ReverseBearTrapRemover_generated_h
#error "ReverseBearTrapRemover.generated.h already included, missing '#pragma once' in ReverseBearTrapRemover.h"
#endif
#define DEADBYDAYLIGHT_ReverseBearTrapRemover_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_RPC_WRAPPERS \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execAddKey); \
	DECLARE_FUNCTION(execAddSearchedKey); \
	DECLARE_FUNCTION(execGetAttachedRBT); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execGetMapActor); \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execHasSearchedForKey);


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execAddKey); \
	DECLARE_FUNCTION(execAddSearchedKey); \
	DECLARE_FUNCTION(execGetAttachedRBT); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execGetMapActor); \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execHasSearchedForKey);


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_EVENT_PARMS \
	struct ReverseBearTrapRemover_eventGetInteractorPrimitiveComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ReverseBearTrapRemover_eventGetInteractorPrimitiveComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReverseBearTrapRemover(); \
	friend struct Z_Construct_UClass_AReverseBearTrapRemover_Statics; \
public: \
	DECLARE_CLASS(AReverseBearTrapRemover, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AReverseBearTrapRemover) \
	virtual UObject* _getUObject() const override { return const_cast<AReverseBearTrapRemover*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_keys=NETFIELD_REP_START, \
		NETFIELD_REP_END=_keys	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAReverseBearTrapRemover(); \
	friend struct Z_Construct_UClass_AReverseBearTrapRemover_Statics; \
public: \
	DECLARE_CLASS(AReverseBearTrapRemover, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AReverseBearTrapRemover) \
	virtual UObject* _getUObject() const override { return const_cast<AReverseBearTrapRemover*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_keys=NETFIELD_REP_START, \
		NETFIELD_REP_END=_keys	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReverseBearTrapRemover(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReverseBearTrapRemover) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReverseBearTrapRemover); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReverseBearTrapRemover); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReverseBearTrapRemover(AReverseBearTrapRemover&&); \
	NO_API AReverseBearTrapRemover(const AReverseBearTrapRemover&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReverseBearTrapRemover(AReverseBearTrapRemover&&); \
	NO_API AReverseBearTrapRemover(const AReverseBearTrapRemover&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReverseBearTrapRemover); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReverseBearTrapRemover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReverseBearTrapRemover)


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___keys() { return STRUCT_OFFSET(AReverseBearTrapRemover, _keys); } \
	FORCEINLINE static uint32 __PPO___mapActor() { return STRUCT_OFFSET(AReverseBearTrapRemover, _mapActor); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AReverseBearTrapRemover>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrapRemover_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
