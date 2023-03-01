// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
class USkeletalMeshComponent;
#ifdef DEADBYDAYLIGHT_ItemVfx_generated_h
#error "ItemVfx.generated.h already included, missing '#pragma once' in ItemVfx.h"
#endif
#define DEADBYDAYLIGHT_ItemVfx_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddParticleSystemComponent); \
	DECLARE_FUNCTION(execClearParticleSystems);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddParticleSystemComponent); \
	DECLARE_FUNCTION(execClearParticleSystems);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_EVENT_PARMS \
	struct ItemVfx_eventAttachToSkeletalMesh_Parms \
	{ \
		USkeletalMeshComponent* SkeletonPart; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemVfx(); \
	friend struct Z_Construct_UClass_AItemVfx_Statics; \
public: \
	DECLARE_CLASS(AItemVfx, ABaseVFX, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AItemVfx)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAItemVfx(); \
	friend struct Z_Construct_UClass_AItemVfx_Statics; \
public: \
	DECLARE_CLASS(AItemVfx, ABaseVFX, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AItemVfx)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemVfx(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemVfx) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemVfx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemVfx); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemVfx(AItemVfx&&); \
	NO_API AItemVfx(const AItemVfx&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemVfx(AItemVfx&&); \
	NO_API AItemVfx(const AItemVfx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemVfx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemVfx); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemVfx)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___particleSystems() { return STRUCT_OFFSET(AItemVfx, _particleSystems); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AItemVfx>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ItemVfx_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
