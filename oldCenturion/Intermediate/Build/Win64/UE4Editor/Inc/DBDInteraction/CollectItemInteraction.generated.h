// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACollectable;
#ifdef DBDINTERACTION_CollectItemInteraction_generated_h
#error "CollectItemInteraction.generated.h already included, missing '#pragma once' in CollectItemInteraction.h"
#endif
#define DBDINTERACTION_CollectItemInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_9_DELEGATE \
static inline void FCollectItemInteractionOnCollectUpdateEnd_DelegateWrapper(const FMulticastScriptDelegate& CollectItemInteractionOnCollectUpdateEnd) \
{ \
	CollectItemInteractionOnCollectUpdateEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_8_DELEGATE \
static inline void FCollectItemInteractionOnCollectUpdateStart_DelegateWrapper(const FMulticastScriptDelegate& CollectItemInteractionOnCollectUpdateStart) \
{ \
	CollectItemInteractionOnCollectUpdateStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItem);


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItem);


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectItemInteraction(); \
	friend struct Z_Construct_UClass_UCollectItemInteraction_Statics; \
public: \
	DECLARE_CLASS(UCollectItemInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UCollectItemInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCollectItemInteraction(); \
	friend struct Z_Construct_UClass_UCollectItemInteraction_Statics; \
public: \
	DECLARE_CLASS(UCollectItemInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UCollectItemInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectItemInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectItemInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectItemInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectItemInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectItemInteraction(UCollectItemInteraction&&); \
	NO_API UCollectItemInteraction(const UCollectItemInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectItemInteraction(UCollectItemInteraction&&); \
	NO_API UCollectItemInteraction(const UCollectItemInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectItemInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectItemInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCollectItemInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_11_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UCollectItemInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_CollectItemInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
