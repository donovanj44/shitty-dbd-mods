// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
class UMaterialInterface;
struct FLinearColor;
#ifdef DEADBYDAYLIGHT_DBDOutlineComponent_generated_h
#error "DBDOutlineComponent.generated.h already included, missing '#pragma once' in DBDOutlineComponent.h"
#endif
#define DEADBYDAYLIGHT_DBDOutlineComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitBatcher); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execRefreshOutlineComponent); \
	DECLARE_FUNCTION(execResetToTransparent); \
	DECLARE_FUNCTION(execSetFadeIntensity); \
	DECLARE_FUNCTION(execSetFadeTexture); \
	DECLARE_FUNCTION(execSetIsOccludingOutlines); \
	DECLARE_FUNCTION(execSetMaterialCopyTarget); \
	DECLARE_FUNCTION(execSetMinimumOutlineDistance); \
	DECLARE_FUNCTION(execSetOutlineIntensity); \
	DECLARE_FUNCTION(execSetTargetColor);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitBatcher); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execRefreshOutlineComponent); \
	DECLARE_FUNCTION(execResetToTransparent); \
	DECLARE_FUNCTION(execSetFadeIntensity); \
	DECLARE_FUNCTION(execSetFadeTexture); \
	DECLARE_FUNCTION(execSetIsOccludingOutlines); \
	DECLARE_FUNCTION(execSetMaterialCopyTarget); \
	DECLARE_FUNCTION(execSetMinimumOutlineDistance); \
	DECLARE_FUNCTION(execSetOutlineIntensity); \
	DECLARE_FUNCTION(execSetTargetColor);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDOutlineComponent(); \
	friend struct Z_Construct_UClass_UDBDOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDOutlineComponent, UBatchMeshCommands, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDOutlineComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDBDOutlineComponent(); \
	friend struct Z_Construct_UClass_UDBDOutlineComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDOutlineComponent, UBatchMeshCommands, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDOutlineComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDOutlineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDOutlineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDOutlineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDOutlineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDOutlineComponent(UDBDOutlineComponent&&); \
	NO_API UDBDOutlineComponent(const UDBDOutlineComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDOutlineComponent(UDBDOutlineComponent&&); \
	NO_API UDBDOutlineComponent(const UDBDOutlineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDOutlineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDOutlineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDOutlineComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OutlineName() { return STRUCT_OFFSET(UDBDOutlineComponent, OutlineName); } \
	FORCEINLINE static uint32 __PPO___renderStrategySelector() { return STRUCT_OFFSET(UDBDOutlineComponent, _renderStrategySelector); } \
	FORCEINLINE static uint32 __PPO___batchMeshCommands() { return STRUCT_OFFSET(UDBDOutlineComponent, _batchMeshCommands); } \
	FORCEINLINE static uint32 __PPO___renderingStrategy() { return STRUCT_OFFSET(UDBDOutlineComponent, _renderingStrategy); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDOutlineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDOutlineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
