// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESnowmanDestructionType : uint8;
#ifdef WINTER2021_SnowmanAnimInstance_generated_h
#error "SnowmanAnimInstance.generated.h already included, missing '#pragma once' in SnowmanAnimInstance.h"
#endif
#define WINTER2021_SnowmanAnimInstance_generated_h

#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_SPARSE_DATA
#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_EVENT_PARMS \
	struct SnowmanAnimInstance_eventCosmetic_OnSnowmanDestroyedEvent_Parms \
	{ \
		ESnowmanDestructionType snowmanDestructionType; \
	};


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnowmanAnimInstance(); \
	friend struct Z_Construct_UClass_USnowmanAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USnowmanAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(USnowmanAnimInstance)


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSnowmanAnimInstance(); \
	friend struct Z_Construct_UClass_USnowmanAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USnowmanAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(USnowmanAnimInstance)


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnowmanAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnowmanAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnowmanAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnowmanAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USnowmanAnimInstance(USnowmanAnimInstance&&); \
	NO_API USnowmanAnimInstance(const USnowmanAnimInstance&); \
public:


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USnowmanAnimInstance(USnowmanAnimInstance&&); \
	NO_API USnowmanAnimInstance(const USnowmanAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnowmanAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnowmanAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USnowmanAnimInstance)


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(USnowmanAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___isBeingEntered() { return STRUCT_OFFSET(USnowmanAnimInstance, _isBeingEntered); } \
	FORCEINLINE static uint32 __PPO___isControlled() { return STRUCT_OFFSET(USnowmanAnimInstance, _isControlled); } \
	FORCEINLINE static uint32 __PPO___isDestroyed() { return STRUCT_OFFSET(USnowmanAnimInstance, _isDestroyed); } \
	FORCEINLINE static uint32 __PPO___isBeingDestroyedDueToSurvivorRunExit() { return STRUCT_OFFSET(USnowmanAnimInstance, _isBeingDestroyedDueToSurvivorRunExit); } \
	FORCEINLINE static uint32 __PPO___isBeingDestroyedDueToKillerAttackWhileControlled() { return STRUCT_OFFSET(USnowmanAnimInstance, _isBeingDestroyedDueToKillerAttackWhileControlled); } \
	FORCEINLINE static uint32 __PPO___isBeingDestroyedDueToKillerAttackWhileEmpty() { return STRUCT_OFFSET(USnowmanAnimInstance, _isBeingDestroyedDueToKillerAttackWhileEmpty); } \
	FORCEINLINE static uint32 __PPO___isSurvivorUsingSnowmanMoving() { return STRUCT_OFFSET(USnowmanAnimInstance, _isSurvivorUsingSnowmanMoving); } \
	FORCEINLINE static uint32 __PPO___snowman() { return STRUCT_OFFSET(USnowmanAnimInstance, _snowman); } \
	FORCEINLINE static uint32 __PPO___survivorUsingSnowman() { return STRUCT_OFFSET(USnowmanAnimInstance, _survivorUsingSnowman); }


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_10_PROLOG \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_EVENT_PARMS


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_INCLASS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINTER2021_API UClass* StaticClass<class USnowmanAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_SnowmanAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
