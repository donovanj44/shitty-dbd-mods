// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDINPUT_DBDInputManager_generated_h
#error "DBDInputManager.generated.h already included, missing '#pragma once' in DBDInputManager.h"
#endif
#define DBDINPUT_DBDInputManager_generated_h

#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDInputManager(); \
	friend struct Z_Construct_UClass_UDBDInputManager_Statics; \
public: \
	DECLARE_CLASS(UDBDInputManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDInput"), NO_API) \
	DECLARE_SERIALIZER(UDBDInputManager)


#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDBDInputManager(); \
	friend struct Z_Construct_UClass_UDBDInputManager_Statics; \
public: \
	DECLARE_CLASS(UDBDInputManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDInput"), NO_API) \
	DECLARE_SERIALIZER(UDBDInputManager)


#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDInputManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDInputManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDInputManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDInputManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDInputManager(UDBDInputManager&&); \
	NO_API UDBDInputManager(const UDBDInputManager&); \
public:


#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDInputManager(UDBDInputManager&&); \
	NO_API UDBDInputManager(const UDBDInputManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDInputManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDInputManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDInputManager)


#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___controlModeManager() { return STRUCT_OFFSET(UDBDInputManager, _controlModeManager); } \
	FORCEINLINE static uint32 __PPO___switchDockStateManager() { return STRUCT_OFFSET(UDBDInputManager, _switchDockStateManager); } \
	FORCEINLINE static uint32 __PPO___virtualKeyboardManager() { return STRUCT_OFFSET(UDBDInputManager, _virtualKeyboardManager); } \
	FORCEINLINE static uint32 __PPO___analogCursorDb() { return STRUCT_OFFSET(UDBDInputManager, _analogCursorDb); }


#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_11_PROLOG
#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_INCLASS \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINPUT_API UClass* StaticClass<class UDBDInputManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInput_Public_DBDInputManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
