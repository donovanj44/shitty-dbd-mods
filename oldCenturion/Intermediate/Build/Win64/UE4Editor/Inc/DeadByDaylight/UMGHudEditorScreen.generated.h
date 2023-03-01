// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUMGHudEditorVersionWidget;
enum class EPlayerRole : uint8;
class UUMGHudEditorLayoutScreen;
class UAkAudioEvent;
class UUMGHudEditorLayoutWidget;
#ifdef DEADBYDAYLIGHT_UMGHudEditorScreen_generated_h
#error "UMGHudEditorScreen.generated.h already included, missing '#pragma once' in UMGHudEditorScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGHudEditorScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_RPC_WRAPPERS \
	virtual void SetWidgets_Implementation(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget); \
 \
	DECLARE_FUNCTION(execGetVersionSwapWidget); \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execRegisterEditorLayoutScreen); \
	DECLARE_FUNCTION(execSetEditorDropErrorOverlapSound); \
	DECLARE_FUNCTION(execSetWidgets); \
	DECLARE_FUNCTION(execShowHudLayout);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetWidgets_Implementation(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget); \
 \
	DECLARE_FUNCTION(execGetVersionSwapWidget); \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execRegisterEditorLayoutScreen); \
	DECLARE_FUNCTION(execSetEditorDropErrorOverlapSound); \
	DECLARE_FUNCTION(execSetWidgets); \
	DECLARE_FUNCTION(execShowHudLayout);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_EVENT_PARMS \
	struct UMGHudEditorScreen_eventSetWidgets_Parms \
	{ \
		UUMGHudEditorLayoutWidget* hudEditorLayoutWidget; \
		UUMGHudEditorVersionWidget* versionSwapWidget; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGHudEditorScreen(); \
	friend struct Z_Construct_UClass_UUMGHudEditorScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGHudEditorScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGHudEditorScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGHudEditorScreen(); \
	friend struct Z_Construct_UClass_UUMGHudEditorScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGHudEditorScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGHudEditorScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGHudEditorScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGHudEditorScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGHudEditorScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGHudEditorScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGHudEditorScreen(UUMGHudEditorScreen&&); \
	NO_API UUMGHudEditorScreen(const UUMGHudEditorScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGHudEditorScreen(UUMGHudEditorScreen&&); \
	NO_API UUMGHudEditorScreen(const UUMGHudEditorScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGHudEditorScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGHudEditorScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGHudEditorScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hudEditorLayoutWidget() { return STRUCT_OFFSET(UUMGHudEditorScreen, _hudEditorLayoutWidget); } \
	FORCEINLINE static uint32 __PPO___versionSwapWidget() { return STRUCT_OFFSET(UUMGHudEditorScreen, _versionSwapWidget); } \
	FORCEINLINE static uint32 __PPO___storedLayoutScreens() { return STRUCT_OFFSET(UUMGHudEditorScreen, _storedLayoutScreens); } \
	FORCEINLINE static uint32 __PPO___currentLayoutScreen() { return STRUCT_OFFSET(UUMGHudEditorScreen, _currentLayoutScreen); } \
	FORCEINLINE static uint32 __PPO___onDropOverlapSound() { return STRUCT_OFFSET(UUMGHudEditorScreen, _onDropOverlapSound); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGHudEditorScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGHudEditorScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
