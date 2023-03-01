// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GNOME2021_GnomePlayerComponent_generated_h
#error "GnomePlayerComponent.generated.h already included, missing '#pragma once' in GnomePlayerComponent.h"
#endif
#define GNOME2021_GnomePlayerComponent_generated_h

#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGnomePlayerComponent(); \
	friend struct Z_Construct_UClass_UGnomePlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UGnomePlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gnome2021"), NO_API) \
	DECLARE_SERIALIZER(UGnomePlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasInteractedWithGnomeThisGame=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hasInteractedWithGnomeThisGame	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUGnomePlayerComponent(); \
	friend struct Z_Construct_UClass_UGnomePlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UGnomePlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gnome2021"), NO_API) \
	DECLARE_SERIALIZER(UGnomePlayerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hasInteractedWithGnomeThisGame=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hasInteractedWithGnomeThisGame	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGnomePlayerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGnomePlayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGnomePlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGnomePlayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGnomePlayerComponent(UGnomePlayerComponent&&); \
	NO_API UGnomePlayerComponent(const UGnomePlayerComponent&); \
public:


#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGnomePlayerComponent(UGnomePlayerComponent&&); \
	NO_API UGnomePlayerComponent(const UGnomePlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGnomePlayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGnomePlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGnomePlayerComponent)


#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hasInteractedWithGnomeThisGame() { return STRUCT_OFFSET(UGnomePlayerComponent, _hasInteractedWithGnomeThisGame); }


#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_6_PROLOG
#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_INCLASS \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GNOME2021_API UClass* StaticClass<class UGnomePlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Gnome2021_Public_GnomePlayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
