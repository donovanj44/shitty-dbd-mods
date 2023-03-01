// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
enum class EKnowledgeSharingType : uint8;
#ifdef DEADBYDAYLIGHT_ActorKnowledgeCollection_generated_h
#error "ActorKnowledgeCollection.generated.h already included, missing '#pragma once' in ActorKnowledgeCollection.h"
#endif
#define DEADBYDAYLIGHT_ActorKnowledgeCollection_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_Add); \
	DECLARE_FUNCTION(execAuthority_Append); \
	DECLARE_FUNCTION(execAuthority_Empty); \
	DECLARE_FUNCTION(execAuthority_Remove); \
	DECLARE_FUNCTION(execAuthority_SetAvailable); \
	DECLARE_FUNCTION(execAuthority_SetPossessor); \
	DECLARE_FUNCTION(execAuthority_SetSharingType); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execLocal_SetAvailable);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_Add); \
	DECLARE_FUNCTION(execAuthority_Append); \
	DECLARE_FUNCTION(execAuthority_Empty); \
	DECLARE_FUNCTION(execAuthority_Remove); \
	DECLARE_FUNCTION(execAuthority_SetAvailable); \
	DECLARE_FUNCTION(execAuthority_SetPossessor); \
	DECLARE_FUNCTION(execAuthority_SetSharingType); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execLocal_SetAvailable);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorKnowledgeCollection(); \
	friend struct Z_Construct_UClass_UActorKnowledgeCollection_Statics; \
public: \
	DECLARE_CLASS(UActorKnowledgeCollection, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorKnowledgeCollection) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_actors=NETFIELD_REP_START, \
		_available, \
		_possessor, \
		_sharing, \
		NETFIELD_REP_END=_sharing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUActorKnowledgeCollection(); \
	friend struct Z_Construct_UClass_UActorKnowledgeCollection_Statics; \
public: \
	DECLARE_CLASS(UActorKnowledgeCollection, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorKnowledgeCollection) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_actors=NETFIELD_REP_START, \
		_available, \
		_possessor, \
		_sharing, \
		NETFIELD_REP_END=_sharing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorKnowledgeCollection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorKnowledgeCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorKnowledgeCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorKnowledgeCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorKnowledgeCollection(UActorKnowledgeCollection&&); \
	NO_API UActorKnowledgeCollection(const UActorKnowledgeCollection&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorKnowledgeCollection(UActorKnowledgeCollection&&); \
	NO_API UActorKnowledgeCollection(const UActorKnowledgeCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorKnowledgeCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorKnowledgeCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorKnowledgeCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___actors() { return STRUCT_OFFSET(UActorKnowledgeCollection, _actors); } \
	FORCEINLINE static uint32 __PPO___available() { return STRUCT_OFFSET(UActorKnowledgeCollection, _available); } \
	FORCEINLINE static uint32 __PPO___possessor() { return STRUCT_OFFSET(UActorKnowledgeCollection, _possessor); } \
	FORCEINLINE static uint32 __PPO___sharing() { return STRUCT_OFFSET(UActorKnowledgeCollection, _sharing); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UActorKnowledgeCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ActorKnowledgeCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
