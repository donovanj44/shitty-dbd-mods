// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef DEADBYDAYLIGHT_DBDPlayerData_generated_h
#error "DBDPlayerData.generated.h already included, missing '#pragma once' in DBDPlayerData.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayerData_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_8_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerDataOnItemUseButtonStateChanged_Parms \
{ \
	bool isPressed; \
}; \
static inline void FDBDPlayerDataOnItemUseButtonStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerDataOnItemUseButtonStateChanged, bool isPressed) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerDataOnItemUseButtonStateChanged_Parms Parms; \
	Parms.isPressed=isPressed ? true : false; \
	DBDPlayerDataOnItemUseButtonStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_RPC_WRAPPERS \
	virtual bool Server_CampaignDataSynced_Validate(); \
	virtual void Server_CampaignDataSynced_Implementation(); \
	virtual bool Server_LoadoutSpawned_Validate(); \
	virtual void Server_LoadoutSpawned_Implementation(); \
	virtual bool Server_RenderingFeaturesCompleted_Validate(); \
	virtual void Server_RenderingFeaturesCompleted_Implementation(); \
	virtual bool Server_SetIntroCompleted_Validate(); \
	virtual void Server_SetIntroCompleted_Implementation(); \
 \
	DECLARE_FUNCTION(execDidRenderingFeaturesComplete); \
	DECLARE_FUNCTION(execGetControlRotation); \
	DECLARE_FUNCTION(execGetInteractionInputMashed); \
	DECLARE_FUNCTION(execGetLeftRightInputMashed); \
	DECLARE_FUNCTION(execGetUseInputPressed); \
	DECLARE_FUNCTION(execIsCampaignDataSynced); \
	DECLARE_FUNCTION(execIsIntroCompleted); \
	DECLARE_FUNCTION(execIsLoadoutSpawned); \
	DECLARE_FUNCTION(execServer_CampaignDataSynced); \
	DECLARE_FUNCTION(execServer_LoadoutSpawned); \
	DECLARE_FUNCTION(execServer_RenderingFeaturesCompleted); \
	DECLARE_FUNCTION(execServer_SetIntroCompleted); \
	DECLARE_FUNCTION(execSetCampaignDataSynced); \
	DECLARE_FUNCTION(execSetIntroCompleted); \
	DECLARE_FUNCTION(execSetLoadoutSpawned); \
	DECLARE_FUNCTION(execSetRenderingFeaturesCompleted);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_CampaignDataSynced_Validate(); \
	virtual void Server_CampaignDataSynced_Implementation(); \
	virtual bool Server_LoadoutSpawned_Validate(); \
	virtual void Server_LoadoutSpawned_Implementation(); \
	virtual bool Server_RenderingFeaturesCompleted_Validate(); \
	virtual void Server_RenderingFeaturesCompleted_Implementation(); \
	virtual bool Server_SetIntroCompleted_Validate(); \
	virtual void Server_SetIntroCompleted_Implementation(); \
 \
	DECLARE_FUNCTION(execDidRenderingFeaturesComplete); \
	DECLARE_FUNCTION(execGetControlRotation); \
	DECLARE_FUNCTION(execGetInteractionInputMashed); \
	DECLARE_FUNCTION(execGetLeftRightInputMashed); \
	DECLARE_FUNCTION(execGetUseInputPressed); \
	DECLARE_FUNCTION(execIsCampaignDataSynced); \
	DECLARE_FUNCTION(execIsIntroCompleted); \
	DECLARE_FUNCTION(execIsLoadoutSpawned); \
	DECLARE_FUNCTION(execServer_CampaignDataSynced); \
	DECLARE_FUNCTION(execServer_LoadoutSpawned); \
	DECLARE_FUNCTION(execServer_RenderingFeaturesCompleted); \
	DECLARE_FUNCTION(execServer_SetIntroCompleted); \
	DECLARE_FUNCTION(execSetCampaignDataSynced); \
	DECLARE_FUNCTION(execSetIntroCompleted); \
	DECLARE_FUNCTION(execSetLoadoutSpawned); \
	DECLARE_FUNCTION(execSetRenderingFeaturesCompleted);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDPlayerData(); \
	friend struct Z_Construct_UClass_UDBDPlayerData_Statics; \
public: \
	DECLARE_CLASS(UDBDPlayerData, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDPlayerData) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_controlRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=_controlRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDBDPlayerData(); \
	friend struct Z_Construct_UClass_UDBDPlayerData_Statics; \
public: \
	DECLARE_CLASS(UDBDPlayerData, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDPlayerData) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_controlRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=_controlRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDPlayerData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDPlayerData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDPlayerData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDPlayerData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDPlayerData(UDBDPlayerData&&); \
	NO_API UDBDPlayerData(const UDBDPlayerData&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDPlayerData(UDBDPlayerData&&); \
	NO_API UDBDPlayerData(const UDBDPlayerData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDPlayerData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDPlayerData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDPlayerData)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___controlRotation() { return STRUCT_OFFSET(UDBDPlayerData, _controlRotation); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDPlayerData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
