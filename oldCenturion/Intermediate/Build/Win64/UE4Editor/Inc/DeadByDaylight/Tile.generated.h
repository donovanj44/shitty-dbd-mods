// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTileSpawnPoint;
class AActor;
#ifdef DEADBYDAYLIGHT_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define DEADBYDAYLIGHT_Tile_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Initialized);


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Initialized);


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_EVENT_PARMS \
	struct Tile_eventOnSetSpawnObject_Parms \
	{ \
		UTileSpawnPoint* tileSpawnPoint; \
		AActor* spawnedObject; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_initialized=NETFIELD_REP_START, \
		NETFIELD_REP_END=_initialized	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_initialized=NETFIELD_REP_START, \
		NETFIELD_REP_END=_initialized	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___initialized() { return STRUCT_OFFSET(ATile, _initialized); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_19_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Tile_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
