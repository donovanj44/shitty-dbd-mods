// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANNIVERSARY_CrownPlayerComponent_generated_h
#error "CrownPlayerComponent.generated.h already included, missing '#pragma once' in CrownPlayerComponent.h"
#endif
#define ANNIVERSARY_CrownPlayerComponent_generated_h

#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_hasInteractedWithCrownPillarThisGame);


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_hasInteractedWithCrownPillarThisGame);


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_EVENT_PARMS
#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrownPlayerComponent(); \
	friend struct Z_Construct_UClass_UCrownPlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UCrownPlayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anniversary"), NO_API) \
	DECLARE_SERIALIZER(UCrownPlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasInteractedWithCrownPillarThisGame=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hasInteractedWithCrownPillarThisGame	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCrownPlayerComponent(); \
	friend struct Z_Construct_UClass_UCrownPlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UCrownPlayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anniversary"), NO_API) \
	DECLARE_SERIALIZER(UCrownPlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasInteractedWithCrownPillarThisGame=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hasInteractedWithCrownPillarThisGame	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrownPlayerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrownPlayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrownPlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrownPlayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrownPlayerComponent(UCrownPlayerComponent&&); \
	NO_API UCrownPlayerComponent(const UCrownPlayerComponent&); \
public:


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrownPlayerComponent(UCrownPlayerComponent&&); \
	NO_API UCrownPlayerComponent(const UCrownPlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrownPlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrownPlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrownPlayerComponent)


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hasInteractedWithCrownPillarThisGame() { return STRUCT_OFFSET(UCrownPlayerComponent, _hasInteractedWithCrownPillarThisGame); } \
	FORCEINLINE static uint32 __PPO___isCrownEventActive() { return STRUCT_OFFSET(UCrownPlayerComponent, _isCrownEventActive); }


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_7_PROLOG \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_EVENT_PARMS


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_INCLASS \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANNIVERSARY_API UClass* StaticClass<class UCrownPlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Anniversary_Public_CrownPlayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
