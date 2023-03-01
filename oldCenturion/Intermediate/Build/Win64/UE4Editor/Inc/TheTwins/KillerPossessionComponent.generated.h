// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THETWINS_KillerPossessionComponent_generated_h
#error "KillerPossessionComponent.generated.h already included, missing '#pragma once' in KillerPossessionComponent.h"
#endif
#define THETWINS_KillerPossessionComponent_generated_h

#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ShouldDeactivateCollisionsWithSurvivors);


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ShouldDeactivateCollisionsWithSurvivors);


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKillerPossessionComponent(); \
	friend struct Z_Construct_UClass_UKillerPossessionComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerPossessionComponent, UPossessionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UKillerPossessionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_shouldDeactivateCollisionsWithSurvivors=NETFIELD_REP_START, \
		NETFIELD_REP_END=_shouldDeactivateCollisionsWithSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUKillerPossessionComponent(); \
	friend struct Z_Construct_UClass_UKillerPossessionComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerPossessionComponent, UPossessionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UKillerPossessionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_shouldDeactivateCollisionsWithSurvivors=NETFIELD_REP_START, \
		NETFIELD_REP_END=_shouldDeactivateCollisionsWithSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKillerPossessionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillerPossessionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerPossessionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerPossessionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerPossessionComponent(UKillerPossessionComponent&&); \
	NO_API UKillerPossessionComponent(const UKillerPossessionComponent&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerPossessionComponent(UKillerPossessionComponent&&); \
	NO_API UKillerPossessionComponent(const UKillerPossessionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerPossessionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerPossessionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKillerPossessionComponent)


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___shouldDeactivateCollisionsWithSurvivors() { return STRUCT_OFFSET(UKillerPossessionComponent, _shouldDeactivateCollisionsWithSurvivors); } \
	FORCEINLINE static uint32 __PPO___timeBeforeCollisionsDeactivation() { return STRUCT_OFFSET(UKillerPossessionComponent, _timeBeforeCollisionsDeactivation); }


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_7_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UKillerPossessionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_KillerPossessionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
