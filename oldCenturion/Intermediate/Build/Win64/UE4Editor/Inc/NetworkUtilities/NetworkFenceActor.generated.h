// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef NETWORKUTILITIES_NetworkFenceActor_generated_h
#error "NetworkFenceActor.generated.h already included, missing '#pragma once' in NetworkFenceActor.h"
#endif
#define NETWORKUTILITIES_NetworkFenceActor_generated_h

#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_SPARSE_DATA
#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_RPC_WRAPPERS \
	virtual bool Client_AllPassedFence_Validate(TArray<FGuid> const& ); \
	virtual void Client_AllPassedFence_Implementation(TArray<FGuid> const& Fences); \
	virtual bool Server_ClientPassedFence_Validate(TArray<FGuid> const& ); \
	virtual void Server_ClientPassedFence_Implementation(TArray<FGuid> const& Fences); \
 \
	DECLARE_FUNCTION(execClient_AllPassedFence); \
	DECLARE_FUNCTION(execServer_ClientPassedFence);


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Client_AllPassedFence_Validate(TArray<FGuid> const& ); \
	virtual void Client_AllPassedFence_Implementation(TArray<FGuid> const& Fences); \
	virtual bool Server_ClientPassedFence_Validate(TArray<FGuid> const& ); \
	virtual void Server_ClientPassedFence_Implementation(TArray<FGuid> const& Fences); \
 \
	DECLARE_FUNCTION(execClient_AllPassedFence); \
	DECLARE_FUNCTION(execServer_ClientPassedFence);


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_EVENT_PARMS \
	struct NetworkFenceActor_eventClient_AllPassedFence_Parms \
	{ \
		TArray<FGuid> Fences; \
	}; \
	struct NetworkFenceActor_eventServer_ClientPassedFence_Parms \
	{ \
		TArray<FGuid> Fences; \
	};


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkFenceActor(); \
	friend struct Z_Construct_UClass_ANetworkFenceActor_Statics; \
public: \
	DECLARE_CLASS(ANetworkFenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(ANetworkFenceActor)


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_INCLASS \
private: \
	static void StaticRegisterNativesANetworkFenceActor(); \
	friend struct Z_Construct_UClass_ANetworkFenceActor_Statics; \
public: \
	DECLARE_CLASS(ANetworkFenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(ANetworkFenceActor)


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkFenceActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkFenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkFenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkFenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkFenceActor(ANetworkFenceActor&&); \
	NO_API ANetworkFenceActor(const ANetworkFenceActor&); \
public:


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkFenceActor(ANetworkFenceActor&&); \
	NO_API ANetworkFenceActor(const ANetworkFenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkFenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkFenceActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkFenceActor)


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_7_PROLOG \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_EVENT_PARMS


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_SPARSE_DATA \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_INCLASS \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_SPARSE_DATA \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKUTILITIES_API UClass* StaticClass<class ANetworkFenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_NetworkUtilities_Public_NetworkFenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
