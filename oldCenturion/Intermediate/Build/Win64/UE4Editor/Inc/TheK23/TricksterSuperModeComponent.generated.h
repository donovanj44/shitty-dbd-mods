// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK23_TricksterSuperModeComponent_generated_h
#error "TricksterSuperModeComponent.generated.h already included, missing '#pragma once' in TricksterSuperModeComponent.h"
#endif
#define THEK23_TricksterSuperModeComponent_generated_h

#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRepIsInCooldown); \
	DECLARE_FUNCTION(execOnRepIsInSuperMode); \
	DECLARE_FUNCTION(execOnRepIsSuperModeReady);


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRepIsInCooldown); \
	DECLARE_FUNCTION(execOnRepIsInSuperMode); \
	DECLARE_FUNCTION(execOnRepIsSuperModeReady);


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTricksterSuperModeComponent(); \
	friend struct Z_Construct_UClass_UTricksterSuperModeComponent_Statics; \
public: \
	DECLARE_CLASS(UTricksterSuperModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UTricksterSuperModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInSuperMode=NETFIELD_REP_START, \
		_isSuperModeReady, \
		_isInCooldown, \
		NETFIELD_REP_END=_isInCooldown	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTricksterSuperModeComponent(); \
	friend struct Z_Construct_UClass_UTricksterSuperModeComponent_Statics; \
public: \
	DECLARE_CLASS(UTricksterSuperModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UTricksterSuperModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInSuperMode=NETFIELD_REP_START, \
		_isSuperModeReady, \
		_isInCooldown, \
		NETFIELD_REP_END=_isInCooldown	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTricksterSuperModeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTricksterSuperModeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTricksterSuperModeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTricksterSuperModeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTricksterSuperModeComponent(UTricksterSuperModeComponent&&); \
	NO_API UTricksterSuperModeComponent(const UTricksterSuperModeComponent&); \
public:


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTricksterSuperModeComponent(UTricksterSuperModeComponent&&); \
	NO_API UTricksterSuperModeComponent(const UTricksterSuperModeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTricksterSuperModeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTricksterSuperModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTricksterSuperModeComponent)


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInSuperMode() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _isInSuperMode); } \
	FORCEINLINE static uint32 __PPO___isSuperModeReady() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _isSuperModeReady); } \
	FORCEINLINE static uint32 __PPO___isInCooldown() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _isInCooldown); } \
	FORCEINLINE static uint32 __PPO___chargesToAddOnKnifeHit() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _chargesToAddOnKnifeHit); } \
	FORCEINLINE static uint32 __PPO___superModeMaxCharge() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeMaxCharge); } \
	FORCEINLINE static uint32 __PPO___superModeReadyDepletionPerSecond() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeReadyDepletionPerSecond); } \
	FORCEINLINE static uint32 __PPO___superModeActiveDuration() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeActiveDuration); } \
	FORCEINLINE static uint32 __PPO___superModeCooldown() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeCooldown); } \
	FORCEINLINE static uint32 __PPO___shouldDisableFlurryDuringCooldown() { return STRUCT_OFFSET(UTricksterSuperModeComponent, _shouldDisableFlurryDuringCooldown); }


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_8_PROLOG
#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_INCLASS \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class UTricksterSuperModeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_TricksterSuperModeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
