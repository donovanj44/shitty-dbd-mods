// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimationMontageDescriptor;
class ADBDPlayer;
#ifdef THETWINS_TwinLockerBlockerComponent_generated_h
#error "TwinLockerBlockerComponent.generated.h already included, missing '#pragma once' in TwinLockerBlockerComponent.h"
#endif
#define THETWINS_TwinLockerBlockerComponent_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execIsTwinAttachedToLocker); \
	DECLARE_FUNCTION(execOnPushedMontageEnded); \
	DECLARE_FUNCTION(execOnPushedMontageStarted); \
	DECLARE_FUNCTION(execOnPushedMontageStopped); \
	DECLARE_FUNCTION(execOnSurvivorInLockerChanged);


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execIsTwinAttachedToLocker); \
	DECLARE_FUNCTION(execOnPushedMontageEnded); \
	DECLARE_FUNCTION(execOnPushedMontageStarted); \
	DECLARE_FUNCTION(execOnPushedMontageStopped); \
	DECLARE_FUNCTION(execOnSurvivorInLockerChanged);


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_EVENT_PARMS \
	struct TwinLockerBlockerComponent_eventCosmetic_OnTwinOnLockerChanged_Parms \
	{ \
		bool isOnLocker; \
	};


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwinLockerBlockerComponent(); \
	friend struct Z_Construct_UClass_UTwinLockerBlockerComponent_Statics; \
public: \
	DECLARE_CLASS(UTwinLockerBlockerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinLockerBlockerComponent)


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTwinLockerBlockerComponent(); \
	friend struct Z_Construct_UClass_UTwinLockerBlockerComponent_Statics; \
public: \
	DECLARE_CLASS(UTwinLockerBlockerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinLockerBlockerComponent)


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinLockerBlockerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinLockerBlockerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinLockerBlockerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinLockerBlockerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinLockerBlockerComponent(UTwinLockerBlockerComponent&&); \
	NO_API UTwinLockerBlockerComponent(const UTwinLockerBlockerComponent&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinLockerBlockerComponent(UTwinLockerBlockerComponent&&); \
	NO_API UTwinLockerBlockerComponent(const UTwinLockerBlockerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinLockerBlockerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinLockerBlockerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinLockerBlockerComponent)


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactionClasses() { return STRUCT_OFFSET(UTwinLockerBlockerComponent, _interactionClasses); } \
	FORCEINLINE static uint32 __PPO___interactionsToDisableOnLockerClasses() { return STRUCT_OFFSET(UTwinLockerBlockerComponent, _interactionsToDisableOnLockerClasses); }


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_11_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTwinLockerBlockerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TwinLockerBlockerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
