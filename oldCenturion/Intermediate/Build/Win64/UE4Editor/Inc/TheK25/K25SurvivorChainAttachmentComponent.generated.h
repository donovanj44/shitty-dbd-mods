// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AK25Chain;
#ifdef THEK25_K25SurvivorChainAttachmentComponent_generated_h
#error "K25SurvivorChainAttachmentComponent.generated.h already included, missing '#pragma once' in K25SurvivorChainAttachmentComponent.h"
#endif
#define THEK25_K25SurvivorChainAttachmentComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirstChainToRelease); \
	DECLARE_FUNCTION(execOnRep_RemoveChainChargeableComponent);


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirstChainToRelease); \
	DECLARE_FUNCTION(execOnRep_RemoveChainChargeableComponent);


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25SurvivorChainAttachmentComponent(); \
	friend struct Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UK25SurvivorChainAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25SurvivorChainAttachmentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainAttachmentAnchors=NETFIELD_REP_START, \
		_removeChainChargeableComponent, \
		NETFIELD_REP_END=_removeChainChargeableComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUK25SurvivorChainAttachmentComponent(); \
	friend struct Z_Construct_UClass_UK25SurvivorChainAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UK25SurvivorChainAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25SurvivorChainAttachmentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainAttachmentAnchors=NETFIELD_REP_START, \
		_removeChainChargeableComponent, \
		NETFIELD_REP_END=_removeChainChargeableComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25SurvivorChainAttachmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25SurvivorChainAttachmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25SurvivorChainAttachmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25SurvivorChainAttachmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25SurvivorChainAttachmentComponent(UK25SurvivorChainAttachmentComponent&&); \
	NO_API UK25SurvivorChainAttachmentComponent(const UK25SurvivorChainAttachmentComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25SurvivorChainAttachmentComponent(UK25SurvivorChainAttachmentComponent&&); \
	NO_API UK25SurvivorChainAttachmentComponent(const UK25SurvivorChainAttachmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25SurvivorChainAttachmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25SurvivorChainAttachmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25SurvivorChainAttachmentComponent)


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___attachmentAnchorClass() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _attachmentAnchorClass); } \
	FORCEINLINE static uint32 __PPO___survivorAnchorData() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _survivorAnchorData); } \
	FORCEINLINE static uint32 __PPO___survivorChainRotationStrategyClass() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _survivorChainRotationStrategyClass); } \
	FORCEINLINE static uint32 __PPO___interruptableInteractionClasses() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _interruptableInteractionClasses); } \
	FORCEINLINE static uint32 __PPO___maximumNumberOfChainsAttached() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _maximumNumberOfChainsAttached); } \
	FORCEINLINE static uint32 __PPO___chainAttachmentAnchors() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _chainAttachmentAnchors); } \
	FORCEINLINE static uint32 __PPO___chainsAttached() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _chainsAttached); } \
	FORCEINLINE static uint32 __PPO___removeChainChargeableComponent() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _removeChainChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___survivorChainRotationStrategy() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _survivorChainRotationStrategy); } \
	FORCEINLINE static uint32 __PPO___chainAttachmentReplicationComponent() { return STRUCT_OFFSET(UK25SurvivorChainAttachmentComponent, _chainAttachmentReplicationComponent); }


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_16_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25SurvivorChainAttachmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
