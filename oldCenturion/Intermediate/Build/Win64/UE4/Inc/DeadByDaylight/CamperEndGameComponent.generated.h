// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_CamperEndGameComponent_generated_h
#error "CamperEndGameComponent.generated.h already included, missing '#pragma once' in CamperEndGameComponent.h"
#endif
#define DEADBYDAYLIGHT_CamperEndGameComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSacrificedByEndGame); \
	DECLARE_FUNCTION(execOnDelayBeforeSacrificeEnd); \
	DECLARE_FUNCTION(execOnEndGameSacrificeEnd);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSacrificedByEndGame); \
	DECLARE_FUNCTION(execOnDelayBeforeSacrificeEnd); \
	DECLARE_FUNCTION(execOnEndGameSacrificeEnd);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperEndGameComponent(); \
	friend struct Z_Construct_UClass_UCamperEndGameComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperEndGameComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperEndGameComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_delayBeforeSacrifice=NETFIELD_REP_START, \
		_readyToBeSacrificed, \
		NETFIELD_REP_END=_readyToBeSacrificed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCamperEndGameComponent(); \
	friend struct Z_Construct_UClass_UCamperEndGameComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperEndGameComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperEndGameComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_delayBeforeSacrifice=NETFIELD_REP_START, \
		_readyToBeSacrificed, \
		NETFIELD_REP_END=_readyToBeSacrificed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperEndGameComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperEndGameComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperEndGameComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperEndGameComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperEndGameComponent(UCamperEndGameComponent&&); \
	NO_API UCamperEndGameComponent(const UCamperEndGameComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperEndGameComponent(UCamperEndGameComponent&&); \
	NO_API UCamperEndGameComponent(const UCamperEndGameComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperEndGameComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperEndGameComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperEndGameComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___endGameEntityClass() { return STRUCT_OFFSET(UCamperEndGameComponent, _endGameEntityClass); } \
	FORCEINLINE static uint32 __PPO___delayBeforeSacrifice() { return STRUCT_OFFSET(UCamperEndGameComponent, _delayBeforeSacrifice); } \
	FORCEINLINE static uint32 __PPO___readyToBeSacrificed() { return STRUCT_OFFSET(UCamperEndGameComponent, _readyToBeSacrificed); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperEndGameComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperEndGameComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
