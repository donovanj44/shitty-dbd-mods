// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGFxMoviePlayer;
class UGFxObject;
struct FASValue;
class USwfMovie;
class UObject;
class UTextureRenderTarget2D;
#ifdef SCALEFORMUI_ScaleformBlueprintLibrary_generated_h
#error "ScaleformBlueprintLibrary.generated.h already included, missing '#pragma once' in ScaleformBlueprintLibrary.h"
#endif
#define SCALEFORMUI_ScaleformBlueprintLibrary_generated_h

#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_SPARSE_DATA
#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseMovie); \
	DECLARE_FUNCTION(execGetMember); \
	DECLARE_FUNCTION(execGetMovieClip); \
	DECLARE_FUNCTION(execGetVariable); \
	DECLARE_FUNCTION(execInvoke); \
	DECLARE_FUNCTION(execInvokeNoParams); \
	DECLARE_FUNCTION(execOpenMovie);


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseMovie); \
	DECLARE_FUNCTION(execGetMember); \
	DECLARE_FUNCTION(execGetMovieClip); \
	DECLARE_FUNCTION(execGetVariable); \
	DECLARE_FUNCTION(execInvoke); \
	DECLARE_FUNCTION(execInvokeNoParams); \
	DECLARE_FUNCTION(execOpenMovie);


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScaleformBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UScaleformBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UScaleformBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaleformUI"), NO_API) \
	DECLARE_SERIALIZER(UScaleformBlueprintLibrary)


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUScaleformBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UScaleformBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UScaleformBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaleformUI"), NO_API) \
	DECLARE_SERIALIZER(UScaleformBlueprintLibrary)


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScaleformBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaleformBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaleformBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaleformBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaleformBlueprintLibrary(UScaleformBlueprintLibrary&&); \
	NO_API UScaleformBlueprintLibrary(const UScaleformBlueprintLibrary&); \
public:


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScaleformBlueprintLibrary(UScaleformBlueprintLibrary&&); \
	NO_API UScaleformBlueprintLibrary(const UScaleformBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScaleformBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaleformBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScaleformBlueprintLibrary)


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_13_PROLOG
#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_SPARSE_DATA \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_INCLASS \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_SPARSE_DATA \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCALEFORMUI_API UClass* StaticClass<class UScaleformBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_ScaleformUI_Public_ScaleformBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
