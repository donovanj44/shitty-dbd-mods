// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGateType : uint8;
class AGate;
#ifdef DEADBYDAYLIGHT_GateFactory_generated_h
#error "GateFactory.generated.h already included, missing '#pragma once' in GateFactory.h"
#endif
#define DEADBYDAYLIGHT_GateFactory_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGate);


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGate);


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGateFactory(); \
	friend struct Z_Construct_UClass_AGateFactory_Statics; \
public: \
	DECLARE_CLASS(AGateFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGateFactory)


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAGateFactory(); \
	friend struct Z_Construct_UClass_AGateFactory_Statics; \
public: \
	DECLARE_CLASS(AGateFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AGateFactory)


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGateFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGateFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGateFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGateFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGateFactory(AGateFactory&&); \
	NO_API AGateFactory(const AGateFactory&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGateFactory(AGateFactory&&); \
	NO_API AGateFactory(const AGateFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGateFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGateFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGateFactory)


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AGateFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GateFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
