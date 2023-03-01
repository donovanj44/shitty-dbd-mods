// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWallGrabState : uint8;
#ifdef THEBLIGHT_BlightPower_generated_h
#error "BlightPower.generated.h already included, missing '#pragma once' in BlightPower.h"
#endif
#define THEBLIGHT_BlightPower_generated_h

#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPowerStateChanged);


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPowerStateChanged);


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlightPower(); \
	friend struct Z_Construct_UClass_ABlightPower_Statics; \
public: \
	DECLARE_CLASS(ABlightPower, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(ABlightPower)


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABlightPower(); \
	friend struct Z_Construct_UClass_ABlightPower_Statics; \
public: \
	DECLARE_CLASS(ABlightPower, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(ABlightPower)


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlightPower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlightPower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlightPower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlightPower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlightPower(ABlightPower&&); \
	NO_API ABlightPower(const ABlightPower&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlightPower(ABlightPower&&); \
	NO_API ABlightPower(const ABlightPower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlightPower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlightPower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlightPower)


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blightPowerCharge() { return STRUCT_OFFSET(ABlightPower, _blightPowerCharge); } \
	FORCEINLINE static uint32 __PPO___blightPowerToggle() { return STRUCT_OFFSET(ABlightPower, _blightPowerToggle); } \
	FORCEINLINE static uint32 __PPO___blightPowerActivateChargeable() { return STRUCT_OFFSET(ABlightPower, _blightPowerActivateChargeable); } \
	FORCEINLINE static uint32 __PPO___blightPowerStateComponent() { return STRUCT_OFFSET(ABlightPower, _blightPowerStateComponent); } \
	FORCEINLINE static uint32 __PPO___blightPowerActivateMaxCharge() { return STRUCT_OFFSET(ABlightPower, _blightPowerActivateMaxCharge); } \
	FORCEINLINE static uint32 __PPO___blightPowerMaxCharge() { return STRUCT_OFFSET(ABlightPower, _blightPowerMaxCharge); } \
	FORCEINLINE static uint32 __PPO___blightPowerDechargeRate() { return STRUCT_OFFSET(ABlightPower, _blightPowerDechargeRate); } \
	FORCEINLINE static uint32 __PPO___blightPowerRechargeRate() { return STRUCT_OFFSET(ABlightPower, _blightPowerRechargeRate); }


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_14_PROLOG
#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPower_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class ABlightPower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_BlightPower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
