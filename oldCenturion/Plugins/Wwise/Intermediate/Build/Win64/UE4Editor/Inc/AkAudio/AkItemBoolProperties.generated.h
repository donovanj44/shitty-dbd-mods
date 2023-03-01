// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkItemBoolProperties_generated_h
#error "AkItemBoolProperties.generated.h already included, missing '#pragma once' in AkItemBoolProperties.h"
#endif
#define AKAUDIO_AkItemBoolProperties_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_7_DELEGATE \
struct _Script_AkAudio_eventAkItemBoolPropertiesOnPropertyDragged_Parms \
{ \
	FString PropertyDragged; \
}; \
static inline void FAkItemBoolPropertiesOnPropertyDragged_DelegateWrapper(const FMulticastScriptDelegate& AkItemBoolPropertiesOnPropertyDragged, const FString& PropertyDragged) \
{ \
	_Script_AkAudio_eventAkItemBoolPropertiesOnPropertyDragged_Parms Parms; \
	Parms.PropertyDragged=PropertyDragged; \
	AkItemBoolPropertiesOnPropertyDragged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_6_DELEGATE \
struct _Script_AkAudio_eventAkItemBoolPropertiesOnSelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FAkItemBoolPropertiesOnSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& AkItemBoolPropertiesOnSelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventAkItemBoolPropertiesOnSelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	AkItemBoolPropertiesOnSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty); \
	DECLARE_FUNCTION(execSetSearchText);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty); \
	DECLARE_FUNCTION(execSetSearchText);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemBoolProperties(); \
	friend struct Z_Construct_UClass_UAkItemBoolProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemBoolProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemBoolProperties(); \
	friend struct Z_Construct_UClass_UAkItemBoolProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemBoolProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemBoolProperties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemBoolProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolProperties(UAkItemBoolProperties&&); \
	NO_API UAkItemBoolProperties(const UAkItemBoolProperties&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolProperties(UAkItemBoolProperties&&); \
	NO_API UAkItemBoolProperties(const UAkItemBoolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkItemBoolProperties)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_9_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkItemBoolProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS