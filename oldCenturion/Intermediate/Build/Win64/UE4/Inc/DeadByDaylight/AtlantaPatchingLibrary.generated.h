// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtlantaPendingContent;
class UAtlantaInstalledContent;
#ifdef DEADBYDAYLIGHT_AtlantaPatchingLibrary_generated_h
#error "AtlantaPatchingLibrary.generated.h already included, missing '#pragma once' in AtlantaPatchingLibrary.h"
#endif
#define DEADBYDAYLIGHT_AtlantaPatchingLibrary_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventAtlantaPatchingLibraryOnSucceeded_Parms \
{ \
	UAtlantaPendingContent* MobilePendingContent; \
}; \
static inline void FAtlantaPatchingLibraryOnSucceeded_DelegateWrapper(const FScriptDelegate& AtlantaPatchingLibraryOnSucceeded, UAtlantaPendingContent* MobilePendingContent) \
{ \
	_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnSucceeded_Parms Parms; \
	Parms.MobilePendingContent=MobilePendingContent; \
	AtlantaPatchingLibraryOnSucceeded.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventAtlantaPatchingLibraryOnFailed_Parms \
{ \
	FText ErrorText; \
	int32 ErrorCode; \
}; \
static inline void FAtlantaPatchingLibraryOnFailed_DelegateWrapper(const FScriptDelegate& AtlantaPatchingLibraryOnFailed, const FText& ErrorText, int32 ErrorCode) \
{ \
	_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnFailed_Parms Parms; \
	Parms.ErrorText=ErrorText; \
	Parms.ErrorCode=ErrorCode; \
	AtlantaPatchingLibraryOnFailed.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execGetInstalledContent); \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execPrintPakLocations); \
	DECLARE_FUNCTION(execRequestContent);


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execGetInstalledContent); \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execPrintPakLocations); \
	DECLARE_FUNCTION(execRequestContent);


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtlantaPatchingLibrary(); \
	friend struct Z_Construct_UClass_UAtlantaPatchingLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtlantaPatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAtlantaPatchingLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAtlantaPatchingLibrary(); \
	friend struct Z_Construct_UClass_UAtlantaPatchingLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtlantaPatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAtlantaPatchingLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtlantaPatchingLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtlantaPatchingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlantaPatchingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlantaPatchingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtlantaPatchingLibrary(UAtlantaPatchingLibrary&&); \
	NO_API UAtlantaPatchingLibrary(const UAtlantaPatchingLibrary&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtlantaPatchingLibrary(UAtlantaPatchingLibrary&&); \
	NO_API UAtlantaPatchingLibrary(const UAtlantaPatchingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlantaPatchingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlantaPatchingLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtlantaPatchingLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAtlantaPatchingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AtlantaPatchingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
