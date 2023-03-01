// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DEADBYDAYLIGHT_ClipManager_generated_h
#error "ClipManager.generated.h already included, missing '#pragma once' in ClipManager.h"
#endif
#define DEADBYDAYLIGHT_ClipManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveDissolveMaterials); \
	DECLARE_FUNCTION(execSphericalDissolveAt);


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveDissolveMaterials); \
	DECLARE_FUNCTION(execSphericalDissolveAt);


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClipManager(); \
	friend struct Z_Construct_UClass_AClipManager_Statics; \
public: \
	DECLARE_CLASS(AClipManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AClipManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAClipManager(); \
	friend struct Z_Construct_UClass_AClipManager_Statics; \
public: \
	DECLARE_CLASS(AClipManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AClipManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClipManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClipManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClipManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClipManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClipManager(AClipManager&&); \
	NO_API AClipManager(const AClipManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClipManager(AClipManager&&); \
	NO_API AClipManager(const AClipManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClipManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClipManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClipManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___clippingZones() { return STRUCT_OFFSET(AClipManager, _clippingZones); } \
	FORCEINLINE static uint32 __PPO___meshComponents() { return STRUCT_OFFSET(AClipManager, _meshComponents); } \
	FORCEINLINE static uint32 __PPO___dissolvedMeshes() { return STRUCT_OFFSET(AClipManager, _dissolvedMeshes); } \
	FORCEINLINE static uint32 __PPO___normal2dissolve() { return STRUCT_OFFSET(AClipManager, _normal2dissolve); } \
	FORCEINLINE static uint32 __PPO___dissolve2normal() { return STRUCT_OFFSET(AClipManager, _dissolve2normal); } \
	FORCEINLINE static uint32 __PPO___sphericalDissolveMaterials() { return STRUCT_OFFSET(AClipManager, _sphericalDissolveMaterials); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AClipManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ClipManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
