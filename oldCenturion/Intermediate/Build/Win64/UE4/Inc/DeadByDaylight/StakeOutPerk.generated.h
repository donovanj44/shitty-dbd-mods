// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_StakeOutPerk_generated_h
#error "StakeOutPerk.generated.h already included, missing '#pragma once' in StakeOutPerk.h"
#endif
#define DEADBYDAYLIGHT_StakeOutPerk_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_RPC_WRAPPERS \
	virtual bool Server_ConsumeToken_Validate(); \
	virtual void Server_ConsumeToken_Implementation(); \
 \
	DECLARE_FUNCTION(execLocal_BroadcastConsumeToken); \
	DECLARE_FUNCTION(execServer_ConsumeToken);


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ConsumeToken_Validate(); \
	virtual void Server_ConsumeToken_Implementation(); \
 \
	DECLARE_FUNCTION(execLocal_BroadcastConsumeToken); \
	DECLARE_FUNCTION(execServer_ConsumeToken);


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStakeOutPerk(); \
	friend struct Z_Construct_UClass_UStakeOutPerk_Statics; \
public: \
	DECLARE_CLASS(UStakeOutPerk, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStakeOutPerk)


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUStakeOutPerk(); \
	friend struct Z_Construct_UClass_UStakeOutPerk_Statics; \
public: \
	DECLARE_CLASS(UStakeOutPerk, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStakeOutPerk)


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStakeOutPerk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStakeOutPerk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStakeOutPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStakeOutPerk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStakeOutPerk(UStakeOutPerk&&); \
	NO_API UStakeOutPerk(const UStakeOutPerk&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStakeOutPerk(UStakeOutPerk&&); \
	NO_API UStakeOutPerk(const UStakeOutPerk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStakeOutPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStakeOutPerk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStakeOutPerk)


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxTokensByLevel() { return STRUCT_OFFSET(UStakeOutPerk, MaxTokensByLevel); } \
	FORCEINLINE static uint32 __PPO__TokenChargeTime() { return STRUCT_OFFSET(UStakeOutPerk, TokenChargeTime); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStakeOutPerk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StakeOutPerk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
