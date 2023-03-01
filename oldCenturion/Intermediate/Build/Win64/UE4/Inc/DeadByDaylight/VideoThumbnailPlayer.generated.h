// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_VideoThumbnailPlayer_generated_h
#error "VideoThumbnailPlayer.generated.h already included, missing '#pragma once' in VideoThumbnailPlayer.h"
#endif
#define DEADBYDAYLIGHT_VideoThumbnailPlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndReached); \
	DECLARE_FUNCTION(execOnMediaClosed); \
	DECLARE_FUNCTION(execOnMediaOpened); \
	DECLARE_FUNCTION(execOnVideoAssetLoaded);


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndReached); \
	DECLARE_FUNCTION(execOnMediaClosed); \
	DECLARE_FUNCTION(execOnMediaOpened); \
	DECLARE_FUNCTION(execOnVideoAssetLoaded);


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVideoThumbnailPlayer(); \
	friend struct Z_Construct_UClass_AVideoThumbnailPlayer_Statics; \
public: \
	DECLARE_CLASS(AVideoThumbnailPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AVideoThumbnailPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AVideoThumbnailPlayer*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVideoThumbnailPlayer(); \
	friend struct Z_Construct_UClass_AVideoThumbnailPlayer_Statics; \
public: \
	DECLARE_CLASS(AVideoThumbnailPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AVideoThumbnailPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AVideoThumbnailPlayer*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVideoThumbnailPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVideoThumbnailPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVideoThumbnailPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVideoThumbnailPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVideoThumbnailPlayer(AVideoThumbnailPlayer&&); \
	NO_API AVideoThumbnailPlayer(const AVideoThumbnailPlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVideoThumbnailPlayer(AVideoThumbnailPlayer&&); \
	NO_API AVideoThumbnailPlayer(const AVideoThumbnailPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVideoThumbnailPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVideoThumbnailPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVideoThumbnailPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(AVideoThumbnailPlayer, MediaPlayer); } \
	FORCEINLINE static uint32 __PPO__SoundComponent() { return STRUCT_OFFSET(AVideoThumbnailPlayer, SoundComponent); } \
	FORCEINLINE static uint32 __PPO__VideoPlayerWidget() { return STRUCT_OFFSET(AVideoThumbnailPlayer, VideoPlayerWidget); } \
	FORCEINLINE static uint32 __PPO___audioComponent() { return STRUCT_OFFSET(AVideoThumbnailPlayer, _audioComponent); } \
	FORCEINLINE static uint32 __PPO___source() { return STRUCT_OFFSET(AVideoThumbnailPlayer, _source); }


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AVideoThumbnailPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_VideoThumbnailPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
