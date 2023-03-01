// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_SmallGame_generated_h
#error "SmallGame.generated.h already included, missing '#pragma once' in SmallGame.h"
#endif
#define DBDCOMPETENCE_SmallGame_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_RPC_WRAPPERS \
	virtual void Multicast_TotemFound_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_SetTotemDetected); \
	DECLARE_FUNCTION(execGetDetectionConeAngle); \
	DECLARE_FUNCTION(execMulticast_TotemFound);


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TotemFound_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_SetTotemDetected); \
	DECLARE_FUNCTION(execGetDetectionConeAngle); \
	DECLARE_FUNCTION(execMulticast_TotemFound);


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_EVENT_PARMS
#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmallGame(); \
	friend struct Z_Construct_UClass_USmallGame_Statics; \
public: \
	DECLARE_CLASS(USmallGame, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USmallGame)


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSmallGame(); \
	friend struct Z_Construct_UClass_USmallGame_Statics; \
public: \
	DECLARE_CLASS(USmallGame, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USmallGame)


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmallGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmallGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmallGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmallGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmallGame(USmallGame&&); \
	NO_API USmallGame(const USmallGame&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmallGame(USmallGame&&); \
	NO_API USmallGame(const USmallGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmallGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmallGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmallGame)


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___detectionConeAngle() { return STRUCT_OFFSET(USmallGame, _detectionConeAngle); } \
	FORCEINLINE static uint32 __PPO___detectionConeAngleReductionRate() { return STRUCT_OFFSET(USmallGame, _detectionConeAngleReductionRate); } \
	FORCEINLINE static uint32 __PPO___totemDetected() { return STRUCT_OFFSET(USmallGame, _totemDetected); }


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_6_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class USmallGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_SmallGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
