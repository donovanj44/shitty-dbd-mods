// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMapActorCategory : uint8;
class AActor;
#ifdef DEADBYDAYLIGHT_MapActorDB_generated_h
#error "MapActorDB.generated.h already included, missing '#pragma once' in MapActorDB.h"
#endif
#define DEADBYDAYLIGHT_MapActorDB_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyListMinusCategories); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execGetUniqueRandom);


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyListMinusCategories); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execGetUniqueRandom);


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapActorDB(); \
	friend struct Z_Construct_UClass_UMapActorDB_Statics; \
public: \
	DECLARE_CLASS(UMapActorDB, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMapActorDB)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMapActorDB(); \
	friend struct Z_Construct_UClass_UMapActorDB_Statics; \
public: \
	DECLARE_CLASS(UMapActorDB, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMapActorDB)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapActorDB(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapActorDB) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapActorDB); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapActorDB); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapActorDB(UMapActorDB&&); \
	NO_API UMapActorDB(const UMapActorDB&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapActorDB(UMapActorDB&&); \
	NO_API UMapActorDB(const UMapActorDB&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapActorDB); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapActorDB); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapActorDB)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UMapActorDB>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MapActorDB_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
