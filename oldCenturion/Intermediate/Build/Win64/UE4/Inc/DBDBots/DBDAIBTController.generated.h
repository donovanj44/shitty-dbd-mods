// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef DBDBOTS_DBDAIBTController_generated_h
#error "DBDAIBTController.generated.h already included, missing '#pragma once' in DBDAIBTController.h"
#endif
#define DBDBOTS_DBDAIBTController_generated_h

#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_FinishedPlaying); \
	DECLARE_FUNCTION(execOnPawnBump);


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_FinishedPlaying); \
	DECLARE_FUNCTION(execOnPawnBump);


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDAIBTController(); \
	friend struct Z_Construct_UClass_ADBDAIBTController_Statics; \
public: \
	DECLARE_CLASS(ADBDAIBTController, ADBDAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(ADBDAIBTController)


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADBDAIBTController(); \
	friend struct Z_Construct_UClass_ADBDAIBTController_Statics; \
public: \
	DECLARE_CLASS(ADBDAIBTController, ADBDAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(ADBDAIBTController)


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDAIBTController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDAIBTController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDAIBTController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDAIBTController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDAIBTController(ADBDAIBTController&&); \
	NO_API ADBDAIBTController(const ADBDAIBTController&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDAIBTController(ADBDAIBTController&&); \
	NO_API ADBDAIBTController(const ADBDAIBTController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDAIBTController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDAIBTController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDAIBTController)


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___dbdPerception() { return STRUCT_OFFSET(ADBDAIBTController, _dbdPerception); } \
	FORCEINLINE static uint32 __PPO___dbdBlackboard() { return STRUCT_OFFSET(ADBDAIBTController, _dbdBlackboard); } \
	FORCEINLINE static uint32 __PPO___dbdPathFollowing() { return STRUCT_OFFSET(ADBDAIBTController, _dbdPathFollowing); } \
	FORCEINLINE static uint32 __PPO___dbdBehaviorTree() { return STRUCT_OFFSET(ADBDAIBTController, _dbdBehaviorTree); } \
	FORCEINLINE static uint32 __PPO___navMeshExplorer() { return STRUCT_OFFSET(ADBDAIBTController, _navMeshExplorer); } \
	FORCEINLINE static uint32 __PPO___aiState() { return STRUCT_OFFSET(ADBDAIBTController, _aiState); } \
	FORCEINLINE static uint32 __PPO___aiGoal() { return STRUCT_OFFSET(ADBDAIBTController, _aiGoal); } \
	FORCEINLINE static uint32 __PPO___setDynamicSubtrees() { return STRUCT_OFFSET(ADBDAIBTController, _setDynamicSubtrees); } \
	FORCEINLINE static uint32 __PPO___aiSkills() { return STRUCT_OFFSET(ADBDAIBTController, _aiSkills); }


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_21_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class ADBDAIBTController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_DBDAIBTController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
