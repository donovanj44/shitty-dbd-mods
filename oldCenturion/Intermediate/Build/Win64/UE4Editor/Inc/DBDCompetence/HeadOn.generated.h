// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStunnableComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DBDCOMPETENCE_HeadOn_generated_h
#error "HeadOn.generated.h already included, missing '#pragma once' in HeadOn.h"
#endif
#define DBDCOMPETENCE_HeadOn_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_RPC_WRAPPERS \
	virtual void Multicast_StunPlayer_Implementation(UStunnableComponent* stunnableComponent, ADBDPlayer* stunner); \
 \
	DECLARE_FUNCTION(execAuthority_ActivatePerk); \
	DECLARE_FUNCTION(execCanApplyHeadOnInteraction); \
	DECLARE_FUNCTION(execMulticast_StunPlayer); \
	DECLARE_FUNCTION(execOnHeadOnAnimationComplete); \
	DECLARE_FUNCTION(execOnPawnOverlapEnter); \
	DECLARE_FUNCTION(execOnPawnOverlapExit);


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StunPlayer_Implementation(UStunnableComponent* stunnableComponent, ADBDPlayer* stunner); \
 \
	DECLARE_FUNCTION(execAuthority_ActivatePerk); \
	DECLARE_FUNCTION(execCanApplyHeadOnInteraction); \
	DECLARE_FUNCTION(execMulticast_StunPlayer); \
	DECLARE_FUNCTION(execOnHeadOnAnimationComplete); \
	DECLARE_FUNCTION(execOnPawnOverlapEnter); \
	DECLARE_FUNCTION(execOnPawnOverlapExit);


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_EVENT_PARMS \
	struct HeadOn_eventMulticast_StunPlayer_Parms \
	{ \
		UStunnableComponent* stunnableComponent; \
		ADBDPlayer* stunner; \
	};


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadOn(); \
	friend struct Z_Construct_UClass_UHeadOn_Statics; \
public: \
	DECLARE_CLASS(UHeadOn, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UHeadOn)


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeadOn(); \
	friend struct Z_Construct_UClass_UHeadOn_Statics; \
public: \
	DECLARE_CLASS(UHeadOn, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UHeadOn)


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadOn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadOn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadOn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadOn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadOn(UHeadOn&&); \
	NO_API UHeadOn(const UHeadOn&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadOn(UHeadOn&&); \
	NO_API UHeadOn(const UHeadOn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadOn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadOn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHeadOn)


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hideDuration() { return STRUCT_OFFSET(UHeadOn, _hideDuration); } \
	FORCEINLINE static uint32 __PPO___locker() { return STRUCT_OFFSET(UHeadOn, _locker); }


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_13_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UHeadOn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_HeadOn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
