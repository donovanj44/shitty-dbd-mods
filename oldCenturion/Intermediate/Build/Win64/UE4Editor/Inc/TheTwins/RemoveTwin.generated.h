// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimationMontageDescriptor;
class ADBDPlayer;
#ifdef THETWINS_RemoveTwin_generated_h
#error "RemoveTwin.generated.h already included, missing '#pragma once' in RemoveTwin.h"
#endif
#define THETWINS_RemoveTwin_generated_h

#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRemoveMontageEnd);


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRemoveMontageEnd);


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoveTwin(); \
	friend struct Z_Construct_UClass_URemoveTwin_Statics; \
public: \
	DECLARE_CLASS(URemoveTwin, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(URemoveTwin)


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURemoveTwin(); \
	friend struct Z_Construct_UClass_URemoveTwin_Statics; \
public: \
	DECLARE_CLASS(URemoveTwin, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(URemoveTwin)


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoveTwin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoveTwin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoveTwin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoveTwin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoveTwin(URemoveTwin&&); \
	NO_API URemoveTwin(const URemoveTwin&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoveTwin(URemoveTwin&&); \
	NO_API URemoveTwin(const URemoveTwin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoveTwin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoveTwin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoveTwin)


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___removeTwinMaxCharge() { return STRUCT_OFFSET(URemoveTwin, _removeTwinMaxCharge); } \
	FORCEINLINE static uint32 __PPO___removeTwinExitTime() { return STRUCT_OFFSET(URemoveTwin, _removeTwinExitTime); } \
	FORCEINLINE static uint32 __PPO___brotherRemoveDistanceFromSurvivor() { return STRUCT_OFFSET(URemoveTwin, _brotherRemoveDistanceFromSurvivor); }


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_10_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class URemoveTwin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_RemoveTwin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
