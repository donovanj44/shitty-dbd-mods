// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2DDynamic;
#ifdef DYNAMICCONTENT_DownloadingTextureTask_generated_h
#error "DownloadingTextureTask.generated.h already included, missing '#pragma once' in DownloadingTextureTask.h"
#endif
#define DYNAMICCONTENT_DownloadingTextureTask_generated_h

#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDownloadFailed); \
	DECLARE_FUNCTION(execOnDownloadSucceeded);


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDownloadFailed); \
	DECLARE_FUNCTION(execOnDownloadSucceeded);


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDownloadingTextureTask(); \
	friend struct Z_Construct_UClass_UDownloadingTextureTask_Statics; \
public: \
	DECLARE_CLASS(UDownloadingTextureTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UDownloadingTextureTask)


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDownloadingTextureTask(); \
	friend struct Z_Construct_UClass_UDownloadingTextureTask_Statics; \
public: \
	DECLARE_CLASS(UDownloadingTextureTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UDownloadingTextureTask)


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadingTextureTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadingTextureTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadingTextureTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadingTextureTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadingTextureTask(UDownloadingTextureTask&&); \
	NO_API UDownloadingTextureTask(const UDownloadingTextureTask&); \
public:


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadingTextureTask(UDownloadingTextureTask&&); \
	NO_API UDownloadingTextureTask(const UDownloadingTextureTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadingTextureTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadingTextureTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDownloadingTextureTask)


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___downloadingTask() { return STRUCT_OFFSET(UDownloadingTextureTask, _downloadingTask); } \
	FORCEINLINE static uint32 __PPO___url() { return STRUCT_OFFSET(UDownloadingTextureTask, _url); } \
	FORCEINLINE static uint32 __PPO___downloadedTexture() { return STRUCT_OFFSET(UDownloadingTextureTask, _downloadedTexture); }


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_9_PROLOG
#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_INCLASS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICCONTENT_API UClass* StaticClass<class UDownloadingTextureTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DynamicContent_Public_DownloadingTextureTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
