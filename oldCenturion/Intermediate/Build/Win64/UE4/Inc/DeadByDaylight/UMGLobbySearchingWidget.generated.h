// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTooltipPressedData;
enum class ECurrencyType : uint8;
#ifdef DEADBYDAYLIGHT_UMGLobbySearchingWidget_generated_h
#error "UMGLobbySearchingWidget.generated.h already included, missing '#pragma once' in UMGLobbySearchingWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLobbySearchingWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLeaveButtonClicked); \
	DECLARE_FUNCTION(execOnCurrencyTooltipTriggered); \
	DECLARE_FUNCTION(execOnLevelTooltipTriggered); \
	DECLARE_FUNCTION(execOnRankTooltipTriggered);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLeaveButtonClicked); \
	DECLARE_FUNCTION(execOnCurrencyTooltipTriggered); \
	DECLARE_FUNCTION(execOnLevelTooltipTriggered); \
	DECLARE_FUNCTION(execOnRankTooltipTriggered);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_EVENT_PARMS \
	struct UMGLobbySearchingWidget_eventSetEstimatedWaitingTimer_Parms \
	{ \
		int32 seconds; \
	}; \
	struct UMGLobbySearchingWidget_eventSetWaitingTimer_Parms \
	{ \
		int32 seconds; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLobbySearchingWidget(); \
	friend struct Z_Construct_UClass_UUMGLobbySearchingWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLobbySearchingWidget, UUMGLoadoutBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLobbySearchingWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLobbySearchingWidget(); \
	friend struct Z_Construct_UClass_UUMGLobbySearchingWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLobbySearchingWidget, UUMGLoadoutBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLobbySearchingWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLobbySearchingWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLobbySearchingWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLobbySearchingWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLobbySearchingWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLobbySearchingWidget(UUMGLobbySearchingWidget&&); \
	NO_API UUMGLobbySearchingWidget(const UUMGLobbySearchingWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLobbySearchingWidget(UUMGLobbySearchingWidget&&); \
	NO_API UUMGLobbySearchingWidget(const UUMGLobbySearchingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLobbySearchingWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLobbySearchingWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLobbySearchingWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ButtonCancelSearching() { return STRUCT_OFFSET(UUMGLobbySearchingWidget, ButtonCancelSearching); } \
	FORCEINLINE static uint32 __PPO__PartySlots() { return STRUCT_OFFSET(UUMGLobbySearchingWidget, PartySlots); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLobbySearchingWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLobbySearchingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
