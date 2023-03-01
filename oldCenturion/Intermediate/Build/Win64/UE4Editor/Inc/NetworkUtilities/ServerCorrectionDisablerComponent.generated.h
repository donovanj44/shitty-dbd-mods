// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef NETWORKUTILITIES_ServerCorrectionDisablerComponent_generated_h
#error "ServerCorrectionDisablerComponent.generated.h already included, missing '#pragma once' in ServerCorrectionDisablerComponent.h"
#endif
#define NETWORKUTILITIES_ServerCorrectionDisablerComponent_generated_h

#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_RPC_WRAPPERS \
	virtual void Multicast_SetServerCorrectionEnabled_Implementation(bool enabled, FGameplayTag channel); \
 \
	DECLARE_FUNCTION(execGetServerCorrectionEnabled); \
	DECLARE_FUNCTION(execMulticast_SetServerCorrectionEnabled); \
	DECLARE_FUNCTION(execSetServerCorrectionEnabled);


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetServerCorrectionEnabled_Implementation(bool enabled, FGameplayTag channel); \
 \
	DECLARE_FUNCTION(execGetServerCorrectionEnabled); \
	DECLARE_FUNCTION(execMulticast_SetServerCorrectionEnabled); \
	DECLARE_FUNCTION(execSetServerCorrectionEnabled);


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_EVENT_PARMS \
	struct ServerCorrectionDisablerComponent_eventMulticast_SetServerCorrectionEnabled_Parms \
	{ \
		bool enabled; \
		FGameplayTag channel; \
	};


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerCorrectionDisablerComponent(); \
	friend struct Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics; \
public: \
	DECLARE_CLASS(UServerCorrectionDisablerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(UServerCorrectionDisablerComponent)


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUServerCorrectionDisablerComponent(); \
	friend struct Z_Construct_UClass_UServerCorrectionDisablerComponent_Statics; \
public: \
	DECLARE_CLASS(UServerCorrectionDisablerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(UServerCorrectionDisablerComponent)


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerCorrectionDisablerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerCorrectionDisablerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerCorrectionDisablerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerCorrectionDisablerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerCorrectionDisablerComponent(UServerCorrectionDisablerComponent&&); \
	NO_API UServerCorrectionDisablerComponent(const UServerCorrectionDisablerComponent&); \
public:


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerCorrectionDisablerComponent(UServerCorrectionDisablerComponent&&); \
	NO_API UServerCorrectionDisablerComponent(const UServerCorrectionDisablerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerCorrectionDisablerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerCorrectionDisablerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerCorrectionDisablerComponent)


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_7_PROLOG \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_EVENT_PARMS


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_INCLASS \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKUTILITIES_API UClass* StaticClass<class UServerCorrectionDisablerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_NetworkUtilities_Public_ServerCorrectionDisablerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
