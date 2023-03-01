// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class AGenerator;
#ifdef DEADBYDAYLIGHT_FirecrackerFromEffect_generated_h
#error "FirecrackerFromEffect.generated.h already included, missing '#pragma once' in FirecrackerFromEffect.h"
#endif
#define DEADBYDAYLIGHT_FirecrackerFromEffect_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_RPC_WRAPPERS \
	virtual void Multicast_InitFromEffect_Implementation(ADBDPlayer* player, AGenerator* trapedGenerator); \
 \
	DECLARE_FUNCTION(execMulticast_InitFromEffect);


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_InitFromEffect_Implementation(ADBDPlayer* player, AGenerator* trapedGenerator); \
 \
	DECLARE_FUNCTION(execMulticast_InitFromEffect);


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_EVENT_PARMS \
	struct FirecrackerFromEffect_eventMulticast_InitFromEffect_Parms \
	{ \
		ADBDPlayer* player; \
		AGenerator* trapedGenerator; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirecrackerFromEffect(); \
	friend struct Z_Construct_UClass_AFirecrackerFromEffect_Statics; \
public: \
	DECLARE_CLASS(AFirecrackerFromEffect, AFirecracker, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AFirecrackerFromEffect)


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFirecrackerFromEffect(); \
	friend struct Z_Construct_UClass_AFirecrackerFromEffect_Statics; \
public: \
	DECLARE_CLASS(AFirecrackerFromEffect, AFirecracker, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AFirecrackerFromEffect)


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirecrackerFromEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirecrackerFromEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirecrackerFromEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirecrackerFromEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirecrackerFromEffect(AFirecrackerFromEffect&&); \
	NO_API AFirecrackerFromEffect(const AFirecrackerFromEffect&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirecrackerFromEffect(AFirecrackerFromEffect&&); \
	NO_API AFirecrackerFromEffect(const AFirecrackerFromEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirecrackerFromEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirecrackerFromEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirecrackerFromEffect)


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AFirecrackerFromEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerFromEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
