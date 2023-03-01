// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableComponent;
class AActor;
enum class ESkillCheckCustomType : uint8;
class ADBDPlayer;
#ifdef DBDGAMEPLAY_WiggleComponent_generated_h
#error "WiggleComponent.generated.h already included, missing '#pragma once' in WiggleComponent.h"
#endif
#define DBDGAMEPLAY_WiggleComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_RPC_WRAPPERS \
	virtual void Server_OnWiggleEnd_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddWiggleCharge); \
	DECLARE_FUNCTION(execGetWiggleChargeable); \
	DECLARE_FUNCTION(execOnChargeableCompleteEvent); \
	DECLARE_FUNCTION(execOnHideWiggleSkillCheck); \
	DECLARE_FUNCTION(execOnKeyBindingsChanged); \
	DECLARE_FUNCTION(execOnPickedUpSkillCheckEnd); \
	DECLARE_FUNCTION(execOnPlayerPickedUpEnd); \
	DECLARE_FUNCTION(execOnPlayerPickedUpStart); \
	DECLARE_FUNCTION(execOnWiggleEnd); \
	DECLARE_FUNCTION(execOnWiggleInput); \
	DECLARE_FUNCTION(execOnWiggleSkillCheckEnd); \
	DECLARE_FUNCTION(execServer_OnWiggleEnd);


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_OnWiggleEnd_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddWiggleCharge); \
	DECLARE_FUNCTION(execGetWiggleChargeable); \
	DECLARE_FUNCTION(execOnChargeableCompleteEvent); \
	DECLARE_FUNCTION(execOnHideWiggleSkillCheck); \
	DECLARE_FUNCTION(execOnKeyBindingsChanged); \
	DECLARE_FUNCTION(execOnPickedUpSkillCheckEnd); \
	DECLARE_FUNCTION(execOnPlayerPickedUpEnd); \
	DECLARE_FUNCTION(execOnPlayerPickedUpStart); \
	DECLARE_FUNCTION(execOnWiggleEnd); \
	DECLARE_FUNCTION(execOnWiggleInput); \
	DECLARE_FUNCTION(execOnWiggleSkillCheckEnd); \
	DECLARE_FUNCTION(execServer_OnWiggleEnd);


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_EVENT_PARMS
#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWiggleComponent(); \
	friend struct Z_Construct_UClass_UWiggleComponent_Statics; \
public: \
	DECLARE_CLASS(UWiggleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UWiggleComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWiggleComponent*>(this); }


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWiggleComponent(); \
	friend struct Z_Construct_UClass_UWiggleComponent_Statics; \
public: \
	DECLARE_CLASS(UWiggleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UWiggleComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWiggleComponent*>(this); }


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWiggleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWiggleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWiggleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWiggleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWiggleComponent(UWiggleComponent&&); \
	NO_API UWiggleComponent(const UWiggleComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWiggleComponent(UWiggleComponent&&); \
	NO_API UWiggleComponent(const UWiggleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWiggleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWiggleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWiggleComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___wiggleProgress() { return STRUCT_OFFSET(UWiggleComponent, _wiggleProgress); } \
	FORCEINLINE static uint32 __PPO___killerWigglingFrom() { return STRUCT_OFFSET(UWiggleComponent, _killerWigglingFrom); } \
	FORCEINLINE static uint32 __PPO___inputComponent() { return STRUCT_OFFSET(UWiggleComponent, _inputComponent); }


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_14_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UWiggleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_WiggleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS