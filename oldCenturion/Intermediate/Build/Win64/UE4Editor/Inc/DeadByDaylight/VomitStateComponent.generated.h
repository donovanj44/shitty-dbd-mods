// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELinkedVomitState : uint8;
class UGameplayTagContainerComponent;
#ifdef DEADBYDAYLIGHT_VomitStateComponent_generated_h
#error "VomitStateComponent.generated.h already included, missing '#pragma once' in VomitStateComponent.h"
#endif
#define DEADBYDAYLIGHT_VomitStateComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetVomitState); \
	DECLARE_FUNCTION(execIsVomiting); \
	DECLARE_FUNCTION(execSetObjectState); \
	DECLARE_FUNCTION(execSetVomitState);


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetVomitState); \
	DECLARE_FUNCTION(execIsVomiting); \
	DECLARE_FUNCTION(execSetObjectState); \
	DECLARE_FUNCTION(execSetVomitState);


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVomitStateComponent(); \
	friend struct Z_Construct_UClass_UVomitStateComponent_Statics; \
public: \
	DECLARE_CLASS(UVomitStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UVomitStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVomitStateComponent(); \
	friend struct Z_Construct_UClass_UVomitStateComponent_Statics; \
public: \
	DECLARE_CLASS(UVomitStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UVomitStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVomitStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVomitStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVomitStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVomitStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVomitStateComponent(UVomitStateComponent&&); \
	NO_API UVomitStateComponent(const UVomitStateComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVomitStateComponent(UVomitStateComponent&&); \
	NO_API UVomitStateComponent(const UVomitStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVomitStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVomitStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVomitStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isCharging() { return STRUCT_OFFSET(UVomitStateComponent, _isCharging); }


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UVomitStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_VomitStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
