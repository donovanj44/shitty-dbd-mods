// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARifleChain;
#ifdef THEGUNSLINGER_HarpoonRifle_generated_h
#error "HarpoonRifle.generated.h already included, missing '#pragma once' in HarpoonRifle.h"
#endif
#define THEGUNSLINGER_HarpoonRifle_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnFireHarpoon); \
	DECLARE_FUNCTION(execGetChain);


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnFireHarpoon); \
	DECLARE_FUNCTION(execGetChain);


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHarpoonRifle(); \
	friend struct Z_Construct_UClass_AHarpoonRifle_Statics; \
public: \
	DECLARE_CLASS(AHarpoonRifle, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(AHarpoonRifle)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAHarpoonRifle(); \
	friend struct Z_Construct_UClass_AHarpoonRifle_Statics; \
public: \
	DECLARE_CLASS(AHarpoonRifle, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(AHarpoonRifle)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHarpoonRifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHarpoonRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHarpoonRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHarpoonRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHarpoonRifle(AHarpoonRifle&&); \
	NO_API AHarpoonRifle(const AHarpoonRifle&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHarpoonRifle(AHarpoonRifle&&); \
	NO_API AHarpoonRifle(const AHarpoonRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHarpoonRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHarpoonRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHarpoonRifle)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorLinkableClass() { return STRUCT_OFFSET(AHarpoonRifle, _survivorLinkableClass); } \
	FORCEINLINE static uint32 __PPO___killerLinkableClass() { return STRUCT_OFFSET(AHarpoonRifle, _killerLinkableClass); } \
	FORCEINLINE static uint32 __PPO___chainClass() { return STRUCT_OFFSET(AHarpoonRifle, _chainClass); } \
	FORCEINLINE static uint32 __PPO___rifleMuzzleSocket() { return STRUCT_OFFSET(AHarpoonRifle, _rifleMuzzleSocket); } \
	FORCEINLINE static uint32 __PPO___rifleHarpoonLoadingSocket() { return STRUCT_OFFSET(AHarpoonRifle, _rifleHarpoonLoadingSocket); } \
	FORCEINLINE static uint32 __PPO___crowActiveRange() { return STRUCT_OFFSET(AHarpoonRifle, _crowActiveRange); } \
	FORCEINLINE static uint32 __PPO___launcher() { return STRUCT_OFFSET(AHarpoonRifle, _launcher); } \
	FORCEINLINE static uint32 __PPO___harpoonProvider() { return STRUCT_OFFSET(AHarpoonRifle, _harpoonProvider); } \
	FORCEINLINE static uint32 __PPO___chain() { return STRUCT_OFFSET(AHarpoonRifle, _chain); } \
	FORCEINLINE static uint32 __PPO___chainTensionComponent() { return STRUCT_OFFSET(AHarpoonRifle, _chainTensionComponent); } \
	FORCEINLINE static uint32 __PPO___chainTensionChargeable() { return STRUCT_OFFSET(AHarpoonRifle, _chainTensionChargeable); } \
	FORCEINLINE static uint32 __PPO___playerLinker() { return STRUCT_OFFSET(AHarpoonRifle, _playerLinker); } \
	FORCEINLINE static uint32 __PPO___harpoonChainPositioner() { return STRUCT_OFFSET(AHarpoonRifle, _harpoonChainPositioner); } \
	FORCEINLINE static uint32 __PPO___fireInteraction() { return STRUCT_OFFSET(AHarpoonRifle, _fireInteraction); } \
	FORCEINLINE static uint32 __PPO___crowsActivatorComponent() { return STRUCT_OFFSET(AHarpoonRifle, _crowsActivatorComponent); }


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_19_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class AHarpoonRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_HarpoonRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
