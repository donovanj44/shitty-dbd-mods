// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class ESkillCheckCustomType : uint8;
#ifdef THENIGHTMARE_GeneratorDreamworldComponent_generated_h
#error "GeneratorDreamworldComponent.generated.h already included, missing '#pragma once' in GeneratorDreamworldComponent.h"
#endif
#define THENIGHTMARE_GeneratorDreamworldComponent_generated_h

#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRepairSkillCheckFailed);


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRepairSkillCheckFailed);


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_EVENT_PARMS \
	struct GeneratorDreamworldComponent_eventCosmetic_OnPlayerFailSkillCheck_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratorDreamworldComponent(); \
	friend struct Z_Construct_UClass_UGeneratorDreamworldComponent_Statics; \
public: \
	DECLARE_CLASS(UGeneratorDreamworldComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheNightmare"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorDreamworldComponent)


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratorDreamworldComponent(); \
	friend struct Z_Construct_UClass_UGeneratorDreamworldComponent_Statics; \
public: \
	DECLARE_CLASS(UGeneratorDreamworldComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheNightmare"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorDreamworldComponent)


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneratorDreamworldComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratorDreamworldComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorDreamworldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorDreamworldComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorDreamworldComponent(UGeneratorDreamworldComponent&&); \
	NO_API UGeneratorDreamworldComponent(const UGeneratorDreamworldComponent&); \
public:


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorDreamworldComponent(UGeneratorDreamworldComponent&&); \
	NO_API UGeneratorDreamworldComponent(const UGeneratorDreamworldComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorDreamworldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorDreamworldComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeneratorDreamworldComponent)


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___beamSocketsForBloodEffect() { return STRUCT_OFFSET(UGeneratorDreamworldComponent, _beamSocketsForBloodEffect); }


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_9_PROLOG \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_INCLASS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THENIGHTMARE_API UClass* StaticClass<class UGeneratorDreamworldComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheNightmare_Public_GeneratorDreamworldComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
