// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UK25SurvivorChainAttachmentComponent;
class AK25Chain;
class AK25SurvivorChainAttachmentAnchor;
enum class EK25ChainDetachmentReason : uint8;
struct FVector;
#ifdef THEK25_K25ChainAttachmentReplicationComponent_generated_h
#error "K25ChainAttachmentReplicationComponent.generated.h already included, missing '#pragma once' in K25ChainAttachmentReplicationComponent.h"
#endif
#define THEK25_K25ChainAttachmentReplicationComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_AttachChainToAnchor_Implementation(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, AK25Chain* chainToAttach, AK25SurvivorChainAttachmentAnchor* anchorPoint); \
	virtual void Multicast_DetachChains_Implementation(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<AK25Chain*> const& chainsToDetach, EK25ChainDetachmentReason detachmentReason, TArray<AK25Chain*> const& chainsAttached); \
	virtual void Multicast_LaunchInstantHitChainTowardsSurvivor_Implementation(AK25Chain* newChainToAttach, AK25SurvivorChainAttachmentAnchor* targetAnchor, FVector const& startPosition); \
	virtual void Multicast_StartChainReelback_Implementation(AK25Chain* chainToAttach); \
 \
	DECLARE_FUNCTION(execMulticast_AttachChainToAnchor); \
	DECLARE_FUNCTION(execMulticast_DetachChains); \
	DECLARE_FUNCTION(execMulticast_LaunchInstantHitChainTowardsSurvivor); \
	DECLARE_FUNCTION(execMulticast_StartChainReelback);


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AttachChainToAnchor_Implementation(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, AK25Chain* chainToAttach, AK25SurvivorChainAttachmentAnchor* anchorPoint); \
	virtual void Multicast_DetachChains_Implementation(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<AK25Chain*> const& chainsToDetach, EK25ChainDetachmentReason detachmentReason, TArray<AK25Chain*> const& chainsAttached); \
	virtual void Multicast_LaunchInstantHitChainTowardsSurvivor_Implementation(AK25Chain* newChainToAttach, AK25SurvivorChainAttachmentAnchor* targetAnchor, FVector const& startPosition); \
	virtual void Multicast_StartChainReelback_Implementation(AK25Chain* chainToAttach); \
 \
	DECLARE_FUNCTION(execMulticast_AttachChainToAnchor); \
	DECLARE_FUNCTION(execMulticast_DetachChains); \
	DECLARE_FUNCTION(execMulticast_LaunchInstantHitChainTowardsSurvivor); \
	DECLARE_FUNCTION(execMulticast_StartChainReelback);


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_EVENT_PARMS \
	struct K25ChainAttachmentReplicationComponent_eventMulticast_AttachChainToAnchor_Parms \
	{ \
		UK25SurvivorChainAttachmentComponent* chainAttachementComponent; \
		AK25Chain* chainToAttach; \
		AK25SurvivorChainAttachmentAnchor* anchorPoint; \
	}; \
	struct K25ChainAttachmentReplicationComponent_eventMulticast_DetachChains_Parms \
	{ \
		UK25SurvivorChainAttachmentComponent* chainAttachementComponent; \
		TArray<AK25Chain*> chainsToDetach; \
		EK25ChainDetachmentReason detachmentReason; \
		TArray<AK25Chain*> chainsAttached; \
	}; \
	struct K25ChainAttachmentReplicationComponent_eventMulticast_LaunchInstantHitChainTowardsSurvivor_Parms \
	{ \
		AK25Chain* newChainToAttach; \
		AK25SurvivorChainAttachmentAnchor* targetAnchor; \
		FVector startPosition; \
	}; \
	struct K25ChainAttachmentReplicationComponent_eventMulticast_StartChainReelback_Parms \
	{ \
		AK25Chain* chainToAttach; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ChainAttachmentReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25ChainAttachmentReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainAttachmentReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUK25ChainAttachmentReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25ChainAttachmentReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25ChainAttachmentReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainAttachmentReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ChainAttachmentReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ChainAttachmentReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainAttachmentReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainAttachmentReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainAttachmentReplicationComponent(UK25ChainAttachmentReplicationComponent&&); \
	NO_API UK25ChainAttachmentReplicationComponent(const UK25ChainAttachmentReplicationComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainAttachmentReplicationComponent(UK25ChainAttachmentReplicationComponent&&); \
	NO_API UK25ChainAttachmentReplicationComponent(const UK25ChainAttachmentReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainAttachmentReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainAttachmentReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ChainAttachmentReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_12_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ChainAttachmentReplicationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ChainAttachmentReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
