// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_AtlantaPendingContent_generated_h
#error "AtlantaPendingContent.generated.h already included, missing '#pragma once' in AtlantaPendingContent.h"
#endif
#define DEADBYDAYLIGHT_AtlantaPendingContent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_7_DELEGATE \
static inline void FAtlantaPendingContentOnSucceeded_DelegateWrapper(const FScriptDelegate& AtlantaPendingContentOnSucceeded) \
{ \
	AtlantaPendingContentOnSucceeded.ProcessDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_6_DELEGATE \
struct _Script_DeadByDaylight_eventAtlantaPendingContentOnFailed_Parms \
{ \
	FText ErrorText; \
	int32 ErrorCode; \
}; \
static inline void FAtlantaPendingContentOnFailed_DelegateWrapper(const FScriptDelegate& AtlantaPendingContentOnFailed, const FText& ErrorText, int32 ErrorCode) \
{ \
	_Script_DeadByDaylight_eventAtlantaPendingContentOnFailed_Parms Parms; \
	Parms.ErrorText=ErrorText; \
	Parms.ErrorCode=ErrorCode; \
	AtlantaPendingContentOnFailed.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDownloadSize); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetIsDownloading); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execStartInstall);


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDownloadSize); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetIsDownloading); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execStartInstall);


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtlantaPendingContent(); \
	friend struct Z_Construct_UClass_UAtlantaPendingContent_Statics; \
public: \
	DECLARE_CLASS(UAtlantaPendingContent, UAtlantaInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAtlantaPendingContent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAtlantaPendingContent(); \
	friend struct Z_Construct_UClass_UAtlantaPendingContent_Statics; \
public: \
	DECLARE_CLASS(UAtlantaPendingContent, UAtlantaInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAtlantaPendingContent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtlantaPendingContent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtlantaPendingContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlantaPendingContent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlantaPendingContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtlantaPendingContent(UAtlantaPendingContent&&); \
	NO_API UAtlantaPendingContent(const UAtlantaPendingContent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtlantaPendingContent(UAtlantaPendingContent&&); \
	NO_API UAtlantaPendingContent(const UAtlantaPendingContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlantaPendingContent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlantaPendingContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtlantaPendingContent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAtlantaPendingContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPendingContent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
