// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPerk;
#ifdef DEADBYDAYLIGHT_PerkCollectionComponent_generated_h
#error "PerkCollectionComponent.generated.h already included, missing '#pragma once' in PerkCollectionComponent.h"
#endif
#define DEADBYDAYLIGHT_PerkCollectionComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Array);


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Array);


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerkCollectionComponent(); \
	friend struct Z_Construct_UClass_UPerkCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UPerkCollectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkCollectionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_array=NETFIELD_REP_START, \
		NETFIELD_REP_END=_array	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPerkCollectionComponent(); \
	friend struct Z_Construct_UClass_UPerkCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UPerkCollectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkCollectionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_array=NETFIELD_REP_START, \
		NETFIELD_REP_END=_array	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerkCollectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerkCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkCollectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkCollectionComponent(UPerkCollectionComponent&&); \
	NO_API UPerkCollectionComponent(const UPerkCollectionComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkCollectionComponent(UPerkCollectionComponent&&); \
	NO_API UPerkCollectionComponent(const UPerkCollectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkCollectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerkCollectionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___array() { return STRUCT_OFFSET(UPerkCollectionComponent, _array); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPerkCollectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PerkCollectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
