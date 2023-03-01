// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2DDynamic;
#ifdef DYNAMICCONTENT_AsyncTaskDownloadCacheImage_generated_h
#error "AsyncTaskDownloadCacheImage.generated.h already included, missing '#pragma once' in AsyncTaskDownloadCacheImage.h"
#endif
#define DYNAMICCONTENT_AsyncTaskDownloadCacheImage_generated_h

#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_9_DELEGATE \
struct _Script_DynamicContent_eventAsyncTaskDownloadCacheImageOnFail_Parms \
{ \
	UTexture2DDynamic* Texture; \
}; \
static inline void FAsyncTaskDownloadCacheImageOnFail_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskDownloadCacheImageOnFail, UTexture2DDynamic* Texture) \
{ \
	_Script_DynamicContent_eventAsyncTaskDownloadCacheImageOnFail_Parms Parms; \
	Parms.Texture=Texture; \
	AsyncTaskDownloadCacheImageOnFail.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_8_DELEGATE \
struct _Script_DynamicContent_eventAsyncTaskDownloadCacheImageOnSuccess_Parms \
{ \
	UTexture2DDynamic* Texture; \
}; \
static inline void FAsyncTaskDownloadCacheImageOnSuccess_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskDownloadCacheImageOnSuccess, UTexture2DDynamic* Texture) \
{ \
	_Script_DynamicContent_eventAsyncTaskDownloadCacheImageOnSuccess_Parms Parms; \
	Parms.Texture=Texture; \
	AsyncTaskDownloadCacheImageOnSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadCacheImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadCacheImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadCacheImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadCacheImage)


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadCacheImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadCacheImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadCacheImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadCacheImage)


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskDownloadCacheImage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadCacheImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskDownloadCacheImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadCacheImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskDownloadCacheImage(UAsyncTaskDownloadCacheImage&&); \
	NO_API UAsyncTaskDownloadCacheImage(const UAsyncTaskDownloadCacheImage&); \
public:


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskDownloadCacheImage(UAsyncTaskDownloadCacheImage&&); \
	NO_API UAsyncTaskDownloadCacheImage(const UAsyncTaskDownloadCacheImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskDownloadCacheImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadCacheImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncTaskDownloadCacheImage)


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___url() { return STRUCT_OFFSET(UAsyncTaskDownloadCacheImage, _url); }


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_11_PROLOG
#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_INCLASS \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICCONTENT_API UClass* StaticClass<class UAsyncTaskDownloadCacheImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DynamicContent_Public_AsyncTaskDownloadCacheImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
