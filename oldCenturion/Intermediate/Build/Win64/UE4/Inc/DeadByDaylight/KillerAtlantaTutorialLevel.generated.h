// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ASlasherPlayer;
class AEscapeDoor;
class AGenerator;
class AHatch;
class AWindow;
enum class EKillerTutorialEndGameType : uint8;
#ifdef DEADBYDAYLIGHT_KillerAtlantaTutorialLevel_generated_h
#error "KillerAtlantaTutorialLevel.generated.h already included, missing '#pragma once' in KillerAtlantaTutorialLevel.h"
#endif
#define DEADBYDAYLIGHT_KillerAtlantaTutorialLevel_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompleteEscapeRequirements); \
	DECLARE_FUNCTION(execSetBearTrapSurvivor); \
	DECLARE_FUNCTION(execSetChaseSurvivor); \
	DECLARE_FUNCTION(execSetControlledSlasherPlayer); \
	DECLARE_FUNCTION(execSetEscapeDoor); \
	DECLARE_FUNCTION(execSetGenerator); \
	DECLARE_FUNCTION(execSetHatch); \
	DECLARE_FUNCTION(execSetVaultWindow);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompleteEscapeRequirements); \
	DECLARE_FUNCTION(execSetBearTrapSurvivor); \
	DECLARE_FUNCTION(execSetChaseSurvivor); \
	DECLARE_FUNCTION(execSetControlledSlasherPlayer); \
	DECLARE_FUNCTION(execSetEscapeDoor); \
	DECLARE_FUNCTION(execSetGenerator); \
	DECLARE_FUNCTION(execSetHatch); \
	DECLARE_FUNCTION(execSetVaultWindow);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_EVENT_PARMS \
	struct KillerAtlantaTutorialLevel_eventTriggerEndGameSequenceAnimation_Parms \
	{ \
		EKillerTutorialEndGameType camperDeathType; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKillerAtlantaTutorialLevel(); \
	friend struct Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics; \
public: \
	DECLARE_CLASS(AKillerAtlantaTutorialLevel, AAtlantaTutorialLevel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AKillerAtlantaTutorialLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAKillerAtlantaTutorialLevel(); \
	friend struct Z_Construct_UClass_AKillerAtlantaTutorialLevel_Statics; \
public: \
	DECLARE_CLASS(AKillerAtlantaTutorialLevel, AAtlantaTutorialLevel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AKillerAtlantaTutorialLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKillerAtlantaTutorialLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKillerAtlantaTutorialLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKillerAtlantaTutorialLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillerAtlantaTutorialLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKillerAtlantaTutorialLevel(AKillerAtlantaTutorialLevel&&); \
	NO_API AKillerAtlantaTutorialLevel(const AKillerAtlantaTutorialLevel&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKillerAtlantaTutorialLevel(AKillerAtlantaTutorialLevel&&); \
	NO_API AKillerAtlantaTutorialLevel(const AKillerAtlantaTutorialLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKillerAtlantaTutorialLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillerAtlantaTutorialLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKillerAtlantaTutorialLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_14_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AKillerAtlantaTutorialLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_KillerAtlantaTutorialLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
