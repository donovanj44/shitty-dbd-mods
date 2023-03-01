// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class ESkillCheckCustomType : uint8;
class ACollectable;
class UChargeableComponent;
#ifdef DEADBYDAYLIGHT_ChargeableInteractionDefinition_generated_h
#error "ChargeableInteractionDefinition.generated.h already included, missing '#pragma once' in ChargeableInteractionDefinition.h"
#endif
#define DEADBYDAYLIGHT_ChargeableInteractionDefinition_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableInteractionDefinitionSkillCheckResponseAuthorityDelegate_Parms \
{ \
	bool Success; \
	bool Bonus; \
	ADBDPlayer* Player; \
	bool TriggerLoudNoise; \
	ESkillCheckCustomType type; \
}; \
static inline void FChargeableInteractionDefinitionSkillCheckResponseAuthorityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableInteractionDefinitionSkillCheckResponseAuthorityDelegate, bool Success, bool Bonus, ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType type) \
{ \
	_Script_DeadByDaylight_eventChargeableInteractionDefinitionSkillCheckResponseAuthorityDelegate_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.Bonus=Bonus ? true : false; \
	Parms.Player=Player; \
	Parms.TriggerLoudNoise=TriggerLoudNoise ? true : false; \
	Parms.type=type; \
	ChargeableInteractionDefinitionSkillCheckResponseAuthorityDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableInteractionDefinitionSkillCheckResponseAestheticDelegate_Parms \
{ \
	bool Success; \
	bool Bonus; \
	ADBDPlayer* Player; \
	bool TriggerLoudNoise; \
	ESkillCheckCustomType type; \
}; \
static inline void FChargeableInteractionDefinitionSkillCheckResponseAestheticDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableInteractionDefinitionSkillCheckResponseAestheticDelegate, bool Success, bool Bonus, ADBDPlayer* Player, bool TriggerLoudNoise, ESkillCheckCustomType type) \
{ \
	_Script_DeadByDaylight_eventChargeableInteractionDefinitionSkillCheckResponseAestheticDelegate_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.Bonus=Bonus ? true : false; \
	Parms.Player=Player; \
	Parms.TriggerLoudNoise=TriggerLoudNoise ? true : false; \
	Parms.type=type; \
	ChargeableInteractionDefinitionSkillCheckResponseAestheticDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_RPC_WRAPPERS \
	virtual float GetAdditiveLuckBonus_Implementation(const ADBDPlayer* character) const; \
	virtual float GetBonusSkillCheckZoneSizeModifier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetItemEfficiencyModifier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetMultiplicativeLuckBonus_Implementation(const ADBDPlayer* character) const; \
	virtual float GetPerkMultiplier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetSkillCheckCharge_Implementation(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const; \
	virtual float GetSkillCheckDifficulityModifier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetSkillCheckFailureTimePenalty_Implementation() const; \
	virtual float GetSuccessProbability_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_AddCharge); \
	DECLARE_FUNCTION(execAuthority_ChargeWithItem); \
	DECLARE_FUNCTION(execGetAdditiveChargeTimeReductionAsMultiplier); \
	DECLARE_FUNCTION(execGetAdditiveLuckBonus); \
	DECLARE_FUNCTION(execGetBonusSkillCheckSuccessPercentReward); \
	DECLARE_FUNCTION(execGetBonusSkillCheckZoneSizeModifier); \
	DECLARE_FUNCTION(execGetChargeableComponent); \
	DECLARE_FUNCTION(execGetChargeAmountForTime); \
	DECLARE_FUNCTION(execGetChargeSpeedModifier); \
	DECLARE_FUNCTION(execGetGoodSkillCheckSuccessPercentReward); \
	DECLARE_FUNCTION(execGetInteractionChargeSpeedMultiplier); \
	DECLARE_FUNCTION(execGetItemEfficiencyModifier); \
	DECLARE_FUNCTION(execGetMaxCharge); \
	DECLARE_FUNCTION(execGetMultiplicativeLuckBonus); \
	DECLARE_FUNCTION(execGetPerkMultiplier); \
	DECLARE_FUNCTION(execGetPipsPassed); \
	DECLARE_FUNCTION(execGetSkillCheckCharge); \
	DECLARE_FUNCTION(execGetSkillCheckDifficulityModifier); \
	DECLARE_FUNCTION(execGetSkillCheckFailurePercentPenalty); \
	DECLARE_FUNCTION(execGetSkillCheckFailureTimePenalty); \
	DECLARE_FUNCTION(execGetSkillCheckProbability); \
	DECLARE_FUNCTION(execGetSuccessProbability); \
	DECLARE_FUNCTION(execGetTunableValue); \
	DECLARE_FUNCTION(execHasSkillCheckHappened); \
	DECLARE_FUNCTION(execOnSkillCheckResponseAesthetic); \
	DECLARE_FUNCTION(execOnSkillCheckResponseAuthority); \
	DECLARE_FUNCTION(execSetChargeableComponent); \
	DECLARE_FUNCTION(execSetSpeedBase); \
	DECLARE_FUNCTION(execSetTutorialChargeableMultiplier); \
	DECLARE_FUNCTION(execShouldShowSpeedProficiencyForMultipleInteractors);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetAdditiveLuckBonus_Implementation(const ADBDPlayer* character) const; \
	virtual float GetBonusSkillCheckZoneSizeModifier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetItemEfficiencyModifier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetMultiplicativeLuckBonus_Implementation(const ADBDPlayer* character) const; \
	virtual float GetPerkMultiplier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetSkillCheckCharge_Implementation(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const; \
	virtual float GetSkillCheckDifficulityModifier_Implementation(const ADBDPlayer* character) const; \
	virtual float GetSkillCheckFailureTimePenalty_Implementation() const; \
	virtual float GetSuccessProbability_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_AddCharge); \
	DECLARE_FUNCTION(execAuthority_ChargeWithItem); \
	DECLARE_FUNCTION(execGetAdditiveChargeTimeReductionAsMultiplier); \
	DECLARE_FUNCTION(execGetAdditiveLuckBonus); \
	DECLARE_FUNCTION(execGetBonusSkillCheckSuccessPercentReward); \
	DECLARE_FUNCTION(execGetBonusSkillCheckZoneSizeModifier); \
	DECLARE_FUNCTION(execGetChargeableComponent); \
	DECLARE_FUNCTION(execGetChargeAmountForTime); \
	DECLARE_FUNCTION(execGetChargeSpeedModifier); \
	DECLARE_FUNCTION(execGetGoodSkillCheckSuccessPercentReward); \
	DECLARE_FUNCTION(execGetInteractionChargeSpeedMultiplier); \
	DECLARE_FUNCTION(execGetItemEfficiencyModifier); \
	DECLARE_FUNCTION(execGetMaxCharge); \
	DECLARE_FUNCTION(execGetMultiplicativeLuckBonus); \
	DECLARE_FUNCTION(execGetPerkMultiplier); \
	DECLARE_FUNCTION(execGetPipsPassed); \
	DECLARE_FUNCTION(execGetSkillCheckCharge); \
	DECLARE_FUNCTION(execGetSkillCheckDifficulityModifier); \
	DECLARE_FUNCTION(execGetSkillCheckFailurePercentPenalty); \
	DECLARE_FUNCTION(execGetSkillCheckFailureTimePenalty); \
	DECLARE_FUNCTION(execGetSkillCheckProbability); \
	DECLARE_FUNCTION(execGetSuccessProbability); \
	DECLARE_FUNCTION(execGetTunableValue); \
	DECLARE_FUNCTION(execHasSkillCheckHappened); \
	DECLARE_FUNCTION(execOnSkillCheckResponseAesthetic); \
	DECLARE_FUNCTION(execOnSkillCheckResponseAuthority); \
	DECLARE_FUNCTION(execSetChargeableComponent); \
	DECLARE_FUNCTION(execSetSpeedBase); \
	DECLARE_FUNCTION(execSetTutorialChargeableMultiplier); \
	DECLARE_FUNCTION(execShouldShowSpeedProficiencyForMultipleInteractors);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_EVENT_PARMS \
	struct ChargeableInteractionDefinition_eventGetAdditiveLuckBonus_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetAdditiveLuckBonus_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetBonusSkillCheckZoneSizeModifier_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetBonusSkillCheckZoneSizeModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetInteractionChargeSpeedMultiplier_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetInteractionChargeSpeedMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetItemEfficiencyModifier_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetItemEfficiencyModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetMultiplicativeLuckBonus_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetMultiplicativeLuckBonus_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetPerkMultiplier_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetPerkMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetSkillCheckCharge_Parms \
	{ \
		ADBDPlayer* player; \
		bool success; \
		bool bonus; \
		ESkillCheckCustomType type; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetSkillCheckCharge_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetSkillCheckDifficulityModifier_Parms \
	{ \
		const ADBDPlayer* character; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetSkillCheckDifficulityModifier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetSkillCheckFailureTimePenalty_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetSkillCheckFailureTimePenalty_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventGetSuccessProbability_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ChargeableInteractionDefinition_eventGetSuccessProbability_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ChargeableInteractionDefinition_eventOnInteractionCompletionStateChanged_Parms \
	{ \
		ADBDPlayer* player; \
		bool complete; \
	}; \
	struct ChargeableInteractionDefinition_eventOnSkillCheckResponseAestheticBP_Parms \
	{ \
		ADBDPlayer* player; \
		bool success; \
		bool bonus; \
		bool hadInput; \
		ESkillCheckCustomType type; \
	}; \
	struct ChargeableInteractionDefinition_eventOnSkillCheckResponseAuthorityBP_Parms \
	{ \
		ADBDPlayer* player; \
		bool success; \
		bool bonus; \
		bool hadInput; \
		ESkillCheckCustomType type; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChargeableInteractionDefinition(); \
	friend struct Z_Construct_UClass_UChargeableInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UChargeableInteractionDefinition, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChargeableInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUChargeableInteractionDefinition(); \
	friend struct Z_Construct_UClass_UChargeableInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UChargeableInteractionDefinition, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChargeableInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChargeableInteractionDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChargeableInteractionDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeableInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeableInteractionDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeableInteractionDefinition(UChargeableInteractionDefinition&&); \
	NO_API UChargeableInteractionDefinition(const UChargeableInteractionDefinition&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeableInteractionDefinition(UChargeableInteractionDefinition&&); \
	NO_API UChargeableInteractionDefinition(const UChargeableInteractionDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeableInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeableInteractionDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChargeableInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AtlantaIsCancellableWhileCharging() { return STRUCT_OFFSET(UChargeableInteractionDefinition, AtlantaIsCancellableWhileCharging); } \
	FORCEINLINE static uint32 __PPO___chargeableComponent() { return STRUCT_OFFSET(UChargeableInteractionDefinition, _chargeableComponent); } \
	FORCEINLINE static uint32 __PPO___tutorialChargeableMultiplier() { return STRUCT_OFFSET(UChargeableInteractionDefinition, _tutorialChargeableMultiplier); } \
	FORCEINLINE static uint32 __PPO__ShowSpeedProficiencyForMultipleInteractors() { return STRUCT_OFFSET(UChargeableInteractionDefinition, ShowSpeedProficiencyForMultipleInteractors); } \
	FORCEINLINE static uint32 __PPO___interactionSpecificActionSpeedTags() { return STRUCT_OFFSET(UChargeableInteractionDefinition, _interactionSpecificActionSpeedTags); } \
	FORCEINLINE static uint32 __PPO___interactionSpecificActionSpeedMultiplicativeTags() { return STRUCT_OFFSET(UChargeableInteractionDefinition, _interactionSpecificActionSpeedMultiplicativeTags); } \
	FORCEINLINE static uint32 __PPO___interactionSpecificActionSpeedAdditiveTags() { return STRUCT_OFFSET(UChargeableInteractionDefinition, _interactionSpecificActionSpeedAdditiveTags); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UChargeableInteractionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ChargeableInteractionDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
