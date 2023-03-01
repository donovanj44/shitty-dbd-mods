// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_BlinkComponent_generated_h
#error "BlinkComponent.generated.h already included, missing '#pragma once' in BlinkComponent.h"
#endif
#define DEADBYDAYLIGHT_BlinkComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_6_DELEGATE \
struct _Script_DeadByDaylight_eventBlinkComponentOnBlinkStateChangedDelegate_Parms \
{ \
	bool isInBlinkingState; \
}; \
static inline void FBlinkComponentOnBlinkStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlinkComponentOnBlinkStateChangedDelegate, bool isInBlinkingState) \
{ \
	_Script_DeadByDaylight_eventBlinkComponentOnBlinkStateChangedDelegate_Parms Parms; \
	Parms.isInBlinkingState=isInBlinkingState ? true : false; \
	BlinkComponentOnBlinkStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOwnerInBlinkingState);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOwnerInBlinkingState);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlinkComponent(); \
	friend struct Z_Construct_UClass_UBlinkComponent_Statics; \
public: \
	DECLARE_CLASS(UBlinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlinkComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUBlinkComponent(); \
	friend struct Z_Construct_UClass_UBlinkComponent_Statics; \
public: \
	DECLARE_CLASS(UBlinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlinkComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlinkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkComponent(UBlinkComponent&&); \
	NO_API UBlinkComponent(const UBlinkComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkComponent(UBlinkComponent&&); \
	NO_API UBlinkComponent(const UBlinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlinkComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInBlinkingState() { return STRUCT_OFFSET(UBlinkComponent, _isInBlinkingState); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBlinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BlinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
