// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_CustomWidgetWrapper_generated_h
#error "CustomWidgetWrapper.generated.h already included, missing '#pragma once' in CustomWidgetWrapper.h"
#endif
#define DEADBYDAYLIGHT_CustomWidgetWrapper_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventCustomWidgetWrapperOnVersion_Parms \
{ \
	int32 version; \
}; \
static inline void FCustomWidgetWrapperOnVersion_DelegateWrapper(const FMulticastScriptDelegate& CustomWidgetWrapperOnVersion, int32 version) \
{ \
	_Script_DeadByDaylight_eventCustomWidgetWrapperOnVersion_Parms Parms; \
	Parms.version=version; \
	CustomWidgetWrapperOnVersion.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyOpacity); \
	DECLARE_FUNCTION(execApplyScale); \
	DECLARE_FUNCTION(execApplyVersion);


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyOpacity); \
	DECLARE_FUNCTION(execApplyScale); \
	DECLARE_FUNCTION(execApplyVersion);


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomWidgetWrapper(); \
	friend struct Z_Construct_UClass_UCustomWidgetWrapper_Statics; \
public: \
	DECLARE_CLASS(UCustomWidgetWrapper, UCanvasPanel, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCustomWidgetWrapper)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCustomWidgetWrapper(); \
	friend struct Z_Construct_UClass_UCustomWidgetWrapper_Statics; \
public: \
	DECLARE_CLASS(UCustomWidgetWrapper, UCanvasPanel, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCustomWidgetWrapper)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomWidgetWrapper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomWidgetWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomWidgetWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomWidgetWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomWidgetWrapper(UCustomWidgetWrapper&&); \
	NO_API UCustomWidgetWrapper(const UCustomWidgetWrapper&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomWidgetWrapper(UCustomWidgetWrapper&&); \
	NO_API UCustomWidgetWrapper(const UCustomWidgetWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomWidgetWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomWidgetWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomWidgetWrapper)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCustomWidgetWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CustomWidgetWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
