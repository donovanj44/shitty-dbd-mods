// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class ACharacter;
class ASlasherPlayer;
class APawn;
class ADBDPlayer;
class ACamperPlayer;
class AActor;
#ifdef DEADBYDAYLIGHT_ActorComponentExt_generated_h
#error "ActorComponentExt.generated.h already included, missing '#pragma once' in ActorComponentExt.h"
#endif
#define DEADBYDAYLIGHT_ActorComponentExt_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningCharacter); \
	DECLARE_FUNCTION(execGetOwningCharacterChecked); \
	DECLARE_FUNCTION(execGetOwningKiller); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningPawnChecked); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayerChecked); \
	DECLARE_FUNCTION(execGetOwningPlayerInHierarchy); \
	DECLARE_FUNCTION(execGetOwningSurvivor); \
	DECLARE_FUNCTION(execGetOwningSurvivorChecked); \
	DECLARE_FUNCTION(execGetValidatedOwner); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execIsLocallyObserved);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningCharacter); \
	DECLARE_FUNCTION(execGetOwningCharacterChecked); \
	DECLARE_FUNCTION(execGetOwningKiller); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningPawnChecked); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayerChecked); \
	DECLARE_FUNCTION(execGetOwningPlayerInHierarchy); \
	DECLARE_FUNCTION(execGetOwningSurvivor); \
	DECLARE_FUNCTION(execGetOwningSurvivorChecked); \
	DECLARE_FUNCTION(execGetValidatedOwner); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execIsLocallyObserved);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponentExt(); \
	friend struct Z_Construct_UClass_UActorComponentExt_Statics; \
public: \
	DECLARE_CLASS(UActorComponentExt, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorComponentExt)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorComponentExt(); \
	friend struct Z_Construct_UClass_UActorComponentExt_Statics; \
public: \
	DECLARE_CLASS(UActorComponentExt, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorComponentExt)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponentExt(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponentExt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponentExt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponentExt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponentExt(UActorComponentExt&&); \
	NO_API UActorComponentExt(const UActorComponentExt&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponentExt(UActorComponentExt&&); \
	NO_API UActorComponentExt(const UActorComponentExt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponentExt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponentExt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorComponentExt)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UActorComponentExt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ActorComponentExt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
