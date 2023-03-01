// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
#ifdef DBDANIMATION_BaseKillerAnimInstance_generated_h
#error "BaseKillerAnimInstance.generated.h already included, missing '#pragma once' in BaseKillerAnimInstance.h"
#endif
#define DBDANIMATION_BaseKillerAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_ForceAnimPOV); \
	DECLARE_FUNCTION(execGetOwningKiller);


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_ForceAnimPOV); \
	DECLARE_FUNCTION(execGetOwningKiller);


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseKillerAnimInstance(); \
	friend struct Z_Construct_UClass_UBaseKillerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseKillerAnimInstance, UPlayerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UBaseKillerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUBaseKillerAnimInstance(); \
	friend struct Z_Construct_UClass_UBaseKillerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseKillerAnimInstance, UPlayerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UBaseKillerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseKillerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseKillerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseKillerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseKillerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseKillerAnimInstance(UBaseKillerAnimInstance&&); \
	NO_API UBaseKillerAnimInstance(const UBaseKillerAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseKillerAnimInstance(UBaseKillerAnimInstance&&); \
	NO_API UBaseKillerAnimInstance(const UBaseKillerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseKillerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseKillerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseKillerAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningKiller() { return STRUCT_OFFSET(UBaseKillerAnimInstance, _owningKiller); } \
	FORCEINLINE static uint32 __PPO___firstPersonView() { return STRUCT_OFFSET(UBaseKillerAnimInstance, _firstPersonView); }


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_8_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UBaseKillerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_BaseKillerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
