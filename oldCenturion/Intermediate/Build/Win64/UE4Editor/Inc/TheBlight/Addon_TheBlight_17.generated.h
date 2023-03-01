// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef THEBLIGHT_Addon_TheBlight_17_generated_h
#error "Addon_TheBlight_17.generated.h already included, missing '#pragma once' in Addon_TheBlight_17.h"
#endif
#define THEBLIGHT_Addon_TheBlight_17_generated_h

#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_RPC_WRAPPERS \
	virtual void Multicast_SpawnParticleOnSurvivors_Implementation(TArray<ACamperPlayer*> const& survivors); \
 \
	DECLARE_FUNCTION(execMulticast_SpawnParticleOnSurvivors);


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SpawnParticleOnSurvivors_Implementation(TArray<ACamperPlayer*> const& survivors); \
 \
	DECLARE_FUNCTION(execMulticast_SpawnParticleOnSurvivors);


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_EVENT_PARMS \
	struct Addon_TheBlight_17_eventMulticast_SpawnParticleOnSurvivors_Parms \
	{ \
		TArray<ACamperPlayer*> survivors; \
	}; \
	struct Addon_TheBlight_17_eventSpawnParticleOnSurvivor_Parms \
	{ \
		const ACamperPlayer* camperPlayer; \
	};


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAddon_TheBlight_17(); \
	friend struct Z_Construct_UClass_UAddon_TheBlight_17_Statics; \
public: \
	DECLARE_CLASS(UAddon_TheBlight_17, UOnEventBaseAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UAddon_TheBlight_17)


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAddon_TheBlight_17(); \
	friend struct Z_Construct_UClass_UAddon_TheBlight_17_Statics; \
public: \
	DECLARE_CLASS(UAddon_TheBlight_17, UOnEventBaseAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UAddon_TheBlight_17)


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAddon_TheBlight_17(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAddon_TheBlight_17) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAddon_TheBlight_17); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAddon_TheBlight_17); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAddon_TheBlight_17(UAddon_TheBlight_17&&); \
	NO_API UAddon_TheBlight_17(const UAddon_TheBlight_17&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAddon_TheBlight_17(UAddon_TheBlight_17&&); \
	NO_API UAddon_TheBlight_17(const UAddon_TheBlight_17&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAddon_TheBlight_17); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAddon_TheBlight_17); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAddon_TheBlight_17)


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorInRangeDistance() { return STRUCT_OFFSET(UAddon_TheBlight_17, _survivorInRangeDistance); } \
	FORCEINLINE static uint32 __PPO___hinderedSeconds() { return STRUCT_OFFSET(UAddon_TheBlight_17, _hinderedSeconds); }


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_8_PROLOG \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UAddon_TheBlight_17>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_Addon_TheBlight_17_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
