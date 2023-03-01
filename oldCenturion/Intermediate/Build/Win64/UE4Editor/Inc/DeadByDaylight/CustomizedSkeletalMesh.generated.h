// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECustomizationCategory : uint8;
class USkeletalMeshComponent;
class UCustomizedSkeletalMesh;
class USkinnedMeshComponent;
#ifdef DEADBYDAYLIGHT_CustomizedSkeletalMesh_generated_h
#error "CustomizedSkeletalMesh.generated.h already included, missing '#pragma once' in CustomizedSkeletalMesh.h"
#endif
#define DEADBYDAYLIGHT_CustomizedSkeletalMesh_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventCustomizedSkeletalMeshOnMeshSwitchBP_Parms \
{ \
	ECustomizationCategory category; \
	USkeletalMeshComponent* mesh; \
}; \
static inline void FCustomizedSkeletalMeshOnMeshSwitchBP_DelegateWrapper(const FMulticastScriptDelegate& CustomizedSkeletalMeshOnMeshSwitchBP, ECustomizationCategory category, USkeletalMeshComponent* mesh) \
{ \
	_Script_DeadByDaylight_eventCustomizedSkeletalMeshOnMeshSwitchBP_Parms Parms; \
	Parms.category=category; \
	Parms.mesh=mesh; \
	CustomizedSkeletalMeshOnMeshSwitchBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearAllVfxs); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execCopyCustomization); \
	DECLARE_FUNCTION(execGetComponents); \
	DECLARE_FUNCTION(execGetCurrentCustomizationItems); \
	DECLARE_FUNCTION(execGetMeshOwner); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execSetAllVfxsVisibility); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetMeshOwner); \
	DECLARE_FUNCTION(execSetMeshVisibility); \
	DECLARE_FUNCTION(execSetVfxsVisibility);


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAllVfxs); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execCopyCustomization); \
	DECLARE_FUNCTION(execGetComponents); \
	DECLARE_FUNCTION(execGetCurrentCustomizationItems); \
	DECLARE_FUNCTION(execGetMeshOwner); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execSetAllVfxsVisibility); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetMeshOwner); \
	DECLARE_FUNCTION(execSetMeshVisibility); \
	DECLARE_FUNCTION(execSetVfxsVisibility);


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizedSkeletalMesh(); \
	friend struct Z_Construct_UClass_UCustomizedSkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(UCustomizedSkeletalMesh, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCustomizedSkeletalMesh)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCustomizedSkeletalMesh(); \
	friend struct Z_Construct_UClass_UCustomizedSkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(UCustomizedSkeletalMesh, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCustomizedSkeletalMesh)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizedSkeletalMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizedSkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizedSkeletalMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizedSkeletalMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizedSkeletalMesh(UCustomizedSkeletalMesh&&); \
	NO_API UCustomizedSkeletalMesh(const UCustomizedSkeletalMesh&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizedSkeletalMesh(UCustomizedSkeletalMesh&&); \
	NO_API UCustomizedSkeletalMesh(const UCustomizedSkeletalMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizedSkeletalMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizedSkeletalMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizedSkeletalMesh)


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___meshOwner() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, _meshOwner); } \
	FORCEINLINE static uint32 __PPO___ignoredItemCategories() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, _ignoredItemCategories); } \
	FORCEINLINE static uint32 __PPO__Components() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, Components); } \
	FORCEINLINE static uint32 __PPO___categoryToComponents() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, _categoryToComponents); } \
	FORCEINLINE static uint32 __PPO__Slaves() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, Slaves); } \
	FORCEINLINE static uint32 __PPO___itemVfxs() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, _itemVfxs); } \
	FORCEINLINE static uint32 __PPO___characterIdOverride() { return STRUCT_OFFSET(UCustomizedSkeletalMesh, _characterIdOverride); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_16_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCustomizedSkeletalMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CustomizedSkeletalMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
