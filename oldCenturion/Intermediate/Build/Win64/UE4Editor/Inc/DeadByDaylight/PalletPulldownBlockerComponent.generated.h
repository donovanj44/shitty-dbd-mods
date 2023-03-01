// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PalletPulldownBlockerComponent_generated_h
#error "PalletPulldownBlockerComponent.generated.h already included, missing '#pragma once' in PalletPulldownBlockerComponent.h"
#endif
#define DEADBYDAYLIGHT_PalletPulldownBlockerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_RPC_WRAPPERS \
	virtual void Multicast_PalletPulldownBlockedHideCosmetic_Implementation(); \
	virtual void Multicast_PalletPulldownBlockedShowCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_PalletPulldownBlockedHideCosmetic); \
	DECLARE_FUNCTION(execMulticast_PalletPulldownBlockedShowCosmetic); \
	DECLARE_FUNCTION(execOnRep_IsPalletPulldownBlockedByEntity);


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PalletPulldownBlockedHideCosmetic_Implementation(); \
	virtual void Multicast_PalletPulldownBlockedShowCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_PalletPulldownBlockedHideCosmetic); \
	DECLARE_FUNCTION(execMulticast_PalletPulldownBlockedShowCosmetic); \
	DECLARE_FUNCTION(execOnRep_IsPalletPulldownBlockedByEntity);


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPalletPulldownBlockerComponent(); \
	friend struct Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics; \
public: \
	DECLARE_CLASS(UPalletPulldownBlockerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPalletPulldownBlockerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPalletPulldownBlockedByEntity=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPalletPulldownBlockedByEntity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPalletPulldownBlockerComponent(); \
	friend struct Z_Construct_UClass_UPalletPulldownBlockerComponent_Statics; \
public: \
	DECLARE_CLASS(UPalletPulldownBlockerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPalletPulldownBlockerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPalletPulldownBlockedByEntity=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPalletPulldownBlockedByEntity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPalletPulldownBlockerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPalletPulldownBlockerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPalletPulldownBlockerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPalletPulldownBlockerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPalletPulldownBlockerComponent(UPalletPulldownBlockerComponent&&); \
	NO_API UPalletPulldownBlockerComponent(const UPalletPulldownBlockerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPalletPulldownBlockerComponent(UPalletPulldownBlockerComponent&&); \
	NO_API UPalletPulldownBlockerComponent(const UPalletPulldownBlockerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPalletPulldownBlockerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPalletPulldownBlockerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPalletPulldownBlockerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isPalletPulldownBlockedByEntity() { return STRUCT_OFFSET(UPalletPulldownBlockerComponent, _isPalletPulldownBlockedByEntity); } \
	FORCEINLINE static uint32 __PPO___blockedDisappearFxTime() { return STRUCT_OFFSET(UPalletPulldownBlockerComponent, _blockedDisappearFxTime); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPalletPulldownBlockerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PalletPulldownBlockerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
