// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTILE_SingleProjectileProviderComponent_generated_h
#error "SingleProjectileProviderComponent.generated.h already included, missing '#pragma once' in SingleProjectileProviderComponent.h"
#endif
#define PROJECTILE_SingleProjectileProviderComponent_generated_h

#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Projectile);


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Projectile);


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleProjectileProviderComponent(); \
	friend struct Z_Construct_UClass_USingleProjectileProviderComponent_Statics; \
public: \
	DECLARE_CLASS(USingleProjectileProviderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(USingleProjectileProviderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USingleProjectileProviderComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_projectile=NETFIELD_REP_START, \
		NETFIELD_REP_END=_projectile	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSingleProjectileProviderComponent(); \
	friend struct Z_Construct_UClass_USingleProjectileProviderComponent_Statics; \
public: \
	DECLARE_CLASS(USingleProjectileProviderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(USingleProjectileProviderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USingleProjectileProviderComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_projectile=NETFIELD_REP_START, \
		NETFIELD_REP_END=_projectile	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USingleProjectileProviderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USingleProjectileProviderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingleProjectileProviderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleProjectileProviderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USingleProjectileProviderComponent(USingleProjectileProviderComponent&&); \
	NO_API USingleProjectileProviderComponent(const USingleProjectileProviderComponent&); \
public:


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USingleProjectileProviderComponent(USingleProjectileProviderComponent&&); \
	NO_API USingleProjectileProviderComponent(const USingleProjectileProviderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingleProjectileProviderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleProjectileProviderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleProjectileProviderComponent)


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___projectileClass() { return STRUCT_OFFSET(USingleProjectileProviderComponent, _projectileClass); } \
	FORCEINLINE static uint32 __PPO___projectile() { return STRUCT_OFFSET(USingleProjectileProviderComponent, _projectile); }


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_10_PROLOG
#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_INCLASS \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTILE_API UClass* StaticClass<class USingleProjectileProviderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Projectile_Public_SingleProjectileProviderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
