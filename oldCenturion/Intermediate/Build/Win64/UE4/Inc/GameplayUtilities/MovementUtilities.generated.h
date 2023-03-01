// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FRotator;
#ifdef GAMEPLAYUTILITIES_MovementUtilities_generated_h
#error "MovementUtilities.generated.h already included, missing '#pragma once' in MovementUtilities.h"
#endif
#define GAMEPLAYUTILITIES_MovementUtilities_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLocal_MoveActorTo);


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLocal_MoveActorTo);


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementUtilities(); \
	friend struct Z_Construct_UClass_UMovementUtilities_Statics; \
public: \
	DECLARE_CLASS(UMovementUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMovementUtilities)


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMovementUtilities(); \
	friend struct Z_Construct_UClass_UMovementUtilities_Statics; \
public: \
	DECLARE_CLASS(UMovementUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMovementUtilities)


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementUtilities(UMovementUtilities&&); \
	NO_API UMovementUtilities(const UMovementUtilities&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementUtilities(UMovementUtilities&&); \
	NO_API UMovementUtilities(const UMovementUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovementUtilities)


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_10_PROLOG
#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_INCLASS \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UMovementUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_MovementUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
