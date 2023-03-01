// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_SupplyCrateInteractable_generated_h
#error "SupplyCrateInteractable.generated.h already included, missing '#pragma once' in SupplyCrateInteractable.h"
#endif
#define THEK24_SupplyCrateInteractable_generated_h

#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsAutoClosing); \
	DECLARE_FUNCTION(execOnRep_IsOpen);


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsAutoClosing); \
	DECLARE_FUNCTION(execOnRep_IsOpen);


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASupplyCrateInteractable(); \
	friend struct Z_Construct_UClass_ASupplyCrateInteractable_Statics; \
public: \
	DECLARE_CLASS(ASupplyCrateInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(ASupplyCrateInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ASupplyCrateInteractable*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_itemInSupplyCrate=NETFIELD_REP_START, \
		_isOpen, \
		_isAutoClosing, \
		NETFIELD_REP_END=_isAutoClosing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASupplyCrateInteractable(); \
	friend struct Z_Construct_UClass_ASupplyCrateInteractable_Statics; \
public: \
	DECLARE_CLASS(ASupplyCrateInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(ASupplyCrateInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ASupplyCrateInteractable*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_itemInSupplyCrate=NETFIELD_REP_START, \
		_isOpen, \
		_isAutoClosing, \
		NETFIELD_REP_END=_isAutoClosing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASupplyCrateInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASupplyCrateInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASupplyCrateInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASupplyCrateInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASupplyCrateInteractable(ASupplyCrateInteractable&&); \
	NO_API ASupplyCrateInteractable(const ASupplyCrateInteractable&); \
public:


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASupplyCrateInteractable(ASupplyCrateInteractable&&); \
	NO_API ASupplyCrateInteractable(const ASupplyCrateInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASupplyCrateInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASupplyCrateInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASupplyCrateInteractable)


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargeableComponent() { return STRUCT_OFFSET(ASupplyCrateInteractable, _chargeableComponent); } \
	FORCEINLINE static uint32 __PPO___contamainationSerumCollectable() { return STRUCT_OFFSET(ASupplyCrateInteractable, _contamainationSerumCollectable); } \
	FORCEINLINE static uint32 __PPO___openInteractionSecondsToCharge() { return STRUCT_OFFSET(ASupplyCrateInteractable, _openInteractionSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___itemInSupplyCrate() { return STRUCT_OFFSET(ASupplyCrateInteractable, _itemInSupplyCrate); } \
	FORCEINLINE static uint32 __PPO___itemSpawnPoint() { return STRUCT_OFFSET(ASupplyCrateInteractable, _itemSpawnPoint); } \
	FORCEINLINE static uint32 __PPO___itemDropPoint() { return STRUCT_OFFSET(ASupplyCrateInteractable, _itemDropPoint); } \
	FORCEINLINE static uint32 __PPO___isOpen() { return STRUCT_OFFSET(ASupplyCrateInteractable, _isOpen); } \
	FORCEINLINE static uint32 __PPO___isAutoClosing() { return STRUCT_OFFSET(ASupplyCrateInteractable, _isAutoClosing); } \
	FORCEINLINE static uint32 __PPO___crateSelfClosingTime() { return STRUCT_OFFSET(ASupplyCrateInteractable, _crateSelfClosingTime); } \
	FORCEINLINE static uint32 __PPO___crateAutoCloseAnimationTime() { return STRUCT_OFFSET(ASupplyCrateInteractable, _crateAutoCloseAnimationTime); }


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_13_PROLOG
#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_INCLASS \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class ASupplyCrateInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_SupplyCrateInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
