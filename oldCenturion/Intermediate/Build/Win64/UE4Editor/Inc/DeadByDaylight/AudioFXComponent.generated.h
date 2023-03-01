// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef DEADBYDAYLIGHT_AudioFXComponent_generated_h
#error "AudioFXComponent.generated.h already included, missing '#pragma once' in AudioFXComponent.h"
#endif
#define DEADBYDAYLIGHT_AudioFXComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeafen); \
	DECLARE_FUNCTION(execOnDeafenCompleted); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execSetAudioAmbientDetector);


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeafen); \
	DECLARE_FUNCTION(execOnDeafenCompleted); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execSetAudioAmbientDetector);


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioFXComponent(); \
	friend struct Z_Construct_UClass_UAudioFXComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAudioFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAudioFXComponent(); \
	friend struct Z_Construct_UClass_UAudioFXComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAudioFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioFXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioFXComponent(UAudioFXComponent&&); \
	NO_API UAudioFXComponent(const UAudioFXComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioFXComponent(UAudioFXComponent&&); \
	NO_API UAudioFXComponent(const UAudioFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___audioAmbientDetector() { return STRUCT_OFFSET(UAudioFXComponent, _audioAmbientDetector); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAudioFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AudioFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
