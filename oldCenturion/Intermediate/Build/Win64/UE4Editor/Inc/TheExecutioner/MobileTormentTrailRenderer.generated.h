// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseTormentTrailPoint;
#ifdef THEEXECUTIONER_MobileTormentTrailRenderer_generated_h
#error "MobileTormentTrailRenderer.generated.h already included, missing '#pragma once' in MobileTormentTrailRenderer.h"
#endif
#define THEEXECUTIONER_MobileTormentTrailRenderer_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_RPC_WRAPPERS \
	virtual void Multicast_AddInstance_Implementation(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint); \
	virtual void Multicast_RemoveInstance_Implementation(ABaseTormentTrailPoint* trailPoint); \
 \
	DECLARE_FUNCTION(execMulticast_AddInstance); \
	DECLARE_FUNCTION(execMulticast_RemoveInstance);


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddInstance_Implementation(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint); \
	virtual void Multicast_RemoveInstance_Implementation(ABaseTormentTrailPoint* trailPoint); \
 \
	DECLARE_FUNCTION(execMulticast_AddInstance); \
	DECLARE_FUNCTION(execMulticast_RemoveInstance);


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_EVENT_PARMS \
	struct MobileTormentTrailRenderer_eventMulticast_AddInstance_Parms \
	{ \
		ABaseTormentTrailPoint* trailPoint; \
		bool isAttackTrailPoint; \
	}; \
	struct MobileTormentTrailRenderer_eventMulticast_RemoveInstance_Parms \
	{ \
		ABaseTormentTrailPoint* trailPoint; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMobileTormentTrailRenderer(); \
	friend struct Z_Construct_UClass_AMobileTormentTrailRenderer_Statics; \
public: \
	DECLARE_CLASS(AMobileTormentTrailRenderer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(AMobileTormentTrailRenderer)


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMobileTormentTrailRenderer(); \
	friend struct Z_Construct_UClass_AMobileTormentTrailRenderer_Statics; \
public: \
	DECLARE_CLASS(AMobileTormentTrailRenderer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(AMobileTormentTrailRenderer)


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMobileTormentTrailRenderer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMobileTormentTrailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobileTormentTrailRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobileTormentTrailRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMobileTormentTrailRenderer(AMobileTormentTrailRenderer&&); \
	NO_API AMobileTormentTrailRenderer(const AMobileTormentTrailRenderer&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMobileTormentTrailRenderer(AMobileTormentTrailRenderer&&); \
	NO_API AMobileTormentTrailRenderer(const AMobileTormentTrailRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobileTormentTrailRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobileTormentTrailRenderer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMobileTormentTrailRenderer)


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pillarIsmComponent() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _pillarIsmComponent); } \
	FORCEINLINE static uint32 __PPO___wireIsmComponent() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _wireIsmComponent); } \
	FORCEINLINE static uint32 __PPO___trailIsmComponent() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _trailIsmComponent); } \
	FORCEINLINE static uint32 __PPO___pillarOutlineIsmComponent() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _pillarOutlineIsmComponent); } \
	FORCEINLINE static uint32 __PPO___wireOutlineIsmComponent() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _wireOutlineIsmComponent); } \
	FORCEINLINE static uint32 __PPO___instanceMap() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _instanceMap); } \
	FORCEINLINE static uint32 __PPO___trailMaterialInstanceDynamic() { return STRUCT_OFFSET(AMobileTormentTrailRenderer, _trailMaterialInstanceDynamic); }


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_11_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class AMobileTormentTrailRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_MobileTormentTrailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
