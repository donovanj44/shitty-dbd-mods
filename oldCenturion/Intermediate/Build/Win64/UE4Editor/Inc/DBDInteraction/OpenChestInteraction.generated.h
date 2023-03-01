// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACollectable;
class ADBDPlayer;
#ifdef DBDINTERACTION_OpenChestInteraction_generated_h
#error "OpenChestInteraction.generated.h already included, missing '#pragma once' in OpenChestInteraction.h"
#endif
#define DBDINTERACTION_OpenChestInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectItemIfEmptyHanded);


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectItemIfEmptyHanded);


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenChestInteraction(); \
	friend struct Z_Construct_UClass_UOpenChestInteraction_Statics; \
public: \
	DECLARE_CLASS(UOpenChestInteraction, USearchChestInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UOpenChestInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenChestInteraction(); \
	friend struct Z_Construct_UClass_UOpenChestInteraction_Statics; \
public: \
	DECLARE_CLASS(UOpenChestInteraction, USearchChestInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UOpenChestInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenChestInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenChestInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenChestInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenChestInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenChestInteraction(UOpenChestInteraction&&); \
	NO_API UOpenChestInteraction(const UOpenChestInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenChestInteraction(UOpenChestInteraction&&); \
	NO_API UOpenChestInteraction(const UOpenChestInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenChestInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenChestInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenChestInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___camperSearchablePercentTag() { return STRUCT_OFFSET(UOpenChestInteraction, _camperSearchablePercentTag); } \
	FORCEINLINE static uint32 __PPO___successExitTimeAnimSequenceReference() { return STRUCT_OFFSET(UOpenChestInteraction, _successExitTimeAnimSequenceReference); } \
	FORCEINLINE static uint32 __PPO___startTime() { return STRUCT_OFFSET(UOpenChestInteraction, _startTime); }


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_11_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UOpenChestInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_OpenChestInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
