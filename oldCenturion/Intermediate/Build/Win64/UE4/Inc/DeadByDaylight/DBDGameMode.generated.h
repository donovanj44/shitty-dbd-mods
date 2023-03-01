// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameState : uint8;
class APlayerState;
#ifdef DEADBYDAYLIGHT_DBDGameMode_generated_h
#error "DBDGameMode.generated.h already included, missing '#pragma once' in DBDGameMode.h"
#endif
#define DEADBYDAYLIGHT_DBDGameMode_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_12_DELEGATE \
static inline void FDBDGameModeOnPlayersLoadoutsCreated_DelegateWrapper(const FMulticastScriptDelegate& DBDGameModeOnPlayersLoadoutsCreated) \
{ \
	DBDGameModeOnPlayersLoadoutsCreated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreLoadoutsCreated); \
	DECLARE_FUNCTION(execDBD_BlockCamperEscape); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execIsEscapeOpen); \
	DECLARE_FUNCTION(execLevelLoaded); \
	DECLARE_FUNCTION(execOnPlayerGameStateChanged); \
	DECLARE_FUNCTION(execRegisterOnPlayerStateChanged); \
	DECLARE_FUNCTION(execSetEscapeOpened);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreLoadoutsCreated); \
	DECLARE_FUNCTION(execDBD_BlockCamperEscape); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execIsEscapeOpen); \
	DECLARE_FUNCTION(execLevelLoaded); \
	DECLARE_FUNCTION(execOnPlayerGameStateChanged); \
	DECLARE_FUNCTION(execRegisterOnPlayerStateChanged); \
	DECLARE_FUNCTION(execSetEscapeOpened);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDGameMode(); \
	friend struct Z_Construct_UClass_ADBDGameMode_Statics; \
public: \
	DECLARE_CLASS(ADBDGameMode, ADBDBaseMatchGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADBDGameMode(); \
	friend struct Z_Construct_UClass_ADBDGameMode_Statics; \
public: \
	DECLARE_CLASS(ADBDGameMode, ADBDBaseMatchGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDGameMode(ADBDGameMode&&); \
	NO_API ADBDGameMode(const ADBDGameMode&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDGameMode(ADBDGameMode&&); \
	NO_API ADBDGameMode(const ADBDGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnPlayersLoadoutsCreated() { return STRUCT_OFFSET(ADBDGameMode, OnPlayersLoadoutsCreated); } \
	FORCEINLINE static uint32 __PPO___killerPlayerControllerClass() { return STRUCT_OFFSET(ADBDGameMode, _killerPlayerControllerClass); } \
	FORCEINLINE static uint32 __PPO___survivorPlayerControllerClass() { return STRUCT_OFFSET(ADBDGameMode, _survivorPlayerControllerClass); } \
	FORCEINLINE static uint32 __PPO___initialPlayerStarts() { return STRUCT_OFFSET(ADBDGameMode, _initialPlayerStarts); } \
	FORCEINLINE static uint32 __PPO__KillerCreationPositionOrder() { return STRUCT_OFFSET(ADBDGameMode, KillerCreationPositionOrder); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
