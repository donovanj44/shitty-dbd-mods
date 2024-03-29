// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PlayerDebugComponent_generated_h
#error "PlayerDebugComponent.generated.h already included, missing '#pragma once' in PlayerDebugComponent.h"
#endif
#define DEADBYDAYLIGHT_PlayerDebugComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerDebugComponent(); \
	friend struct Z_Construct_UClass_UPlayerDebugComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerDebugComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlayerDebugComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_disableStartUpdateMontageDuringEnter=NETFIELD_REP_START, \
		_allowPalletPullUpInteraction, \
		NETFIELD_REP_END=_allowPalletPullUpInteraction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerDebugComponent(); \
	friend struct Z_Construct_UClass_UPlayerDebugComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerDebugComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlayerDebugComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_disableStartUpdateMontageDuringEnter=NETFIELD_REP_START, \
		_allowPalletPullUpInteraction, \
		NETFIELD_REP_END=_allowPalletPullUpInteraction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerDebugComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerDebugComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerDebugComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerDebugComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerDebugComponent(UPlayerDebugComponent&&); \
	NO_API UPlayerDebugComponent(const UPlayerDebugComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerDebugComponent(UPlayerDebugComponent&&); \
	NO_API UPlayerDebugComponent(const UPlayerDebugComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerDebugComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerDebugComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerDebugComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___disableStartUpdateMontageDuringEnter() { return STRUCT_OFFSET(UPlayerDebugComponent, _disableStartUpdateMontageDuringEnter); } \
	FORCEINLINE static uint32 __PPO___allowPalletPullUpInteraction() { return STRUCT_OFFSET(UPlayerDebugComponent, _allowPalletPullUpInteraction); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPlayerDebugComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PlayerDebugComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
