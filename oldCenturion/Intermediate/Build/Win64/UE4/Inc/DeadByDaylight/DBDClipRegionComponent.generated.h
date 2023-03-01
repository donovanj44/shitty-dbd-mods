// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDBDClipRegionComponent;
class UMaterialInstanceDynamic;
class UMeshComponent;
#ifdef DEADBYDAYLIGHT_DBDClipRegionComponent_generated_h
#error "DBDClipRegionComponent.generated.h already included, missing '#pragma once' in DBDClipRegionComponent.h"
#endif
#define DEADBYDAYLIGHT_DBDClipRegionComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyArrayOfClipsToDynamicMaterial); \
	DECLARE_FUNCTION(execApplyClipToDynamicMaterial);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyArrayOfClipsToDynamicMaterial); \
	DECLARE_FUNCTION(execApplyClipToDynamicMaterial);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_EVENT_PARMS \
	struct DBDClipRegionComponent_eventApplyClip_Parms \
	{ \
		UMaterialInstanceDynamic* InMaterial2clip; \
		int32 InRegionID; \
	}; \
	struct DBDClipRegionComponent_eventClipDistance_Parms \
	{ \
		UMeshComponent* InMeshComponent; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDClipRegionComponent_eventClipDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct DBDClipRegionComponent_eventNotifyShouldClipComponent_Parms \
	{ \
		UMeshComponent* InMeshComponent; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDClipRegionComponent(); \
	friend struct Z_Construct_UClass_UDBDClipRegionComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDClipRegionComponent, UDBDLocatorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDClipRegionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDBDClipRegionComponent(); \
	friend struct Z_Construct_UClass_UDBDClipRegionComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDClipRegionComponent, UDBDLocatorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDClipRegionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDClipRegionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDClipRegionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDClipRegionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDClipRegionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDClipRegionComponent(UDBDClipRegionComponent&&); \
	NO_API UDBDClipRegionComponent(const UDBDClipRegionComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDClipRegionComponent(UDBDClipRegionComponent&&); \
	NO_API UDBDClipRegionComponent(const UDBDClipRegionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDClipRegionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDClipRegionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDClipRegionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AffectedMaterialsAndVariants() { return STRUCT_OFFSET(UDBDClipRegionComponent, AffectedMaterialsAndVariants); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDClipRegionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDClipRegionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
