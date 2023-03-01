// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_K25ChainAttachedStatusEffect_generated_h
#error "K25ChainAttachedStatusEffect.generated.h already included, missing '#pragma once' in K25ChainAttachedStatusEffect.h"
#endif
#define THEK25_K25ChainAttachedStatusEffect_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ChainAttachementComponent);


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ChainAttachementComponent);


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ChainAttachedStatusEffect(); \
	friend struct Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UK25ChainAttachedStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainAttachedStatusEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainAttachmentComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=_chainAttachmentComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUK25ChainAttachedStatusEffect(); \
	friend struct Z_Construct_UClass_UK25ChainAttachedStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UK25ChainAttachedStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainAttachedStatusEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainAttachmentComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=_chainAttachmentComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ChainAttachedStatusEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ChainAttachedStatusEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainAttachedStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainAttachedStatusEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainAttachedStatusEffect(UK25ChainAttachedStatusEffect&&); \
	NO_API UK25ChainAttachedStatusEffect(const UK25ChainAttachedStatusEffect&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainAttachedStatusEffect(UK25ChainAttachedStatusEffect&&); \
	NO_API UK25ChainAttachedStatusEffect(const UK25ChainAttachedStatusEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainAttachedStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainAttachedStatusEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ChainAttachedStatusEffect)


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___percentageReductionSpeedPerChainCurve() { return STRUCT_OFFSET(UK25ChainAttachedStatusEffect, _percentageReductionSpeedPerChainCurve); } \
	FORCEINLINE static uint32 __PPO___chainAttachmentComponent() { return STRUCT_OFFSET(UK25ChainAttachedStatusEffect, _chainAttachmentComponent); } \
	FORCEINLINE static uint32 __PPO___cachedNumberOfChainsAttached() { return STRUCT_OFFSET(UK25ChainAttachedStatusEffect, _cachedNumberOfChainsAttached); }


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_9_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ChainAttachedStatusEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ChainAttachedStatusEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
