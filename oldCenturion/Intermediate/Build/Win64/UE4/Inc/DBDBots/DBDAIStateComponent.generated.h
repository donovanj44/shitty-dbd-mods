// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
enum class EDBDScoreTypes : uint8;
class AActor;
#ifdef DBDBOTS_DBDAIStateComponent_generated_h
#error "DBDAIStateComponent.generated.h already included, missing '#pragma once' in DBDAIStateComponent.h"
#endif
#define DBDBOTS_DBDAIStateComponent_generated_h

#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSpecialAttackEventDispatched); \
	DECLARE_FUNCTION(execOnStartAimingEventDispatched); \
	DECLARE_FUNCTION(execOnUniqueGameplayEvent);


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSpecialAttackEventDispatched); \
	DECLARE_FUNCTION(execOnStartAimingEventDispatched); \
	DECLARE_FUNCTION(execOnUniqueGameplayEvent);


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAIStateComponent(); \
	friend struct Z_Construct_UClass_UDBDAIStateComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDAIStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UDBDAIStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDBDAIStateComponent*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAIStateComponent(); \
	friend struct Z_Construct_UClass_UDBDAIStateComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDAIStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UDBDAIStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDBDAIStateComponent*>(this); }


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAIStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAIStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAIStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAIStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAIStateComponent(UDBDAIStateComponent&&); \
	NO_API UDBDAIStateComponent(const UDBDAIStateComponent&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAIStateComponent(UDBDAIStateComponent&&); \
	NO_API UDBDAIStateComponent(const UDBDAIStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAIStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAIStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAIStateComponent)


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_17_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class UDBDAIStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_DBDAIStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
