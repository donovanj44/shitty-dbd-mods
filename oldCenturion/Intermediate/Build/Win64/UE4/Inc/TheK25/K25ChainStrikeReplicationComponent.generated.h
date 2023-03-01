// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UK25ChainStrikeInteraction;
enum class EChainStrikeEndReason : uint8;
#ifdef THEK25_K25ChainStrikeReplicationComponent_generated_h
#error "K25ChainStrikeReplicationComponent.generated.h already included, missing '#pragma once' in K25ChainStrikeReplicationComponent.h"
#endif
#define THEK25_K25ChainStrikeReplicationComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_EndChainStrike_Implementation(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason); \
	virtual void Server_EndChainStrike_Implementation(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason); \
 \
	DECLARE_FUNCTION(execMulticast_EndChainStrike); \
	DECLARE_FUNCTION(execServer_EndChainStrike);


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_EndChainStrike_Implementation(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason); \
	virtual void Server_EndChainStrike_Implementation(UK25ChainStrikeInteraction* interaction, EChainStrikeEndReason endReason); \
 \
	DECLARE_FUNCTION(execMulticast_EndChainStrike); \
	DECLARE_FUNCTION(execServer_EndChainStrike);


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_EVENT_PARMS \
	struct K25ChainStrikeReplicationComponent_eventMulticast_EndChainStrike_Parms \
	{ \
		UK25ChainStrikeInteraction* interaction; \
		EChainStrikeEndReason endReason; \
	}; \
	struct K25ChainStrikeReplicationComponent_eventServer_EndChainStrike_Parms \
	{ \
		UK25ChainStrikeInteraction* interaction; \
		EChainStrikeEndReason endReason; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ChainStrikeReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25ChainStrikeReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainStrikeReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUK25ChainStrikeReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25ChainStrikeReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25ChainStrikeReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainStrikeReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ChainStrikeReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ChainStrikeReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainStrikeReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainStrikeReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainStrikeReplicationComponent(UK25ChainStrikeReplicationComponent&&); \
	NO_API UK25ChainStrikeReplicationComponent(const UK25ChainStrikeReplicationComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainStrikeReplicationComponent(UK25ChainStrikeReplicationComponent&&); \
	NO_API UK25ChainStrikeReplicationComponent(const UK25ChainStrikeReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainStrikeReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainStrikeReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ChainStrikeReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_9_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ChainStrikeReplicationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ChainStrikeReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
