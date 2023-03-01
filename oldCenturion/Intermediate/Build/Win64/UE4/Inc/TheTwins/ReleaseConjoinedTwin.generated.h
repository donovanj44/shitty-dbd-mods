// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
class ADBDPlayer;
class AConjoinedTwin;
#ifdef THETWINS_ReleaseConjoinedTwin_generated_h
#error "ReleaseConjoinedTwin.generated.h already included, missing '#pragma once' in ReleaseConjoinedTwin.h"
#endif
#define THETWINS_ReleaseConjoinedTwin_generated_h

#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnKillerStunned); \
	DECLARE_FUNCTION(execOnPowerCollected); \
	DECLARE_FUNCTION(execOnRep_ReleaseAnimationWentToTheEnd); \
	DECLARE_FUNCTION(execOnTwinSet);


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnKillerStunned); \
	DECLARE_FUNCTION(execOnPowerCollected); \
	DECLARE_FUNCTION(execOnRep_ReleaseAnimationWentToTheEnd); \
	DECLARE_FUNCTION(execOnTwinSet);


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_EVENT_PARMS \
	struct ReleaseConjoinedTwin_eventCosmetic_OnReleaseCancelled_Parms \
	{ \
		ADBDPlayer* sister; \
		AConjoinedTwin* brother; \
	}; \
	struct ReleaseConjoinedTwin_eventCosmetic_OnReleaseChargeComplete_Parms \
	{ \
		ADBDPlayer* sister; \
		AConjoinedTwin* brother; \
	}; \
	struct ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdate_Parms \
	{ \
		ADBDPlayer* sister; \
		AConjoinedTwin* brother; \
		float deltaTime; \
	}; \
	struct ReleaseConjoinedTwin_eventCosmetic_OnReleaseTwinInteractionUpdateStart_Parms \
	{ \
		ADBDPlayer* sister; \
		AConjoinedTwin* brother; \
	};


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReleaseConjoinedTwin(); \
	friend struct Z_Construct_UClass_UReleaseConjoinedTwin_Statics; \
public: \
	DECLARE_CLASS(UReleaseConjoinedTwin, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UReleaseConjoinedTwin) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_releaseAnimationWentToTheEnd=NETFIELD_REP_START, \
		NETFIELD_REP_END=_releaseAnimationWentToTheEnd	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUReleaseConjoinedTwin(); \
	friend struct Z_Construct_UClass_UReleaseConjoinedTwin_Statics; \
public: \
	DECLARE_CLASS(UReleaseConjoinedTwin, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UReleaseConjoinedTwin) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_releaseAnimationWentToTheEnd=NETFIELD_REP_START, \
		NETFIELD_REP_END=_releaseAnimationWentToTheEnd	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReleaseConjoinedTwin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReleaseConjoinedTwin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReleaseConjoinedTwin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReleaseConjoinedTwin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReleaseConjoinedTwin(UReleaseConjoinedTwin&&); \
	NO_API UReleaseConjoinedTwin(const UReleaseConjoinedTwin&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReleaseConjoinedTwin(UReleaseConjoinedTwin&&); \
	NO_API UReleaseConjoinedTwin(const UReleaseConjoinedTwin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReleaseConjoinedTwin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReleaseConjoinedTwin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReleaseConjoinedTwin)


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___releaseMaxCharge() { return STRUCT_OFFSET(UReleaseConjoinedTwin, _releaseMaxCharge); } \
	FORCEINLINE static uint32 __PPO___releaseExitTime() { return STRUCT_OFFSET(UReleaseConjoinedTwin, _releaseExitTime); } \
	FORCEINLINE static uint32 __PPO___releaseAnimationWentToTheEnd() { return STRUCT_OFFSET(UReleaseConjoinedTwin, _releaseAnimationWentToTheEnd); }


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_13_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UReleaseConjoinedTwin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_ReleaseConjoinedTwin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
