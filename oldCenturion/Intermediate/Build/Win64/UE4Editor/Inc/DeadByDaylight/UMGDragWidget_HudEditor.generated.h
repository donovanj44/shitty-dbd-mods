// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomWidgetWrapper_HudEditor;
#ifdef DEADBYDAYLIGHT_UMGDragWidget_HudEditor_generated_h
#error "UMGDragWidget_HudEditor.generated.h already included, missing '#pragma once' in UMGDragWidget_HudEditor.h"
#endif
#define DEADBYDAYLIGHT_UMGDragWidget_HudEditor_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_RPC_WRAPPERS \
	virtual void SetOnSelection_Implementation(bool isSelected); \
 \
	DECLARE_FUNCTION(execGetCustomWrapper); \
	DECLARE_FUNCTION(execSetOnSelection);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetOnSelection_Implementation(bool isSelected); \
 \
	DECLARE_FUNCTION(execGetCustomWrapper); \
	DECLARE_FUNCTION(execSetOnSelection);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_EVENT_PARMS \
	struct UMGDragWidget_HudEditor_eventSetOnSelection_Parms \
	{ \
		bool isSelected; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGDragWidget_HudEditor(); \
	friend struct Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics; \
public: \
	DECLARE_CLASS(UUMGDragWidget_HudEditor, UUMGDragWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGDragWidget_HudEditor)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGDragWidget_HudEditor(); \
	friend struct Z_Construct_UClass_UUMGDragWidget_HudEditor_Statics; \
public: \
	DECLARE_CLASS(UUMGDragWidget_HudEditor, UUMGDragWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGDragWidget_HudEditor)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGDragWidget_HudEditor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGDragWidget_HudEditor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGDragWidget_HudEditor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGDragWidget_HudEditor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGDragWidget_HudEditor(UUMGDragWidget_HudEditor&&); \
	NO_API UUMGDragWidget_HudEditor(const UUMGDragWidget_HudEditor&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGDragWidget_HudEditor(UUMGDragWidget_HudEditor&&); \
	NO_API UUMGDragWidget_HudEditor(const UUMGDragWidget_HudEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGDragWidget_HudEditor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGDragWidget_HudEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGDragWidget_HudEditor)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___customWrapper() { return STRUCT_OFFSET(UUMGDragWidget_HudEditor, _customWrapper); } \
	FORCEINLINE static uint32 __PPO___selectionWidget() { return STRUCT_OFFSET(UUMGDragWidget_HudEditor, _selectionWidget); } \
	FORCEINLINE static uint32 __PPO___dragLinkWidget() { return STRUCT_OFFSET(UUMGDragWidget_HudEditor, _dragLinkWidget); } \
	FORCEINLINE static uint32 __PPO___parentLinkWidget() { return STRUCT_OFFSET(UUMGDragWidget_HudEditor, _parentLinkWidget); } \
	FORCEINLINE static uint32 __PPO___childLinkWidget() { return STRUCT_OFFSET(UUMGDragWidget_HudEditor, _childLinkWidget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGDragWidget_HudEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGDragWidget_HudEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
