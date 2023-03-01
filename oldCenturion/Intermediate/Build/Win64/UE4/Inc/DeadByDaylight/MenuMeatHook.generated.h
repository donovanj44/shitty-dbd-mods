// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharmIdSlot;
#ifdef DEADBYDAYLIGHT_MenuMeatHook_generated_h
#error "MenuMeatHook.generated.h already included, missing '#pragma once' in MenuMeatHook.h"
#endif
#define DEADBYDAYLIGHT_MenuMeatHook_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_RPC_WRAPPERS \
	virtual void BeginDestroySequence_Internal_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginDestroySequence_Internal);


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginDestroySequence_Internal_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginDestroySequence_Internal);


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_EVENT_PARMS \
	struct MenuMeatHook_eventOnCharmsUpdated_Parms \
	{ \
		TArray<FCharmIdSlot> charmIDs; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuMeatHook(); \
	friend struct Z_Construct_UClass_AMenuMeatHook_Statics; \
public: \
	DECLARE_CLASS(AMenuMeatHook, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AMenuMeatHook) \
	virtual UObject* _getUObject() const override { return const_cast<AMenuMeatHook*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMenuMeatHook(); \
	friend struct Z_Construct_UClass_AMenuMeatHook_Statics; \
public: \
	DECLARE_CLASS(AMenuMeatHook, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AMenuMeatHook) \
	virtual UObject* _getUObject() const override { return const_cast<AMenuMeatHook*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMenuMeatHook(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMenuMeatHook) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuMeatHook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuMeatHook); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenuMeatHook(AMenuMeatHook&&); \
	NO_API AMenuMeatHook(const AMenuMeatHook&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenuMeatHook(AMenuMeatHook&&); \
	NO_API AMenuMeatHook(const AMenuMeatHook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuMeatHook); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuMeatHook); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMenuMeatHook)


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___charmSpawnerComponent() { return STRUCT_OFFSET(AMenuMeatHook, _charmSpawnerComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AMenuMeatHook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MenuMeatHook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
