// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtlantaPendingContent;
#ifdef DEADBYDAYLIGHT_CDNPatchManager_generated_h
#error "CDNPatchManager.generated.h already included, missing '#pragma once' in CDNPatchManager.h"
#endif
#define DEADBYDAYLIGHT_CDNPatchManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInstallFailed); \
	DECLARE_FUNCTION(execOnInstallSucceeded); \
	DECLARE_FUNCTION(execOnRequestFailed); \
	DECLARE_FUNCTION(execOnRequestSucceeded);


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInstallFailed); \
	DECLARE_FUNCTION(execOnInstallSucceeded); \
	DECLARE_FUNCTION(execOnRequestFailed); \
	DECLARE_FUNCTION(execOnRequestSucceeded);


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCDNPatchManager(); \
	friend struct Z_Construct_UClass_UCDNPatchManager_Statics; \
public: \
	DECLARE_CLASS(UCDNPatchManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCDNPatchManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCDNPatchManager(); \
	friend struct Z_Construct_UClass_UCDNPatchManager_Statics; \
public: \
	DECLARE_CLASS(UCDNPatchManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCDNPatchManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCDNPatchManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCDNPatchManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCDNPatchManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCDNPatchManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCDNPatchManager(UCDNPatchManager&&); \
	NO_API UCDNPatchManager(const UCDNPatchManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCDNPatchManager(UCDNPatchManager&&); \
	NO_API UCDNPatchManager(const UCDNPatchManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCDNPatchManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCDNPatchManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCDNPatchManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___gameInstance() { return STRUCT_OFFSET(UCDNPatchManager, _gameInstance); } \
	FORCEINLINE static uint32 __PPO___currentContentToInstall() { return STRUCT_OFFSET(UCDNPatchManager, _currentContentToInstall); } \
	FORCEINLINE static uint32 __PPO___remainingManifestsToInstall() { return STRUCT_OFFSET(UCDNPatchManager, _remainingManifestsToInstall); } \
	FORCEINLINE static uint32 __PPO___contentToInstall() { return STRUCT_OFFSET(UCDNPatchManager, _contentToInstall); } \
	FORCEINLINE static uint32 __PPO___MobilePendingContent() { return STRUCT_OFFSET(UCDNPatchManager, _MobilePendingContent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCDNPatchManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CDNPatchManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
