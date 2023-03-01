// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_K25UncontrolledProjectile_generated_h
#error "K25UncontrolledProjectile.generated.h already included, missing '#pragma once' in K25UncontrolledProjectile.h"
#endif
#define THEK25_K25UncontrolledProjectile_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_10_DELEGATE \
struct _Script_TheK25_eventK25UncontrolledProjectileOnAcquiredChanged_Parms \
{ \
	bool acquired; \
}; \
static inline void FK25UncontrolledProjectileOnAcquiredChanged_DelegateWrapper(const FMulticastScriptDelegate& K25UncontrolledProjectileOnAcquiredChanged, bool acquired) \
{ \
	_Script_TheK25_eventK25UncontrolledProjectileOnAcquiredChanged_Parms Parms; \
	Parms.acquired=acquired ? true : false; \
	K25UncontrolledProjectileOnAcquiredChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TargetSurvivor);


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TargetSurvivor);


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_EVENT_PARMS
#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25UncontrolledProjectile(); \
	friend struct Z_Construct_UClass_AK25UncontrolledProjectile_Statics; \
public: \
	DECLARE_CLASS(AK25UncontrolledProjectile, AK25Projectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25UncontrolledProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AK25UncontrolledProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_targetSurvivor=NETFIELD_REP_START, \
		NETFIELD_REP_END=_targetSurvivor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAK25UncontrolledProjectile(); \
	friend struct Z_Construct_UClass_AK25UncontrolledProjectile_Statics; \
public: \
	DECLARE_CLASS(AK25UncontrolledProjectile, AK25Projectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25UncontrolledProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AK25UncontrolledProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_targetSurvivor=NETFIELD_REP_START, \
		NETFIELD_REP_END=_targetSurvivor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25UncontrolledProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25UncontrolledProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25UncontrolledProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25UncontrolledProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25UncontrolledProjectile(AK25UncontrolledProjectile&&); \
	NO_API AK25UncontrolledProjectile(const AK25UncontrolledProjectile&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25UncontrolledProjectile(AK25UncontrolledProjectile&&); \
	NO_API AK25UncontrolledProjectile(const AK25UncontrolledProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25UncontrolledProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25UncontrolledProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25UncontrolledProjectile)


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isAcquiredFromPool() { return STRUCT_OFFSET(AK25UncontrolledProjectile, _isAcquiredFromPool); } \
	FORCEINLINE static uint32 __PPO___targetSurvivor() { return STRUCT_OFFSET(AK25UncontrolledProjectile, _targetSurvivor); }


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_12_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25UncontrolledProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
