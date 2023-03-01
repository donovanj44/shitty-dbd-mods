// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UAICharacterBehaviourData;
struct FAIRequestID;
#ifdef DEADBYDAYLIGHT_AIMoveToInteract_generated_h
#error "AIMoveToInteract.generated.h already included, missing '#pragma once' in AIMoveToInteract.h"
#endif
#define DEADBYDAYLIGHT_AIMoveToInteract_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execInteractionPointReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execInteractionPointReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMoveToInteract(); \
	friend struct Z_Construct_UClass_UAIMoveToInteract_Statics; \
public: \
	DECLARE_CLASS(UAIMoveToInteract, UAICharacterBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAIMoveToInteract)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAIMoveToInteract(); \
	friend struct Z_Construct_UClass_UAIMoveToInteract_Statics; \
public: \
	DECLARE_CLASS(UAIMoveToInteract, UAICharacterBehaviour, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAIMoveToInteract)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMoveToInteract(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMoveToInteract) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMoveToInteract); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMoveToInteract); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMoveToInteract(UAIMoveToInteract&&); \
	NO_API UAIMoveToInteract(const UAIMoveToInteract&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMoveToInteract(UAIMoveToInteract&&); \
	NO_API UAIMoveToInteract(const UAIMoveToInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMoveToInteract); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMoveToInteract); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIMoveToInteract)


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___aiMoveToInteractData() { return STRUCT_OFFSET(UAIMoveToInteract, _aiMoveToInteractData); } \
	FORCEINLINE static uint32 __PPO___aiController() { return STRUCT_OFFSET(UAIMoveToInteract, _aiController); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAIMoveToInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AIMoveToInteract_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
