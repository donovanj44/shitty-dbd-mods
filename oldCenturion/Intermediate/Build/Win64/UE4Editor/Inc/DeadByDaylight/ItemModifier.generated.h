// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACollectable;
#ifdef DEADBYDAYLIGHT_ItemModifier_generated_h
#error "ItemModifier.generated.h already included, missing '#pragma once' in ItemModifier.h"
#endif
#define DEADBYDAYLIGHT_ItemModifier_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthoritySetItemCount); \
	DECLARE_FUNCTION(execAuthoritySetItemEnergy); \
	DECLARE_FUNCTION(execAuthoritySetItemMaxEnergy); \
	DECLARE_FUNCTION(execGetBaseItem); \
	DECLARE_FUNCTION(execGetItemCount); \
	DECLARE_FUNCTION(execGetItemEnergy); \
	DECLARE_FUNCTION(execGetItemMaxEnergy); \
	DECLARE_FUNCTION(execHandleIncreaseCharge); \
	DECLARE_FUNCTION(execHandleIncreaseItemCount); \
	DECLARE_FUNCTION(execHandleIncreaseMaxCharge); \
	DECLARE_FUNCTION(execOnRep_ModifierData);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthoritySetItemCount); \
	DECLARE_FUNCTION(execAuthoritySetItemEnergy); \
	DECLARE_FUNCTION(execAuthoritySetItemMaxEnergy); \
	DECLARE_FUNCTION(execGetBaseItem); \
	DECLARE_FUNCTION(execGetItemCount); \
	DECLARE_FUNCTION(execGetItemEnergy); \
	DECLARE_FUNCTION(execGetItemMaxEnergy); \
	DECLARE_FUNCTION(execHandleIncreaseCharge); \
	DECLARE_FUNCTION(execHandleIncreaseItemCount); \
	DECLARE_FUNCTION(execHandleIncreaseMaxCharge); \
	DECLARE_FUNCTION(execOnRep_ModifierData);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemModifier(); \
	friend struct Z_Construct_UClass_UItemModifier_Statics; \
public: \
	DECLARE_CLASS(UItemModifier, UGameplayModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UItemModifier) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModifierData=NETFIELD_REP_START, \
		NETFIELD_REP_END=ModifierData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUItemModifier(); \
	friend struct Z_Construct_UClass_UItemModifier_Statics; \
public: \
	DECLARE_CLASS(UItemModifier, UGameplayModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UItemModifier) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModifierData=NETFIELD_REP_START, \
		NETFIELD_REP_END=ModifierData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemModifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemModifier(UItemModifier&&); \
	NO_API UItemModifier(const UItemModifier&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemModifier(UItemModifier&&); \
	NO_API UItemModifier(const UItemModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemModifier)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UItemModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ItemModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
