// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef WINTER2021_HideInSnowmanInteraction_generated_h
#error "HideInSnowmanInteraction.generated.h already included, missing '#pragma once' in HideInSnowmanInteraction.h"
#endif
#define WINTER2021_HideInSnowmanInteraction_generated_h

#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_RPC_WRAPPERS \
	virtual void Multicast_OnAbleToRunAndExitSnowmanStart_Implementation(); \
	virtual void Multicast_StartControllingSnowman_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_StopControllingSnowman_Implementation(ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execMulticast_OnAbleToRunAndExitSnowmanStart); \
	DECLARE_FUNCTION(execMulticast_StartControllingSnowman); \
	DECLARE_FUNCTION(execMulticast_StopControllingSnowman);


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnAbleToRunAndExitSnowmanStart_Implementation(); \
	virtual void Multicast_StartControllingSnowman_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_StopControllingSnowman_Implementation(ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execMulticast_OnAbleToRunAndExitSnowmanStart); \
	DECLARE_FUNCTION(execMulticast_StartControllingSnowman); \
	DECLARE_FUNCTION(execMulticast_StopControllingSnowman);


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_EVENT_PARMS \
	struct HideInSnowmanInteraction_eventMulticast_StartControllingSnowman_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct HideInSnowmanInteraction_eventMulticast_StopControllingSnowman_Parms \
	{ \
		ACamperPlayer* survivor; \
	};


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHideInSnowmanInteraction(); \
	friend struct Z_Construct_UClass_UHideInSnowmanInteraction_Statics; \
public: \
	DECLARE_CLASS(UHideInSnowmanInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(UHideInSnowmanInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_shouldRunOutOfSnowman=NETFIELD_REP_START, \
		_isSnowmanShieldDamaged, \
		NETFIELD_REP_END=_isSnowmanShieldDamaged	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUHideInSnowmanInteraction(); \
	friend struct Z_Construct_UClass_UHideInSnowmanInteraction_Statics; \
public: \
	DECLARE_CLASS(UHideInSnowmanInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(UHideInSnowmanInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_shouldRunOutOfSnowman=NETFIELD_REP_START, \
		_isSnowmanShieldDamaged, \
		NETFIELD_REP_END=_isSnowmanShieldDamaged	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHideInSnowmanInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHideInSnowmanInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHideInSnowmanInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHideInSnowmanInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHideInSnowmanInteraction(UHideInSnowmanInteraction&&); \
	NO_API UHideInSnowmanInteraction(const UHideInSnowmanInteraction&); \
public:


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHideInSnowmanInteraction(UHideInSnowmanInteraction&&); \
	NO_API UHideInSnowmanInteraction(const UHideInSnowmanInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHideInSnowmanInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHideInSnowmanInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHideInSnowmanInteraction)


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___shouldRunOutOfSnowman() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _shouldRunOutOfSnowman); } \
	FORCEINLINE static uint32 __PPO___isSnowmanShieldDamaged() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _isSnowmanShieldDamaged); } \
	FORCEINLINE static uint32 __PPO___timeToEnterSnowman() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _timeToEnterSnowman); } \
	FORCEINLINE static uint32 __PPO___minimumTimeToRunAndExit() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _minimumTimeToRunAndExit); } \
	FORCEINLINE static uint32 __PPO___cameraZoomBack() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _cameraZoomBack); } \
	FORCEINLINE static uint32 __PPO___timeToZoomEnter() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _timeToZoomEnter); } \
	FORCEINLINE static uint32 __PPO___timeToZoomExit() { return STRUCT_OFFSET(UHideInSnowmanInteraction, _timeToZoomExit); }


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_9_PROLOG \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_EVENT_PARMS


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_INCLASS \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINTER2021_API UClass* StaticClass<class UHideInSnowmanInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_HideInSnowmanInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
