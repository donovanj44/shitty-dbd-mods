// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkItemProperties_generated_h
#error "AkItemProperties.generated.h already included, missing '#pragma once' in AkItemProperties.h"
#endif
#define AKAUDIO_AkItemProperties_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_7_DELEGATE \
struct _Script_AkAudio_eventAkItemPropertiesOnPropertyDragged_Parms \
{ \
	FString PropertyDragged; \
}; \
static inline void FAkItemPropertiesOnPropertyDragged_DelegateWrapper(const FMulticastScriptDelegate& AkItemPropertiesOnPropertyDragged, const FString& PropertyDragged) \
{ \
	_Script_AkAudio_eventAkItemPropertiesOnPropertyDragged_Parms Parms; \
	Parms.PropertyDragged=PropertyDragged; \
	AkItemPropertiesOnPropertyDragged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_6_DELEGATE \
struct _Script_AkAudio_eventAkItemPropertiesOnSelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FAkItemPropertiesOnSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& AkItemPropertiesOnSelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventAkItemPropertiesOnSelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	AkItemPropertiesOnSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty); \
	DECLARE_FUNCTION(execSetSearchText);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty); \
	DECLARE_FUNCTION(execSetSearchText);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemProperties(); \
	friend struct Z_Construct_UClass_UAkItemProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemProperties(); \
	friend struct Z_Construct_UClass_UAkItemProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemProperties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemProperties(UAkItemProperties&&); \
	NO_API UAkItemProperties(const UAkItemProperties&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemProperties(UAkItemProperties&&); \
	NO_API UAkItemProperties(const UAkItemProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkItemProperties)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_9_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkItemProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkItemProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
