// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABloodOrb;
enum class EBloodOrbState : uint8;
#ifdef THEONI_BloodOrbStateMonitorComponent_generated_h
#error "BloodOrbStateMonitorComponent.generated.h already included, missing '#pragma once' in BloodOrbStateMonitorComponent.h"
#endif
#define THEONI_BloodOrbStateMonitorComponent_generated_h

#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_9_DELEGATE \
struct _Script_TheOni_eventBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic_Parms \
{ \
	ABloodOrb* bloodOrb; \
}; \
static inline void FBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic_DelegateWrapper(const FMulticastScriptDelegate& BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic, ABloodOrb* bloodOrb) \
{ \
	_Script_TheOni_eventBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic_Parms Parms; \
	Parms.bloodOrb=bloodOrb; \
	BloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBloodOrbDestroyed); \
	DECLARE_FUNCTION(execOnBloodOrbSpawned); \
	DECLARE_FUNCTION(execOnBloodOrbStateChanged);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBloodOrbDestroyed); \
	DECLARE_FUNCTION(execOnBloodOrbSpawned); \
	DECLARE_FUNCTION(execOnBloodOrbStateChanged);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodOrbStateMonitorComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbStateMonitorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbStateMonitorComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBloodOrbStateMonitorComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbStateMonitorComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbStateMonitorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbStateMonitorComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodOrbStateMonitorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodOrbStateMonitorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbStateMonitorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbStateMonitorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbStateMonitorComponent(UBloodOrbStateMonitorComponent&&); \
	NO_API UBloodOrbStateMonitorComponent(const UBloodOrbStateMonitorComponent&); \
public:


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbStateMonitorComponent(UBloodOrbStateMonitorComponent&&); \
	NO_API UBloodOrbStateMonitorComponent(const UBloodOrbStateMonitorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbStateMonitorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbStateMonitorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodOrbStateMonitorComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_11_PROLOG
#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_INCLASS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UBloodOrbStateMonitorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_BloodOrbStateMonitorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
