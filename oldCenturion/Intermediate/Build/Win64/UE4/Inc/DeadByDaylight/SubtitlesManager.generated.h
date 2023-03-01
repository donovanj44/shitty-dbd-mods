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
class UAkGameObject;
struct FAkEventWithSubtitle;
struct FAkExternalSourceInfo;
#ifdef DEADBYDAYLIGHT_SubtitlesManager_generated_h
#error "SubtitlesManager.generated.h already included, missing '#pragma once' in SubtitlesManager.h"
#endif
#define DEADBYDAYLIGHT_SubtitlesManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventSubtitlesManagerPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FSubtitlesManagerPostEventCallback_DelegateWrapper(const FScriptDelegate& SubtitlesManagerPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_DeadByDaylight_eventSubtitlesManagerPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	SubtitlesManagerPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostAkEventWithSubtitles);


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostAkEventWithSubtitles);


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitlesManager(); \
	friend struct Z_Construct_UClass_USubtitlesManager_Statics; \
public: \
	DECLARE_CLASS(USubtitlesManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USubtitlesManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSubtitlesManager(); \
	friend struct Z_Construct_UClass_USubtitlesManager_Statics; \
public: \
	DECLARE_CLASS(USubtitlesManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USubtitlesManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubtitlesManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitlesManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitlesManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubtitlesManager(USubtitlesManager&&); \
	NO_API USubtitlesManager(const USubtitlesManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubtitlesManager(USubtitlesManager&&); \
	NO_API USubtitlesManager(const USubtitlesManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitlesManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubtitlesManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class USubtitlesManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SubtitlesManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
