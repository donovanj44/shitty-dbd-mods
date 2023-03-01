// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimationMontageDescriptor;
class UAnimInstance;
struct FGuid;
class UAnimMontage;
class USkeletalMeshComponent;
#ifdef DEADBYDAYLIGHT_MontagePlayer_generated_h
#error "MontagePlayer.generated.h already included, missing '#pragma once' in MontagePlayer.h"
#endif
#define DEADBYDAYLIGHT_MontagePlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_15_DELEGATE \
struct _Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms \
{ \
	FAnimationMontageDescriptor animMontageID; \
	bool interrupted; \
}; \
static inline void FMontagePlayerOnMontageEnded_DelegateWrapper(const FMulticastScriptDelegate& MontagePlayerOnMontageEnded, const FAnimationMontageDescriptor animMontageID, bool interrupted) \
{ \
	_Script_DeadByDaylight_eventMontagePlayerOnMontageEnded_Parms Parms; \
	Parms.animMontageID=animMontageID; \
	Parms.interrupted=interrupted ? true : false; \
	MontagePlayerOnMontageEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventMontagePlayerOnMontageStarted_Parms \
{ \
	FAnimationMontageDescriptor animMontageID; \
	float PlayRate; \
}; \
static inline void FMontagePlayerOnMontageStarted_DelegateWrapper(const FMulticastScriptDelegate& MontagePlayerOnMontageStarted, const FAnimationMontageDescriptor animMontageID, const float PlayRate) \
{ \
	_Script_DeadByDaylight_eventMontagePlayerOnMontageStarted_Parms Parms; \
	Parms.animMontageID=animMontageID; \
	Parms.PlayRate=PlayRate; \
	MontagePlayerOnMontageStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPlayingAnyMontage); \
	DECLARE_FUNCTION(execJumpToSection); \
	DECLARE_FUNCTION(execJumpToSectionEnd); \
	DECLARE_FUNCTION(execOnMontageBlendingOutInternal); \
	DECLARE_FUNCTION(execOnMontageEndedInternal); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayLoopForDuration); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execSignalAnimInstanceChanged); \
	DECLARE_FUNCTION(execStop);


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPlayingAnyMontage); \
	DECLARE_FUNCTION(execJumpToSection); \
	DECLARE_FUNCTION(execJumpToSectionEnd); \
	DECLARE_FUNCTION(execOnMontageBlendingOutInternal); \
	DECLARE_FUNCTION(execOnMontageEndedInternal); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayLoopForDuration); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execSignalAnimInstanceChanged); \
	DECLARE_FUNCTION(execStop);


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMontagePlayer(); \
	friend struct Z_Construct_UClass_UMontagePlayer_Statics; \
public: \
	DECLARE_CLASS(UMontagePlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMontagePlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMontagePlayer(); \
	friend struct Z_Construct_UClass_UMontagePlayer_Statics; \
public: \
	DECLARE_CLASS(UMontagePlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMontagePlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMontagePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMontagePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMontagePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMontagePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMontagePlayer(UMontagePlayer&&); \
	NO_API UMontagePlayer(const UMontagePlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMontagePlayer(UMontagePlayer&&); \
	NO_API UMontagePlayer(const UMontagePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMontagePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMontagePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMontagePlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___animationMappingsTable() { return STRUCT_OFFSET(UMontagePlayer, _animationMappingsTable); } \
	FORCEINLINE static uint32 __PPO___playerSpecificMappingsTable() { return STRUCT_OFFSET(UMontagePlayer, _playerSpecificMappingsTable); } \
	FORCEINLINE static uint32 __PPO___currentlyPlayingMontage() { return STRUCT_OFFSET(UMontagePlayer, _currentlyPlayingMontage); } \
	FORCEINLINE static uint32 __PPO___activeMontagesInfo() { return STRUCT_OFFSET(UMontagePlayer, _activeMontagesInfo); } \
	FORCEINLINE static uint32 __PPO___outSectionName() { return STRUCT_OFFSET(UMontagePlayer, _outSectionName); } \
	FORCEINLINE static uint32 __PPO___timeBeforeOut() { return STRUCT_OFFSET(UMontagePlayer, _timeBeforeOut); } \
	FORCEINLINE static uint32 __PPO___skeletalMeshComponent() { return STRUCT_OFFSET(UMontagePlayer, _skeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO___montageToNameMap() { return STRUCT_OFFSET(UMontagePlayer, _montageToNameMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_17_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UMontagePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MontagePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
