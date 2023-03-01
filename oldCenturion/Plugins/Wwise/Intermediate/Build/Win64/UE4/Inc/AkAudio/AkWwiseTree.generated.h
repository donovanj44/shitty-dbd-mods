// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FAkWwiseObjectDetails;
#ifdef AKAUDIO_AkWwiseTree_generated_h
#error "AkWwiseTree.generated.h already included, missing '#pragma once' in AkWwiseTree.h"
#endif
#define AKAUDIO_AkWwiseTree_generated_h

#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_9_DELEGATE \
struct _Script_AkAudio_eventAkWwiseTreeOnItemDragged_Parms \
{ \
	FGuid ItemDraggedID; \
	FString ItemDraggedName; \
}; \
static inline void FAkWwiseTreeOnItemDragged_DelegateWrapper(const FMulticastScriptDelegate& AkWwiseTreeOnItemDragged, FGuid ItemDraggedID, const FString& ItemDraggedName) \
{ \
	_Script_AkAudio_eventAkWwiseTreeOnItemDragged_Parms Parms; \
	Parms.ItemDraggedID=ItemDraggedID; \
	Parms.ItemDraggedName=ItemDraggedName; \
	AkWwiseTreeOnItemDragged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_8_DELEGATE \
struct _Script_AkAudio_eventAkWwiseTreeOnSelectionChanged_Parms \
{ \
	FGuid ItemSelectedID; \
}; \
static inline void FAkWwiseTreeOnSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& AkWwiseTreeOnSelectionChanged, FGuid ItemSelectedID) \
{ \
	_Script_AkAudio_eventAkWwiseTreeOnSelectionChanged_Parms Parms; \
	Parms.ItemSelectedID=ItemSelectedID; \
	AkWwiseTreeOnSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_SPARSE_DATA
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedItem); \
	DECLARE_FUNCTION(execSetSearchText);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedItem); \
	DECLARE_FUNCTION(execSetSearchText);


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWwiseTree(); \
	friend struct Z_Construct_UClass_UAkWwiseTree_Statics; \
public: \
	DECLARE_CLASS(UAkWwiseTree, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWwiseTree) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAkWwiseTree(); \
	friend struct Z_Construct_UClass_UAkWwiseTree_Statics; \
public: \
	DECLARE_CLASS(UAkWwiseTree, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWwiseTree) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWwiseTree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWwiseTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWwiseTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWwiseTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWwiseTree(UAkWwiseTree&&); \
	NO_API UAkWwiseTree(const UAkWwiseTree&); \
public:


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWwiseTree(UAkWwiseTree&&); \
	NO_API UAkWwiseTree(const UAkWwiseTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWwiseTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWwiseTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkWwiseTree)


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_11_PROLOG
#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_INCLASS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWwiseTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Wwise_Source_AkAudio_Public_AkWwiseTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
