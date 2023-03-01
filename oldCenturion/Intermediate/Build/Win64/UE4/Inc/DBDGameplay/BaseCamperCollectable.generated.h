// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_BaseCamperCollectable_generated_h
#error "BaseCamperCollectable.generated.h already included, missing '#pragma once' in BaseCamperCollectable.h"
#endif
#define DBDGAMEPLAY_BaseCamperCollectable_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCamperCollectable(); \
	friend struct Z_Construct_UClass_ABaseCamperCollectable_Statics; \
public: \
	DECLARE_CLASS(ABaseCamperCollectable, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(ABaseCamperCollectable)


#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseCamperCollectable(); \
	friend struct Z_Construct_UClass_ABaseCamperCollectable_Statics; \
public: \
	DECLARE_CLASS(ABaseCamperCollectable, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(ABaseCamperCollectable)


#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCamperCollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCamperCollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCamperCollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCamperCollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCamperCollectable(ABaseCamperCollectable&&); \
	NO_API ABaseCamperCollectable(const ABaseCamperCollectable&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCamperCollectable(ABaseCamperCollectable&&); \
	NO_API ABaseCamperCollectable(const ABaseCamperCollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCamperCollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCamperCollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCamperCollectable)


#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactable() { return STRUCT_OFFSET(ABaseCamperCollectable, _interactable); } \
	FORCEINLINE static uint32 __PPO___collectableInteractor() { return STRUCT_OFFSET(ABaseCamperCollectable, _collectableInteractor); } \
	FORCEINLINE static uint32 __PPO___dropInteraction() { return STRUCT_OFFSET(ABaseCamperCollectable, _dropInteraction); } \
	FORCEINLINE static uint32 __PPO___collectInteraction() { return STRUCT_OFFSET(ABaseCamperCollectable, _collectInteraction); } \
	FORCEINLINE static uint32 __PPO___infectablePrimitive() { return STRUCT_OFFSET(ABaseCamperCollectable, _infectablePrimitive); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ABaseCamperCollectable, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___materialHelper() { return STRUCT_OFFSET(ABaseCamperCollectable, _materialHelper); } \
	FORCEINLINE static uint32 __PPO___survivorCollectableOutlineUpdateStrategy() { return STRUCT_OFFSET(ABaseCamperCollectable, _survivorCollectableOutlineUpdateStrategy); }


#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_15_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class ABaseCamperCollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_BaseCamperCollectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
