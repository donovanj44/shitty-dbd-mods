// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESkillCheckCustomType : uint8;
class ADBDPlayer;
#ifdef DBDGAMEPLAY_WiggleMotionComponent_generated_h
#error "WiggleMotionComponent.generated.h already included, missing '#pragma once' in WiggleMotionComponent.h"
#endif
#define DBDGAMEPLAY_WiggleMotionComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_RPC_WRAPPERS \
	virtual void Server_SetIsBeingWiggled_Implementation(bool isBeingWiggled); \
 \
	DECLARE_FUNCTION(execOnHideWiggleSkillCheck); \
	DECLARE_FUNCTION(execOnSurvivorPickedUp); \
	DECLARE_FUNCTION(execOnSurvivorRemoved); \
	DECLARE_FUNCTION(execOnWiggleSkillCheckEnd); \
	DECLARE_FUNCTION(execServer_SetIsBeingWiggled); \
	DECLARE_FUNCTION(execSetIsBeingWiggled);


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SetIsBeingWiggled_Implementation(bool isBeingWiggled); \
 \
	DECLARE_FUNCTION(execOnHideWiggleSkillCheck); \
	DECLARE_FUNCTION(execOnSurvivorPickedUp); \
	DECLARE_FUNCTION(execOnSurvivorRemoved); \
	DECLARE_FUNCTION(execOnWiggleSkillCheckEnd); \
	DECLARE_FUNCTION(execServer_SetIsBeingWiggled); \
	DECLARE_FUNCTION(execSetIsBeingWiggled);


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_EVENT_PARMS \
	struct WiggleMotionComponent_eventServer_SetIsBeingWiggled_Parms \
	{ \
		bool isBeingWiggled; \
	};


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWiggleMotionComponent(); \
	friend struct Z_Construct_UClass_UWiggleMotionComponent_Statics; \
public: \
	DECLARE_CLASS(UWiggleMotionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UWiggleMotionComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWiggleMotionComponent(); \
	friend struct Z_Construct_UClass_UWiggleMotionComponent_Statics; \
public: \
	DECLARE_CLASS(UWiggleMotionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UWiggleMotionComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWiggleMotionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWiggleMotionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWiggleMotionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWiggleMotionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWiggleMotionComponent(UWiggleMotionComponent&&); \
	NO_API UWiggleMotionComponent(const UWiggleMotionComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWiggleMotionComponent(UWiggleMotionComponent&&); \
	NO_API UWiggleMotionComponent(const UWiggleMotionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWiggleMotionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWiggleMotionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWiggleMotionComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___carriedPlayer() { return STRUCT_OFFSET(UWiggleMotionComponent, _carriedPlayer); } \
	FORCEINLINE static uint32 __PPO___ownerMovementComponent() { return STRUCT_OFFSET(UWiggleMotionComponent, _ownerMovementComponent); }


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_10_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UWiggleMotionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_WiggleMotionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
