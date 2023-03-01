// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef DEADBYDAYLIGHT_UMGLoadoutFilterButton_generated_h
#error "UMGLoadoutFilterButton.generated.h already included, missing '#pragma once' in UMGLoadoutFilterButton.h"
#endif
#define DEADBYDAYLIGHT_UMGLoadoutFilterButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventUMGLoadoutFilterButtonOnLoadoutFilterButtonClicked_Parms \
{ \
	FName filterName; \
}; \
static inline void FUMGLoadoutFilterButtonOnLoadoutFilterButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked, FName filterName) \
{ \
	_Script_DeadByDaylight_eventUMGLoadoutFilterButtonOnLoadoutFilterButtonClicked_Parms Parms; \
	Parms.filterName=filterName; \
	UMGLoadoutFilterButtonOnLoadoutFilterButtonClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitFilterButton); \
	DECLARE_FUNCTION(execOnActionButtonClick);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitFilterButton); \
	DECLARE_FUNCTION(execOnActionButtonClick);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_EVENT_PARMS \
	struct UMGLoadoutFilterButton_eventSetIcon_Parms \
	{ \
		TSoftObjectPtr<UTexture2D> icon; \
	}; \
	struct UMGLoadoutFilterButton_eventSetIsSelected_Parms \
	{ \
		bool isSelected; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLoadoutFilterButton(); \
	friend struct Z_Construct_UClass_UUMGLoadoutFilterButton_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutFilterButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutFilterButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLoadoutFilterButton(); \
	friend struct Z_Construct_UClass_UUMGLoadoutFilterButton_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutFilterButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutFilterButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLoadoutFilterButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLoadoutFilterButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutFilterButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutFilterButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutFilterButton(UUMGLoadoutFilterButton&&); \
	NO_API UUMGLoadoutFilterButton(const UUMGLoadoutFilterButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutFilterButton(UUMGLoadoutFilterButton&&); \
	NO_API UUMGLoadoutFilterButton(const UUMGLoadoutFilterButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutFilterButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutFilterButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLoadoutFilterButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLoadoutFilterButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
