// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGTallyCharacterProgressionWidget_generated_h
#error "UMGTallyCharacterProgressionWidget.generated.h already included, missing '#pragma once' in UMGTallyCharacterProgressionWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGTallyCharacterProgressionWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFullBarIn); \
	DECLARE_FUNCTION(execOnFullBarOut); \
	DECLARE_FUNCTION(execSetWidgetToFinalState); \
	DECLARE_FUNCTION(execStartNewLevel); \
	DECLARE_FUNCTION(execStartSequence);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFullBarIn); \
	DECLARE_FUNCTION(execOnFullBarOut); \
	DECLARE_FUNCTION(execSetWidgetToFinalState); \
	DECLARE_FUNCTION(execStartNewLevel); \
	DECLARE_FUNCTION(execStartSequence);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTallyCharacterProgressionWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyCharacterProgressionWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyCharacterProgressionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTallyCharacterProgressionWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyCharacterProgressionWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyCharacterProgressionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTallyCharacterProgressionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTallyCharacterProgressionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyCharacterProgressionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyCharacterProgressionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyCharacterProgressionWidget(UUMGTallyCharacterProgressionWidget&&); \
	NO_API UUMGTallyCharacterProgressionWidget(const UUMGTallyCharacterProgressionWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyCharacterProgressionWidget(UUMGTallyCharacterProgressionWidget&&); \
	NO_API UUMGTallyCharacterProgressionWidget(const UUMGTallyCharacterProgressionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyCharacterProgressionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyCharacterProgressionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTallyCharacterProgressionWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterProgressionBar() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, CharacterProgressionBar); } \
	FORCEINLINE static uint32 __PPO__TextCharacterCurrentExperience() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextCharacterCurrentExperience); } \
	FORCEINLINE static uint32 __PPO__TextExperienceForNextLevel() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextExperienceForNextLevel); } \
	FORCEINLINE static uint32 __PPO__TextExperienceEarned() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextExperienceEarned); } \
	FORCEINLINE static uint32 __PPO__TextCurrentLevel() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextCurrentLevel); } \
	FORCEINLINE static uint32 __PPO__CharacterPicture() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, CharacterPicture); } \
	FORCEINLINE static uint32 __PPO__PrestigeIcon() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, PrestigeIcon); } \
	FORCEINLINE static uint32 __PPO__TextCharacterName() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextCharacterName); } \
	FORCEINLINE static uint32 __PPO__ExperiencePerSecond() { return STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, ExperiencePerSecond); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTallyCharacterProgressionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyCharacterProgressionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
