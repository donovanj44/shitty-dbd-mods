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
enum class EDBDScoreTypes : uint8;
class AActor;
#ifdef DEADBYDAYLIGHT_AchievementHandlerComponent_generated_h
#error "AchievementHandlerComponent.generated.h already included, missing '#pragma once' in AchievementHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_AchievementHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementHandlerComponent(); \
	friend struct Z_Construct_UClass_UAchievementHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UAchievementHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAchievementHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementHandlerComponent(); \
	friend struct Z_Construct_UClass_UAchievementHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UAchievementHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAchievementHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementHandlerComponent(UAchievementHandlerComponent&&); \
	NO_API UAchievementHandlerComponent(const UAchievementHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementHandlerComponent(UAchievementHandlerComponent&&); \
	NO_API UAchievementHandlerComponent(const UAchievementHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAchievementHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___generatorRepairWithGenericPerksOnlyEscapeAchievement() { return STRUCT_OFFSET(UAchievementHandlerComponent, _generatorRepairWithGenericPerksOnlyEscapeAchievement); } \
	FORCEINLINE static uint32 __PPO___camperKONextToRaisedPalletAchievement() { return STRUCT_OFFSET(UAchievementHandlerComponent, _camperKONextToRaisedPalletAchievement); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAchievementHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AchievementHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
