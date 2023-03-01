// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UmgSpectatorHud_generated_h
#error "UmgSpectatorHud.generated.h already included, missing '#pragma once' in UmgSpectatorHud.h"
#endif
#define DEADBYDAYLIGHT_UmgSpectatorHud_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_7_DELEGATE \
struct _Script_DeadByDaylight_eventUmgSpectatorHudOnPlayerSpectate_Parms \
{ \
	FString playerName; \
}; \
static inline void FUmgSpectatorHudOnPlayerSpectate_DelegateWrapper(const FMulticastScriptDelegate& UmgSpectatorHudOnPlayerSpectate, const FString& playerName) \
{ \
	_Script_DeadByDaylight_eventUmgSpectatorHudOnPlayerSpectate_Parms Parms; \
	Parms.playerName=playerName; \
	UmgSpectatorHudOnPlayerSpectate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_6_DELEGATE \
static inline void FUmgSpectatorHudOnLeaveSpectateClicked_DelegateWrapper(const FMulticastScriptDelegate& UmgSpectatorHudOnLeaveSpectateClicked) \
{ \
	UmgSpectatorHudOnLeaveSpectateClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLeaveSpectateClicked); \
	DECLARE_FUNCTION(execOnPlayerStatusSelected);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLeaveSpectateClicked); \
	DECLARE_FUNCTION(execOnPlayerStatusSelected);


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUmgSpectatorHud(); \
	friend struct Z_Construct_UClass_UUmgSpectatorHud_Statics; \
public: \
	DECLARE_CLASS(UUmgSpectatorHud, UUmgPlayerHud, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgSpectatorHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUUmgSpectatorHud(); \
	friend struct Z_Construct_UClass_UUmgSpectatorHud_Statics; \
public: \
	DECLARE_CLASS(UUmgSpectatorHud, UUmgPlayerHud, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUmgSpectatorHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUmgSpectatorHud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUmgSpectatorHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgSpectatorHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgSpectatorHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgSpectatorHud(UUmgSpectatorHud&&); \
	NO_API UUmgSpectatorHud(const UUmgSpectatorHud&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUmgSpectatorHud(UUmgSpectatorHud&&); \
	NO_API UUmgSpectatorHud(const UUmgSpectatorHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmgSpectatorHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmgSpectatorHud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUmgSpectatorHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUmgSpectatorHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UmgSpectatorHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
