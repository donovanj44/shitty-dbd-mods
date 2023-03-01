// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
#ifdef DEADBYDAYLIGHT_UMGCharacterPrestigeButton_generated_h
#error "UMGCharacterPrestigeButton.generated.h already included, missing '#pragma once' in UMGCharacterPrestigeButton.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterPrestigeButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPrestigeButtonClicked); \
	DECLARE_FUNCTION(execSetCharacterPrestigeData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPrestigeButtonClicked); \
	DECLARE_FUNCTION(execSetCharacterPrestigeData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterPrestigeButton(); \
	friend struct Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterPrestigeButton, UUMGCharacterPrestigeIcon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterPrestigeButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterPrestigeButton(); \
	friend struct Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterPrestigeButton, UUMGCharacterPrestigeIcon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterPrestigeButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterPrestigeButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterPrestigeButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterPrestigeButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterPrestigeButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterPrestigeButton(UUMGCharacterPrestigeButton&&); \
	NO_API UUMGCharacterPrestigeButton(const UUMGCharacterPrestigeButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterPrestigeButton(UUMGCharacterPrestigeButton&&); \
	NO_API UUMGCharacterPrestigeButton(const UUMGCharacterPrestigeButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterPrestigeButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterPrestigeButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterPrestigeButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrestigeButton() { return STRUCT_OFFSET(UUMGCharacterPrestigeButton, PrestigeButton); } \
	FORCEINLINE static uint32 __PPO__PrestigeAnimationCanvas() { return STRUCT_OFFSET(UUMGCharacterPrestigeButton, PrestigeAnimationCanvas); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterPrestigeButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterPrestigeButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
