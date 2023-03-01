// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEBLIGHT_DesperateMeasures_generated_h
#error "DesperateMeasures.generated.h already included, missing '#pragma once' in DesperateMeasures.h"
#endif
#define THEBLIGHT_DesperateMeasures_generated_h

#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDesperateMeasures(); \
	friend struct Z_Construct_UClass_UDesperateMeasures_Statics; \
public: \
	DECLARE_CLASS(UDesperateMeasures, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UDesperateMeasures) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_nbInjuredHookedOrDyingSurvivors=NETFIELD_REP_START, \
		NETFIELD_REP_END=_nbInjuredHookedOrDyingSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUDesperateMeasures(); \
	friend struct Z_Construct_UClass_UDesperateMeasures_Statics; \
public: \
	DECLARE_CLASS(UDesperateMeasures, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UDesperateMeasures) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_nbInjuredHookedOrDyingSurvivors=NETFIELD_REP_START, \
		NETFIELD_REP_END=_nbInjuredHookedOrDyingSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDesperateMeasures(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDesperateMeasures) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDesperateMeasures); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDesperateMeasures); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDesperateMeasures(UDesperateMeasures&&); \
	NO_API UDesperateMeasures(const UDesperateMeasures&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDesperateMeasures(UDesperateMeasures&&); \
	NO_API UDesperateMeasures(const UDesperateMeasures&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDesperateMeasures); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDesperateMeasures); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDesperateMeasures)


#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___healAndUnhookMultiplier() { return STRUCT_OFFSET(UDesperateMeasures, _healAndUnhookMultiplier); } \
	FORCEINLINE static uint32 __PPO___nbInjuredHookedOrDyingSurvivors() { return STRUCT_OFFSET(UDesperateMeasures, _nbInjuredHookedOrDyingSurvivors); }


#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_6_PROLOG
#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UDesperateMeasures>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_DesperateMeasures_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
