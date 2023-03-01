// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABearTrap;
#ifdef THETRAPPER_Untrap_generated_h
#error "Untrap.generated.h already included, missing '#pragma once' in Untrap.h"
#endif
#define THETRAPPER_Untrap_generated_h

#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrap);


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrap);


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUntrap(); \
	friend struct Z_Construct_UClass_UUntrap_Statics; \
public: \
	DECLARE_CLASS(UUntrap, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(UUntrap)


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUUntrap(); \
	friend struct Z_Construct_UClass_UUntrap_Statics; \
public: \
	DECLARE_CLASS(UUntrap, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(UUntrap)


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUntrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUntrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUntrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUntrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUntrap(UUntrap&&); \
	NO_API UUntrap(const UUntrap&); \
public:


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUntrap(UUntrap&&); \
	NO_API UUntrap(const UUntrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUntrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUntrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUntrap)


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___overridableInteractions() { return STRUCT_OFFSET(UUntrap, _overridableInteractions); } \
	FORCEINLINE static uint32 __PPO___bearTrapUpdateMontageID() { return STRUCT_OFFSET(UUntrap, _bearTrapUpdateMontageID); } \
	FORCEINLINE static uint32 __PPO___bearTrapFinishMontageID() { return STRUCT_OFFSET(UUntrap, _bearTrapFinishMontageID); }


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_8_PROLOG
#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_INCLASS \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_Untrap_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAPPER_API UClass* StaticClass<class UUntrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTrapper_Public_Untrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
