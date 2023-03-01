// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
enum class ECheckBoxState : uint8;
#ifdef AKAUDIO_AkCheckBox_generated_h
#error "AkCheckBox.generated.h already included, missing '#pragma once' in AkCheckBox.h"
#endif
#define AKAUDIO_AkCheckBox_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_15_DELEGATE \
struct _Script_AkAudio_eventAkCheckBoxOnPropertyDropped_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FAkCheckBoxOnPropertyDropped_DelegateWrapper(const FMulticastScriptDelegate& AkCheckBoxOnPropertyDropped, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventAkCheckBoxOnPropertyDropped_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	AkCheckBoxOnPropertyDropped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_14_DELEGATE \
struct _Script_AkAudio_eventAkCheckBoxOnItemDropped_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FAkCheckBoxOnItemDropped_DelegateWrapper(const FMulticastScriptDelegate& AkCheckBoxOnItemDropped, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventAkCheckBoxOnItemDropped_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	AkCheckBoxOnItemDropped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_13_DELEGATE \
struct _Script_AkAudio_eventAkCheckBoxAkOnCheckStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FAkCheckBoxAkOnCheckStateChanged_DelegateWrapper(const FMulticastScriptDelegate& AkCheckBoxAkOnCheckStateChanged, bool bIsChecked) \
{ \
	_Script_AkAudio_eventAkCheckBoxAkOnCheckStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	AkCheckBoxAkOnCheckStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_12_DELEGATE \
struct _Script_AkAudio_eventAkCheckBoxCheckedStateDelegate_Parms \
{ \
	ECheckBoxState ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_AkAudio_eventAkCheckBoxCheckedStateDelegate_Parms() \
		: ReturnValue((ECheckBoxState)0) \
	{ \
	} \
}; \
static inline ECheckBoxState FAkCheckBoxCheckedStateDelegate_DelegateWrapper(const FScriptDelegate& AkCheckBoxCheckedStateDelegate) \
{ \
	_Script_AkAudio_eventAkCheckBoxCheckedStateDelegate_Parms Parms; \
	AkCheckBoxCheckedStateDelegate.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkItemId); \
	DECLARE_FUNCTION(execGetAkProperty); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetAkBoolProperty); \
	DECLARE_FUNCTION(execSetAkItemId); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkItemId); \
	DECLARE_FUNCTION(execGetAkProperty); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetAkBoolProperty); \
	DECLARE_FUNCTION(execSetAkItemId); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend struct Z_Construct_UClass_UAkCheckBox_Statics; \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend struct Z_Construct_UClass_UAkCheckBox_Statics; \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCheckBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkCheckBox)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_17_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkCheckBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkCheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
