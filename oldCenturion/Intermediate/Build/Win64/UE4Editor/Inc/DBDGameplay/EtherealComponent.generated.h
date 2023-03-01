// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_EtherealComponent_generated_h
#error "EtherealComponent.generated.h already included, missing '#pragma once' in EtherealComponent.h"
#endif
#define DBDGAMEPLAY_EtherealComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_RPC_WRAPPERS \
	virtual bool Server_SetIsEthereal_Validate(float , bool ); \
	virtual void Server_SetIsEthereal_Implementation(float timestamp, bool ethereal); \
 \
	DECLARE_FUNCTION(execOnRep_OnIsEtherealChanged); \
	DECLARE_FUNCTION(execServer_SetIsEthereal);


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetIsEthereal_Validate(float , bool ); \
	virtual void Server_SetIsEthereal_Implementation(float timestamp, bool ethereal); \
 \
	DECLARE_FUNCTION(execOnRep_OnIsEtherealChanged); \
	DECLARE_FUNCTION(execServer_SetIsEthereal);


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_EVENT_PARMS \
	struct EtherealComponent_eventServer_SetIsEthereal_Parms \
	{ \
		float timestamp; \
		bool ethereal; \
	};


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEtherealComponent(); \
	friend struct Z_Construct_UClass_UEtherealComponent_Statics; \
public: \
	DECLARE_CLASS(UEtherealComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UEtherealComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UEtherealComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isEthereal=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isEthereal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUEtherealComponent(); \
	friend struct Z_Construct_UClass_UEtherealComponent_Statics; \
public: \
	DECLARE_CLASS(UEtherealComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UEtherealComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UEtherealComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isEthereal=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isEthereal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEtherealComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEtherealComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEtherealComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEtherealComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEtherealComponent(UEtherealComponent&&); \
	NO_API UEtherealComponent(const UEtherealComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEtherealComponent(UEtherealComponent&&); \
	NO_API UEtherealComponent(const UEtherealComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEtherealComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEtherealComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEtherealComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isEthereal() { return STRUCT_OFFSET(UEtherealComponent, _isEthereal); }


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_8_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UEtherealComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_EtherealComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
