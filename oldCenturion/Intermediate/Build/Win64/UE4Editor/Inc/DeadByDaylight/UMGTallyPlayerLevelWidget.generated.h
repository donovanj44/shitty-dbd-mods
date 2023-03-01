// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerLevelData;
struct FRewardItemData;
struct FXpBonusData;
#ifdef DEADBYDAYLIGHT_UMGTallyPlayerLevelWidget_generated_h
#error "UMGTallyPlayerLevelWidget.generated.h already included, missing '#pragma once' in UMGTallyPlayerLevelWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGTallyPlayerLevelWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFinalXp); \
	DECLARE_FUNCTION(execGetInitialXp); \
	DECLARE_FUNCTION(execGetReachedLevels); \
	DECLARE_FUNCTION(execGetRewardsEarned); \
	DECLARE_FUNCTION(execGetXpBonuses);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFinalXp); \
	DECLARE_FUNCTION(execGetInitialXp); \
	DECLARE_FUNCTION(execGetReachedLevels); \
	DECLARE_FUNCTION(execGetRewardsEarned); \
	DECLARE_FUNCTION(execGetXpBonuses);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_EVENT_PARMS \
	struct UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms \
	{ \
		int32 finalXp; \
		TArray<FPlayerLevelData> reachedLevels; \
		TArray<FXpBonusData> xpBonuses; \
		TArray<FRewardItemData> rewardsEarned; \
	}; \
	struct UMGTallyPlayerLevelWidget_eventOnSetInitialPlayerXp_Parms \
	{ \
		int32 initialXp; \
		FPlayerLevelData initialLevelData; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTallyPlayerLevelWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyPlayerLevelWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyPlayerLevelWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTallyPlayerLevelWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyPlayerLevelWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyPlayerLevelWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTallyPlayerLevelWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTallyPlayerLevelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyPlayerLevelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyPlayerLevelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyPlayerLevelWidget(UUMGTallyPlayerLevelWidget&&); \
	NO_API UUMGTallyPlayerLevelWidget(const UUMGTallyPlayerLevelWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyPlayerLevelWidget(UUMGTallyPlayerLevelWidget&&); \
	NO_API UUMGTallyPlayerLevelWidget(const UUMGTallyPlayerLevelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyPlayerLevelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyPlayerLevelWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTallyPlayerLevelWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTallyPlayerLevelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyPlayerLevelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
