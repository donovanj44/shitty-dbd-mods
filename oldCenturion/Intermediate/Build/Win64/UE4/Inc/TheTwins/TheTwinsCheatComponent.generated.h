// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTwinPossessionComponent;
#ifdef THETWINS_TheTwinsCheatComponent_generated_h
#error "TheTwinsCheatComponent.generated.h already included, missing '#pragma once' in TheTwinsCheatComponent.h"
#endif
#define THETWINS_TheTwinsCheatComponent_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_RPC_WRAPPERS \
	virtual void Multicast_TrySendThePlayerBackInKiller_Implementation(UTwinPossessionComponent* twinPossessionComponent); \
 \
	DECLARE_FUNCTION(execDBD_TwinDestroyTheTwin); \
	DECLARE_FUNCTION(execMulticast_TrySendThePlayerBackInKiller);


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TrySendThePlayerBackInKiller_Implementation(UTwinPossessionComponent* twinPossessionComponent); \
 \
	DECLARE_FUNCTION(execDBD_TwinDestroyTheTwin); \
	DECLARE_FUNCTION(execMulticast_TrySendThePlayerBackInKiller);


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_EVENT_PARMS \
	struct TheTwinsCheatComponent_eventMulticast_TrySendThePlayerBackInKiller_Parms \
	{ \
		UTwinPossessionComponent* twinPossessionComponent; \
	};


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTheTwinsCheatComponent(); \
	friend struct Z_Construct_UClass_UTheTwinsCheatComponent_Statics; \
public: \
	DECLARE_CLASS(UTheTwinsCheatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTheTwinsCheatComponent)


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTheTwinsCheatComponent(); \
	friend struct Z_Construct_UClass_UTheTwinsCheatComponent_Statics; \
public: \
	DECLARE_CLASS(UTheTwinsCheatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTheTwinsCheatComponent)


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTheTwinsCheatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTheTwinsCheatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheTwinsCheatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheTwinsCheatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheTwinsCheatComponent(UTheTwinsCheatComponent&&); \
	NO_API UTheTwinsCheatComponent(const UTheTwinsCheatComponent&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheTwinsCheatComponent(UTheTwinsCheatComponent&&); \
	NO_API UTheTwinsCheatComponent(const UTheTwinsCheatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheTwinsCheatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheTwinsCheatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTheTwinsCheatComponent)


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_8_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTheTwinsCheatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TheTwinsCheatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
