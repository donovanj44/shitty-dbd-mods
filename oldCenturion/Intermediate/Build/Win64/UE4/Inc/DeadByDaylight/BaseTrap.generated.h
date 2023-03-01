// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_BaseTrap_generated_h
#error "BaseTrap.generated.h already included, missing '#pragma once' in BaseTrap.h"
#endif
#define DEADBYDAYLIGHT_BaseTrap_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTrapSet); \
	DECLARE_FUNCTION(execSetIsTrapSet);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTrapSet); \
	DECLARE_FUNCTION(execSetIsTrapSet);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTrap(); \
	friend struct Z_Construct_UClass_ABaseTrap_Statics; \
public: \
	DECLARE_CLASS(ABaseTrap, ACollectable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABaseTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_INCLASS \
private: \
	static void StaticRegisterNativesABaseTrap(); \
	friend struct Z_Construct_UClass_ABaseTrap_Statics; \
public: \
	DECLARE_CLASS(ABaseTrap, ACollectable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ABaseTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTrap(ABaseTrap&&); \
	NO_API ABaseTrap(const ABaseTrap&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTrap(ABaseTrap&&); \
	NO_API ABaseTrap(const ABaseTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isTrapSet() { return STRUCT_OFFSET(ABaseTrap, _isTrapSet); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ABaseTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BaseTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
