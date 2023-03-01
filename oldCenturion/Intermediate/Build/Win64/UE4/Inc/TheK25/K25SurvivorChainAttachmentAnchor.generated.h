// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FK25SurvivorChainAttachmentData;
struct FVector;
class AK25Chain;
#ifdef THEK25_K25SurvivorChainAttachmentAnchor_generated_h
#error "K25SurvivorChainAttachmentAnchor.generated.h already included, missing '#pragma once' in K25SurvivorChainAttachmentAnchor.h"
#endif
#define THEK25_K25SurvivorChainAttachmentAnchor_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_RPC_WRAPPERS \
	virtual FVector GetChainAttachmentLocation_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetChainAttachmentData); \
	DECLARE_FUNCTION(execGetChainAttachmentLocation); \
	DECLARE_FUNCTION(execGetChainPullDirectionAngle); \
	DECLARE_FUNCTION(execGetChainsPullDirection); \
	DECLARE_FUNCTION(execGetChainsPullLocation); \
	DECLARE_FUNCTION(execGetNumberOfChainsAttached); \
	DECLARE_FUNCTION(execOnRep_AttachmentData);


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetChainAttachmentLocation_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetChainAttachmentData); \
	DECLARE_FUNCTION(execGetChainAttachmentLocation); \
	DECLARE_FUNCTION(execGetChainPullDirectionAngle); \
	DECLARE_FUNCTION(execGetChainsPullDirection); \
	DECLARE_FUNCTION(execGetChainsPullLocation); \
	DECLARE_FUNCTION(execGetNumberOfChainsAttached); \
	DECLARE_FUNCTION(execOnRep_AttachmentData);


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_EVENT_PARMS \
	struct K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainAttached_Parms \
	{ \
		AK25Chain* chainToAttach; \
	}; \
	struct K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainDetached_Parms \
	{ \
		AK25Chain* chainToDetach; \
	}; \
	struct K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25SurvivorChainAttachmentAnchor(); \
	friend struct Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics; \
public: \
	DECLARE_CLASS(AK25SurvivorChainAttachmentAnchor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25SurvivorChainAttachmentAnchor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachmentData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachmentData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAK25SurvivorChainAttachmentAnchor(); \
	friend struct Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics; \
public: \
	DECLARE_CLASS(AK25SurvivorChainAttachmentAnchor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25SurvivorChainAttachmentAnchor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachmentData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachmentData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25SurvivorChainAttachmentAnchor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25SurvivorChainAttachmentAnchor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25SurvivorChainAttachmentAnchor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25SurvivorChainAttachmentAnchor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25SurvivorChainAttachmentAnchor(AK25SurvivorChainAttachmentAnchor&&); \
	NO_API AK25SurvivorChainAttachmentAnchor(const AK25SurvivorChainAttachmentAnchor&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25SurvivorChainAttachmentAnchor(AK25SurvivorChainAttachmentAnchor&&); \
	NO_API AK25SurvivorChainAttachmentAnchor(const AK25SurvivorChainAttachmentAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25SurvivorChainAttachmentAnchor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25SurvivorChainAttachmentAnchor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25SurvivorChainAttachmentAnchor)


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chainMaxBreakingLength() { return STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _chainMaxBreakingLength); } \
	FORCEINLINE static uint32 __PPO___timeBetweenTrace() { return STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _timeBetweenTrace); } \
	FORCEINLINE static uint32 __PPO___attachmentData() { return STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _attachmentData); } \
	FORCEINLINE static uint32 __PPO___owningSurvivor() { return STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _owningSurvivor); } \
	FORCEINLINE static uint32 __PPO___attachedChain() { return STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _attachedChain); } \
	FORCEINLINE static uint32 __PPO___cachedPullDirection() { return STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _cachedPullDirection); }


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_12_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25SurvivorChainAttachmentAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25SurvivorChainAttachmentAnchor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
