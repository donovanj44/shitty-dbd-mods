// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHarpoonProp;
class ADBDPlayer;
#ifdef THEGUNSLINGER_HarpoonChainPositioner_generated_h
#error "HarpoonChainPositioner.generated.h already included, missing '#pragma once' in HarpoonChainPositioner.h"
#endif
#define THEGUNSLINGER_HarpoonChainPositioner_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttachToAnimSocket); \
	DECLARE_FUNCTION(execAttachToRifle); \
	DECLARE_FUNCTION(execGetCurrentHarpoon); \
	DECLARE_FUNCTION(execGetHarpoonProp); \
	DECLARE_FUNCTION(execOnOwnerCollected);


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachToAnimSocket); \
	DECLARE_FUNCTION(execAttachToRifle); \
	DECLARE_FUNCTION(execGetCurrentHarpoon); \
	DECLARE_FUNCTION(execGetHarpoonProp); \
	DECLARE_FUNCTION(execOnOwnerCollected);


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_EVENT_PARMS \
	struct HarpoonChainPositioner_eventOnCurrentHarpoonChanged_Parms \
	{ \
		AActor* currentHarpoon; \
	}; \
	struct HarpoonChainPositioner_eventOnHarpoonTravelingChanged_Parms \
	{ \
		bool isTravelling; \
	};


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarpoonChainPositioner(); \
	friend struct Z_Construct_UClass_UHarpoonChainPositioner_Statics; \
public: \
	DECLARE_CLASS(UHarpoonChainPositioner, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UHarpoonChainPositioner)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHarpoonChainPositioner(); \
	friend struct Z_Construct_UClass_UHarpoonChainPositioner_Statics; \
public: \
	DECLARE_CLASS(UHarpoonChainPositioner, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UHarpoonChainPositioner)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarpoonChainPositioner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarpoonChainPositioner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarpoonChainPositioner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarpoonChainPositioner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHarpoonChainPositioner(UHarpoonChainPositioner&&); \
	NO_API UHarpoonChainPositioner(const UHarpoonChainPositioner&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHarpoonChainPositioner(UHarpoonChainPositioner&&); \
	NO_API UHarpoonChainPositioner(const UHarpoonChainPositioner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarpoonChainPositioner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarpoonChainPositioner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHarpoonChainPositioner)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___harpoonPropClass() { return STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonPropClass); } \
	FORCEINLINE static uint32 __PPO___survivorAttachSocket() { return STRUCT_OFFSET(UHarpoonChainPositioner, _survivorAttachSocket); } \
	FORCEINLINE static uint32 __PPO___animationSocket() { return STRUCT_OFFSET(UHarpoonChainPositioner, _animationSocket); } \
	FORCEINLINE static uint32 __PPO___reelBackToRifleSpeed() { return STRUCT_OFFSET(UHarpoonChainPositioner, _reelBackToRifleSpeed); } \
	FORCEINLINE static uint32 __PPO___harpoonMinimumSnapBackDistance() { return STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonMinimumSnapBackDistance); } \
	FORCEINLINE static uint32 __PPO___harpoonProp() { return STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonProp); } \
	FORCEINLINE static uint32 __PPO___harpoonProjectile() { return STRUCT_OFFSET(UHarpoonChainPositioner, _harpoonProjectile); } \
	FORCEINLINE static uint32 __PPO___collector() { return STRUCT_OFFSET(UHarpoonChainPositioner, _collector); } \
	FORCEINLINE static uint32 __PPO___chain() { return STRUCT_OFFSET(UHarpoonChainPositioner, _chain); }


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_14_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UHarpoonChainPositioner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_HarpoonChainPositioner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
