// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef GAMEPLAYUTILITIES_CharacterSightComponent_generated_h
#error "CharacterSightComponent.generated.h already included, missing '#pragma once' in CharacterSightComponent.h"
#endif
#define GAMEPLAYUTILITIES_CharacterSightComponent_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_RPC_WRAPPERS \
	virtual bool Server_UpdateDiscernedCharacters_Validate(TArray<ACharacter*> const& ); \
	virtual void Server_UpdateDiscernedCharacters_Implementation(TArray<ACharacter*> const& characters); \
 \
	DECLARE_FUNCTION(execOnRep_CanSee); \
	DECLARE_FUNCTION(execOnRep_DiscernibleCharacters); \
	DECLARE_FUNCTION(execServer_UpdateDiscernedCharacters); \
	DECLARE_FUNCTION(execSetMaximumSightDistance); \
	DECLARE_FUNCTION(execSetMinimumCharacterScreenPercent); \
	DECLARE_FUNCTION(execSetMinimumCharacterVisiblePixelsPercent); \
	DECLARE_FUNCTION(execSetScreenVisibilityZoneRadiusPercent);


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_UpdateDiscernedCharacters_Validate(TArray<ACharacter*> const& ); \
	virtual void Server_UpdateDiscernedCharacters_Implementation(TArray<ACharacter*> const& characters); \
 \
	DECLARE_FUNCTION(execOnRep_CanSee); \
	DECLARE_FUNCTION(execOnRep_DiscernibleCharacters); \
	DECLARE_FUNCTION(execServer_UpdateDiscernedCharacters); \
	DECLARE_FUNCTION(execSetMaximumSightDistance); \
	DECLARE_FUNCTION(execSetMinimumCharacterScreenPercent); \
	DECLARE_FUNCTION(execSetMinimumCharacterVisiblePixelsPercent); \
	DECLARE_FUNCTION(execSetScreenVisibilityZoneRadiusPercent);


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_EVENT_PARMS \
	struct CharacterSightComponent_eventServer_UpdateDiscernedCharacters_Parms \
	{ \
		TArray<ACharacter*> characters; \
	};


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterSightComponent(); \
	friend struct Z_Construct_UClass_UCharacterSightComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterSightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSightComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterSightComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_discernedCharacters=NETFIELD_REP_START, \
		_canSee, \
		NETFIELD_REP_END=_canSee	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterSightComponent(); \
	friend struct Z_Construct_UClass_UCharacterSightComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterSightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSightComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterSightComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_discernedCharacters=NETFIELD_REP_START, \
		_canSee, \
		NETFIELD_REP_END=_canSee	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSightComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterSightComponent(UCharacterSightComponent&&); \
	NO_API UCharacterSightComponent(const UCharacterSightComponent&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterSightComponent(UCharacterSightComponent&&); \
	NO_API UCharacterSightComponent(const UCharacterSightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterSightComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___minimumCharacterScreenPercent() { return STRUCT_OFFSET(UCharacterSightComponent, _minimumCharacterScreenPercent); } \
	FORCEINLINE static uint32 __PPO___minimumCharacterVisiblePixelsPercent() { return STRUCT_OFFSET(UCharacterSightComponent, _minimumCharacterVisiblePixelsPercent); } \
	FORCEINLINE static uint32 __PPO___maximumSightDistance() { return STRUCT_OFFSET(UCharacterSightComponent, _maximumSightDistance); } \
	FORCEINLINE static uint32 __PPO___screenVisibilityZoneRadiusPercent() { return STRUCT_OFFSET(UCharacterSightComponent, _screenVisibilityZoneRadiusPercent); } \
	FORCEINLINE static uint32 __PPO___sightingDelay() { return STRUCT_OFFSET(UCharacterSightComponent, _sightingDelay); } \
	FORCEINLINE static uint32 __PPO___discerningDelay() { return STRUCT_OFFSET(UCharacterSightComponent, _discerningDelay); } \
	FORCEINLINE static uint32 __PPO___undiscerningDelay() { return STRUCT_OFFSET(UCharacterSightComponent, _undiscerningDelay); } \
	FORCEINLINE static uint32 __PPO___sightableCharacterClass() { return STRUCT_OFFSET(UCharacterSightComponent, _sightableCharacterClass); } \
	FORCEINLINE static uint32 __PPO___discernedCharacters() { return STRUCT_OFFSET(UCharacterSightComponent, _discernedCharacters); } \
	FORCEINLINE static uint32 __PPO___localDiscernibleCharacters() { return STRUCT_OFFSET(UCharacterSightComponent, _localDiscernibleCharacters); } \
	FORCEINLINE static uint32 __PPO___debugMode() { return STRUCT_OFFSET(UCharacterSightComponent, _debugMode); } \
	FORCEINLINE static uint32 __PPO___canSee() { return STRUCT_OFFSET(UCharacterSightComponent, _canSee); } \
	FORCEINLINE static uint32 __PPO___activationDefinition() { return STRUCT_OFFSET(UCharacterSightComponent, _activationDefinition); }


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_13_PROLOG \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_EVENT_PARMS


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_INCLASS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UCharacterSightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_CharacterSightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
