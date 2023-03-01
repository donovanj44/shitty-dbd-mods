// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef DBDCOMPETENCE_DyingLight_generated_h
#error "DyingLight.generated.h already included, missing '#pragma once' in DyingLight.h"
#endif
#define DBDCOMPETENCE_DyingLight_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnObsessionChanged);


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnObsessionChanged);


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDyingLight(); \
	friend struct Z_Construct_UClass_UDyingLight_Statics; \
public: \
	DECLARE_CLASS(UDyingLight, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDyingLight)


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDyingLight(); \
	friend struct Z_Construct_UClass_UDyingLight_Statics; \
public: \
	DECLARE_CLASS(UDyingLight, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDyingLight)


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDyingLight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDyingLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDyingLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDyingLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDyingLight(UDyingLight&&); \
	NO_API UDyingLight(const UDyingLight&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDyingLight(UDyingLight&&); \
	NO_API UDyingLight(const UDyingLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDyingLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDyingLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDyingLight)


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___actionSpeedPenaltyPerToken() { return STRUCT_OFFSET(UDyingLight, _actionSpeedPenaltyPerToken); } \
	FORCEINLINE static uint32 __PPO___obsessionActionSpeedBonus() { return STRUCT_OFFSET(UDyingLight, _obsessionActionSpeedBonus); } \
	FORCEINLINE static uint32 __PPO___obsessionStatusEffectID() { return STRUCT_OFFSET(UDyingLight, _obsessionStatusEffectID); } \
	FORCEINLINE static uint32 __PPO___nonObsessionStatusEffectID() { return STRUCT_OFFSET(UDyingLight, _nonObsessionStatusEffectID); } \
	FORCEINLINE static uint32 __PPO___survivorDebuffs() { return STRUCT_OFFSET(UDyingLight, _survivorDebuffs); }


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_9_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UDyingLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_DyingLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
