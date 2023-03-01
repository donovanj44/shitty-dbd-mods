// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_CameraAttachmentComponent_generated_h
#error "CameraAttachmentComponent.generated.h already included, missing '#pragma once' in CameraAttachmentComponent.h"
#endif
#define DEADBYDAYLIGHT_CameraAttachmentComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDetach); \
	DECLARE_FUNCTION(execIsAttached); \
	DECLARE_FUNCTION(execReset);


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDetach); \
	DECLARE_FUNCTION(execIsAttached); \
	DECLARE_FUNCTION(execReset);


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAttachmentComponent(); \
	friend struct Z_Construct_UClass_UCameraAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCameraAttachmentComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCameraAttachmentComponent(); \
	friend struct Z_Construct_UClass_UCameraAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UCameraAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCameraAttachmentComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAttachmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAttachmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAttachmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAttachmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAttachmentComponent(UCameraAttachmentComponent&&); \
	NO_API UCameraAttachmentComponent(const UCameraAttachmentComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAttachmentComponent(UCameraAttachmentComponent&&); \
	NO_API UCameraAttachmentComponent(const UCameraAttachmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAttachmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAttachmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraAttachmentComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___anchor() { return STRUCT_OFFSET(UCameraAttachmentComponent, _anchor); } \
	FORCEINLINE static uint32 __PPO___defaultCameraAttachment() { return STRUCT_OFFSET(UCameraAttachmentComponent, _defaultCameraAttachment); } \
	FORCEINLINE static uint32 __PPO___currentCameraAttachment() { return STRUCT_OFFSET(UCameraAttachmentComponent, _currentCameraAttachment); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCameraAttachmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CameraAttachmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
