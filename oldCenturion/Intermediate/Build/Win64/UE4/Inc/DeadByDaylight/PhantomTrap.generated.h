// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
class ASlasherPlayer;
class USkeletalMeshComponent;
#ifdef DEADBYDAYLIGHT_PhantomTrap_generated_h
#error "PhantomTrap.generated.h already included, missing '#pragma once' in PhantomTrap.h"
#endif
#define DEADBYDAYLIGHT_PhantomTrap_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_RPC_WRAPPERS \
	virtual bool IsTrapSet_Implementation() const; \
 \
	DECLARE_FUNCTION(execEvaluateLineOfSight); \
	DECLARE_FUNCTION(execInitializeTerrorRadiusEmitter); \
	DECLARE_FUNCTION(execIsTrapSet);


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsTrapSet_Implementation() const; \
 \
	DECLARE_FUNCTION(execEvaluateLineOfSight); \
	DECLARE_FUNCTION(execInitializeTerrorRadiusEmitter); \
	DECLARE_FUNCTION(execIsTrapSet);


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_EVENT_PARMS \
	struct PhantomTrap_eventGetMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PhantomTrap_eventGetMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct PhantomTrap_eventIsTrapSet_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PhantomTrap_eventIsTrapSet_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhantomTrap(); \
	friend struct Z_Construct_UClass_APhantomTrap_Statics; \
public: \
	DECLARE_CLASS(APhantomTrap, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APhantomTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPhantomTrap(); \
	friend struct Z_Construct_UClass_APhantomTrap_Statics; \
public: \
	DECLARE_CLASS(APhantomTrap, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APhantomTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantomTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhantomTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomTrap(APhantomTrap&&); \
	NO_API APhantomTrap(const APhantomTrap&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomTrap(APhantomTrap&&); \
	NO_API APhantomTrap(const APhantomTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhantomTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___terrorRadiusEmitter() { return STRUCT_OFFSET(APhantomTrap, _terrorRadiusEmitter); } \
	FORCEINLINE static uint32 __PPO___lineOfSightTraceMinInterval() { return STRUCT_OFFSET(APhantomTrap, _lineOfSightTraceMinInterval); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class APhantomTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PhantomTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
