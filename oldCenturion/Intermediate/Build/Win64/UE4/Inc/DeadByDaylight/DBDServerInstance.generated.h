// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDServerInstance_generated_h
#error "DBDServerInstance.generated.h already included, missing '#pragma once' in DBDServerInstance.h"
#endif
#define DEADBYDAYLIGHT_DBDServerInstance_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDServerInstance(); \
	friend struct Z_Construct_UClass_UDBDServerInstance_Statics; \
public: \
	DECLARE_CLASS(UDBDServerInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDServerInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDBDServerInstance(); \
	friend struct Z_Construct_UClass_UDBDServerInstance_Statics; \
public: \
	DECLARE_CLASS(UDBDServerInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDServerInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDServerInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDServerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDServerInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDServerInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDServerInstance(UDBDServerInstance&&); \
	NO_API UDBDServerInstance(const UDBDServerInstance&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDServerInstance(UDBDServerInstance&&); \
	NO_API UDBDServerInstance(const UDBDServerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDServerInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDServerInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDServerInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pendingSessionUpdates() { return STRUCT_OFFSET(UDBDServerInstance, _pendingSessionUpdates); } \
	FORCEINLINE static uint32 __PPO___gameInstance() { return STRUCT_OFFSET(UDBDServerInstance, _gameInstance); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDServerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDServerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
