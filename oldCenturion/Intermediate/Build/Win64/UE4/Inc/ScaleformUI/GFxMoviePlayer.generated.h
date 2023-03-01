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
class UGFxObject;
struct FASPerspectiveTransform;
struct FASValue;
class USwfMovie;
class UObject;
class UTextureRenderTarget2D;
class UGFxMoviePlayer;
struct FKey;
class UTexture;
#ifdef SCALEFORMUI_GFxMoviePlayer_generated_h
#error "GFxMoviePlayer.generated.h already included, missing '#pragma once' in GFxMoviePlayer.h"
#endif
#define SCALEFORMUI_GFxMoviePlayer_generated_h

#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_30_DELEGATE \
struct _Script_ScaleformUI_eventGFxMoviePlayerOnFocusGainedCommand_Parms \
{ \
	int32 LocalPlayerIndex; \
}; \
static inline void FGFxMoviePlayerOnFocusGainedCommand_DelegateWrapper(const FMulticastScriptDelegate& GFxMoviePlayerOnFocusGainedCommand, int32 LocalPlayerIndex) \
{ \
	_Script_ScaleformUI_eventGFxMoviePlayerOnFocusGainedCommand_Parms Parms; \
	Parms.LocalPlayerIndex=LocalPlayerIndex; \
	GFxMoviePlayerOnFocusGainedCommand.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_29_DELEGATE \
static inline void FGFxMoviePlayerOnCloseCommand_DelegateWrapper(const FMulticastScriptDelegate& GFxMoviePlayerOnCloseCommand) \
{ \
	GFxMoviePlayerOnCloseCommand.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_28_DELEGATE \
static inline void FGFxMoviePlayerOnStartCommand_DelegateWrapper(const FMulticastScriptDelegate& GFxMoviePlayerOnStartCommand) \
{ \
	GFxMoviePlayerOnStartCommand.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_27_DELEGATE \
struct _Script_ScaleformUI_eventGFxMoviePlayerOnFocusLostCommand_Parms \
{ \
	int32 LocalPlayerIndex; \
}; \
static inline void FGFxMoviePlayerOnFocusLostCommand_DelegateWrapper(const FMulticastScriptDelegate& GFxMoviePlayerOnFocusLostCommand, int32 LocalPlayerIndex) \
{ \
	_Script_ScaleformUI_eventGFxMoviePlayerOnFocusLostCommand_Parms Parms; \
	Parms.LocalPlayerIndex=LocalPlayerIndex; \
	GFxMoviePlayerOnFocusLostCommand.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_26_DELEGATE \
struct _Script_ScaleformUI_eventGFxMoviePlayerOnFsCommand_Parms \
{ \
	FString Cmd; \
	FString Arg; \
}; \
static inline void FGFxMoviePlayerOnFsCommand_DelegateWrapper(const FMulticastScriptDelegate& GFxMoviePlayerOnFsCommand, const FString& Cmd, const FString& Arg) \
{ \
	_Script_ScaleformUI_eventGFxMoviePlayerOnFsCommand_Parms Parms; \
	Parms.Cmd=Cmd; \
	Parms.Arg=Arg; \
	GFxMoviePlayerOnFsCommand.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_25_DELEGATE \
struct _Script_ScaleformUI_eventGFxMoviePlayerOnTickCommand_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FGFxMoviePlayerOnTickCommand_DelegateWrapper(const FMulticastScriptDelegate& GFxMoviePlayerOnTickCommand, float DeltaTime) \
{ \
	_Script_ScaleformUI_eventGFxMoviePlayerOnTickCommand_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	GFxMoviePlayerOnTickCommand.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_SPARSE_DATA
#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execGetColorTransform); \
	DECLARE_FUNCTION(execGetDisplayInfo); \
	DECLARE_FUNCTION(execGetDisplayTransform); \
	DECLARE_FUNCTION(execGetMovieClip); \
	DECLARE_FUNCTION(execGetPerspective3D); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetVariableValue); \
	DECLARE_FUNCTION(execGetVariableValueArray); \
	DECLARE_FUNCTION(execGetView3D); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execGotoAndPlay); \
	DECLARE_FUNCTION(execGotoAndPlayI); \
	DECLARE_FUNCTION(execGotoAndStop); \
	DECLARE_FUNCTION(execGotoAndStopI); \
	DECLARE_FUNCTION(execInvoke); \
	DECLARE_FUNCTION(execLoadAndStart); \
	DECLARE_FUNCTION(execOnClose); \
	DECLARE_FUNCTION(execOnFocusGained); \
	DECLARE_FUNCTION(execOnFocusLost); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execOpenMovie); \
	DECLARE_FUNCTION(execReceiveGFxCommand); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetCaptureKeys); \
	DECLARE_FUNCTION(execSetColorTransform); \
	DECLARE_FUNCTION(execSetDisplayInfo); \
	DECLARE_FUNCTION(execSetDisplayTransform); \
	DECLARE_FUNCTION(execSetExternalTexture); \
	DECLARE_FUNCTION(execSetFocusIgnoreKeys); \
	DECLARE_FUNCTION(execSetMovieCanReceiveFocus); \
	DECLARE_FUNCTION(execSetMovieCanReceiveInput); \
	DECLARE_FUNCTION(execSetPause); \
	DECLARE_FUNCTION(execSetPerspective3D); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetTimingMode); \
	DECLARE_FUNCTION(execSetVariableValue); \
	DECLARE_FUNCTION(execSetVariableValueArray); \
	DECLARE_FUNCTION(execSetView3D); \
	DECLARE_FUNCTION(execSetViewport); \
	DECLARE_FUNCTION(execSetViewScaleMode); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execStart);


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execGetColorTransform); \
	DECLARE_FUNCTION(execGetDisplayInfo); \
	DECLARE_FUNCTION(execGetDisplayTransform); \
	DECLARE_FUNCTION(execGetMovieClip); \
	DECLARE_FUNCTION(execGetPerspective3D); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetVariableValue); \
	DECLARE_FUNCTION(execGetVariableValueArray); \
	DECLARE_FUNCTION(execGetView3D); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execGotoAndPlay); \
	DECLARE_FUNCTION(execGotoAndPlayI); \
	DECLARE_FUNCTION(execGotoAndStop); \
	DECLARE_FUNCTION(execGotoAndStopI); \
	DECLARE_FUNCTION(execInvoke); \
	DECLARE_FUNCTION(execLoadAndStart); \
	DECLARE_FUNCTION(execOnClose); \
	DECLARE_FUNCTION(execOnFocusGained); \
	DECLARE_FUNCTION(execOnFocusLost); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execOpenMovie); \
	DECLARE_FUNCTION(execReceiveGFxCommand); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execSetCaptureKeys); \
	DECLARE_FUNCTION(execSetColorTransform); \
	DECLARE_FUNCTION(execSetDisplayInfo); \
	DECLARE_FUNCTION(execSetDisplayTransform); \
	DECLARE_FUNCTION(execSetExternalTexture); \
	DECLARE_FUNCTION(execSetFocusIgnoreKeys); \
	DECLARE_FUNCTION(execSetMovieCanReceiveFocus); \
	DECLARE_FUNCTION(execSetMovieCanReceiveInput); \
	DECLARE_FUNCTION(execSetPause); \
	DECLARE_FUNCTION(execSetPerspective3D); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execSetTimingMode); \
	DECLARE_FUNCTION(execSetVariableValue); \
	DECLARE_FUNCTION(execSetVariableValueArray); \
	DECLARE_FUNCTION(execSetView3D); \
	DECLARE_FUNCTION(execSetViewport); \
	DECLARE_FUNCTION(execSetViewScaleMode); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execStart);


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFxMoviePlayer(); \
	friend struct Z_Construct_UClass_UGFxMoviePlayer_Statics; \
public: \
	DECLARE_CLASS(UGFxMoviePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaleformUI"), NO_API) \
	DECLARE_SERIALIZER(UGFxMoviePlayer)


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUGFxMoviePlayer(); \
	friend struct Z_Construct_UClass_UGFxMoviePlayer_Statics; \
public: \
	DECLARE_CLASS(UGFxMoviePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaleformUI"), NO_API) \
	DECLARE_SERIALIZER(UGFxMoviePlayer)


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGFxMoviePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGFxMoviePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFxMoviePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFxMoviePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFxMoviePlayer(UGFxMoviePlayer&&); \
	NO_API UGFxMoviePlayer(const UGFxMoviePlayer&); \
public:


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGFxMoviePlayer(UGFxMoviePlayer&&); \
	NO_API UGFxMoviePlayer(const UGFxMoviePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFxMoviePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFxMoviePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGFxMoviePlayer)


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedMovieClipsArray() { return STRUCT_OFFSET(UGFxMoviePlayer, CachedMovieClipsArray); }


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_32_PROLOG
#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_SPARSE_DATA \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_RPC_WRAPPERS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_INCLASS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_SPARSE_DATA \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCALEFORMUI_API UClass* StaticClass<class UGFxMoviePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_ScaleformUI_Public_GFxMoviePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
