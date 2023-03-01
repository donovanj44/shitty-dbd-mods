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
class ACamperPlayer;
class UGameplayModifierContainer;
#ifdef THEBLIGHT_HexUndying_generated_h
#error "HexUndying.generated.h already included, missing '#pragma once' in HexUndying.h"
#endif
#define THEBLIGHT_HexUndying_generated_h

#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnCamperCleansedHexPerk); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded); \
	DECLARE_FUNCTION(execAuthority_UpdateHexPerkStatusView);


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnCamperCleansedHexPerk); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded); \
	DECLARE_FUNCTION(execAuthority_UpdateHexPerkStatusView);


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHexUndying(); \
	friend struct Z_Construct_UClass_UHexUndying_Statics; \
public: \
	DECLARE_CLASS(UHexUndying, UHexPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UHexUndying)


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHexUndying(); \
	friend struct Z_Construct_UClass_UHexUndying_Statics; \
public: \
	DECLARE_CLASS(UHexUndying, UHexPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UHexUndying)


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHexUndying(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHexUndying) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHexUndying); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHexUndying); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHexUndying(UHexUndying&&); \
	NO_API UHexUndying(const UHexUndying&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHexUndying(UHexUndying&&); \
	NO_API UHexUndying(const UHexUndying&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHexUndying); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHexUndying); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHexUndying)


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___revealAuraDistanceFromTotem() { return STRUCT_OFFSET(UHexUndying, _revealAuraDistanceFromTotem); }


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_11_PROLOG
#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_HexUndying_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UHexUndying>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_HexUndying_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
