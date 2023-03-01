// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableComponent;
class AConjoinedTwin;
#ifdef THETWINS_K22Power_generated_h
#error "K22Power.generated.h already included, missing '#pragma once' in K22Power.h"
#endif
#define THETWINS_K22Power_generated_h

#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnDestroyTwinChargePercentChanged); \
	DECLARE_FUNCTION(execAuthority_OnPossessTwinChargePercentChanged); \
	DECLARE_FUNCTION(execGetConjoinedTwin); \
	DECLARE_FUNCTION(execOnFirstAttachmentToSister); \
	DECLARE_FUNCTION(execOnPowerChargeEmpty); \
	DECLARE_FUNCTION(execOnRep_ConjoinedTwin);


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnDestroyTwinChargePercentChanged); \
	DECLARE_FUNCTION(execAuthority_OnPossessTwinChargePercentChanged); \
	DECLARE_FUNCTION(execGetConjoinedTwin); \
	DECLARE_FUNCTION(execOnFirstAttachmentToSister); \
	DECLARE_FUNCTION(execOnPowerChargeEmpty); \
	DECLARE_FUNCTION(execOnRep_ConjoinedTwin);


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK22Power(); \
	friend struct Z_Construct_UClass_AK22Power_Statics; \
public: \
	DECLARE_CLASS(AK22Power, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(AK22Power) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_conjoinedTwin=NETFIELD_REP_START, \
		NETFIELD_REP_END=_conjoinedTwin	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAK22Power(); \
	friend struct Z_Construct_UClass_AK22Power_Statics; \
public: \
	DECLARE_CLASS(AK22Power, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(AK22Power) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_conjoinedTwin=NETFIELD_REP_START, \
		NETFIELD_REP_END=_conjoinedTwin	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK22Power(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK22Power) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK22Power); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK22Power); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK22Power(AK22Power&&); \
	NO_API AK22Power(const AK22Power&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK22Power(AK22Power&&); \
	NO_API AK22Power(const AK22Power&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK22Power); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK22Power); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK22Power)


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___releaseConjoinedTwinChargeable() { return STRUCT_OFFSET(AK22Power, _releaseConjoinedTwinChargeable); } \
	FORCEINLINE static uint32 __PPO___possessConjoinedTwinChargeable() { return STRUCT_OFFSET(AK22Power, _possessConjoinedTwinChargeable); } \
	FORCEINLINE static uint32 __PPO___conjoinedTwin() { return STRUCT_OFFSET(AK22Power, _conjoinedTwin); } \
	FORCEINLINE static uint32 __PPO___conjoinedTwinParadise() { return STRUCT_OFFSET(AK22Power, _conjoinedTwinParadise); } \
	FORCEINLINE static uint32 __PPO___powerCharge() { return STRUCT_OFFSET(AK22Power, _powerCharge); } \
	FORCEINLINE static uint32 __PPO___powerChargePresentationItemProgress() { return STRUCT_OFFSET(AK22Power, _powerChargePresentationItemProgress); } \
	FORCEINLINE static uint32 __PPO___powerMaxCharge() { return STRUCT_OFFSET(AK22Power, _powerMaxCharge); } \
	FORCEINLINE static uint32 __PPO___conjoinedTwinClass() { return STRUCT_OFFSET(AK22Power, _conjoinedTwinClass); } \
	FORCEINLINE static uint32 __PPO___powerRechargeRate() { return STRUCT_OFFSET(AK22Power, _powerRechargeRate); } \
	FORCEINLINE static uint32 __PPO___timeBeforeAutoDestroy() { return STRUCT_OFFSET(AK22Power, _timeBeforeAutoDestroy); } \
	FORCEINLINE static uint32 __PPO___timeBeforeRecallAvailable() { return STRUCT_OFFSET(AK22Power, _timeBeforeRecallAvailable); }


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_13_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_K22Power_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class AK22Power>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_K22Power_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
