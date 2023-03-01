// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
struct FVector;
#ifdef DEADBYDAYLIGHT_BreakableBase_generated_h
#error "BreakableBase.generated.h already included, missing '#pragma once' in BreakableBase.h"
#endif
#define DEADBYDAYLIGHT_BreakableBase_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execIsUnbroken); \
	DECLARE_FUNCTION(execPlayAudioBreakable);


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execIsUnbroken); \
	DECLARE_FUNCTION(execPlayAudioBreakable);


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_EVENT_PARMS \
	struct BreakableBase_eventExplodeVfxSfx_Parms \
	{ \
		FVector impulseDir; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableBase(); \
	friend struct Z_Construct_UClass_ABreakableBase_Statics; \
public: \
	DECLARE_CLASS(ABreakableBase, AInteractable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABreakableBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABreakableBase(); \
	friend struct Z_Construct_UClass_ABreakableBase_Statics; \
public: \
	DECLARE_CLASS(ABreakableBase, AInteractable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABreakableBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABreakableBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABreakableBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableBase(ABreakableBase&&); \
	NO_API ABreakableBase(const ABreakableBase&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableBase(ABreakableBase&&); \
	NO_API ABreakableBase(const ABreakableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___breakableCollision() { return STRUCT_OFFSET(ABreakableBase, _breakableCollision); } \
	FORCEINLINE static uint32 __PPO___state() { return STRUCT_OFFSET(ABreakableBase, _state); } \
	FORCEINLINE static uint32 __PPO___akAudioBreakable() { return STRUCT_OFFSET(ABreakableBase, _akAudioBreakable); } \
	FORCEINLINE static uint32 __PPO___akAudioBreakEvent() { return STRUCT_OFFSET(ABreakableBase, _akAudioBreakEvent); } \
	FORCEINLINE static uint32 __PPO___rootComponent() { return STRUCT_OFFSET(ABreakableBase, _rootComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_14_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ABreakableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BreakableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
