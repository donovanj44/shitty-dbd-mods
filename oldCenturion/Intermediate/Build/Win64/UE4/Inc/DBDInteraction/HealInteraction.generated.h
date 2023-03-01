// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class AActor;
#ifdef DBDINTERACTION_HealInteraction_generated_h
#error "HealInteraction.generated.h already included, missing '#pragma once' in HealInteraction.h"
#endif
#define DBDINTERACTION_HealInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetSurvivor);


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetSurvivor);


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_EVENT_PARMS \
	struct HealInteraction_eventAuthority_OnChargeApplied_Parms \
	{ \
		float individualChargeAmount; \
		float totalChargeAmount; \
		AActor* chargeInstigator; \
		bool wasCoop; \
		float deltaTime; \
	};


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealInteraction(); \
	friend struct Z_Construct_UClass_UHealInteraction_Statics; \
public: \
	DECLARE_CLASS(UHealInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UHealInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUHealInteraction(); \
	friend struct Z_Construct_UClass_UHealInteraction_Statics; \
public: \
	DECLARE_CLASS(UHealInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UHealInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealInteraction(UHealInteraction&&); \
	NO_API UHealInteraction(const UHealInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealInteraction(UHealInteraction&&); \
	NO_API UHealInteraction(const UHealInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_9_PROLOG \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UHealInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_HealInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
