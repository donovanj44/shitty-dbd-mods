// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_MoriableComponent_generated_h
#error "MoriableComponent.generated.h already included, missing '#pragma once' in MoriableComponent.h"
#endif
#define DEADBYDAYLIGHT_MoriableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoriFinished); \
	DECLARE_FUNCTION(execOnMoriUpdateStart); \
	DECLARE_FUNCTION(execOnRep_MoriInteractions);


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoriFinished); \
	DECLARE_FUNCTION(execOnMoriUpdateStart); \
	DECLARE_FUNCTION(execOnRep_MoriInteractions);


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoriableComponent(); \
	friend struct Z_Construct_UClass_UMoriableComponent_Statics; \
public: \
	DECLARE_CLASS(UMoriableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMoriableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_moriInteractions=NETFIELD_REP_START, \
		NETFIELD_REP_END=_moriInteractions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMoriableComponent(); \
	friend struct Z_Construct_UClass_UMoriableComponent_Statics; \
public: \
	DECLARE_CLASS(UMoriableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMoriableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_moriInteractions=NETFIELD_REP_START, \
		NETFIELD_REP_END=_moriInteractions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoriableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoriableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoriableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoriableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoriableComponent(UMoriableComponent&&); \
	NO_API UMoriableComponent(const UMoriableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoriableComponent(UMoriableComponent&&); \
	NO_API UMoriableComponent(const UMoriableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoriableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoriableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoriableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___moriInteractions() { return STRUCT_OFFSET(UMoriableComponent, _moriInteractions); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UMoriableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MoriableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
