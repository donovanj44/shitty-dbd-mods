// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATormentTrailPoint;
struct FVector_NetQuantize10;
struct FRotator;
#ifdef THEEXECUTIONER_TormentTrailController_generated_h
#error "TormentTrailController.generated.h already included, missing '#pragma once' in TormentTrailController.h"
#endif
#define THEEXECUTIONER_TormentTrailController_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_RPC_WRAPPERS \
	virtual bool Server_SpawnTormentTrailPoint_Validate(ATormentTrailPoint* , const FVector_NetQuantize10 , const FRotator ); \
	virtual void Server_SpawnTormentTrailPoint_Implementation(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation); \
 \
	DECLARE_FUNCTION(execServer_SpawnTormentTrailPoint);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SpawnTormentTrailPoint_Validate(ATormentTrailPoint* , const FVector_NetQuantize10 , const FRotator ); \
	virtual void Server_SpawnTormentTrailPoint_Implementation(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation); \
 \
	DECLARE_FUNCTION(execServer_SpawnTormentTrailPoint);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_EVENT_PARMS \
	struct TormentTrailController_eventServer_SpawnTormentTrailPoint_Parms \
	{ \
		ATormentTrailPoint* trailPoint; \
		FVector_NetQuantize10 location; \
		FRotator rotation; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATormentTrailController(); \
	friend struct Z_Construct_UClass_ATormentTrailController_Statics; \
public: \
	DECLARE_CLASS(ATormentTrailController, ATrailControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentTrailController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_trailPointList=NETFIELD_REP_START, \
		NETFIELD_REP_END=_trailPointList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATormentTrailController(); \
	friend struct Z_Construct_UClass_ATormentTrailController_Statics; \
public: \
	DECLARE_CLASS(ATormentTrailController, ATrailControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentTrailController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_trailPointList=NETFIELD_REP_START, \
		NETFIELD_REP_END=_trailPointList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATormentTrailController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATormentTrailController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentTrailController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentTrailController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentTrailController(ATormentTrailController&&); \
	NO_API ATormentTrailController(const ATormentTrailController&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentTrailController(ATormentTrailController&&); \
	NO_API ATormentTrailController(const ATormentTrailController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentTrailController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentTrailController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATormentTrailController)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___trailPointList() { return STRUCT_OFFSET(ATormentTrailController, _trailPointList); } \
	FORCEINLINE static uint32 __PPO___mobileTormentTrailRenderer() { return STRUCT_OFFSET(ATormentTrailController, _mobileTormentTrailRenderer); }


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_12_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class ATormentTrailController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TormentTrailController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
