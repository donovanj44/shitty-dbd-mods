// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYUTILITIES_AuthoritativePoolableActorComponent_generated_h
#error "AuthoritativePoolableActorComponent.generated.h already included, missing '#pragma once' in AuthoritativePoolableActorComponent.h"
#endif
#define GAMEPLAYUTILITIES_AuthoritativePoolableActorComponent_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Acquired);


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Acquired);


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuthoritativePoolableActorComponent(); \
	friend struct Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics; \
public: \
	DECLARE_CLASS(UAuthoritativePoolableActorComponent, UBasePoolableActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAuthoritativePoolableActorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_acquired=NETFIELD_REP_START, \
		NETFIELD_REP_END=_acquired	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUAuthoritativePoolableActorComponent(); \
	friend struct Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics; \
public: \
	DECLARE_CLASS(UAuthoritativePoolableActorComponent, UBasePoolableActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAuthoritativePoolableActorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_acquired=NETFIELD_REP_START, \
		NETFIELD_REP_END=_acquired	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuthoritativePoolableActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuthoritativePoolableActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthoritativePoolableActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthoritativePoolableActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthoritativePoolableActorComponent(UAuthoritativePoolableActorComponent&&); \
	NO_API UAuthoritativePoolableActorComponent(const UAuthoritativePoolableActorComponent&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthoritativePoolableActorComponent(UAuthoritativePoolableActorComponent&&); \
	NO_API UAuthoritativePoolableActorComponent(const UAuthoritativePoolableActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthoritativePoolableActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthoritativePoolableActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuthoritativePoolableActorComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___acquired() { return STRUCT_OFFSET(UAuthoritativePoolableActorComponent, _acquired); }


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_6_PROLOG
#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_INCLASS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UAuthoritativePoolableActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_AuthoritativePoolableActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
