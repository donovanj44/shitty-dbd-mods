// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioCustomizationCategory : uint8;
#ifdef DEADBYDAYLIGHT_CustomizedAudioComponent_generated_h
#error "CustomizedAudioComponent.generated.h already included, missing '#pragma once' in CustomizedAudioComponent.h"
#endif
#define DEADBYDAYLIGHT_CustomizedAudioComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_7_DELEGATE \
struct _Script_DeadByDaylight_eventCustomizedAudioComponentOnCustomizedAudioSwitchStateChanged_Parms \
{ \
	EAudioCustomizationCategory category; \
	FString switchState; \
}; \
static inline void FCustomizedAudioComponentOnCustomizedAudioSwitchStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CustomizedAudioComponentOnCustomizedAudioSwitchStateChanged, EAudioCustomizationCategory category, const FString& switchState) \
{ \
	_Script_DeadByDaylight_eventCustomizedAudioComponentOnCustomizedAudioSwitchStateChanged_Parms Parms; \
	Parms.category=category; \
	Parms.switchState=switchState; \
	CustomizedAudioComponentOnCustomizedAudioSwitchStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAudioSwitchState);


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAudioSwitchState);


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizedAudioComponent(); \
	friend struct Z_Construct_UClass_UCustomizedAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomizedAudioComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCustomizedAudioComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCustomizedAudioComponent(); \
	friend struct Z_Construct_UClass_UCustomizedAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomizedAudioComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCustomizedAudioComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizedAudioComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizedAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizedAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizedAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizedAudioComponent(UCustomizedAudioComponent&&); \
	NO_API UCustomizedAudioComponent(const UCustomizedAudioComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizedAudioComponent(UCustomizedAudioComponent&&); \
	NO_API UCustomizedAudioComponent(const UCustomizedAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizedAudioComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizedAudioComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizedAudioComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioCharacterNameDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterNameDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterSubNameDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterSubNameDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterHeadDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterHeadDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterClothesDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterClothesDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterShoesDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterShoesDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterWeaponDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterWeaponDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterAmbianceDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterAmbianceDefaultSwitchState); } \
	FORCEINLINE static uint32 __PPO__AudioCharacterStateDefaultSwitchState() { return STRUCT_OFFSET(UCustomizedAudioComponent, AudioCharacterStateDefaultSwitchState); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCustomizedAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CustomizedAudioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
