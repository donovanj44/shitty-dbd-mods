// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGLobbyScreen_generated_h
#error "UMGLobbyScreen.generated.h already included, missing '#pragma once' in UMGLobbyScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGLobbyScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_13_DELEGATE \
static inline void FUMGLobbyScreenOnSearchingLobbyCancelled_DelegateWrapper(const FMulticastScriptDelegate& UMGLobbyScreenOnSearchingLobbyCancelled) \
{ \
	UMGLobbyScreenOnSearchingLobbyCancelled.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_12_DELEGATE \
static inline void FUMGLobbyScreenOnJoinedLobbyLeaved_DelegateWrapper(const FMulticastScriptDelegate& UMGLobbyScreenOnJoinedLobbyLeaved) \
{ \
	UMGLobbyScreenOnJoinedLobbyLeaved.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleJoinedLobbyLeave); \
	DECLARE_FUNCTION(execHandleSearchingLobbyCancel);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleJoinedLobbyLeave); \
	DECLARE_FUNCTION(execHandleSearchingLobbyCancel);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLobbyScreen(); \
	friend struct Z_Construct_UClass_UUMGLobbyScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGLobbyScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLobbyScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLobbyScreen(); \
	friend struct Z_Construct_UClass_UUMGLobbyScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGLobbyScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLobbyScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLobbyScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLobbyScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLobbyScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLobbyScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLobbyScreen(UUMGLobbyScreen&&); \
	NO_API UUMGLobbyScreen(const UUMGLobbyScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLobbyScreen(UUMGLobbyScreen&&); \
	NO_API UUMGLobbyScreen(const UUMGLobbyScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLobbyScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLobbyScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLobbyScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LobbySwitcher() { return STRUCT_OFFSET(UUMGLobbyScreen, LobbySwitcher); } \
	FORCEINLINE static uint32 __PPO__LobbyJoinedWidget() { return STRUCT_OFFSET(UUMGLobbyScreen, LobbyJoinedWidget); } \
	FORCEINLINE static uint32 __PPO__OfferingWidget() { return STRUCT_OFFSET(UUMGLobbyScreen, OfferingWidget); } \
	FORCEINLINE static uint32 __PPO__FogWidget() { return STRUCT_OFFSET(UUMGLobbyScreen, FogWidget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_15_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLobbyScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbyScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
