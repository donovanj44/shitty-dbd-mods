// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDBDCameraSocketID : uint8;
class AActor;
class UParticleSystemComponent;
class USceneComponent;
#ifdef DEADBYDAYLIGHT_CameraHandlerComponent_generated_h
#error "CameraHandlerComponent.generated.h already included, missing '#pragma once' in CameraHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_CameraHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventCameraHandlerComponentOnSocketChanged_Parms \
{ \
	EDBDCameraSocketID SocketId; \
}; \
static inline void FCameraHandlerComponentOnSocketChanged_DelegateWrapper(const FMulticastScriptDelegate& CameraHandlerComponentOnSocketChanged, EDBDCameraSocketID SocketId) \
{ \
	_Script_DeadByDaylight_eventCameraHandlerComponentOnSocketChanged_Parms Parms; \
	Parms.SocketId=SocketId; \
	CameraHandlerComponentOnSocketChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCameraToSocket); \
	DECLARE_FUNCTION(execGetCurrentCamera); \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execPlayVFXOnCurrentCamera); \
	DECLARE_FUNCTION(execSetAttachmentComponent); \
	DECLARE_FUNCTION(execSetSocketID);


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCameraToSocket); \
	DECLARE_FUNCTION(execGetCurrentCamera); \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execPlayVFXOnCurrentCamera); \
	DECLARE_FUNCTION(execSetAttachmentComponent); \
	DECLARE_FUNCTION(execSetSocketID);


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraHandlerComponent(); \
	friend struct Z_Construct_UClass_UCameraHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCameraHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_delayedSocketID=NETFIELD_REP_START, \
		NETFIELD_REP_END=_delayedSocketID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCameraHandlerComponent(); \
	friend struct Z_Construct_UClass_UCameraHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCameraHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_delayedSocketID=NETFIELD_REP_START, \
		NETFIELD_REP_END=_delayedSocketID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraHandlerComponent(UCameraHandlerComponent&&); \
	NO_API UCameraHandlerComponent(const UCameraHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraHandlerComponent(UCameraHandlerComponent&&); \
	NO_API UCameraHandlerComponent(const UCameraHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cameraMap() { return STRUCT_OFFSET(UCameraHandlerComponent, _cameraMap); } \
	FORCEINLINE static uint32 __PPO___delayedSocketID() { return STRUCT_OFFSET(UCameraHandlerComponent, _delayedSocketID); } \
	FORCEINLINE static uint32 __PPO___currentSocketID() { return STRUCT_OFFSET(UCameraHandlerComponent, _currentSocketID); } \
	FORCEINLINE static uint32 __PPO___manualZoomAllowPerkModifiers() { return STRUCT_OFFSET(UCameraHandlerComponent, _manualZoomAllowPerkModifiers); } \
	FORCEINLINE static uint32 __PPO___manualZoomCurveFloat() { return STRUCT_OFFSET(UCameraHandlerComponent, _manualZoomCurveFloat); } \
	FORCEINLINE static uint32 __PPO___cameraAttachmentSocket() { return STRUCT_OFFSET(UCameraHandlerComponent, _cameraAttachmentSocket); } \
	FORCEINLINE static uint32 __PPO___cameraAttachmentComponent() { return STRUCT_OFFSET(UCameraHandlerComponent, _cameraAttachmentComponent); } \
	FORCEINLINE static uint32 __PPO___isFOVSystemActive() { return STRUCT_OFFSET(UCameraHandlerComponent, _isFOVSystemActive); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCameraHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CameraHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
