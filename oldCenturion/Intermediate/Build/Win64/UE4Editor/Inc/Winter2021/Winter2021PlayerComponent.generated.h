// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINTER2021_Winter2021PlayerComponent_generated_h
#error "Winter2021PlayerComponent.generated.h already included, missing '#pragma once' in Winter2021PlayerComponent.h"
#endif
#define WINTER2021_Winter2021PlayerComponent_generated_h

#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_RPC_WRAPPERS \
	virtual void Client_UnlockCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_UnlockCosmetic);


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_UnlockCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_UnlockCosmetic);


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_EVENT_PARMS
#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWinter2021PlayerComponent(); \
	friend struct Z_Construct_UClass_UWinter2021PlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UWinter2021PlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(UWinter2021PlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasCosmeticUnlockRequirementBeenSatisfied=NETFIELD_REP_START, \
		_hasSentUnlockCosmeticRequest, \
		_hasAllCosmeticRewards, \
		NETFIELD_REP_END=_hasAllCosmeticRewards	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUWinter2021PlayerComponent(); \
	friend struct Z_Construct_UClass_UWinter2021PlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UWinter2021PlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(UWinter2021PlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasCosmeticUnlockRequirementBeenSatisfied=NETFIELD_REP_START, \
		_hasSentUnlockCosmeticRequest, \
		_hasAllCosmeticRewards, \
		NETFIELD_REP_END=_hasAllCosmeticRewards	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWinter2021PlayerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWinter2021PlayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinter2021PlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinter2021PlayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWinter2021PlayerComponent(UWinter2021PlayerComponent&&); \
	NO_API UWinter2021PlayerComponent(const UWinter2021PlayerComponent&); \
public:


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWinter2021PlayerComponent(UWinter2021PlayerComponent&&); \
	NO_API UWinter2021PlayerComponent(const UWinter2021PlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinter2021PlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinter2021PlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWinter2021PlayerComponent)


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hasCosmeticUnlockRequirementBeenSatisfied() { return STRUCT_OFFSET(UWinter2021PlayerComponent, _hasCosmeticUnlockRequirementBeenSatisfied); } \
	FORCEINLINE static uint32 __PPO___hasSentUnlockCosmeticRequest() { return STRUCT_OFFSET(UWinter2021PlayerComponent, _hasSentUnlockCosmeticRequest); } \
	FORCEINLINE static uint32 __PPO___hasAllCosmeticRewards() { return STRUCT_OFFSET(UWinter2021PlayerComponent, _hasAllCosmeticRewards); }


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_6_PROLOG \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_EVENT_PARMS


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_INCLASS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINTER2021_API UClass* StaticClass<class UWinter2021PlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_Winter2021PlayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
