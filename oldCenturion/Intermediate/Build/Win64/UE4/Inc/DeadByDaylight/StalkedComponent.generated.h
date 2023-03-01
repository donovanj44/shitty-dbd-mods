// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_StalkedComponent_generated_h
#error "StalkedComponent.generated.h already included, missing '#pragma once' in StalkedComponent.h"
#endif
#define DEADBYDAYLIGHT_StalkedComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_8_DELEGATE \
struct _Script_DeadByDaylight_eventStalkedComponentOnBeingStalkedChanged_Parms \
{ \
	bool isBeingStalked; \
}; \
static inline void FStalkedComponentOnBeingStalkedChanged_DelegateWrapper(const FMulticastScriptDelegate& StalkedComponentOnBeingStalkedChanged, bool isBeingStalked) \
{ \
	_Script_DeadByDaylight_eventStalkedComponentOnBeingStalkedChanged_Parms Parms; \
	Parms.isBeingStalked=isBeingStalked ? true : false; \
	StalkedComponentOnBeingStalkedChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasStalkPoints); \
	DECLARE_FUNCTION(execOnRep_IsBeingStalked); \
	DECLARE_FUNCTION(execOnRep_MaxStalkPoints);


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasStalkPoints); \
	DECLARE_FUNCTION(execOnRep_IsBeingStalked); \
	DECLARE_FUNCTION(execOnRep_MaxStalkPoints);


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStalkedComponent(); \
	friend struct Z_Construct_UClass_UStalkedComponent_Statics; \
public: \
	DECLARE_CLASS(UStalkedComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStalkedComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_maxStalkPoints=NETFIELD_REP_START, \
		_isBeingStalked, \
		NETFIELD_REP_END=_isBeingStalked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUStalkedComponent(); \
	friend struct Z_Construct_UClass_UStalkedComponent_Statics; \
public: \
	DECLARE_CLASS(UStalkedComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStalkedComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_maxStalkPoints=NETFIELD_REP_START, \
		_isBeingStalked, \
		NETFIELD_REP_END=_isBeingStalked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStalkedComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStalkedComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStalkedComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStalkedComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStalkedComponent(UStalkedComponent&&); \
	NO_API UStalkedComponent(const UStalkedComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStalkedComponent(UStalkedComponent&&); \
	NO_API UStalkedComponent(const UStalkedComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStalkedComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStalkedComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStalkedComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maxStalkPoints() { return STRUCT_OFFSET(UStalkedComponent, _maxStalkPoints); } \
	FORCEINLINE static uint32 __PPO___stalkableWhileSightingStalker() { return STRUCT_OFFSET(UStalkedComponent, _stalkableWhileSightingStalker); } \
	FORCEINLINE static uint32 __PPO___isBeingStalked() { return STRUCT_OFFSET(UStalkedComponent, _isBeingStalked); } \
	FORCEINLINE static uint32 __PPO___stalkPointsChargeable() { return STRUCT_OFFSET(UStalkedComponent, _stalkPointsChargeable); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStalkedComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StalkedComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
