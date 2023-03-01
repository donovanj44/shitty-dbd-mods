// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGTallyProgressBar_generated_h
#error "UMGTallyProgressBar.generated.h already included, missing '#pragma once' in UMGTallyProgressBar.h"
#endif
#define DEADBYDAYLIGHT_UMGTallyProgressBar_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPipsCount); \
	DECLARE_FUNCTION(execSetPercent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPipsCount); \
	DECLARE_FUNCTION(execSetPercent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTallyProgressBar(); \
	friend struct Z_Construct_UClass_UUMGTallyProgressBar_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyProgressBar, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyProgressBar)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTallyProgressBar(); \
	friend struct Z_Construct_UClass_UUMGTallyProgressBar_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyProgressBar, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyProgressBar)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTallyProgressBar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTallyProgressBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyProgressBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyProgressBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyProgressBar(UUMGTallyProgressBar&&); \
	NO_API UUMGTallyProgressBar(const UUMGTallyProgressBar&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyProgressBar(UUMGTallyProgressBar&&); \
	NO_API UUMGTallyProgressBar(const UUMGTallyProgressBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyProgressBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyProgressBar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTallyProgressBar)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressBar() { return STRUCT_OFFSET(UUMGTallyProgressBar, ProgressBar); } \
	FORCEINLINE static uint32 __PPO__PipsContainer() { return STRUCT_OFFSET(UUMGTallyProgressBar, PipsContainer); } \
	FORCEINLINE static uint32 __PPO___pipsClasses() { return STRUCT_OFFSET(UUMGTallyProgressBar, _pipsClasses); } \
	FORCEINLINE static uint32 __PPO___pipsAlignment() { return STRUCT_OFFSET(UUMGTallyProgressBar, _pipsAlignment); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTallyProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
