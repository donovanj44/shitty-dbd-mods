// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitValidationReport;
#ifdef DEADBYDAYLIGHT_HitValidatorComponent_generated_h
#error "HitValidatorComponent.generated.h already included, missing '#pragma once' in HitValidatorComponent.h"
#endif
#define DEADBYDAYLIGHT_HitValidatorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_DrawDebugHit_Implementation(FHitValidationReport report); \
 \
	DECLARE_FUNCTION(execMulticast_DrawDebugHit);


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DrawDebugHit_Implementation(FHitValidationReport report); \
 \
	DECLARE_FUNCTION(execMulticast_DrawDebugHit);


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_EVENT_PARMS \
	struct HitValidatorComponent_eventMulticast_DrawDebugHit_Parms \
	{ \
		FHitValidationReport report; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitValidatorComponent(); \
	friend struct Z_Construct_UClass_UHitValidatorComponent_Statics; \
public: \
	DECLARE_CLASS(UHitValidatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UHitValidatorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUHitValidatorComponent(); \
	friend struct Z_Construct_UClass_UHitValidatorComponent_Statics; \
public: \
	DECLARE_CLASS(UHitValidatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UHitValidatorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitValidatorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitValidatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitValidatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitValidatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitValidatorComponent(UHitValidatorComponent&&); \
	NO_API UHitValidatorComponent(const UHitValidatorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitValidatorComponent(UHitValidatorComponent&&); \
	NO_API UHitValidatorComponent(const UHitValidatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitValidatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitValidatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitValidatorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maximumSquareDistance() { return STRUCT_OFFSET(UHitValidatorComponent, _maximumSquareDistance); } \
	FORCEINLINE static uint32 __PPO___hitValidationConfigComponent() { return STRUCT_OFFSET(UHitValidatorComponent, _hitValidationConfigComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UHitValidatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_HitValidatorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
