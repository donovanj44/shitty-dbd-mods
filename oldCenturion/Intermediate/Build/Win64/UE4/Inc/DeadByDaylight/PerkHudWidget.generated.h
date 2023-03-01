// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PerkHudWidget_generated_h
#error "PerkHudWidget.generated.h already included, missing '#pragma once' in PerkHudWidget.h"
#endif
#define DEADBYDAYLIGHT_PerkHudWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveExistingPerk);


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveExistingPerk);


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_EVENT_PARMS \
	struct PerkHudWidget_eventOnPerkClickedHandler_Parms \
	{ \
		FName perkID; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerkHudWidget(); \
	friend struct Z_Construct_UClass_UPerkHudWidget_Statics; \
public: \
	DECLARE_CLASS(UPerkHudWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkHudWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPerkHudWidget(); \
	friend struct Z_Construct_UClass_UPerkHudWidget_Statics; \
public: \
	DECLARE_CLASS(UPerkHudWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkHudWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerkHudWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerkHudWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkHudWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkHudWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkHudWidget(UPerkHudWidget&&); \
	NO_API UPerkHudWidget(const UPerkHudWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkHudWidget(UPerkHudWidget&&); \
	NO_API UPerkHudWidget(const UPerkHudWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkHudWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkHudWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerkHudWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___clickablePerksMap() { return STRUCT_OFFSET(UPerkHudWidget, _clickablePerksMap); } \
	FORCEINLINE static uint32 __PPO___externalPerksMap() { return STRUCT_OFFSET(UPerkHudWidget, _externalPerksMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPerkHudWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PerkHudWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
