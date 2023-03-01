// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESkillCheckCustomType : uint8;
#ifdef DBDGAMEPLAY_StruggleComponent_generated_h
#error "StruggleComponent.generated.h already included, missing '#pragma once' in StruggleComponent.h"
#endif
#define DBDGAMEPLAY_StruggleComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLocal_TryActivateSkillCheck); \
	DECLARE_FUNCTION(execOnSkillCheckEnd);


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLocal_TryActivateSkillCheck); \
	DECLARE_FUNCTION(execOnSkillCheckEnd);


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStruggleComponent(); \
	friend struct Z_Construct_UClass_UStruggleComponent_Statics; \
public: \
	DECLARE_CLASS(UStruggleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UStruggleComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStruggleComponent*>(this); }


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUStruggleComponent(); \
	friend struct Z_Construct_UClass_UStruggleComponent_Statics; \
public: \
	DECLARE_CLASS(UStruggleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UStruggleComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStruggleComponent*>(this); }


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStruggleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStruggleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStruggleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStruggleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStruggleComponent(UStruggleComponent&&); \
	NO_API UStruggleComponent(const UStruggleComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStruggleComponent(UStruggleComponent&&); \
	NO_API UStruggleComponent(const UStruggleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStruggleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStruggleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStruggleComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___skillCheckCount() { return STRUCT_OFFSET(UStruggleComponent, _skillCheckCount); }


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_8_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UStruggleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_StruggleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
