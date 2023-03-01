// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_CamperExposerInstance_generated_h
#error "CamperExposerInstance.generated.h already included, missing '#pragma once' in CamperExposerInstance.h"
#endif
#define DEADBYDAYLIGHT_CamperExposerInstance_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_RPC_WRAPPERS \
	virtual void StartExitSequence_Implementation(bool withRandomDelay); \
	virtual void StartSpawnSequence_Implementation(bool withRandomDelay); \
 \
	DECLARE_FUNCTION(execExitSequenceComplete); \
	DECLARE_FUNCTION(execStartExitSequence); \
	DECLARE_FUNCTION(execStartSpawnSequence);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartExitSequence_Implementation(bool withRandomDelay); \
	virtual void StartSpawnSequence_Implementation(bool withRandomDelay); \
 \
	DECLARE_FUNCTION(execExitSequenceComplete); \
	DECLARE_FUNCTION(execStartExitSequence); \
	DECLARE_FUNCTION(execStartSpawnSequence);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_EVENT_PARMS \
	struct CamperExposerInstance_eventSetIsInteriorBP_Parms \
	{ \
		bool interior; \
	}; \
	struct CamperExposerInstance_eventStartExitSequence_Parms \
	{ \
		bool withRandomDelay; \
	}; \
	struct CamperExposerInstance_eventStartSpawnSequence_Parms \
	{ \
		bool withRandomDelay; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamperExposerInstance(); \
	friend struct Z_Construct_UClass_ACamperExposerInstance_Statics; \
public: \
	DECLARE_CLASS(ACamperExposerInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACamperExposerInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_INCLASS \
private: \
	static void StaticRegisterNativesACamperExposerInstance(); \
	friend struct Z_Construct_UClass_ACamperExposerInstance_Statics; \
public: \
	DECLARE_CLASS(ACamperExposerInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACamperExposerInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamperExposerInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamperExposerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamperExposerInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamperExposerInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamperExposerInstance(ACamperExposerInstance&&); \
	NO_API ACamperExposerInstance(const ACamperExposerInstance&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamperExposerInstance(ACamperExposerInstance&&); \
	NO_API ACamperExposerInstance(const ACamperExposerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamperExposerInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamperExposerInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamperExposerInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___audioAgravationLevelRtpc() { return STRUCT_OFFSET(ACamperExposerInstance, _audioAgravationLevelRtpc); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ACamperExposerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperExposerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
