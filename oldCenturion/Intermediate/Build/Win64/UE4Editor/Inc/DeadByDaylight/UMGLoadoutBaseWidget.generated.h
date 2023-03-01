// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventorySlotData;
enum class ELoadoutSlot : uint8;
struct FLinearColor;
#ifdef DEADBYDAYLIGHT_UMGLoadoutBaseWidget_generated_h
#error "UMGLoadoutBaseWidget.generated.h already included, missing '#pragma once' in UMGLoadoutBaseWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLoadoutBaseWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLoadoutData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLoadoutData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_EVENT_PARMS \
	struct UMGLoadoutBaseWidget_eventSetDividerImageColor_Parms \
	{ \
		FLinearColor color; \
	}; \
	struct UMGLoadoutBaseWidget_eventSetIsSelectedLoadoutItemButton_Parms \
	{ \
		ELoadoutSlot loadoutSlot; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLoadoutBaseWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutBaseWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutBaseWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLoadoutBaseWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutBaseWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutBaseWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutBaseWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLoadoutBaseWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLoadoutBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutBaseWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutBaseWidget(UUMGLoadoutBaseWidget&&); \
	NO_API UUMGLoadoutBaseWidget(const UUMGLoadoutBaseWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutBaseWidget(UUMGLoadoutBaseWidget&&); \
	NO_API UUMGLoadoutBaseWidget(const UUMGLoadoutBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutBaseWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutBaseWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLoadoutBaseWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemOrPowerButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, ItemOrPowerButton); } \
	FORCEINLINE static uint32 __PPO__AddonFirstButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, AddonFirstButton); } \
	FORCEINLINE static uint32 __PPO__AddonSecondButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, AddonSecondButton); } \
	FORCEINLINE static uint32 __PPO__OfferingButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, OfferingButton); } \
	FORCEINLINE static uint32 __PPO__PerkFirstButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkFirstButton); } \
	FORCEINLINE static uint32 __PPO__PerkSecondButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkSecondButton); } \
	FORCEINLINE static uint32 __PPO__PerkThirdButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkThirdButton); } \
	FORCEINLINE static uint32 __PPO__PerkFourthButton() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkFourthButton); } \
	FORCEINLINE static uint32 __PPO__LoadoutItemButtons() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, LoadoutItemButtons); } \
	FORCEINLINE static uint32 __PPO__UsingMatchRules() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, UsingMatchRules); } \
	FORCEINLINE static uint32 __PPO__PerkSlotsLockedByAdmin() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, PerkSlotsLockedByAdmin); } \
	FORCEINLINE static uint32 __PPO__IsSlasher() { return STRUCT_OFFSET(UUMGLoadoutBaseWidget, IsSlasher); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLoadoutBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
