// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEDOCTOR_SurvivorMadnessEffect_generated_h
#error "SurvivorMadnessEffect.generated.h already included, missing '#pragma once' in SurvivorMadnessEffect.h"
#endif
#define THEDOCTOR_SurvivorMadnessEffect_generated_h

#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_SPARSE_DATA
#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_RPC_WRAPPERS \
	virtual bool Multicast_OnMadnessTierDown_Validate(); \
	virtual void Multicast_OnMadnessTierDown_Implementation(); \
	virtual bool Multicast_OnMadnessTierUp_Validate(); \
	virtual void Multicast_OnMadnessTierUp_Implementation(); \
	virtual bool Multicast_UpdateMadnessPlayerTags_Validate(int32 ); \
	virtual void Multicast_UpdateMadnessPlayerTags_Implementation(int32 newMadness); \
	virtual bool Server_AddMadness_Validate(float ); \
	virtual void Server_AddMadness_Implementation(float madnessToAdd); \
 \
	DECLARE_FUNCTION(execGetMadnessTier); \
	DECLARE_FUNCTION(execGetMadnessValue); \
	DECLARE_FUNCTION(execMulticast_OnMadnessTierDown); \
	DECLARE_FUNCTION(execMulticast_OnMadnessTierUp); \
	DECLARE_FUNCTION(execMulticast_UpdateMadnessPlayerTags); \
	DECLARE_FUNCTION(execOnShockTherapyReceived); \
	DECLARE_FUNCTION(execOnSnapOutOfIt); \
	DECLARE_FUNCTION(execOnStaticBlastReceived); \
	DECLARE_FUNCTION(execServer_AddMadness);


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_OnMadnessTierDown_Validate(); \
	virtual void Multicast_OnMadnessTierDown_Implementation(); \
	virtual bool Multicast_OnMadnessTierUp_Validate(); \
	virtual void Multicast_OnMadnessTierUp_Implementation(); \
	virtual bool Multicast_UpdateMadnessPlayerTags_Validate(int32 ); \
	virtual void Multicast_UpdateMadnessPlayerTags_Implementation(int32 newMadness); \
	virtual bool Server_AddMadness_Validate(float ); \
	virtual void Server_AddMadness_Implementation(float madnessToAdd); \
 \
	DECLARE_FUNCTION(execGetMadnessTier); \
	DECLARE_FUNCTION(execGetMadnessValue); \
	DECLARE_FUNCTION(execMulticast_OnMadnessTierDown); \
	DECLARE_FUNCTION(execMulticast_OnMadnessTierUp); \
	DECLARE_FUNCTION(execMulticast_UpdateMadnessPlayerTags); \
	DECLARE_FUNCTION(execOnShockTherapyReceived); \
	DECLARE_FUNCTION(execOnSnapOutOfIt); \
	DECLARE_FUNCTION(execOnStaticBlastReceived); \
	DECLARE_FUNCTION(execServer_AddMadness);


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_EVENT_PARMS \
	struct SurvivorMadnessEffect_eventChangeMadnessAudio_Cosmetic_Parms \
	{ \
		int32 madnessTier; \
	}; \
	struct SurvivorMadnessEffect_eventMulticast_UpdateMadnessPlayerTags_Parms \
	{ \
		int32 newMadness; \
	}; \
	struct SurvivorMadnessEffect_eventServer_AddMadness_Parms \
	{ \
		float madnessToAdd; \
	};


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorMadnessEffect(); \
	friend struct Z_Construct_UClass_USurvivorMadnessEffect_Statics; \
public: \
	DECLARE_CLASS(USurvivorMadnessEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheDoctor"), NO_API) \
	DECLARE_SERIALIZER(USurvivorMadnessEffect) \
	virtual UObject* _getUObject() const override { return const_cast<USurvivorMadnessEffect*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_madness=NETFIELD_REP_START, \
		NETFIELD_REP_END=_madness	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorMadnessEffect(); \
	friend struct Z_Construct_UClass_USurvivorMadnessEffect_Statics; \
public: \
	DECLARE_CLASS(USurvivorMadnessEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheDoctor"), NO_API) \
	DECLARE_SERIALIZER(USurvivorMadnessEffect) \
	virtual UObject* _getUObject() const override { return const_cast<USurvivorMadnessEffect*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_madness=NETFIELD_REP_START, \
		NETFIELD_REP_END=_madness	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorMadnessEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorMadnessEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorMadnessEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorMadnessEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorMadnessEffect(USurvivorMadnessEffect&&); \
	NO_API USurvivorMadnessEffect(const USurvivorMadnessEffect&); \
public:


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorMadnessEffect(USurvivorMadnessEffect&&); \
	NO_API USurvivorMadnessEffect(const USurvivorMadnessEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorMadnessEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorMadnessEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorMadnessEffect)


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___madness() { return STRUCT_OFFSET(USurvivorMadnessEffect, _madness); }


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_7_PROLOG \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_EVENT_PARMS


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_INCLASS \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEDOCTOR_API UClass* StaticClass<class USurvivorMadnessEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheDoctor_Public_SurvivorMadnessEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
