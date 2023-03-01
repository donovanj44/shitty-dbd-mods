// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCinematic;
#ifdef DEADBYDAYLIGHT_CinematicManager_generated_h
#error "CinematicManager.generated.h already included, missing '#pragma once' in CinematicManager.h"
#endif
#define DEADBYDAYLIGHT_CinematicManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelAllCinematicToPlay); \
	DECLARE_FUNCTION(execGetNextCinematicToPlay); \
	DECLARE_FUNCTION(execHasCinematicToPlay); \
	DECLARE_FUNCTION(execPlayMultiple); \
	DECLARE_FUNCTION(execPlaySingle);


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelAllCinematicToPlay); \
	DECLARE_FUNCTION(execGetNextCinematicToPlay); \
	DECLARE_FUNCTION(execHasCinematicToPlay); \
	DECLARE_FUNCTION(execPlayMultiple); \
	DECLARE_FUNCTION(execPlaySingle);


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicManager(); \
	friend struct Z_Construct_UClass_UCinematicManager_Statics; \
public: \
	DECLARE_CLASS(UCinematicManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCinematicManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCinematicManager(); \
	friend struct Z_Construct_UClass_UCinematicManager_Statics; \
public: \
	DECLARE_CLASS(UCinematicManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCinematicManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinematicManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinematicManager(UCinematicManager&&); \
	NO_API UCinematicManager(const UCinematicManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinematicManager(UCinematicManager&&); \
	NO_API UCinematicManager(const UCinematicManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCinematicManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cinematicQueue() { return STRUCT_OFFSET(UCinematicManager, _cinematicQueue); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_7_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCinematicManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CinematicManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
