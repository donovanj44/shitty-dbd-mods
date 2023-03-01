// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_PowerToggleComponent_generated_h
#error "PowerToggleComponent.generated.h already included, missing '#pragma once' in PowerToggleComponent.h"
#endif
#define DBDGAMEPLAY_PowerToggleComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsInPower);


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsInPower);


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPowerToggleComponent(); \
	friend struct Z_Construct_UClass_UPowerToggleComponent_Statics; \
public: \
	DECLARE_CLASS(UPowerToggleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPowerToggleComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInPower=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInPower	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPowerToggleComponent(); \
	friend struct Z_Construct_UClass_UPowerToggleComponent_Statics; \
public: \
	DECLARE_CLASS(UPowerToggleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPowerToggleComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInPower=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInPower	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPowerToggleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPowerToggleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerToggleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerToggleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerToggleComponent(UPowerToggleComponent&&); \
	NO_API UPowerToggleComponent(const UPowerToggleComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerToggleComponent(UPowerToggleComponent&&); \
	NO_API UPowerToggleComponent(const UPowerToggleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerToggleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerToggleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPowerToggleComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInPower() { return STRUCT_OFFSET(UPowerToggleComponent, _isInPower); }


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_6_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UPowerToggleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_PowerToggleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
