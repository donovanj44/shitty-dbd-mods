// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FCharmAttacherAnimationTweak;
class ACharm;
class USkeletalMeshComponent;
#ifdef DEADBYDAYLIGHT_CharmAttacher_generated_h
#error "CharmAttacher.generated.h already included, missing '#pragma once' in CharmAttacher.h"
#endif
#define DEADBYDAYLIGHT_CharmAttacher_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_11_DELEGATE \
static inline void FCharmAttacherOnAttachedOnActor_DelegateWrapper(const FMulticastScriptDelegate& CharmAttacherOnAttachedOnActor) \
{ \
	CharmAttacherOnAttachedOnActor.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_10_DELEGATE \
static inline void FCharmAttacherOnCharmAnimationTagsChanged_DelegateWrapper(const FMulticastScriptDelegate& CharmAttacherOnCharmAnimationTagsChanged) \
{ \
	CharmAttacherOnCharmAnimationTagsChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindOnCharmAnimationTagsChanged); \
	DECLARE_FUNCTION(execDispatchOnCharmAnimationTagsChanged); \
	DECLARE_FUNCTION(execGetActorAttachedOn); \
	DECLARE_FUNCTION(execGetAnimationTweak); \
	DECLARE_FUNCTION(execGetAttachedCharm); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentAttachedOn);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindOnCharmAnimationTagsChanged); \
	DECLARE_FUNCTION(execDispatchOnCharmAnimationTagsChanged); \
	DECLARE_FUNCTION(execGetActorAttachedOn); \
	DECLARE_FUNCTION(execGetAnimationTweak); \
	DECLARE_FUNCTION(execGetAttachedCharm); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentAttachedOn);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharmAttacher(); \
	friend struct Z_Construct_UClass_ACharmAttacher_Statics; \
public: \
	DECLARE_CLASS(ACharmAttacher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACharmAttacher)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACharmAttacher(); \
	friend struct Z_Construct_UClass_ACharmAttacher_Statics; \
public: \
	DECLARE_CLASS(ACharmAttacher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACharmAttacher)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharmAttacher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharmAttacher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharmAttacher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharmAttacher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharmAttacher(ACharmAttacher&&); \
	NO_API ACharmAttacher(const ACharmAttacher&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharmAttacher(ACharmAttacher&&); \
	NO_API ACharmAttacher(const ACharmAttacher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharmAttacher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharmAttacher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharmAttacher)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chain() { return STRUCT_OFFSET(ACharmAttacher, _chain); } \
	FORCEINLINE static uint32 __PPO___attachedCharm() { return STRUCT_OFFSET(ACharmAttacher, _attachedCharm); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ACharmAttacher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharmAttacher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
