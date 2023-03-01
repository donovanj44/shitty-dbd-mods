// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveCollection;
#ifdef DEADBYDAYLIGHT_ActorClipperComponent_generated_h
#error "ActorClipperComponent.generated.h already included, missing '#pragma once' in ActorClipperComponent.h"
#endif
#define DEADBYDAYLIGHT_ActorClipperComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOwnerLocallyObservedChanged); \
	DECLARE_FUNCTION(execSetClippingEnabled); \
	DECLARE_FUNCTION(execSetPrimitiveCollection);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOwnerLocallyObservedChanged); \
	DECLARE_FUNCTION(execSetClippingEnabled); \
	DECLARE_FUNCTION(execSetPrimitiveCollection);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorClipperComponent(); \
	friend struct Z_Construct_UClass_UActorClipperComponent_Statics; \
public: \
	DECLARE_CLASS(UActorClipperComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorClipperComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorClipperComponent(); \
	friend struct Z_Construct_UClass_UActorClipperComponent_Statics; \
public: \
	DECLARE_CLASS(UActorClipperComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorClipperComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorClipperComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorClipperComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorClipperComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorClipperComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorClipperComponent(UActorClipperComponent&&); \
	NO_API UActorClipperComponent(const UActorClipperComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorClipperComponent(UActorClipperComponent&&); \
	NO_API UActorClipperComponent(const UActorClipperComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorClipperComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorClipperComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorClipperComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Shape() { return STRUCT_OFFSET(UActorClipperComponent, Shape); } \
	FORCEINLINE static uint32 __PPO___clippedActors() { return STRUCT_OFFSET(UActorClipperComponent, _clippedActors); } \
	FORCEINLINE static uint32 __PPO___clippables() { return STRUCT_OFFSET(UActorClipperComponent, _clippables); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UActorClipperComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ActorClipperComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
