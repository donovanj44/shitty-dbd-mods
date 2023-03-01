// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_MapActorComponent_generated_h
#error "MapActorComponent.generated.h already included, missing '#pragma once' in MapActorComponent.h"
#endif
#define DEADBYDAYLIGHT_MapActorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_RPC_WRAPPERS \
	virtual void Multicast_SetDetectionEnabled_Implementation(bool enabled); \
 \
	DECLARE_FUNCTION(execGetDetectionEnabled); \
	DECLARE_FUNCTION(execIsKnownBy); \
	DECLARE_FUNCTION(execMulticast_SetDetectionEnabled);


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetDetectionEnabled_Implementation(bool enabled); \
 \
	DECLARE_FUNCTION(execGetDetectionEnabled); \
	DECLARE_FUNCTION(execIsKnownBy); \
	DECLARE_FUNCTION(execMulticast_SetDetectionEnabled);


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_EVENT_PARMS \
	struct MapActorComponent_eventMulticast_SetDetectionEnabled_Parms \
	{ \
		bool enabled; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapActorComponent(); \
	friend struct Z_Construct_UClass_UMapActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMapActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMapActorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMapActorComponent(); \
	friend struct Z_Construct_UClass_UMapActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMapActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMapActorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapActorComponent(UMapActorComponent&&); \
	NO_API UMapActorComponent(const UMapActorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapActorComponent(UMapActorComponent&&); \
	NO_API UMapActorComponent(const UMapActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapActorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___detectionEnabled() { return STRUCT_OFFSET(UMapActorComponent, _detectionEnabled); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UMapActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MapActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
