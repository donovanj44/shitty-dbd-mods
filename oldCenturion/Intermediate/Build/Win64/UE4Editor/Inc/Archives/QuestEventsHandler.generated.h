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
enum class EEndGameReason : uint8;
enum class EGameState : uint8;
#ifdef ARCHIVES_QuestEventsHandler_generated_h
#error "QuestEventsHandler.generated.h already included, missing '#pragma once' in QuestEventsHandler.h"
#endif
#define ARCHIVES_QuestEventsHandler_generated_h

#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_SPARSE_DATA
#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_InGameAddProgressionToCurrentQuest); \
	DECLARE_FUNCTION(execDBD_ShowInGameCurrentQuestInfos); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnGameEnded); \
	DECLARE_FUNCTION(execOnPlayergameStateChanged);


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_InGameAddProgressionToCurrentQuest); \
	DECLARE_FUNCTION(execDBD_ShowInGameCurrentQuestInfos); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnGameEnded); \
	DECLARE_FUNCTION(execOnPlayergameStateChanged);


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestEventsHandler(); \
	friend struct Z_Construct_UClass_UQuestEventsHandler_Statics; \
public: \
	DECLARE_CLASS(UQuestEventsHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UQuestEventsHandler)


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUQuestEventsHandler(); \
	friend struct Z_Construct_UClass_UQuestEventsHandler_Statics; \
public: \
	DECLARE_CLASS(UQuestEventsHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UQuestEventsHandler)


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEventsHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEventsHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEventsHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEventsHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEventsHandler(UQuestEventsHandler&&); \
	NO_API UQuestEventsHandler(const UQuestEventsHandler&); \
public:


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEventsHandler(UQuestEventsHandler&&); \
	NO_API UQuestEventsHandler(const UQuestEventsHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEventsHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEventsHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestEventsHandler)


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___evaluatorList() { return STRUCT_OFFSET(UQuestEventsHandler, _evaluatorList); }


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_12_PROLOG
#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_INCLASS \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVES_API UClass* StaticClass<class UQuestEventsHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_QuestEventsHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
