// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UPrimitiveComponent;
class UCamperDreamworldComponent;
#ifdef DEADBYDAYLIGHT_WakerObject_generated_h
#error "WakerObject.generated.h already included, missing '#pragma once' in WakerObject.h"
#endif
#define DEADBYDAYLIGHT_WakerObject_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_RPC_WRAPPERS \
	virtual float GetInteractionPercentComplete_Implementation() const; \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execBindToCamperDreamStateChanged); \
	DECLARE_FUNCTION(execCanWakeUpCamper); \
	DECLARE_FUNCTION(execGetChargeComplete); \
	DECLARE_FUNCTION(execGetInteractionPercentComplete); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execGetIsInteracting); \
	DECLARE_FUNCTION(execHasLinkedCamper); \
	DECLARE_FUNCTION(execIsLinkedToCamper); \
	DECLARE_FUNCTION(execLinkCampersOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnAnyCamperDreamStateChanged); \
	DECLARE_FUNCTION(execOnLinkedCamperDreamStateChanged); \
	DECLARE_FUNCTION(execOnRep_LinkedCamperChanged); \
	DECLARE_FUNCTION(execSetChargeComplete);


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetInteractionPercentComplete_Implementation() const; \
	virtual UPrimitiveComponent* GetInteractorPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execBindToCamperDreamStateChanged); \
	DECLARE_FUNCTION(execCanWakeUpCamper); \
	DECLARE_FUNCTION(execGetChargeComplete); \
	DECLARE_FUNCTION(execGetInteractionPercentComplete); \
	DECLARE_FUNCTION(execGetInteractorPrimitiveComponent); \
	DECLARE_FUNCTION(execGetIsInteracting); \
	DECLARE_FUNCTION(execHasLinkedCamper); \
	DECLARE_FUNCTION(execIsLinkedToCamper); \
	DECLARE_FUNCTION(execLinkCampersOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnAnyCamperDreamStateChanged); \
	DECLARE_FUNCTION(execOnLinkedCamperDreamStateChanged); \
	DECLARE_FUNCTION(execOnRep_LinkedCamperChanged); \
	DECLARE_FUNCTION(execSetChargeComplete);


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_EVENT_PARMS \
	struct WakerObject_eventGetInteractionPercentComplete_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WakerObject_eventGetInteractionPercentComplete_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct WakerObject_eventGetInteractorPrimitiveComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WakerObject_eventGetInteractorPrimitiveComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct WakerObject_eventOnNewLinkedCamper_Parms \
	{ \
		UCamperDreamworldComponent* dreamworldComponent; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWakerObject(); \
	friend struct Z_Construct_UClass_AWakerObject_Statics; \
public: \
	DECLARE_CLASS(AWakerObject, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AWakerObject) \
	virtual UObject* _getUObject() const override { return const_cast<AWakerObject*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_linkedCamperDreamworldComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=_linkedCamperDreamworldComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWakerObject(); \
	friend struct Z_Construct_UClass_AWakerObject_Statics; \
public: \
	DECLARE_CLASS(AWakerObject, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AWakerObject) \
	virtual UObject* _getUObject() const override { return const_cast<AWakerObject*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_linkedCamperDreamworldComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=_linkedCamperDreamworldComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWakerObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWakerObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWakerObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWakerObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWakerObject(AWakerObject&&); \
	NO_API AWakerObject(const AWakerObject&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWakerObject(AWakerObject&&); \
	NO_API AWakerObject(const AWakerObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWakerObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWakerObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWakerObject)


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___linkedCamperDreamworldComponent() { return STRUCT_OFFSET(AWakerObject, _linkedCamperDreamworldComponent); } \
	FORCEINLINE static uint32 __PPO__IsInteracting() { return STRUCT_OFFSET(AWakerObject, IsInteracting); } \
	FORCEINLINE static uint32 __PPO___chargeComplete() { return STRUCT_OFFSET(AWakerObject, _chargeComplete); }


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AWakerObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_WakerObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
