// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_CharacterChaseVisualComponent_generated_h
#error "CharacterChaseVisualComponent.generated.h already included, missing '#pragma once' in CharacterChaseVisualComponent.h"
#endif
#define DEADBYDAYLIGHT_CharacterChaseVisualComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_12_DELEGATE \
static inline void FCharacterChaseVisualComponentOnChaseEndEvent_DelegateWrapper(const FMulticastScriptDelegate& CharacterChaseVisualComponentOnChaseEndEvent) \
{ \
	CharacterChaseVisualComponentOnChaseEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_11_DELEGATE \
static inline void FCharacterChaseVisualComponentOnChaseStartEvent_DelegateWrapper(const FMulticastScriptDelegate& CharacterChaseVisualComponentOnChaseStartEvent) \
{ \
	CharacterChaseVisualComponentOnChaseStartEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAllChaseEnd); \
	DECLARE_FUNCTION(execOnObservedCharacterChange);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAllChaseEnd); \
	DECLARE_FUNCTION(execOnObservedCharacterChange);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterChaseVisualComponent(); \
	friend struct Z_Construct_UClass_UCharacterChaseVisualComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterChaseVisualComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterChaseVisualComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterChaseVisualComponent(); \
	friend struct Z_Construct_UClass_UCharacterChaseVisualComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterChaseVisualComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterChaseVisualComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterChaseVisualComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterChaseVisualComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterChaseVisualComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterChaseVisualComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterChaseVisualComponent(UCharacterChaseVisualComponent&&); \
	NO_API UCharacterChaseVisualComponent(const UCharacterChaseVisualComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterChaseVisualComponent(UCharacterChaseVisualComponent&&); \
	NO_API UCharacterChaseVisualComponent(const UCharacterChaseVisualComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterChaseVisualComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterChaseVisualComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterChaseVisualComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___vignetteMeshComp() { return STRUCT_OFFSET(UCharacterChaseVisualComponent, _vignetteMeshComp); } \
	FORCEINLINE static uint32 __PPO___relativeLocation() { return STRUCT_OFFSET(UCharacterChaseVisualComponent, _relativeLocation); } \
	FORCEINLINE static uint32 __PPO___relativeScale() { return STRUCT_OFFSET(UCharacterChaseVisualComponent, _relativeScale); } \
	FORCEINLINE static uint32 __PPO___relativeRotation() { return STRUCT_OFFSET(UCharacterChaseVisualComponent, _relativeRotation); } \
	FORCEINLINE static uint32 __PPO___fovModifyFactor() { return STRUCT_OFFSET(UCharacterChaseVisualComponent, _fovModifyFactor); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCharacterChaseVisualComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharacterChaseVisualComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
