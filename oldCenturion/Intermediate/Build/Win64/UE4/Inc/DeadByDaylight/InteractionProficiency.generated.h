// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableInteractionDefinition;
class ADBDPlayer;
enum class EStatusEffectType : uint8;
#ifdef DEADBYDAYLIGHT_InteractionProficiency_generated_h
#error "InteractionProficiency.generated.h already included, missing '#pragma once' in InteractionProficiency.h"
#endif
#define DEADBYDAYLIGHT_InteractionProficiency_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_RPC_WRAPPERS \
	virtual bool GetIsActive_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const; \
	virtual int32 GetLevel_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const; \
	virtual EStatusEffectType GetType_Implementation(const float value) const; \
	virtual float GetValue_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const; \
 \
	DECLARE_FUNCTION(execGetIsActive); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetValue);


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetIsActive_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const; \
	virtual int32 GetLevel_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const; \
	virtual EStatusEffectType GetType_Implementation(const float value) const; \
	virtual float GetValue_Implementation(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const; \
 \
	DECLARE_FUNCTION(execGetIsActive); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetValue);


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_EVENT_PARMS \
	struct InteractionProficiency_eventGetIsActive_Parms \
	{ \
		const UChargeableInteractionDefinition* chargeableInteraction; \
		const ADBDPlayer* player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionProficiency_eventGetIsActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionProficiency_eventGetLevel_Parms \
	{ \
		const UChargeableInteractionDefinition* chargeableInteraction; \
		const ADBDPlayer* player; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionProficiency_eventGetLevel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct InteractionProficiency_eventGetType_Parms \
	{ \
		float value; \
		EStatusEffectType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionProficiency_eventGetType_Parms() \
			: ReturnValue((EStatusEffectType)0) \
		{ \
		} \
	}; \
	struct InteractionProficiency_eventGetValue_Parms \
	{ \
		const UChargeableInteractionDefinition* chargeableInteraction; \
		const ADBDPlayer* player; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionProficiency_eventGetValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionProficiency(); \
	friend struct Z_Construct_UClass_UInteractionProficiency_Statics; \
public: \
	DECLARE_CLASS(UInteractionProficiency, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractionProficiency)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionProficiency(); \
	friend struct Z_Construct_UClass_UInteractionProficiency_Statics; \
public: \
	DECLARE_CLASS(UInteractionProficiency, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractionProficiency)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionProficiency(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionProficiency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionProficiency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionProficiency); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionProficiency(UInteractionProficiency&&); \
	NO_API UInteractionProficiency(const UInteractionProficiency&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionProficiency(UInteractionProficiency&&); \
	NO_API UInteractionProficiency(const UInteractionProficiency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionProficiency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionProficiency); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionProficiency)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractionIDs() { return STRUCT_OFFSET(UInteractionProficiency, InteractionIDs); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UInteractionProficiency>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_InteractionProficiency_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
