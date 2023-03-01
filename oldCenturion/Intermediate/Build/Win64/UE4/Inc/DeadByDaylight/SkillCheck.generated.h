// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESkillCheckCustomType : uint8;
class ADBDPlayer;
class UInteractionDefinition;
class UChargeableInteractionDefinition;
struct FSkillCheckDefinition;
struct FSkillCheckResponse;
#ifdef DEADBYDAYLIGHT_SkillCheck_generated_h
#error "SkillCheck.generated.h already included, missing '#pragma once' in SkillCheck.h"
#endif
#define DEADBYDAYLIGHT_SkillCheck_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_RPC_WRAPPERS \
	virtual void Multicast_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition); \
	virtual void Multicast_DeactivateSkillCheck_Implementation(); \
	virtual void Multicast_SkillCheckResponse_Implementation(FSkillCheckResponse skillCheckResponse); \
	virtual bool Server_ActivateSkillCheck_Validate(UChargeableInteractionDefinition* , ESkillCheckCustomType , FSkillCheckDefinition ); \
	virtual void Server_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition); \
	virtual bool Server_DeactivateSkillCheck_Validate(); \
	virtual void Server_DeactivateSkillCheck_Implementation(); \
	virtual bool Server_OnSkillCheckFailure_Validate(FSkillCheckResponse ); \
	virtual void Server_OnSkillCheckFailure_Implementation(FSkillCheckResponse skillCheckResponse); \
	virtual bool Server_OnSkillCheckSuccess_Validate(FSkillCheckResponse ); \
	virtual void Server_OnSkillCheckSuccess_Implementation(FSkillCheckResponse skillCheckResponse); \
 \
	DECLARE_FUNCTION(execCanSkillCheckTypeGrantScore); \
	DECLARE_FUNCTION(execGetStartDelayInSeconds); \
	DECLARE_FUNCTION(execIsDisplayed); \
	DECLARE_FUNCTION(execIsHexSkillCheck); \
	DECLARE_FUNCTION(execIsOffCenterSkillCheck); \
	DECLARE_FUNCTION(execLocal_ActivateCustomSkillCheck); \
	DECLARE_FUNCTION(execLocal_ActivateSkillCheck); \
	DECLARE_FUNCTION(execLocal_OnSkillCheckFailureTrigger); \
	DECLARE_FUNCTION(execLocal_OnSkillCheckSuccessTrigger); \
	DECLARE_FUNCTION(execMulticast_ActivateSkillCheck); \
	DECLARE_FUNCTION(execMulticast_DeactivateSkillCheck); \
	DECLARE_FUNCTION(execMulticast_SkillCheckResponse); \
	DECLARE_FUNCTION(execOnSkillCheckInput); \
	DECLARE_FUNCTION(execServer_ActivateSkillCheck); \
	DECLARE_FUNCTION(execServer_DeactivateSkillCheck); \
	DECLARE_FUNCTION(execServer_OnSkillCheckFailure); \
	DECLARE_FUNCTION(execServer_OnSkillCheckSuccess); \
	DECLARE_FUNCTION(execShouldShowWarning);


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition); \
	virtual void Multicast_DeactivateSkillCheck_Implementation(); \
	virtual void Multicast_SkillCheckResponse_Implementation(FSkillCheckResponse skillCheckResponse); \
	virtual bool Server_ActivateSkillCheck_Validate(UChargeableInteractionDefinition* , ESkillCheckCustomType , FSkillCheckDefinition ); \
	virtual void Server_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType type, FSkillCheckDefinition definition); \
	virtual bool Server_DeactivateSkillCheck_Validate(); \
	virtual void Server_DeactivateSkillCheck_Implementation(); \
	virtual bool Server_OnSkillCheckFailure_Validate(FSkillCheckResponse ); \
	virtual void Server_OnSkillCheckFailure_Implementation(FSkillCheckResponse skillCheckResponse); \
	virtual bool Server_OnSkillCheckSuccess_Validate(FSkillCheckResponse ); \
	virtual void Server_OnSkillCheckSuccess_Implementation(FSkillCheckResponse skillCheckResponse); \
 \
	DECLARE_FUNCTION(execCanSkillCheckTypeGrantScore); \
	DECLARE_FUNCTION(execGetStartDelayInSeconds); \
	DECLARE_FUNCTION(execIsDisplayed); \
	DECLARE_FUNCTION(execIsHexSkillCheck); \
	DECLARE_FUNCTION(execIsOffCenterSkillCheck); \
	DECLARE_FUNCTION(execLocal_ActivateCustomSkillCheck); \
	DECLARE_FUNCTION(execLocal_ActivateSkillCheck); \
	DECLARE_FUNCTION(execLocal_OnSkillCheckFailureTrigger); \
	DECLARE_FUNCTION(execLocal_OnSkillCheckSuccessTrigger); \
	DECLARE_FUNCTION(execMulticast_ActivateSkillCheck); \
	DECLARE_FUNCTION(execMulticast_DeactivateSkillCheck); \
	DECLARE_FUNCTION(execMulticast_SkillCheckResponse); \
	DECLARE_FUNCTION(execOnSkillCheckInput); \
	DECLARE_FUNCTION(execServer_ActivateSkillCheck); \
	DECLARE_FUNCTION(execServer_DeactivateSkillCheck); \
	DECLARE_FUNCTION(execServer_OnSkillCheckFailure); \
	DECLARE_FUNCTION(execServer_OnSkillCheckSuccess); \
	DECLARE_FUNCTION(execShouldShowWarning);


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_EVENT_PARMS \
	struct SkillCheck_eventMulticast_ActivateSkillCheck_Parms \
	{ \
		UChargeableInteractionDefinition* interaction; \
		ESkillCheckCustomType type; \
		FSkillCheckDefinition definition; \
	}; \
	struct SkillCheck_eventMulticast_SkillCheckResponse_Parms \
	{ \
		FSkillCheckResponse skillCheckResponse; \
	}; \
	struct SkillCheck_eventServer_ActivateSkillCheck_Parms \
	{ \
		UChargeableInteractionDefinition* interaction; \
		ESkillCheckCustomType type; \
		FSkillCheckDefinition definition; \
	}; \
	struct SkillCheck_eventServer_OnSkillCheckFailure_Parms \
	{ \
		FSkillCheckResponse skillCheckResponse; \
	}; \
	struct SkillCheck_eventServer_OnSkillCheckSuccess_Parms \
	{ \
		FSkillCheckResponse skillCheckResponse; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillCheck(); \
	friend struct Z_Construct_UClass_USkillCheck_Statics; \
public: \
	DECLARE_CLASS(USkillCheck, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USkillCheck)


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSkillCheck(); \
	friend struct Z_Construct_UClass_USkillCheck_Statics; \
public: \
	DECLARE_CLASS(USkillCheck, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USkillCheck)


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillCheck(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillCheck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillCheck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillCheck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillCheck(USkillCheck&&); \
	NO_API USkillCheck(const USkillCheck&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillCheck(USkillCheck&&); \
	NO_API USkillCheck(const USkillCheck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillCheck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillCheck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkillCheck)


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owner() { return STRUCT_OFFSET(USkillCheck, _owner); } \
	FORCEINLINE static uint32 __PPO___currentInteraction() { return STRUCT_OFFSET(USkillCheck, _currentInteraction); }


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class USkillCheck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SkillCheck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
