// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUMGDragWidget_HudEditor;
class UCustomWidgetWrapper_HudEditor;
class UUMGHudEditorScreen;
class UAkAudioEvent;
#ifdef DEADBYDAYLIGHT_UMGHudEditorLayoutWidget_generated_h
#error "UMGHudEditorLayoutWidget.generated.h already included, missing '#pragma once' in UMGHudEditorLayoutWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGHudEditorLayoutWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_RPC_WRAPPERS \
	virtual void SetHudEditorScreen_Implementation(UUMGHudEditorScreen* NewHudEditorScreen); \
	virtual void SetWidgetToEdit_Implementation(UUMGDragWidget_HudEditor* widget); \
 \
	DECLARE_FUNCTION(execFlagSaveAsDirty); \
	DECLARE_FUNCTION(execFlipLayout); \
	DECLARE_FUNCTION(execGetCurrentDragWidget); \
	DECLARE_FUNCTION(execGetHudEditorWrapperToEdit); \
	DECLARE_FUNCTION(execResetLayout); \
	DECLARE_FUNCTION(execSaveLayout); \
	DECLARE_FUNCTION(execSetHudEditorScreen); \
	DECLARE_FUNCTION(execSetSaveOverlapSound); \
	DECLARE_FUNCTION(execSetWidgetToEdit); \
	DECLARE_FUNCTION(execShowKillerLayout); \
	DECLARE_FUNCTION(execShowSurvivorLayout);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetHudEditorScreen_Implementation(UUMGHudEditorScreen* NewHudEditorScreen); \
	virtual void SetWidgetToEdit_Implementation(UUMGDragWidget_HudEditor* widget); \
 \
	DECLARE_FUNCTION(execFlagSaveAsDirty); \
	DECLARE_FUNCTION(execFlipLayout); \
	DECLARE_FUNCTION(execGetCurrentDragWidget); \
	DECLARE_FUNCTION(execGetHudEditorWrapperToEdit); \
	DECLARE_FUNCTION(execResetLayout); \
	DECLARE_FUNCTION(execSaveLayout); \
	DECLARE_FUNCTION(execSetHudEditorScreen); \
	DECLARE_FUNCTION(execSetSaveOverlapSound); \
	DECLARE_FUNCTION(execSetWidgetToEdit); \
	DECLARE_FUNCTION(execShowKillerLayout); \
	DECLARE_FUNCTION(execShowSurvivorLayout);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_EVENT_PARMS \
	struct UMGHudEditorLayoutWidget_eventOnSaveDirty_Parms \
	{ \
		bool isDirty; \
	}; \
	struct UMGHudEditorLayoutWidget_eventSetHudEditorScreen_Parms \
	{ \
		UUMGHudEditorScreen* NewHudEditorScreen; \
	}; \
	struct UMGHudEditorLayoutWidget_eventSetWidgetToEdit_Parms \
	{ \
		UUMGDragWidget_HudEditor* widget; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGHudEditorLayoutWidget(); \
	friend struct Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGHudEditorLayoutWidget, UUMGDragWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGHudEditorLayoutWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGHudEditorLayoutWidget(); \
	friend struct Z_Construct_UClass_UUMGHudEditorLayoutWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGHudEditorLayoutWidget, UUMGDragWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGHudEditorLayoutWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGHudEditorLayoutWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGHudEditorLayoutWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGHudEditorLayoutWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGHudEditorLayoutWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGHudEditorLayoutWidget(UUMGHudEditorLayoutWidget&&); \
	NO_API UUMGHudEditorLayoutWidget(const UUMGHudEditorLayoutWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGHudEditorLayoutWidget(UUMGHudEditorLayoutWidget&&); \
	NO_API UUMGHudEditorLayoutWidget(const UUMGHudEditorLayoutWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGHudEditorLayoutWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGHudEditorLayoutWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGHudEditorLayoutWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___onSaveOverlapSound() { return STRUCT_OFFSET(UUMGHudEditorLayoutWidget, _onSaveOverlapSound); } \
	FORCEINLINE static uint32 __PPO___currentWidgetToEdit() { return STRUCT_OFFSET(UUMGHudEditorLayoutWidget, _currentWidgetToEdit); } \
	FORCEINLINE static uint32 __PPO___isSaveDirtyMap() { return STRUCT_OFFSET(UUMGHudEditorLayoutWidget, _isSaveDirtyMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGHudEditorLayoutWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorLayoutWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
