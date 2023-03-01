// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStatusViewSource;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_StatusView_generated_h
#error "StatusView.generated.h already included, missing '#pragma once' in StatusView.h"
#endif
#define DEADBYDAYLIGHT_StatusView_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_RPC_WRAPPERS \
	virtual void ResetView_Implementation(const ADBDPlayer* dbdPlayer); \
 \
	DECLARE_FUNCTION(execFireNotification); \
	DECLARE_FUNCTION(execResetView);


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResetView_Implementation(const ADBDPlayer* dbdPlayer); \
 \
	DECLARE_FUNCTION(execFireNotification); \
	DECLARE_FUNCTION(execResetView);


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_EVENT_PARMS \
	struct StatusView_eventResetView_Parms \
	{ \
		const ADBDPlayer* dbdPlayer; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatusView(); \
	friend struct Z_Construct_UClass_AStatusView_Statics; \
public: \
	DECLARE_CLASS(AStatusView, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AStatusView)


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAStatusView(); \
	friend struct Z_Construct_UClass_AStatusView_Statics; \
public: \
	DECLARE_CLASS(AStatusView, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AStatusView)


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatusView(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatusView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatusView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatusView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatusView(AStatusView&&); \
	NO_API AStatusView(const AStatusView&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatusView(AStatusView&&); \
	NO_API AStatusView(const AStatusView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatusView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatusView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStatusView)


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsActive() { return STRUCT_OFFSET(AStatusView, IsActive); } \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(AStatusView, Level); } \
	FORCEINLINE static uint32 __PPO__PercentageFill() { return STRUCT_OFFSET(AStatusView, PercentageFill); } \
	FORCEINLINE static uint32 __PPO__IsClockwiseTimer() { return STRUCT_OFFSET(AStatusView, IsClockwiseTimer); } \
	FORCEINLINE static uint32 __PPO___localDBDPlayer() { return STRUCT_OFFSET(AStatusView, _localDBDPlayer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AStatusView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StatusView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
