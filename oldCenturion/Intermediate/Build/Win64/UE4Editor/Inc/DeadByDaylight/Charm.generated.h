// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_Charm_generated_h
#error "Charm.generated.h already included, missing '#pragma once' in Charm.h"
#endif
#define DEADBYDAYLIGHT_Charm_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_RPC_WRAPPERS \
	virtual void BeginDestroySequence_Internal_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginDestroySequence_Internal);


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginDestroySequence_Internal_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginDestroySequence_Internal);


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharm(); \
	friend struct Z_Construct_UClass_ACharm_Statics; \
public: \
	DECLARE_CLASS(ACharm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACharm) \
	virtual UObject* _getUObject() const override { return const_cast<ACharm*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharm(); \
	friend struct Z_Construct_UClass_ACharm_Statics; \
public: \
	DECLARE_CLASS(ACharm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACharm) \
	virtual UObject* _getUObject() const override { return const_cast<ACharm*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharm(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharm); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharm(ACharm&&); \
	NO_API ACharm(const ACharm&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharm(ACharm&&); \
	NO_API ACharm(const ACharm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharm); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharm)


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___skeletalMeshComponent() { return STRUCT_OFFSET(ACharm, _skeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO___actorVfx() { return STRUCT_OFFSET(ACharm, _actorVfx); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Charm_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ACharm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Charm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
