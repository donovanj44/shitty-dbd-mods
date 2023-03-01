// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_ChestAnimInstance_generated_h
#error "ChestAnimInstance.generated.h already included, missing '#pragma once' in ChestAnimInstance.h"
#endif
#define DBDANIMATION_ChestAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSearchedChanged);


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSearchedChanged);


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChestAnimInstance(); \
	friend struct Z_Construct_UClass_UChestAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UChestAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UChestAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUChestAnimInstance(); \
	friend struct Z_Construct_UClass_UChestAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UChestAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UChestAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChestAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChestAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChestAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChestAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChestAnimInstance(UChestAnimInstance&&); \
	NO_API UChestAnimInstance(const UChestAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChestAnimInstance(UChestAnimInstance&&); \
	NO_API UChestAnimInstance(const UChestAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChestAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChestAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChestAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningChest() { return STRUCT_OFFSET(UChestAnimInstance, _owningChest); } \
	FORCEINLINE static uint32 __PPO___isOpen() { return STRUCT_OFFSET(UChestAnimInstance, _isOpen); } \
	FORCEINLINE static uint32 __PPO___isBeingPriedOpen() { return STRUCT_OFFSET(UChestAnimInstance, _isBeingPriedOpen); } \
	FORCEINLINE static uint32 __PPO___openChestInteraction() { return STRUCT_OFFSET(UChestAnimInstance, _openChestInteraction); }


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_9_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UChestAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_ChestAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
