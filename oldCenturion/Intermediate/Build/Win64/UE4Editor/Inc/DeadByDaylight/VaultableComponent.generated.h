// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_VaultableComponent_generated_h
#error "VaultableComponent.generated.h already included, missing '#pragma once' in VaultableComponent.h"
#endif
#define DEADBYDAYLIGHT_VaultableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventVaultableComponentOnVault_Parms \
{ \
	ADBDPlayer* vaulter; \
}; \
static inline void FVaultableComponentOnVault_DelegateWrapper(const FMulticastScriptDelegate& VaultableComponentOnVault, ADBDPlayer* vaulter) \
{ \
	_Script_DeadByDaylight_eventVaultableComponentOnVault_Parms Parms; \
	Parms.vaulter=vaulter; \
	VaultableComponentOnVault.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChaseEnded); \
	DECLARE_FUNCTION(execSignalVault);


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChaseEnded); \
	DECLARE_FUNCTION(execSignalVault);


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaultableComponent(); \
	friend struct Z_Construct_UClass_UVaultableComponent_Statics; \
public: \
	DECLARE_CLASS(UVaultableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UVaultableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUVaultableComponent(); \
	friend struct Z_Construct_UClass_UVaultableComponent_Statics; \
public: \
	DECLARE_CLASS(UVaultableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UVaultableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaultableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaultableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaultableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaultableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaultableComponent(UVaultableComponent&&); \
	NO_API UVaultableComponent(const UVaultableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaultableComponent(UVaultableComponent&&); \
	NO_API UVaultableComponent(const UVaultableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaultableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaultableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVaultableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___vaultableScoreEvent() { return STRUCT_OFFSET(UVaultableComponent, _vaultableScoreEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UVaultableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_VaultableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
