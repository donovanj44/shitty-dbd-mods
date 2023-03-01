// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ACollectable;
class UPrimitiveComponent;
#ifdef DEADBYDAYLIGHT_Searchable_generated_h
#error "Searchable.generated.h already included, missing '#pragma once' in Searchable.h"
#endif
#define DEADBYDAYLIGHT_Searchable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventSearchableOnSearchedChanged_Parms \
{ \
	bool searched; \
}; \
static inline void FSearchableOnSearchedChanged_DelegateWrapper(const FMulticastScriptDelegate& SearchableOnSearchedChanged, bool searched) \
{ \
	_Script_DeadByDaylight_eventSearchableOnSearchedChanged_Parms Parms; \
	Parms.searched=searched ? true : false; \
	SearchableOnSearchedChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_RPC_WRAPPERS \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_SpawnObject); \
	DECLARE_FUNCTION(execContainsSpawnedItem); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execHasBeenSearched); \
	DECLARE_FUNCTION(execSetHasBeenSearched);


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_SpawnObject); \
	DECLARE_FUNCTION(execContainsSpawnedItem); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execHasBeenSearched); \
	DECLARE_FUNCTION(execSetHasBeenSearched);


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_EVENT_PARMS \
	struct Searchable_eventGetInteractorPrimitiveComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Searchable_eventGetInteractorPrimitiveComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASearchable(); \
	friend struct Z_Construct_UClass_ASearchable_Statics; \
public: \
	DECLARE_CLASS(ASearchable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ASearchable) \
	virtual UObject* _getUObject() const override { return const_cast<ASearchable*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_itemInsideSearchable=NETFIELD_REP_START, \
		NETFIELD_REP_END=_itemInsideSearchable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASearchable(); \
	friend struct Z_Construct_UClass_ASearchable_Statics; \
public: \
	DECLARE_CLASS(ASearchable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ASearchable) \
	virtual UObject* _getUObject() const override { return const_cast<ASearchable*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_itemInsideSearchable=NETFIELD_REP_START, \
		NETFIELD_REP_END=_itemInsideSearchable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASearchable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASearchable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASearchable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASearchable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASearchable(ASearchable&&); \
	NO_API ASearchable(const ASearchable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASearchable(ASearchable&&); \
	NO_API ASearchable(const ASearchable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASearchable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASearchable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASearchable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___searchableSpawnPoint() { return STRUCT_OFFSET(ASearchable, _searchableSpawnPoint); } \
	FORCEINLINE static uint32 __PPO___itemIdToSpawn() { return STRUCT_OFFSET(ASearchable, _itemIdToSpawn); } \
	FORCEINLINE static uint32 __PPO___hasBeenSearched() { return STRUCT_OFFSET(ASearchable, _hasBeenSearched); } \
	FORCEINLINE static uint32 __PPO___itemInsideSearchable() { return STRUCT_OFFSET(ASearchable, _itemInsideSearchable); } \
	FORCEINLINE static uint32 __PPO___numberOfSearchesWhileOpenPerPlayer() { return STRUCT_OFFSET(ASearchable, _numberOfSearchesWhileOpenPerPlayer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ASearchable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Searchable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
