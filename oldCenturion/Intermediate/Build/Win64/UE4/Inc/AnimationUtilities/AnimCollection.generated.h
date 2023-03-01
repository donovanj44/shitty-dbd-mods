// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONUTILITIES_AnimCollection_generated_h
#error "AnimCollection.generated.h already included, missing '#pragma once' in AnimCollection.h"
#endif
#define ANIMATIONUTILITIES_AnimCollection_generated_h

#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_SPARSE_DATA
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_RPC_WRAPPERS
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCollection(); \
	friend struct Z_Construct_UClass_UAnimCollection_Statics; \
public: \
	DECLARE_CLASS(UAnimCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAnimCollection)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCollection(); \
	friend struct Z_Construct_UClass_UAnimCollection_Statics; \
public: \
	DECLARE_CLASS(UAnimCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAnimCollection)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimCollection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimCollection(UAnimCollection&&); \
	NO_API UAnimCollection(const UAnimCollection&); \
public:


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimCollection(UAnimCollection&&); \
	NO_API UAnimCollection(const UAnimCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimCollection)


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___taggedAnimSequences() { return STRUCT_OFFSET(UAnimCollection, _taggedAnimSequences); } \
	FORCEINLINE static uint32 __PPO___taggedAnimBlendspaces() { return STRUCT_OFFSET(UAnimCollection, _taggedAnimBlendspaces); } \
	FORCEINLINE static uint32 __PPO___taggedAnimSelectors() { return STRUCT_OFFSET(UAnimCollection, _taggedAnimSelectors); } \
	FORCEINLINE static uint32 __PPO___parent() { return STRUCT_OFFSET(UAnimCollection, _parent); } \
	FORCEINLINE static uint32 __PPO___children() { return STRUCT_OFFSET(UAnimCollection, _children); }


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_12_PROLOG
#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_INCLASS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONUTILITIES_API UClass* StaticClass<class UAnimCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_AnimationUtilities_Public_AnimCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
