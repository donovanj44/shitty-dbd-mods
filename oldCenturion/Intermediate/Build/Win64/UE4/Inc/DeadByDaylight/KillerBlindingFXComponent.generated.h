// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_KillerBlindingFXComponent_generated_h
#error "KillerBlindingFXComponent.generated.h already included, missing '#pragma once' in KillerBlindingFXComponent.h"
#endif
#define DEADBYDAYLIGHT_KillerBlindingFXComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_OnBlindedByPlayersCosmetic_Implementation(TArray<ADBDPlayer*> const& players); \
 \
	DECLARE_FUNCTION(execMulticast_OnBlindedByPlayersCosmetic);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnBlindedByPlayersCosmetic_Implementation(TArray<ADBDPlayer*> const& players); \
 \
	DECLARE_FUNCTION(execMulticast_OnBlindedByPlayersCosmetic);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_EVENT_PARMS \
	struct KillerBlindingFXComponent_eventMulticast_OnBlindedByPlayersCosmetic_Parms \
	{ \
		TArray<ADBDPlayer*> players; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKillerBlindingFXComponent(); \
	friend struct Z_Construct_UClass_UKillerBlindingFXComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerBlindingFXComponent, UBlindingFXComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillerBlindingFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUKillerBlindingFXComponent(); \
	friend struct Z_Construct_UClass_UKillerBlindingFXComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerBlindingFXComponent, UBlindingFXComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillerBlindingFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKillerBlindingFXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillerBlindingFXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerBlindingFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerBlindingFXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerBlindingFXComponent(UKillerBlindingFXComponent&&); \
	NO_API UKillerBlindingFXComponent(const UKillerBlindingFXComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerBlindingFXComponent(UKillerBlindingFXComponent&&); \
	NO_API UKillerBlindingFXComponent(const UKillerBlindingFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerBlindingFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerBlindingFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKillerBlindingFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blindedSound() { return STRUCT_OFFSET(UKillerBlindingFXComponent, _blindedSound); }


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UKillerBlindingFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_KillerBlindingFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
