// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
class UObject;
class UAkAudioEvent;
class AActor;
struct FAkExternalSourceInfo;
class UPostEventAsync;
#ifdef AKAUDIO_PostEventAsync_generated_h
#error "PostEventAsync.generated.h already included, missing '#pragma once' in PostEventAsync.h"
#endif
#define AKAUDIO_PostEventAsync_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_15_DELEGATE \
struct _Script_AkAudio_eventPostEventAsyncCompleted_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAsyncCompleted_DelegateWrapper(const FMulticastScriptDelegate& PostEventAsyncCompleted, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAsyncCompleted_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAsyncCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_14_DELEGATE \
struct _Script_AkAudio_eventPostEventAsyncPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FPostEventAsyncPostEventCallback_DelegateWrapper(const FScriptDelegate& PostEventAsyncPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_AkAudio_eventPostEventAsyncPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	PostEventAsyncPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPostEventAsync)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_17_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_PostEventAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
