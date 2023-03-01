// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDANIMATION_HealSurvivorSubAnimInstance_generated_h
#error "HealSurvivorSubAnimInstance.generated.h already included, missing '#pragma once' in HealSurvivorSubAnimInstance.h"
#endif
#define DBDANIMATION_HealSurvivorSubAnimInstance_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealerSkillCheckResponseAesthetic); \
	DECLARE_FUNCTION(execResetHealerSkillCheckFailed);


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealerSkillCheckResponseAesthetic); \
	DECLARE_FUNCTION(execResetHealerSkillCheckFailed);


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UHealSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UHealSurvivorSubAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UHealSurvivorSubAnimInstance*>(this); }


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUHealSurvivorSubAnimInstance(); \
	friend struct Z_Construct_UClass_UHealSurvivorSubAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UHealSurvivorSubAnimInstance, UBaseSurvivorAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(UHealSurvivorSubAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UHealSurvivorSubAnimInstance*>(this); }


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealSurvivorSubAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealSurvivorSubAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealSurvivorSubAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealSurvivorSubAnimInstance(UHealSurvivorSubAnimInstance&&); \
	NO_API UHealSurvivorSubAnimInstance(const UHealSurvivorSubAnimInstance&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealSurvivorSubAnimInstance(UHealSurvivorSubAnimInstance&&); \
	NO_API UHealSurvivorSubAnimInstance(const UHealSurvivorSubAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealSurvivorSubAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealSurvivorSubAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealSurvivorSubAnimInstance)


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isHealingACrawlingTarget() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isHealingACrawlingTarget); } \
	FORCEINLINE static uint32 __PPO___isHealingOtherNoMedkit() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isHealingOtherNoMedkit); } \
	FORCEINLINE static uint32 __PPO___isHealingOtherMedkit() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isHealingOtherMedkit); } \
	FORCEINLINE static uint32 __PPO___isHealingSelfNoMedkit() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isHealingSelfNoMedkit); } \
	FORCEINLINE static uint32 __PPO___isHealingSelfMedkit() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isHealingSelfMedkit); } \
	FORCEINLINE static uint32 __PPO___isWakingUpOther() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isWakingUpOther); } \
	FORCEINLINE static uint32 __PPO___isBeingHealed() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isBeingHealed); } \
	FORCEINLINE static uint32 __PPO___isBeingMended() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isBeingMended); } \
	FORCEINLINE static uint32 __PPO___isMendingOther() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isMendingOther); } \
	FORCEINLINE static uint32 __PPO___hasSkillCheckFailed() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _hasSkillCheckFailed); } \
	FORCEINLINE static uint32 __PPO___isCrawling() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _isCrawling); } \
	FORCEINLINE static uint32 __PPO___hasHealerSkillCheckFailed() { return STRUCT_OFFSET(UHealSurvivorSubAnimInstance, _hasHealerSkillCheckFailed); }


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_9_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_INCLASS \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class UHealSurvivorSubAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_HealSurvivorSubAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
