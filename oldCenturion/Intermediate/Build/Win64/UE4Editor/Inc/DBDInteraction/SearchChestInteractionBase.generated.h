// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDINTERACTION_SearchChestInteractionBase_generated_h
#error "SearchChestInteractionBase.generated.h already included, missing '#pragma once' in SearchChestInteractionBase.h"
#endif
#define DBDINTERACTION_SearchChestInteractionBase_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireChestScoreEvent);


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireChestScoreEvent);


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSearchChestInteractionBase(); \
	friend struct Z_Construct_UClass_USearchChestInteractionBase_Statics; \
public: \
	DECLARE_CLASS(USearchChestInteractionBase, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(USearchChestInteractionBase)


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSearchChestInteractionBase(); \
	friend struct Z_Construct_UClass_USearchChestInteractionBase_Statics; \
public: \
	DECLARE_CLASS(USearchChestInteractionBase, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(USearchChestInteractionBase)


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USearchChestInteractionBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USearchChestInteractionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchChestInteractionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchChestInteractionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USearchChestInteractionBase(USearchChestInteractionBase&&); \
	NO_API USearchChestInteractionBase(const USearchChestInteractionBase&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USearchChestInteractionBase(USearchChestInteractionBase&&); \
	NO_API USearchChestInteractionBase(const USearchChestInteractionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchChestInteractionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchChestInteractionBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USearchChestInteractionBase)


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___handleCompletionScoreEvents() { return STRUCT_OFFSET(USearchChestInteractionBase, _handleCompletionScoreEvents); } \
	FORCEINLINE static uint32 __PPO___searchableCompleteContributionPercentTag() { return STRUCT_OFFSET(USearchChestInteractionBase, _searchableCompleteContributionPercentTag); } \
	FORCEINLINE static uint32 __PPO___scoreEventFired() { return STRUCT_OFFSET(USearchChestInteractionBase, _scoreEventFired); } \
	FORCEINLINE static uint32 __PPO___owningChest() { return STRUCT_OFFSET(USearchChestInteractionBase, _owningChest); } \
	FORCEINLINE static uint32 __PPO___onLastInteractionWasComplete() { return STRUCT_OFFSET(USearchChestInteractionBase, _onLastInteractionWasComplete); }


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_10_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class USearchChestInteractionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_SearchChestInteractionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
