// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_LevelReadyToPlayPlayerComponent_generated_h
#error "LevelReadyToPlayPlayerComponent.generated.h already included, missing '#pragma once' in LevelReadyToPlayPlayerComponent.h"
#endif
#define DEADBYDAYLIGHT_LevelReadyToPlayPlayerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_RPC_WRAPPERS \
	virtual bool Server_SetIsReadyToPlay_Validate(bool ); \
	virtual void Server_SetIsReadyToPlay_Implementation(bool readyToPlay); \
 \
	DECLARE_FUNCTION(execOnRep_LevelReadyToPlayRequirementsTarget); \
	DECLARE_FUNCTION(execServer_SetIsReadyToPlay);


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetIsReadyToPlay_Validate(bool ); \
	virtual void Server_SetIsReadyToPlay_Implementation(bool readyToPlay); \
 \
	DECLARE_FUNCTION(execOnRep_LevelReadyToPlayRequirementsTarget); \
	DECLARE_FUNCTION(execServer_SetIsReadyToPlay);


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_EVENT_PARMS \
	struct LevelReadyToPlayPlayerComponent_eventServer_SetIsReadyToPlay_Parms \
	{ \
		bool readyToPlay; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelReadyToPlayPlayerComponent(); \
	friend struct Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelReadyToPlayPlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULevelReadyToPlayPlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_levelReadyToPlayRequirementsTarget=NETFIELD_REP_START, \
		NETFIELD_REP_END=_levelReadyToPlayRequirementsTarget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesULevelReadyToPlayPlayerComponent(); \
	friend struct Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelReadyToPlayPlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULevelReadyToPlayPlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_levelReadyToPlayRequirementsTarget=NETFIELD_REP_START, \
		NETFIELD_REP_END=_levelReadyToPlayRequirementsTarget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelReadyToPlayPlayerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelReadyToPlayPlayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelReadyToPlayPlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelReadyToPlayPlayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelReadyToPlayPlayerComponent(ULevelReadyToPlayPlayerComponent&&); \
	NO_API ULevelReadyToPlayPlayerComponent(const ULevelReadyToPlayPlayerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelReadyToPlayPlayerComponent(ULevelReadyToPlayPlayerComponent&&); \
	NO_API ULevelReadyToPlayPlayerComponent(const ULevelReadyToPlayPlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelReadyToPlayPlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelReadyToPlayPlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelReadyToPlayPlayerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___levelReadyToPlayRequirementsTarget() { return STRUCT_OFFSET(ULevelReadyToPlayPlayerComponent, _levelReadyToPlayRequirementsTarget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_7_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ULevelReadyToPlayPlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LevelReadyToPlayPlayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS