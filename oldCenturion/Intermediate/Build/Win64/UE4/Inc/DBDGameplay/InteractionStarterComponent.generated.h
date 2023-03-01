// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_InteractionStarterComponent_generated_h
#error "InteractionStarterComponent.generated.h already included, missing '#pragma once' in InteractionStarterComponent.h"
#endif
#define DBDGAMEPLAY_InteractionStarterComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionStarted); \
	DECLARE_FUNCTION(execOnRep_ShouldStartInteraction);


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionStarted); \
	DECLARE_FUNCTION(execOnRep_ShouldStartInteraction);


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionStarterComponent(); \
	friend struct Z_Construct_UClass_UInteractionStarterComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionStarterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UInteractionStarterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_interaction=NETFIELD_REP_START, \
		_shouldStartInteraction, \
		NETFIELD_REP_END=_shouldStartInteraction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionStarterComponent(); \
	friend struct Z_Construct_UClass_UInteractionStarterComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionStarterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UInteractionStarterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_interaction=NETFIELD_REP_START, \
		_shouldStartInteraction, \
		NETFIELD_REP_END=_shouldStartInteraction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionStarterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionStarterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionStarterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionStarterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionStarterComponent(UInteractionStarterComponent&&); \
	NO_API UInteractionStarterComponent(const UInteractionStarterComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionStarterComponent(UInteractionStarterComponent&&); \
	NO_API UInteractionStarterComponent(const UInteractionStarterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionStarterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionStarterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionStarterComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interaction() { return STRUCT_OFFSET(UInteractionStarterComponent, _interaction); } \
	FORCEINLINE static uint32 __PPO___shouldStartInteraction() { return STRUCT_OFFSET(UInteractionStarterComponent, _shouldStartInteraction); }


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_8_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UInteractionStarterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_InteractionStarterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
