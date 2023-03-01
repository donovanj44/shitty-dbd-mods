// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK23_FlurryComboScoreComponent_generated_h
#error "FlurryComboScoreComponent.generated.h already included, missing '#pragma once' in FlurryComboScoreComponent.h"
#endif
#define THEK23_FlurryComboScoreComponent_generated_h

#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ComboScore);


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ComboScore);


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlurryComboScoreComponent(); \
	friend struct Z_Construct_UClass_UFlurryComboScoreComponent_Statics; \
public: \
	DECLARE_CLASS(UFlurryComboScoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UFlurryComboScoreComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_comboScore=NETFIELD_REP_START, \
		NETFIELD_REP_END=_comboScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUFlurryComboScoreComponent(); \
	friend struct Z_Construct_UClass_UFlurryComboScoreComponent_Statics; \
public: \
	DECLARE_CLASS(UFlurryComboScoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UFlurryComboScoreComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_comboScore=NETFIELD_REP_START, \
		NETFIELD_REP_END=_comboScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlurryComboScoreComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlurryComboScoreComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlurryComboScoreComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlurryComboScoreComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlurryComboScoreComponent(UFlurryComboScoreComponent&&); \
	NO_API UFlurryComboScoreComponent(const UFlurryComboScoreComponent&); \
public:


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlurryComboScoreComponent(UFlurryComboScoreComponent&&); \
	NO_API UFlurryComboScoreComponent(const UFlurryComboScoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlurryComboScoreComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlurryComboScoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlurryComboScoreComponent)


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___comboScore() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _comboScore); } \
	FORCEINLINE static uint32 __PPO___timeForCombo() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _timeForCombo); } \
	FORCEINLINE static uint32 __PPO___baseKnifeComboScore() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _baseKnifeComboScore); } \
	FORCEINLINE static uint32 __PPO___maximumKnifeMultiplier() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _maximumKnifeMultiplier); } \
	FORCEINLINE static uint32 __PPO___fillLacerationComboScore() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _fillLacerationComboScore); } \
	FORCEINLINE static uint32 __PPO___longRangeThreshold() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _longRangeThreshold); } \
	FORCEINLINE static uint32 __PPO___closeRangeScoreMultiplier() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _closeRangeScoreMultiplier); } \
	FORCEINLINE static uint32 __PPO___longRangeScoreMultiplier() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _longRangeScoreMultiplier); } \
	FORCEINLINE static uint32 __PPO___thresholds() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _thresholds); } \
	FORCEINLINE static uint32 __PPO___thresholdsScoreForAudio() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _thresholdsScoreForAudio); } \
	FORCEINLINE static uint32 __PPO___comboScoreEvents() { return STRUCT_OFFSET(UFlurryComboScoreComponent, _comboScoreEvents); }


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_8_PROLOG
#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_INCLASS \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class UFlurryComboScoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_FlurryComboScoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
