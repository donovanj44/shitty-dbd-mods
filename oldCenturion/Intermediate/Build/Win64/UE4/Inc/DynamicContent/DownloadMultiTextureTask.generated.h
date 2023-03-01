// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDownloadingTextureTask;
#ifdef DYNAMICCONTENT_DownloadMultiTextureTask_generated_h
#error "DownloadMultiTextureTask.generated.h already included, missing '#pragma once' in DownloadMultiTextureTask.h"
#endif
#define DYNAMICCONTENT_DownloadMultiTextureTask_generated_h

#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTextureDownloadComplete);


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTextureDownloadComplete);


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDownloadMultiTextureTask(); \
	friend struct Z_Construct_UClass_UDownloadMultiTextureTask_Statics; \
public: \
	DECLARE_CLASS(UDownloadMultiTextureTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UDownloadMultiTextureTask)


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDownloadMultiTextureTask(); \
	friend struct Z_Construct_UClass_UDownloadMultiTextureTask_Statics; \
public: \
	DECLARE_CLASS(UDownloadMultiTextureTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UDownloadMultiTextureTask)


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadMultiTextureTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadMultiTextureTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadMultiTextureTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadMultiTextureTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadMultiTextureTask(UDownloadMultiTextureTask&&); \
	NO_API UDownloadMultiTextureTask(const UDownloadMultiTextureTask&); \
public:


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadMultiTextureTask(UDownloadMultiTextureTask&&); \
	NO_API UDownloadMultiTextureTask(const UDownloadMultiTextureTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadMultiTextureTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadMultiTextureTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDownloadMultiTextureTask)


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___downloadingTasks() { return STRUCT_OFFSET(UDownloadMultiTextureTask, _downloadingTasks); } \
	FORCEINLINE static uint32 __PPO___downloadedTextures() { return STRUCT_OFFSET(UDownloadMultiTextureTask, _downloadedTextures); } \
	FORCEINLINE static uint32 __PPO___remainingTasks() { return STRUCT_OFFSET(UDownloadMultiTextureTask, _remainingTasks); }


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_9_PROLOG
#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_INCLASS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICCONTENT_API UClass* StaticClass<class UDownloadMultiTextureTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DynamicContent_Public_DownloadMultiTextureTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
