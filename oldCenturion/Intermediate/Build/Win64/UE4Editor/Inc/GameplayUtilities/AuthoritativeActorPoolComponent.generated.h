// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GAMEPLAYUTILITIES_AuthoritativeActorPoolComponent_generated_h
#error "AuthoritativeActorPoolComponent.generated.h already included, missing '#pragma once' in AuthoritativeActorPoolComponent.h"
#endif
#define GAMEPLAYUTILITIES_AuthoritativeActorPoolComponent_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_Pool);


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_Pool);


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuthoritativeActorPoolComponent(); \
	friend struct Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics; \
public: \
	DECLARE_CLASS(UAuthoritativeActorPoolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAuthoritativeActorPoolComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_pool=NETFIELD_REP_START, \
		NETFIELD_REP_END=_pool	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAuthoritativeActorPoolComponent(); \
	friend struct Z_Construct_UClass_UAuthoritativeActorPoolComponent_Statics; \
public: \
	DECLARE_CLASS(UAuthoritativeActorPoolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAuthoritativeActorPoolComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_pool=NETFIELD_REP_START, \
		NETFIELD_REP_END=_pool	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuthoritativeActorPoolComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuthoritativeActorPoolComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthoritativeActorPoolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthoritativeActorPoolComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthoritativeActorPoolComponent(UAuthoritativeActorPoolComponent&&); \
	NO_API UAuthoritativeActorPoolComponent(const UAuthoritativeActorPoolComponent&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthoritativeActorPoolComponent(UAuthoritativeActorPoolComponent&&); \
	NO_API UAuthoritativeActorPoolComponent(const UAuthoritativeActorPoolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthoritativeActorPoolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthoritativeActorPoolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuthoritativeActorPoolComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___actorClass() { return STRUCT_OFFSET(UAuthoritativeActorPoolComponent, _actorClass); } \
	FORCEINLINE static uint32 __PPO___size() { return STRUCT_OFFSET(UAuthoritativeActorPoolComponent, _size); } \
	FORCEINLINE static uint32 __PPO___pool() { return STRUCT_OFFSET(UAuthoritativeActorPoolComponent, _pool); }


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_9_PROLOG
#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_INCLASS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UAuthoritativeActorPoolComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativeActorPoolComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
