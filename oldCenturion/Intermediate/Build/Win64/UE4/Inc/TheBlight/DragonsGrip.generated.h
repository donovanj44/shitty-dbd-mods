// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THEBLIGHT_DragonsGrip_generated_h
#error "DragonsGrip.generated.h already included, missing '#pragma once' in DragonsGrip.h"
#endif
#define THEBLIGHT_DragonsGrip_generated_h

#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_RPC_WRAPPERS \
	virtual void Multicast_OnRevealSurvivor_Implementation(ADBDPlayer* survivor); \
 \
	DECLARE_FUNCTION(execMulticast_OnRevealSurvivor);


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnRevealSurvivor_Implementation(ADBDPlayer* survivor); \
 \
	DECLARE_FUNCTION(execMulticast_OnRevealSurvivor);


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_EVENT_PARMS \
	struct DragonsGrip_eventMulticast_OnRevealSurvivor_Parms \
	{ \
		ADBDPlayer* survivor; \
	}; \
	struct DragonsGrip_eventOnRevealSurvivor_Parms \
	{ \
		ADBDPlayer* instigator; \
	};


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDragonsGrip(); \
	friend struct Z_Construct_UClass_UDragonsGrip_Statics; \
public: \
	DECLARE_CLASS(UDragonsGrip, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UDragonsGrip)


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDragonsGrip(); \
	friend struct Z_Construct_UClass_UDragonsGrip_Statics; \
public: \
	DECLARE_CLASS(UDragonsGrip, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UDragonsGrip)


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragonsGrip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragonsGrip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragonsGrip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragonsGrip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragonsGrip(UDragonsGrip&&); \
	NO_API UDragonsGrip(const UDragonsGrip&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragonsGrip(UDragonsGrip&&); \
	NO_API UDragonsGrip(const UDragonsGrip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragonsGrip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragonsGrip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDragonsGrip)


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___kickedGenerator() { return STRUCT_OFFSET(UDragonsGrip, _kickedGenerator); } \
	FORCEINLINE static uint32 __PPO___activationDuration() { return STRUCT_OFFSET(UDragonsGrip, _activationDuration); } \
	FORCEINLINE static uint32 __PPO___cooldownDuration() { return STRUCT_OFFSET(UDragonsGrip, _cooldownDuration); } \
	FORCEINLINE static uint32 __PPO___exposedEffectDuration() { return STRUCT_OFFSET(UDragonsGrip, _exposedEffectDuration); } \
	FORCEINLINE static uint32 __PPO___onlyExposeFirstSurvivor() { return STRUCT_OFFSET(UDragonsGrip, _onlyExposeFirstSurvivor); } \
	FORCEINLINE static uint32 __PPO___loudNoiseRange() { return STRUCT_OFFSET(UDragonsGrip, _loudNoiseRange); }


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_10_PROLOG \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_EVENT_PARMS


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UDragonsGrip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_DragonsGrip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
