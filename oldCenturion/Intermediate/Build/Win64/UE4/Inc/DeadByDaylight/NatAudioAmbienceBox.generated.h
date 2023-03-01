// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEADBYDAYLIGHT_NatAudioAmbienceBox_generated_h
#error "NatAudioAmbienceBox.generated.h already included, missing '#pragma once' in NatAudioAmbienceBox.h"
#endif
#define DEADBYDAYLIGHT_NatAudioAmbienceBox_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlapAudioAmbience); \
	DECLARE_FUNCTION(execOnEndOverlapAudioAmbience);


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlapAudioAmbience); \
	DECLARE_FUNCTION(execOnEndOverlapAudioAmbience);


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNatAudioAmbienceBox(); \
	friend struct Z_Construct_UClass_UNatAudioAmbienceBox_Statics; \
public: \
	DECLARE_CLASS(UNatAudioAmbienceBox, UAmbienceBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UNatAudioAmbienceBox)


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNatAudioAmbienceBox(); \
	friend struct Z_Construct_UClass_UNatAudioAmbienceBox_Statics; \
public: \
	DECLARE_CLASS(UNatAudioAmbienceBox, UAmbienceBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UNatAudioAmbienceBox)


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNatAudioAmbienceBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNatAudioAmbienceBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNatAudioAmbienceBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNatAudioAmbienceBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNatAudioAmbienceBox(UNatAudioAmbienceBox&&); \
	NO_API UNatAudioAmbienceBox(const UNatAudioAmbienceBox&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNatAudioAmbienceBox(UNatAudioAmbienceBox&&); \
	NO_API UNatAudioAmbienceBox(const UNatAudioAmbienceBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNatAudioAmbienceBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNatAudioAmbienceBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNatAudioAmbienceBox)


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___onBeginOverlapAudioEvent() { return STRUCT_OFFSET(UNatAudioAmbienceBox, _onBeginOverlapAudioEvent); } \
	FORCEINLINE static uint32 __PPO___onEndOverlapAudioEvent() { return STRUCT_OFFSET(UNatAudioAmbienceBox, _onEndOverlapAudioEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UNatAudioAmbienceBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_NatAudioAmbienceBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
