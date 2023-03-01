// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FImpactInfo;
class AInteractable;
class USceneComponent;
class ACamperPlayer;
#ifdef DEADBYDAYLIGHT_BaseLinkedVomitProjectile_generated_h
#error "BaseLinkedVomitProjectile.generated.h already included, missing '#pragma once' in BaseLinkedVomitProjectile.h"
#endif
#define DEADBYDAYLIGHT_BaseLinkedVomitProjectile_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_19_DELEGATE \
static inline void FBaseLinkedVomitProjectileOnDeactivateOrLaunch_DelegateWrapper(const FMulticastScriptDelegate& BaseLinkedVomitProjectileOnDeactivateOrLaunch) \
{ \
	BaseLinkedVomitProjectileOnDeactivateOrLaunch.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_RPC_WRAPPERS \
	virtual void OnAffectInteractable_Implementation(AInteractable* interactable, USceneComponent* hitComponent); \
	virtual void OnAffectSurvivor_Implementation(ACamperPlayer* camperPlayer); \
 \
	DECLARE_FUNCTION(execNativeExplode); \
	DECLARE_FUNCTION(execOnAffectInteractable); \
	DECLARE_FUNCTION(execOnAffectSurvivor);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAffectInteractable_Implementation(AInteractable* interactable, USceneComponent* hitComponent); \
	virtual void OnAffectSurvivor_Implementation(ACamperPlayer* camperPlayer); \
 \
	DECLARE_FUNCTION(execNativeExplode); \
	DECLARE_FUNCTION(execOnAffectInteractable); \
	DECLARE_FUNCTION(execOnAffectSurvivor);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_EVENT_PARMS \
	struct BaseLinkedVomitProjectile_eventOnAffectInteractable_Parms \
	{ \
		AInteractable* interactable; \
		USceneComponent* hitComponent; \
	}; \
	struct BaseLinkedVomitProjectile_eventOnAffectSurvivor_Parms \
	{ \
		ACamperPlayer* camperPlayer; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseLinkedVomitProjectile(); \
	friend struct Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics; \
public: \
	DECLARE_CLASS(ABaseLinkedVomitProjectile, AKillerProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABaseLinkedVomitProjectile)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesABaseLinkedVomitProjectile(); \
	friend struct Z_Construct_UClass_ABaseLinkedVomitProjectile_Statics; \
public: \
	DECLARE_CLASS(ABaseLinkedVomitProjectile, AKillerProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABaseLinkedVomitProjectile)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseLinkedVomitProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseLinkedVomitProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseLinkedVomitProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseLinkedVomitProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseLinkedVomitProjectile(ABaseLinkedVomitProjectile&&); \
	NO_API ABaseLinkedVomitProjectile(const ABaseLinkedVomitProjectile&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseLinkedVomitProjectile(ABaseLinkedVomitProjectile&&); \
	NO_API ABaseLinkedVomitProjectile(const ABaseLinkedVomitProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseLinkedVomitProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseLinkedVomitProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseLinkedVomitProjectile)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___useSplashDamage() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _useSplashDamage); } \
	FORCEINLINE static uint32 __PPO___passThroughSurvivors() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _passThroughSurvivors); } \
	FORCEINLINE static uint32 __PPO___poolableProjectile() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _poolableProjectile); } \
	FORCEINLINE static uint32 __PPO__OnDeactivateOrLaunch() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, OnDeactivateOrLaunch); } \
	FORCEINLINE static uint32 __PPO___vomitTrail() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _vomitTrail); } \
	FORCEINLINE static uint32 __PPO___splineMesh() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _splineMesh); } \
	FORCEINLINE static uint32 __PPO___splashDamageSphere() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _splashDamageSphere); } \
	FORCEINLINE static uint32 __PPO___akAudioVomitProjectile() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _akAudioVomitProjectile); } \
	FORCEINLINE static uint32 __PPO___vomitSplashCamper() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _vomitSplashCamper); } \
	FORCEINLINE static uint32 __PPO___vomitSplash() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _vomitSplash); } \
	FORCEINLINE static uint32 __PPO___akAudioEventAudioEventVomitSplash() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _akAudioEventAudioEventVomitSplash); } \
	FORCEINLINE static uint32 __PPO___minDecalSize() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _minDecalSize); } \
	FORCEINLINE static uint32 __PPO___maxDecalSize() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _maxDecalSize); } \
	FORCEINLINE static uint32 __PPO___isSuperVomit() { return STRUCT_OFFSET(ABaseLinkedVomitProjectile, _isSuperVomit); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_21_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ABaseLinkedVomitProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BaseLinkedVomitProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
