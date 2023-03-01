// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FLinearColor;
#ifdef AKAUDIO_AkSlider_generated_h
#error "AkSlider.generated.h already included, missing '#pragma once' in AkSlider.h"
#endif
#define AKAUDIO_AkSlider_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_15_DELEGATE \
struct _Script_AkAudio_eventAkSliderOnPropertyDropped_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FAkSliderOnPropertyDropped_DelegateWrapper(const FMulticastScriptDelegate& AkSliderOnPropertyDropped, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventAkSliderOnPropertyDropped_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	AkSliderOnPropertyDropped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_14_DELEGATE \
struct _Script_AkAudio_eventAkSliderOnValueChanged_Parms \
{ \
	float Value; \
}; \
static inline void FAkSliderOnValueChanged_DelegateWrapper(const FMulticastScriptDelegate& AkSliderOnValueChanged, float Value) \
{ \
	_Script_AkAudio_eventAkSliderOnValueChanged_Parms Parms; \
	Parms.Value=Value; \
	AkSliderOnValueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_13_DELEGATE \
struct _Script_AkAudio_eventAkSliderValueDelegate_Parms \
{ \
	float ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_AkAudio_eventAkSliderValueDelegate_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline float FAkSliderValueDelegate_DelegateWrapper(const FScriptDelegate& AkSliderValueDelegate) \
{ \
	_Script_AkAudio_eventAkSliderValueDelegate_Parms Parms; \
	AkSliderValueDelegate.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_12_DELEGATE \
struct _Script_AkAudio_eventAkSliderOnItemDropped_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FAkSliderOnItemDropped_DelegateWrapper(const FMulticastScriptDelegate& AkSliderOnItemDropped, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventAkSliderOnItemDropped_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	AkSliderOnItemDropped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId); \
	DECLARE_FUNCTION(execGetAkSliderItemProperty); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetAkSliderItemId); \
	DECLARE_FUNCTION(execSetAkSliderItemProperty); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetValue);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId); \
	DECLARE_FUNCTION(execGetAkSliderItemProperty); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetAkSliderItemId); \
	DECLARE_FUNCTION(execSetAkSliderItemProperty); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetValue);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend struct Z_Construct_UClass_UAkSlider_Statics; \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend struct Z_Construct_UClass_UAkSlider_Statics; \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkSlider)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
