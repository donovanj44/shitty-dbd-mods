// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
#ifdef DBDAUDIO_InteractionAudioComponent_generated_h
#error "InteractionAudioComponent.generated.h already included, missing '#pragma once' in InteractionAudioComponent.h"
#endif
#define DBDAUDIO_InteractionAudioComponent_generated_h

#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostAkEvent);


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostAkEvent);


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionAudioComponent(); \
	friend struct Z_Construct_UClass_UInteractionAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionAudioComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDAudio"), NO_API) \
	DECLARE_SERIALIZER(UInteractionAudioComponent)


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionAudioComponent(); \
	friend struct Z_Construct_UClass_UInteractionAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionAudioComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDAudio"), NO_API) \
	DECLARE_SERIALIZER(UInteractionAudioComponent)


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionAudioComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionAudioComponent(UInteractionAudioComponent&&); \
	NO_API UInteractionAudioComponent(const UInteractionAudioComponent&); \
public:


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionAudioComponent(UInteractionAudioComponent&&); \
	NO_API UInteractionAudioComponent(const UInteractionAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionAudioComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionAudioComponent)


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___audioComponent() { return STRUCT_OFFSET(UInteractionAudioComponent, _audioComponent); } \
	FORCEINLINE static uint32 __PPO___audioRadius() { return STRUCT_OFFSET(UInteractionAudioComponent, _audioRadius); }


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_10_PROLOG
#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_INCLASS \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDAUDIO_API UClass* StaticClass<class UInteractionAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAudio_Public_InteractionAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
