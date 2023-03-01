// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECamperDamageState : uint8;
enum class ECamperImmobilizeState : uint8;
#ifdef THESPIRIT_Diversion_generated_h
#error "Diversion.generated.h already included, missing '#pragma once' in Diversion.h"
#endif
#define THESPIRIT_Diversion_generated_h

#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnOwningSurvivorDamageStateChanged); \
	DECLARE_FUNCTION(execAuthority_OnOwningSurvivorImmobilizedStateChanged);


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnOwningSurvivorDamageStateChanged); \
	DECLARE_FUNCTION(execAuthority_OnOwningSurvivorImmobilizedStateChanged);


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiversion(); \
	friend struct Z_Construct_UClass_UDiversion_Statics; \
public: \
	DECLARE_CLASS(UDiversion, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpirit"), NO_API) \
	DECLARE_SERIALIZER(UDiversion)


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUDiversion(); \
	friend struct Z_Construct_UClass_UDiversion_Statics; \
public: \
	DECLARE_CLASS(UDiversion, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpirit"), NO_API) \
	DECLARE_SERIALIZER(UDiversion)


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiversion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiversion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiversion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiversion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiversion(UDiversion&&); \
	NO_API UDiversion(const UDiversion&); \
public:


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiversion(UDiversion&&); \
	NO_API UDiversion(const UDiversion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiversion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiversion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiversion)


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___diversionActivationTimePerLevel() { return STRUCT_OFFSET(UDiversion, _diversionActivationTimePerLevel); } \
	FORCEINLINE static uint32 __PPO___throwPebbleDistance() { return STRUCT_OFFSET(UDiversion, _throwPebbleDistance); }


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_8_PROLOG
#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_INCLASS \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheSpirit_Public_Diversion_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THESPIRIT_API UClass* StaticClass<class UDiversion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheSpirit_Public_Diversion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
