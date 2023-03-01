// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABloodOrb;
#ifdef THEONI_BloodOrbAbsorberComponent_generated_h
#error "BloodOrbAbsorberComponent.generated.h already included, missing '#pragma once' in BloodOrbAbsorberComponent.h"
#endif
#define THEONI_BloodOrbAbsorberComponent_generated_h

#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_11_DELEGATE \
struct _Script_TheOni_eventBloodOrbAbsorberComponentOnIsAbsorbingChanged_Parms \
{ \
	bool isAbsorbing; \
}; \
static inline void FBloodOrbAbsorberComponentOnIsAbsorbingChanged_DelegateWrapper(const FMulticastScriptDelegate& BloodOrbAbsorberComponentOnIsAbsorbingChanged, bool isAbsorbing) \
{ \
	_Script_TheOni_eventBloodOrbAbsorberComponentOnIsAbsorbingChanged_Parms Parms; \
	Parms.isAbsorbing=isAbsorbing ? true : false; \
	BloodOrbAbsorberComponentOnIsAbsorbingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_10_DELEGATE \
struct _Script_TheOni_eventBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed_Parms \
{ \
	ABloodOrb* bloodOrb; \
}; \
static inline void FBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed_DelegateWrapper(const FMulticastScriptDelegate& BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed, ABloodOrb* bloodOrb) \
{ \
	_Script_TheOni_eventBloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed_Parms Parms; \
	Parms.bloodOrb=bloodOrb; \
	BloodOrbAbsorberComponentAuthority_OnBloodOrbAbsorbed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInAbsorbMode); \
	DECLARE_FUNCTION(execSetInAbsorbMode);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInAbsorbMode); \
	DECLARE_FUNCTION(execSetInAbsorbMode);


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodOrbAbsorberComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbAbsorberComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbAbsorberComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBloodOrbAbsorberComponent(); \
	friend struct Z_Construct_UClass_UBloodOrbAbsorberComponent_Statics; \
public: \
	DECLARE_CLASS(UBloodOrbAbsorberComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UBloodOrbAbsorberComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodOrbAbsorberComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodOrbAbsorberComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbAbsorberComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbAbsorberComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbAbsorberComponent(UBloodOrbAbsorberComponent&&); \
	NO_API UBloodOrbAbsorberComponent(const UBloodOrbAbsorberComponent&); \
public:


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodOrbAbsorberComponent(UBloodOrbAbsorberComponent&&); \
	NO_API UBloodOrbAbsorberComponent(const UBloodOrbAbsorberComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodOrbAbsorberComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodOrbAbsorberComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodOrbAbsorberComponent)


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbsorbLocationOffset() { return STRUCT_OFFSET(UBloodOrbAbsorberComponent, AbsorbLocationOffset); } \
	FORCEINLINE static uint32 __PPO___camperBloodOrbDropperComponents() { return STRUCT_OFFSET(UBloodOrbAbsorberComponent, _camperBloodOrbDropperComponents); }


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_13_PROLOG
#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_INCLASS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UBloodOrbAbsorberComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_BloodOrbAbsorberComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
