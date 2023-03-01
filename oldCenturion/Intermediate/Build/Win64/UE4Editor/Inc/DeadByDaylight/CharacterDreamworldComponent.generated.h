// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UObject;
#ifdef DEADBYDAYLIGHT_CharacterDreamworldComponent_generated_h
#error "CharacterDreamworldComponent.generated.h already included, missing '#pragma once' in CharacterDreamworldComponent.h"
#endif
#define DEADBYDAYLIGHT_CharacterDreamworldComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventCharacterDreamworldComponentDreamStateChanged_Parms \
{ \
	bool isInDreamworld; \
	bool locallyObservedChanged; \
}; \
static inline void FCharacterDreamworldComponentDreamStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CharacterDreamworldComponentDreamStateChanged, bool isInDreamworld, bool locallyObservedChanged) \
{ \
	_Script_DeadByDaylight_eventCharacterDreamworldComponentDreamStateChanged_Parms Parms; \
	Parms.isInDreamworld=isInDreamworld ? true : false; \
	Parms.locallyObservedChanged=locallyObservedChanged ? true : false; \
	CharacterDreamworldComponentDreamStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_SetIsInDreamworld); \
	DECLARE_FUNCTION(execFireWakeUpScoreEvent); \
	DECLARE_FUNCTION(execGetLocallyObservedOrLocalCharacter); \
	DECLARE_FUNCTION(execIsInDreamworld); \
	DECLARE_FUNCTION(execOnRep_IsInDreamworld); \
	DECLARE_FUNCTION(execShouldShowVignette);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_SetIsInDreamworld); \
	DECLARE_FUNCTION(execFireWakeUpScoreEvent); \
	DECLARE_FUNCTION(execGetLocallyObservedOrLocalCharacter); \
	DECLARE_FUNCTION(execIsInDreamworld); \
	DECLARE_FUNCTION(execOnRep_IsInDreamworld); \
	DECLARE_FUNCTION(execShouldShowVignette);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterDreamworldComponent(); \
	friend struct Z_Construct_UClass_UCharacterDreamworldComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterDreamworldComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterDreamworldComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInDreamworld=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInDreamworld	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterDreamworldComponent(); \
	friend struct Z_Construct_UClass_UCharacterDreamworldComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterDreamworldComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterDreamworldComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInDreamworld=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInDreamworld	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterDreamworldComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterDreamworldComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterDreamworldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterDreamworldComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterDreamworldComponent(UCharacterDreamworldComponent&&); \
	NO_API UCharacterDreamworldComponent(const UCharacterDreamworldComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterDreamworldComponent(UCharacterDreamworldComponent&&); \
	NO_API UCharacterDreamworldComponent(const UCharacterDreamworldComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterDreamworldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterDreamworldComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterDreamworldComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInDreamworld() { return STRUCT_OFFSET(UCharacterDreamworldComponent, _isInDreamworld); } \
	FORCEINLINE static uint32 __PPO___mobileDreamworldPostProcess() { return STRUCT_OFFSET(UCharacterDreamworldComponent, _mobileDreamworldPostProcess); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCharacterDreamworldComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharacterDreamworldComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
