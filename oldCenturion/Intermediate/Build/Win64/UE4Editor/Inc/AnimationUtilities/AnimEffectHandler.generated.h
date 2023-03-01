// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef ANIMATIONUTILITIES_AnimEffectHandler_generated_h
#error "AnimEffectHandler.generated.h already included, missing '#pragma once' in AnimEffectHandler.h"
#endif
#define ANIMATIONUTILITIES_AnimEffectHandler_generated_h

#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_SPARSE_DATA
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_RPC_WRAPPERS \
	virtual bool HandleAnimNotify_Implementation(ACharacter* player, FName const& notifyName) const; \
 \
	DECLARE_FUNCTION(execHandleAnimNotify);


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool HandleAnimNotify_Implementation(ACharacter* player, FName const& notifyName) const; \
 \
	DECLARE_FUNCTION(execHandleAnimNotify);


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_EVENT_PARMS \
	struct AnimEffectHandler_eventHandleAnimNotify_Parms \
	{ \
		ACharacter* player; \
		FName notifyName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimEffectHandler_eventHandleAnimNotify_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimEffectHandler(); \
	friend struct Z_Construct_UClass_UAnimEffectHandler_Statics; \
public: \
	DECLARE_CLASS(UAnimEffectHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAnimEffectHandler)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAnimEffectHandler(); \
	friend struct Z_Construct_UClass_UAnimEffectHandler_Statics; \
public: \
	DECLARE_CLASS(UAnimEffectHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAnimEffectHandler)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimEffectHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimEffectHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimEffectHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimEffectHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimEffectHandler(UAnimEffectHandler&&); \
	NO_API UAnimEffectHandler(const UAnimEffectHandler&); \
public:


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimEffectHandler(UAnimEffectHandler&&); \
	NO_API UAnimEffectHandler(const UAnimEffectHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimEffectHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimEffectHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimEffectHandler)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_8_PROLOG \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_EVENT_PARMS


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_INCLASS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONUTILITIES_API UClass* StaticClass<class UAnimEffectHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_AnimationUtilities_Public_AnimEffectHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
