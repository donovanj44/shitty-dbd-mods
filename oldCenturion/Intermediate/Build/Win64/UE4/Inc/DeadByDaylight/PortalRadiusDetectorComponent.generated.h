// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PortalRadiusDetectorComponent_generated_h
#error "PortalRadiusDetectorComponent.generated.h already included, missing '#pragma once' in PortalRadiusDetectorComponent.h"
#endif
#define DEADBYDAYLIGHT_PortalRadiusDetectorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_9_DELEGATE \
static inline void FPortalRadiusDetectorComponentCallback_DelegateWrapper(const FScriptDelegate& PortalRadiusDetectorComponentCallback) \
{ \
	PortalRadiusDetectorComponentCallback.ProcessDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_CallOnPortalEffectsApplied); \
	DECLARE_FUNCTION(execAuthority_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_PlayersInsideRadius);


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_CallOnPortalEffectsApplied); \
	DECLARE_FUNCTION(execAuthority_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_PlayersInsideRadius);


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortalRadiusDetectorComponent(); \
	friend struct Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalRadiusDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPortalRadiusDetectorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_playersInsideRadius=NETFIELD_REP_START, \
		NETFIELD_REP_END=_playersInsideRadius	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPortalRadiusDetectorComponent(); \
	friend struct Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalRadiusDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPortalRadiusDetectorComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_playersInsideRadius=NETFIELD_REP_START, \
		NETFIELD_REP_END=_playersInsideRadius	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalRadiusDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalRadiusDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalRadiusDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalRadiusDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalRadiusDetectorComponent(UPortalRadiusDetectorComponent&&); \
	NO_API UPortalRadiusDetectorComponent(const UPortalRadiusDetectorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalRadiusDetectorComponent(UPortalRadiusDetectorComponent&&); \
	NO_API UPortalRadiusDetectorComponent(const UPortalRadiusDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalRadiusDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalRadiusDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPortalRadiusDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Portals() { return STRUCT_OFFSET(UPortalRadiusDetectorComponent, Portals); } \
	FORCEINLINE static uint32 __PPO___playersInsideRadius() { return STRUCT_OFFSET(UPortalRadiusDetectorComponent, _playersInsideRadius); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPortalRadiusDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PortalRadiusDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
