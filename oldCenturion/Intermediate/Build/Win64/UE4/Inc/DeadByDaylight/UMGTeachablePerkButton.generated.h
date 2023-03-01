// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTeachableData;
struct FVector2D;
struct FInventorySlotData;
#ifdef DEADBYDAYLIGHT_UMGTeachablePerkButton_generated_h
#error "UMGTeachablePerkButton.generated.h already included, missing '#pragma once' in UMGTeachablePerkButton.h"
#endif
#define DEADBYDAYLIGHT_UMGTeachablePerkButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventUMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent_Parms \
{ \
	FTeachableData teachableData; \
	FVector2D position; \
}; \
static inline void FUMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent, FTeachableData const& teachableData, FVector2D const& position) \
{ \
	_Script_DeadByDaylight_eventUMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent_Parms Parms; \
	Parms.teachableData=teachableData; \
	Parms.position=position; \
	UMGTeachablePerkButtonOnTeachablePerkTooltipLongPressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTeachablePerkButton(); \
	friend struct Z_Construct_UClass_UUMGTeachablePerkButton_Statics; \
public: \
	DECLARE_CLASS(UUMGTeachablePerkButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTeachablePerkButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTeachablePerkButton(); \
	friend struct Z_Construct_UClass_UUMGTeachablePerkButton_Statics; \
public: \
	DECLARE_CLASS(UUMGTeachablePerkButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTeachablePerkButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTeachablePerkButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTeachablePerkButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTeachablePerkButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTeachablePerkButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTeachablePerkButton(UUMGTeachablePerkButton&&); \
	NO_API UUMGTeachablePerkButton(const UUMGTeachablePerkButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTeachablePerkButton(UUMGTeachablePerkButton&&); \
	NO_API UUMGTeachablePerkButton(const UUMGTeachablePerkButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTeachablePerkButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTeachablePerkButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTeachablePerkButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___teachableData() { return STRUCT_OFFSET(UUMGTeachablePerkButton, _teachableData); } \
	FORCEINLINE static uint32 __PPO___onTeachablePerkTooltipLongPressEvent() { return STRUCT_OFFSET(UUMGTeachablePerkButton, _onTeachablePerkTooltipLongPressEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTeachablePerkButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTeachablePerkButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
