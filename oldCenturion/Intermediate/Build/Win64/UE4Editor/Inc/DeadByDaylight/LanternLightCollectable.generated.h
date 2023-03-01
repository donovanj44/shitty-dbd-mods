// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALanternInteractable;
#ifdef DEADBYDAYLIGHT_LanternLightCollectable_generated_h
#error "LanternLightCollectable.generated.h already included, missing '#pragma once' in LanternLightCollectable.h"
#endif
#define DEADBYDAYLIGHT_LanternLightCollectable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetParentLantern);


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetParentLantern);


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALanternLightCollectable(); \
	friend struct Z_Construct_UClass_ALanternLightCollectable_Statics; \
public: \
	DECLARE_CLASS(ALanternLightCollectable, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALanternLightCollectable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_parentLantern=NETFIELD_REP_START, \
		NETFIELD_REP_END=_parentLantern	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_INCLASS \
private: \
	static void StaticRegisterNativesALanternLightCollectable(); \
	friend struct Z_Construct_UClass_ALanternLightCollectable_Statics; \
public: \
	DECLARE_CLASS(ALanternLightCollectable, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALanternLightCollectable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_parentLantern=NETFIELD_REP_START, \
		NETFIELD_REP_END=_parentLantern	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALanternLightCollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALanternLightCollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALanternLightCollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALanternLightCollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALanternLightCollectable(ALanternLightCollectable&&); \
	NO_API ALanternLightCollectable(const ALanternLightCollectable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALanternLightCollectable(ALanternLightCollectable&&); \
	NO_API ALanternLightCollectable(const ALanternLightCollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALanternLightCollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALanternLightCollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALanternLightCollectable)


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___parentLantern() { return STRUCT_OFFSET(ALanternLightCollectable, _parentLantern); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ALanternLightCollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LanternLightCollectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
