// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlindingEffectorInterface;
enum class EBlindType : uint8;
class AActor;
class UChargeableComponent;
#ifdef DEADBYDAYLIGHT_BlindableBaseComponent_generated_h
#error "BlindableBaseComponent.generated.h already included, missing '#pragma once' in BlindableBaseComponent.h"
#endif
#define DEADBYDAYLIGHT_BlindableBaseComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_AddBlindingEffector); \
	DECLARE_FUNCTION(execAuthority_Blinded); \
	DECLARE_FUNCTION(execAuthority_RemoveBlindingEffector); \
	DECLARE_FUNCTION(execIsBlinded); \
	DECLARE_FUNCTION(execOnChargeableCompletionPercentChanged); \
	DECLARE_FUNCTION(execOnRep_IsBlinded); \
	DECLARE_FUNCTION(execSetChargeable);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_AddBlindingEffector); \
	DECLARE_FUNCTION(execAuthority_Blinded); \
	DECLARE_FUNCTION(execAuthority_RemoveBlindingEffector); \
	DECLARE_FUNCTION(execIsBlinded); \
	DECLARE_FUNCTION(execOnChargeableCompletionPercentChanged); \
	DECLARE_FUNCTION(execOnRep_IsBlinded); \
	DECLARE_FUNCTION(execSetChargeable);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlindableBaseComponent(); \
	friend struct Z_Construct_UClass_UBlindableBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UBlindableBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlindableBaseComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBlinded=NETFIELD_REP_START, \
		_isBeingBlinded, \
		NETFIELD_REP_END=_isBeingBlinded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBlindableBaseComponent(); \
	friend struct Z_Construct_UClass_UBlindableBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UBlindableBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlindableBaseComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBlinded=NETFIELD_REP_START, \
		_isBeingBlinded, \
		NETFIELD_REP_END=_isBeingBlinded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlindableBaseComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlindableBaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlindableBaseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlindableBaseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlindableBaseComponent(UBlindableBaseComponent&&); \
	NO_API UBlindableBaseComponent(const UBlindableBaseComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlindableBaseComponent(UBlindableBaseComponent&&); \
	NO_API UBlindableBaseComponent(const UBlindableBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlindableBaseComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlindableBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlindableBaseComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isBlinded() { return STRUCT_OFFSET(UBlindableBaseComponent, _isBlinded); } \
	FORCEINLINE static uint32 __PPO___isBeingBlinded() { return STRUCT_OFFSET(UBlindableBaseComponent, _isBeingBlinded); } \
	FORCEINLINE static uint32 __PPO___chargeableComponent() { return STRUCT_OFFSET(UBlindableBaseComponent, _chargeableComponent); } \
	FORCEINLINE static uint32 __PPO___blindingEffectors() { return STRUCT_OFFSET(UBlindableBaseComponent, _blindingEffectors); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBlindableBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BlindableBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
