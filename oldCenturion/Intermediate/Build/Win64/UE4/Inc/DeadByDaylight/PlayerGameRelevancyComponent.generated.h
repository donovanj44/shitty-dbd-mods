// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PlayerGameRelevancyComponent_generated_h
#error "PlayerGameRelevancyComponent.generated.h already included, missing '#pragma once' in PlayerGameRelevancyComponent.h"
#endif
#define DEADBYDAYLIGHT_PlayerGameRelevancyComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerGameRelevancyComponent(); \
	friend struct Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerGameRelevancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlayerGameRelevancyComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isRelevantToGameplay=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isRelevantToGameplay	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerGameRelevancyComponent(); \
	friend struct Z_Construct_UClass_UPlayerGameRelevancyComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerGameRelevancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlayerGameRelevancyComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isRelevantToGameplay=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isRelevantToGameplay	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerGameRelevancyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerGameRelevancyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGameRelevancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGameRelevancyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerGameRelevancyComponent(UPlayerGameRelevancyComponent&&); \
	NO_API UPlayerGameRelevancyComponent(const UPlayerGameRelevancyComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerGameRelevancyComponent(UPlayerGameRelevancyComponent&&); \
	NO_API UPlayerGameRelevancyComponent(const UPlayerGameRelevancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGameRelevancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGameRelevancyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerGameRelevancyComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isRelevantToGameplay() { return STRUCT_OFFSET(UPlayerGameRelevancyComponent, _isRelevantToGameplay); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_7_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPlayerGameRelevancyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PlayerGameRelevancyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
