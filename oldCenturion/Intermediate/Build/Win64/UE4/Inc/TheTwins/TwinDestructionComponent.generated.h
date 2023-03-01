// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimationMontageDescriptor;
class AConjoinedTwin;
#ifdef THETWINS_TwinDestructionComponent_generated_h
#error "TwinDestructionComponent.generated.h already included, missing '#pragma once' in TwinDestructionComponent.h"
#endif
#define THETWINS_TwinDestructionComponent_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnTwinQuickDestroyOver); \
	DECLARE_FUNCTION(execOnDyingMontageEnd);


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnTwinQuickDestroyOver); \
	DECLARE_FUNCTION(execOnDyingMontageEnd);


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_EVENT_PARMS \
	struct TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromKick_Parms \
	{ \
		AConjoinedTwin* owningTwin; \
	}; \
	struct TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromSurvivorRemove_Parms \
	{ \
		AConjoinedTwin* owningTwin; \
	}; \
	struct TwinDestructionComponent_eventOnTwinQuickDestroy_Parms \
	{ \
		AConjoinedTwin* owningTwin; \
	};


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwinDestructionComponent(); \
	friend struct Z_Construct_UClass_UTwinDestructionComponent_Statics; \
public: \
	DECLARE_CLASS(UTwinDestructionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinDestructionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_dyingTransform=NETFIELD_REP_START, \
		_diedFromSurvivorRemovingTwin, \
		NETFIELD_REP_END=_diedFromSurvivorRemovingTwin	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTwinDestructionComponent(); \
	friend struct Z_Construct_UClass_UTwinDestructionComponent_Statics; \
public: \
	DECLARE_CLASS(UTwinDestructionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinDestructionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_dyingTransform=NETFIELD_REP_START, \
		_diedFromSurvivorRemovingTwin, \
		NETFIELD_REP_END=_diedFromSurvivorRemovingTwin	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinDestructionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinDestructionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinDestructionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinDestructionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinDestructionComponent(UTwinDestructionComponent&&); \
	NO_API UTwinDestructionComponent(const UTwinDestructionComponent&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinDestructionComponent(UTwinDestructionComponent&&); \
	NO_API UTwinDestructionComponent(const UTwinDestructionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinDestructionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinDestructionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinDestructionComponent)


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___huskClass() { return STRUCT_OFFSET(UTwinDestructionComponent, _huskClass); } \
	FORCEINLINE static uint32 __PPO___dyingTransform() { return STRUCT_OFFSET(UTwinDestructionComponent, _dyingTransform); } \
	FORCEINLINE static uint32 __PPO___diedFromSurvivorRemovingTwin() { return STRUCT_OFFSET(UTwinDestructionComponent, _diedFromSurvivorRemovingTwin); } \
	FORCEINLINE static uint32 __PPO___dyingFromSurvivorTranslation() { return STRUCT_OFFSET(UTwinDestructionComponent, _dyingFromSurvivorTranslation); }


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_12_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTwinDestructionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TwinDestructionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
