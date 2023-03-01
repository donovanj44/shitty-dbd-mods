// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class UAkAudioEvent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEADBYDAYLIGHT_DBD_SoundClipUtil_generated_h
#error "DBD_SoundClipUtil.generated.h already included, missing '#pragma once' in DBD_SoundClipUtil.h"
#endif
#define DEADBYDAYLIGHT_DBD_SoundClipUtil_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAudioEventForMesh); \
	DECLARE_FUNCTION(execOnCharacterEnterSoundRegion);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAudioEventForMesh); \
	DECLARE_FUNCTION(execOnCharacterEnterSoundRegion);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_EVENT_PARMS \
	struct DBD_SoundClipUtil_eventOnGotMeshToTriggerSound_Parms \
	{ \
		UStaticMeshComponent* usm; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBD_SoundClipUtil(); \
	friend struct Z_Construct_UClass_UDBD_SoundClipUtil_Statics; \
public: \
	DECLARE_CLASS(UDBD_SoundClipUtil, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBD_SoundClipUtil)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDBD_SoundClipUtil(); \
	friend struct Z_Construct_UClass_UDBD_SoundClipUtil_Statics; \
public: \
	DECLARE_CLASS(UDBD_SoundClipUtil, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBD_SoundClipUtil)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBD_SoundClipUtil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBD_SoundClipUtil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBD_SoundClipUtil); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBD_SoundClipUtil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBD_SoundClipUtil(UDBD_SoundClipUtil&&); \
	NO_API UDBD_SoundClipUtil(const UDBD_SoundClipUtil&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBD_SoundClipUtil(UDBD_SoundClipUtil&&); \
	NO_API UDBD_SoundClipUtil(const UDBD_SoundClipUtil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBD_SoundClipUtil); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBD_SoundClipUtil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBD_SoundClipUtil)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___audioEventMap() { return STRUCT_OFFSET(UDBD_SoundClipUtil, _audioEventMap); } \
	FORCEINLINE static uint32 __PPO___objectsWhoHavePlayedASound() { return STRUCT_OFFSET(UDBD_SoundClipUtil, _objectsWhoHavePlayedASound); } \
	FORCEINLINE static uint32 __PPO___nextSoundPlayTime() { return STRUCT_OFFSET(UDBD_SoundClipUtil, _nextSoundPlayTime); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_14_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBD_SoundClipUtil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBD_SoundClipUtil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
