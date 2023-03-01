// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameEventData;
struct FGameplayTag;
class ACamperPlayer;
#ifdef THEK25_K25P03_generated_h
#error "K25P03.generated.h already included, missing '#pragma once' in K25P03.h"
#endif
#define THEK25_K25P03_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCamperUnhookedFromScourgeHook); \
	DECLARE_FUNCTION(execOnDamageStateChanged); \
	DECLARE_FUNCTION(execOnSurvivorRemoved);


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCamperUnhookedFromScourgeHook); \
	DECLARE_FUNCTION(execOnDamageStateChanged); \
	DECLARE_FUNCTION(execOnSurvivorRemoved);


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25P03(); \
	friend struct Z_Construct_UClass_UK25P03_Statics; \
public: \
	DECLARE_CLASS(UK25P03, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25P03)


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK25P03(); \
	friend struct Z_Construct_UClass_UK25P03_Statics; \
public: \
	DECLARE_CLASS(UK25P03, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25P03)


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25P03(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25P03) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25P03); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25P03); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25P03(UK25P03&&); \
	NO_API UK25P03(const UK25P03&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25P03(UK25P03&&); \
	NO_API UK25P03(const UK25P03&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25P03); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25P03); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25P03)


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___numberOfSurvivorsWaitingForDamageStateChange() { return STRUCT_OFFSET(UK25P03, _numberOfSurvivorsWaitingForDamageStateChange); } \
	FORCEINLINE static uint32 __PPO___state2ActionSpeedDebuffPercentage() { return STRUCT_OFFSET(UK25P03, _state2ActionSpeedDebuffPercentage); }


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_10_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25P03_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25P03_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25P03>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25P03_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
