// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_StatusEffectCollectionComponent_generated_h
#error "StatusEffectCollectionComponent.generated.h already included, missing '#pragma once' in StatusEffectCollectionComponent.h"
#endif
#define DEADBYDAYLIGHT_StatusEffectCollectionComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Array);


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Array);


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusEffectCollectionComponent(); \
	friend struct Z_Construct_UClass_UStatusEffectCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UStatusEffectCollectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffectCollectionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_array=NETFIELD_REP_START, \
		NETFIELD_REP_END=_array	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUStatusEffectCollectionComponent(); \
	friend struct Z_Construct_UClass_UStatusEffectCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UStatusEffectCollectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffectCollectionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_array=NETFIELD_REP_START, \
		NETFIELD_REP_END=_array	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusEffectCollectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusEffectCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffectCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffectCollectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusEffectCollectionComponent(UStatusEffectCollectionComponent&&); \
	NO_API UStatusEffectCollectionComponent(const UStatusEffectCollectionComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusEffectCollectionComponent(UStatusEffectCollectionComponent&&); \
	NO_API UStatusEffectCollectionComponent(const UStatusEffectCollectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffectCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffectCollectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatusEffectCollectionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___array() { return STRUCT_OFFSET(UStatusEffectCollectionComponent, _array); } \
	FORCEINLINE static uint32 __PPO___local_oldArray() { return STRUCT_OFFSET(UStatusEffectCollectionComponent, _local_oldArray); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStatusEffectCollectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StatusEffectCollectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
