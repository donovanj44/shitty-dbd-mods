// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_LethalPursuer_generated_h
#error "LethalPursuer.generated.h already included, missing '#pragma once' in LethalPursuer.h"
#endif
#define THEK24_LethalPursuer_generated_h

#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_RPC_WRAPPERS \
	virtual void Server_ActivatePerk_Implementation(); \
 \
	DECLARE_FUNCTION(execLocal_OnIntroCompleted); \
	DECLARE_FUNCTION(execServer_ActivatePerk);


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_ActivatePerk_Implementation(); \
 \
	DECLARE_FUNCTION(execLocal_OnIntroCompleted); \
	DECLARE_FUNCTION(execServer_ActivatePerk);


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_EVENT_PARMS
#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULethalPursuer(); \
	friend struct Z_Construct_UClass_ULethalPursuer_Statics; \
public: \
	DECLARE_CLASS(ULethalPursuer, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(ULethalPursuer)


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_INCLASS \
private: \
	static void StaticRegisterNativesULethalPursuer(); \
	friend struct Z_Construct_UClass_ULethalPursuer_Statics; \
public: \
	DECLARE_CLASS(ULethalPursuer, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(ULethalPursuer)


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULethalPursuer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULethalPursuer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULethalPursuer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULethalPursuer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULethalPursuer(ULethalPursuer&&); \
	NO_API ULethalPursuer(const ULethalPursuer&); \
public:


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULethalPursuer(ULethalPursuer&&); \
	NO_API ULethalPursuer(const ULethalPursuer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULethalPursuer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULethalPursuer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULethalPursuer)


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorRevealDuration() { return STRUCT_OFFSET(ULethalPursuer, _survivorRevealDuration); }


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_6_PROLOG \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_INCLASS \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_LethalPursuer_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class ULethalPursuer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_LethalPursuer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
