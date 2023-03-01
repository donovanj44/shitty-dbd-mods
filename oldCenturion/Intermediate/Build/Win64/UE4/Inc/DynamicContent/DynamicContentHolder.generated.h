// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDownloadMultiTextureTask;
#ifdef DYNAMICCONTENT_DynamicContentHolder_generated_h
#error "DynamicContentHolder.generated.h already included, missing '#pragma once' in DynamicContentHolder.h"
#endif
#define DYNAMICCONTENT_DynamicContentHolder_generated_h

#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDownloadingTaskComplete);


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDownloadingTaskComplete);


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicContentHolder(); \
	friend struct Z_Construct_UClass_UDynamicContentHolder_Statics; \
public: \
	DECLARE_CLASS(UDynamicContentHolder, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UDynamicContentHolder)


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicContentHolder(); \
	friend struct Z_Construct_UClass_UDynamicContentHolder_Statics; \
public: \
	DECLARE_CLASS(UDynamicContentHolder, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicContent"), NO_API) \
	DECLARE_SERIALIZER(UDynamicContentHolder)


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicContentHolder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicContentHolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicContentHolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicContentHolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicContentHolder(UDynamicContentHolder&&); \
	NO_API UDynamicContentHolder(const UDynamicContentHolder&); \
public:


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicContentHolder(UDynamicContentHolder&&); \
	NO_API UDynamicContentHolder(const UDynamicContentHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicContentHolder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicContentHolder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicContentHolder)


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___loadedTextures() { return STRUCT_OFFSET(UDynamicContentHolder, _loadedTextures); } \
	FORCEINLINE static uint32 __PPO___currentTasks() { return STRUCT_OFFSET(UDynamicContentHolder, _currentTasks); } \
	FORCEINLINE static uint32 __PPO___marketingBannerProvider() { return STRUCT_OFFSET(UDynamicContentHolder, _marketingBannerProvider); } \
	FORCEINLINE static uint32 __PPO___eventsBannerProvider() { return STRUCT_OFFSET(UDynamicContentHolder, _eventsBannerProvider); } \
	FORCEINLINE static uint32 __PPO___loadingImagesDataProvider() { return STRUCT_OFFSET(UDynamicContentHolder, _loadingImagesDataProvider); }


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_12_PROLOG
#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_INCLASS \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICCONTENT_API UClass* StaticClass<class UDynamicContentHolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DynamicContent_Public_DynamicContentHolder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
