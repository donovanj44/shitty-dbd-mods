// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGSettingContextButton_generated_h
#error "UMGSettingContextButton.generated.h already included, missing '#pragma once' in UMGSettingContextButton.h"
#endif
#define DEADBYDAYLIGHT_UMGSettingContextButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_6_DELEGATE \
struct _Script_DeadByDaylight_eventUMGSettingContextButtonOnSettingContextButtonClickEvent_Parms \
{ \
	int32 tabIndex; \
}; \
static inline void FUMGSettingContextButtonOnSettingContextButtonClickEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGSettingContextButtonOnSettingContextButtonClickEvent, int32 tabIndex) \
{ \
	_Script_DeadByDaylight_eventUMGSettingContextButtonOnSettingContextButtonClickEvent_Parms Parms; \
	Parms.tabIndex=tabIndex; \
	UMGSettingContextButtonOnSettingContextButtonClickEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetContextButtonData); \
	DECLARE_FUNCTION(execHandleSettingContextButtonClick); \
	DECLARE_FUNCTION(execSetContextButtonData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetContextButtonData); \
	DECLARE_FUNCTION(execHandleSettingContextButtonClick); \
	DECLARE_FUNCTION(execSetContextButtonData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_EVENT_PARMS \
	struct UMGSettingContextButton_eventSetButtonText_Parms \
	{ \
		FString buttonText; \
	}; \
	struct UMGSettingContextButton_eventSetIsSelected_Parms \
	{ \
		bool isSelected; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSettingContextButton(); \
	friend struct Z_Construct_UClass_UUMGSettingContextButton_Statics; \
public: \
	DECLARE_CLASS(UUMGSettingContextButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSettingContextButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSettingContextButton(); \
	friend struct Z_Construct_UClass_UUMGSettingContextButton_Statics; \
public: \
	DECLARE_CLASS(UUMGSettingContextButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSettingContextButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSettingContextButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSettingContextButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSettingContextButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSettingContextButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSettingContextButton(UUMGSettingContextButton&&); \
	NO_API UUMGSettingContextButton(const UUMGSettingContextButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSettingContextButton(UUMGSettingContextButton&&); \
	NO_API UUMGSettingContextButton(const UUMGSettingContextButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSettingContextButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSettingContextButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGSettingContextButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGSettingContextButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingContextButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
