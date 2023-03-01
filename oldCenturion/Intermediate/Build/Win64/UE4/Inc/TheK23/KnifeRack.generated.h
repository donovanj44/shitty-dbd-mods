// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THEK23_KnifeRack_generated_h
#error "KnifeRack.generated.h already included, missing '#pragma once' in KnifeRack.h"
#endif
#define THEK23_KnifeRack_generated_h

#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_EVENT_PARMS \
	struct KnifeRack_eventOnReloadEnded_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct KnifeRack_eventOnReloadMontageStarted_Parms \
	{ \
		float actionSpeedMultiplier; \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKnifeRack(); \
	friend struct Z_Construct_UClass_AKnifeRack_Statics; \
public: \
	DECLARE_CLASS(AKnifeRack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(AKnifeRack)


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAKnifeRack(); \
	friend struct Z_Construct_UClass_AKnifeRack_Statics; \
public: \
	DECLARE_CLASS(AKnifeRack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(AKnifeRack)


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKnifeRack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKnifeRack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnifeRack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnifeRack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKnifeRack(AKnifeRack&&); \
	NO_API AKnifeRack(const AKnifeRack&); \
public:


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKnifeRack(AKnifeRack&&); \
	NO_API AKnifeRack(const AKnifeRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnifeRack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnifeRack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKnifeRack)


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_8_PROLOG \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_INCLASS \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_KnifeRack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class AKnifeRack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_KnifeRack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
