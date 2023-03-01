// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FASColorTransform;
struct FASDisplayInfo;
struct FTransform;
struct FASValue;
class UGFxMoviePlayer;
#ifdef SCALEFORMUI_GFxObject_generated_h
#error "GFxObject.generated.h already included, missing '#pragma once' in GFxObject.h"
#endif
#define SCALEFORMUI_GFxObject_generated_h

#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_SPARSE_DATA
#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColorTransform); \
	DECLARE_FUNCTION(execGetDisplayInfo); \
	DECLARE_FUNCTION(execGetDisplayTransform); \
	DECLARE_FUNCTION(execGetMemberValue); \
	DECLARE_FUNCTION(execGetMemberValueArray); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetVisible); \
	DECLARE_FUNCTION(execGotoAndPlay); \
	DECLARE_FUNCTION(execGotoAndPlayI); \
	DECLARE_FUNCTION(execGotoAndStop); \
	DECLARE_FUNCTION(execGotoAndStopI); \
	DECLARE_FUNCTION(execInvoke); \
	DECLARE_FUNCTION(execSetColorTransform); \
	DECLARE_FUNCTION(execSetDisplayInfo); \
	DECLARE_FUNCTION(execSetDisplayTransform); \
	DECLARE_FUNCTION(execSetMemberValue); \
	DECLARE_FUNCTION(execSetMemberValueArray); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColorTransform); \
	DECLARE_FUNCTION(execGetDisplayInfo); \
	DECLARE_FUNCTION(execGetDisplayTransform); \
	DECLARE_FUNCTION(execGetMemberValue); \
	DECLARE_FUNCTION(execGetMemberValueArray); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetVisible); \
	DECLARE_FUNCTION(execGotoAndPlay); \
	DECLARE_FUNCTION(execGotoAndPlayI); \
	DECLARE_FUNCTION(execGotoAndStop); \
	DECLARE_FUNCTION(execGotoAndStopI); \
	DECLARE_FUNCTION(execInvoke); \
	DECLARE_FUNCTION(execSetColorTransform); \
	DECLARE_FUNCTION(execSetDisplayInfo); \
	DECLARE_FUNCTION(execSetDisplayTransform); \
	DECLARE_FUNCTION(execSetMemberValue); \
	DECLARE_FUNCTION(execSetMemberValueArray); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFxObject(); \
	friend struct Z_Construct_UClass_UGFxObject_Statics; \
public: \
	DECLARE_CLASS(UGFxObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaleformUI"), NO_API) \
	DECLARE_SERIALIZER(UGFxObject)


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGFxObject(); \
	friend struct Z_Construct_UClass_UGFxObject_Statics; \
public: \
	DECLARE_CLASS(UGFxObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScaleformUI"), NO_API) \
	DECLARE_SERIALIZER(UGFxObject)


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGFxObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGFxObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFxObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFxObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFxObject(UGFxObject&&); \
	NO_API UGFxObject(const UGFxObject&); \
public:


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFxObject(UGFxObject&&); \
	NO_API UGFxObject(const UGFxObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFxObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFxObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGFxObject)


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_12_PROLOG
#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_SPARSE_DATA \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_INCLASS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_SPARSE_DATA \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCALEFORMUI_API UClass* StaticClass<class UGFxObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_ScaleformUI_Public_GFxObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
