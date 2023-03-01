// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTurn180Settings;
#ifdef DBDANIMATION_Turn180Component_generated_h
#error "Turn180Component.generated.h already included, missing '#pragma once' in Turn180Component.h"
#endif
#define DBDANIMATION_Turn180Component_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_RPC_WRAPPERS \
	virtual bool Server_SetSettings_Validate(float , const FTurn180Settings ); \
	virtual void Server_SetSettings_Implementation(float timestamp, const FTurn180Settings settings); \
 \
	DECLARE_FUNCTION(execServer_SetSettings);


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetSettings_Validate(float , const FTurn180Settings ); \
	virtual void Server_SetSettings_Implementation(float timestamp, const FTurn180Settings settings); \
 \
	DECLARE_FUNCTION(execServer_SetSettings);


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_EVENT_PARMS \
	struct Turn180Component_eventServer_SetSettings_Parms \
	{ \
		float timestamp; \
		FTurn180Settings settings; \
	};


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurn180Component(); \
	friend struct Z_Construct_UClass_UTurn180Component_Statics; \
public: \
	DECLARE_CLASS(UTurn180Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UTurn180Component) \
	virtual UObject* _getUObject() const override { return const_cast<UTurn180Component*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_settings=NETFIELD_REP_START, \
		NETFIELD_REP_END=_settings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUTurn180Component(); \
	friend struct Z_Construct_UClass_UTurn180Component_Statics; \
public: \
	DECLARE_CLASS(UTurn180Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UTurn180Component) \
	virtual UObject* _getUObject() const override { return const_cast<UTurn180Component*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_settings=NETFIELD_REP_START, \
		NETFIELD_REP_END=_settings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurn180Component(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurn180Component) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurn180Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurn180Component); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurn180Component(UTurn180Component&&); \
	NO_API UTurn180Component(const UTurn180Component&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurn180Component(UTurn180Component&&); \
	NO_API UTurn180Component(const UTurn180Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurn180Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurn180Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTurn180Component)


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___settings() { return STRUCT_OFFSET(UTurn180Component, _settings); }


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_9_PROLOG \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UTurn180Component>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_Turn180Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
