// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYUTILITIES_PoolableActor_generated_h
#error "PoolableActor.generated.h already included, missing '#pragma once' in PoolableActor.h"
#endif
#define GAMEPLAYUTILITIES_PoolableActor_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoolableActor(UPoolableActor&&); \
	NO_API UPoolableActor(const UPoolableActor&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoolableActor(UPoolableActor&&); \
	NO_API UPoolableActor(const UPoolableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolableActor)


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoolableActor(); \
	friend struct Z_Construct_UClass_UPoolableActor_Statics; \
public: \
	DECLARE_CLASS(UPoolableActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPoolableActor)


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoolableActor() {} \
public: \
	typedef UPoolableActor UClassType; \
	typedef IPoolableActor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IPoolableActor() {} \
public: \
	typedef UPoolableActor UClassType; \
	typedef IPoolableActor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_6_PROLOG
#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UPoolableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_PoolableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
