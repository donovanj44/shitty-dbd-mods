// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELeanState : uint8;
#ifdef DEADBYDAYLIGHT_AutomaticLeanComponent_generated_h
#error "AutomaticLeanComponent.generated.h already included, missing '#pragma once' in AutomaticLeanComponent.h"
#endif
#define DEADBYDAYLIGHT_AutomaticLeanComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventAutomaticLeanComponentOnLeanStateChanged_Parms \
{ \
	ELeanState leanState; \
}; \
static inline void FAutomaticLeanComponentOnLeanStateChanged_DelegateWrapper(const FMulticastScriptDelegate& AutomaticLeanComponentOnLeanStateChanged, ELeanState leanState) \
{ \
	_Script_DeadByDaylight_eventAutomaticLeanComponentOnLeanStateChanged_Parms Parms; \
	Parms.leanState=leanState; \
	AutomaticLeanComponentOnLeanStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_8_DELEGATE \
struct _Script_DeadByDaylight_eventAutomaticLeanComponentOnCanInitiateLeanChanged_Parms \
{ \
	bool canInitiate; \
}; \
static inline void FAutomaticLeanComponentOnCanInitiateLeanChanged_DelegateWrapper(const FMulticastScriptDelegate& AutomaticLeanComponentOnCanInitiateLeanChanged, bool canInitiate) \
{ \
	_Script_DeadByDaylight_eventAutomaticLeanComponentOnCanInitiateLeanChanged_Parms Parms; \
	Parms.canInitiate=canInitiate ? true : false; \
	AutomaticLeanComponentOnCanInitiateLeanChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_RPC_WRAPPERS \
	virtual bool Server_SetLeanState_Validate(ELeanState ); \
	virtual void Server_SetLeanState_Implementation(ELeanState leanState); \
 \
	DECLARE_FUNCTION(execCanInitiateLean); \
	DECLARE_FUNCTION(execGetAvailableDistanceInFrontOfCamera); \
	DECLARE_FUNCTION(execGetLeanState); \
	DECLARE_FUNCTION(execGetPotentialLeanState); \
	DECLARE_FUNCTION(execIsLeaning); \
	DECLARE_FUNCTION(execLocal_Lean); \
	DECLARE_FUNCTION(execLocal_Unlean); \
	DECLARE_FUNCTION(execOnRep_LeanState); \
	DECLARE_FUNCTION(execServer_SetLeanState);


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetLeanState_Validate(ELeanState ); \
	virtual void Server_SetLeanState_Implementation(ELeanState leanState); \
 \
	DECLARE_FUNCTION(execCanInitiateLean); \
	DECLARE_FUNCTION(execGetAvailableDistanceInFrontOfCamera); \
	DECLARE_FUNCTION(execGetLeanState); \
	DECLARE_FUNCTION(execGetPotentialLeanState); \
	DECLARE_FUNCTION(execIsLeaning); \
	DECLARE_FUNCTION(execLocal_Lean); \
	DECLARE_FUNCTION(execLocal_Unlean); \
	DECLARE_FUNCTION(execOnRep_LeanState); \
	DECLARE_FUNCTION(execServer_SetLeanState);


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_EVENT_PARMS \
	struct AutomaticLeanComponent_eventServer_SetLeanState_Parms \
	{ \
		ELeanState leanState; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomaticLeanComponent(); \
	friend struct Z_Construct_UClass_UAutomaticLeanComponent_Statics; \
public: \
	DECLARE_CLASS(UAutomaticLeanComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAutomaticLeanComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_leanState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_leanState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAutomaticLeanComponent(); \
	friend struct Z_Construct_UClass_UAutomaticLeanComponent_Statics; \
public: \
	DECLARE_CLASS(UAutomaticLeanComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAutomaticLeanComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_leanState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_leanState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomaticLeanComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomaticLeanComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomaticLeanComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomaticLeanComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomaticLeanComponent(UAutomaticLeanComponent&&); \
	NO_API UAutomaticLeanComponent(const UAutomaticLeanComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomaticLeanComponent(UAutomaticLeanComponent&&); \
	NO_API UAutomaticLeanComponent(const UAutomaticLeanComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomaticLeanComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomaticLeanComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomaticLeanComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cameraIdleLocation() { return STRUCT_OFFSET(UAutomaticLeanComponent, _cameraIdleLocation); } \
	FORCEINLINE static uint32 __PPO___cameraLeftLeanLocation() { return STRUCT_OFFSET(UAutomaticLeanComponent, _cameraLeftLeanLocation); } \
	FORCEINLINE static uint32 __PPO___cameraRightLeanLocation() { return STRUCT_OFFSET(UAutomaticLeanComponent, _cameraRightLeanLocation); } \
	FORCEINLINE static uint32 __PPO___cameraCrouchLocation() { return STRUCT_OFFSET(UAutomaticLeanComponent, _cameraCrouchLocation); } \
	FORCEINLINE static uint32 __PPO___cameraCrouchLeftLeanLocation() { return STRUCT_OFFSET(UAutomaticLeanComponent, _cameraCrouchLeftLeanLocation); } \
	FORCEINLINE static uint32 __PPO___cameraCrouchRightLeanLocation() { return STRUCT_OFFSET(UAutomaticLeanComponent, _cameraCrouchRightLeanLocation); } \
	FORCEINLINE static uint32 __PPO___middleSphereTraceLength() { return STRUCT_OFFSET(UAutomaticLeanComponent, _middleSphereTraceLength); } \
	FORCEINLINE static uint32 __PPO___sideSphereTraceLength() { return STRUCT_OFFSET(UAutomaticLeanComponent, _sideSphereTraceLength); } \
	FORCEINLINE static uint32 __PPO___sphereTraceRadius() { return STRUCT_OFFSET(UAutomaticLeanComponent, _sphereTraceRadius); } \
	FORCEINLINE static uint32 __PPO___standingTraceHeightOffset() { return STRUCT_OFFSET(UAutomaticLeanComponent, _standingTraceHeightOffset); } \
	FORCEINLINE static uint32 __PPO___crouchingTraceHeightOffset() { return STRUCT_OFFSET(UAutomaticLeanComponent, _crouchingTraceHeightOffset); } \
	FORCEINLINE static uint32 __PPO___sideTraceOffset() { return STRUCT_OFFSET(UAutomaticLeanComponent, _sideTraceOffset); } \
	FORCEINLINE static uint32 __PPO___maxMovementDistance() { return STRUCT_OFFSET(UAutomaticLeanComponent, _maxMovementDistance); } \
	FORCEINLINE static uint32 __PPO___maxCameraAngle() { return STRUCT_OFFSET(UAutomaticLeanComponent, _maxCameraAngle); } \
	FORCEINLINE static uint32 __PPO___debugMode() { return STRUCT_OFFSET(UAutomaticLeanComponent, _debugMode); } \
	FORCEINLINE static uint32 __PPO___leanState() { return STRUCT_OFFSET(UAutomaticLeanComponent, _leanState); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAutomaticLeanComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AutomaticLeanComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
