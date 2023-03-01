// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRole : uint8;
enum class EInputInteractionType : uint8;
class UPlayerInput;
struct FKey;
struct FKeyDisplayInfo;
#ifdef DEADBYDAYLIGHT_DBDKeyDisplayInfo_generated_h
#error "DBDKeyDisplayInfo.generated.h already included, missing '#pragma once' in DBDKeyDisplayInfo.h"
#endif
#define DEADBYDAYLIGHT_DBDKeyDisplayInfo_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActionForInteractionType); \
	DECLARE_FUNCTION(execGetFirstKeyForAction); \
	DECLARE_FUNCTION(execGetKeyDisplayInfo); \
	DECLARE_FUNCTION(execGetKeyDisplayInfoForInteractionType); \
	DECLARE_FUNCTION(execIsExcludedKey);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActionForInteractionType); \
	DECLARE_FUNCTION(execGetFirstKeyForAction); \
	DECLARE_FUNCTION(execGetKeyDisplayInfo); \
	DECLARE_FUNCTION(execGetKeyDisplayInfoForInteractionType); \
	DECLARE_FUNCTION(execIsExcludedKey);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDKeyDisplayInfo(); \
	friend struct Z_Construct_UClass_UDBDKeyDisplayInfo_Statics; \
public: \
	DECLARE_CLASS(UDBDKeyDisplayInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDKeyDisplayInfo)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDBDKeyDisplayInfo(); \
	friend struct Z_Construct_UClass_UDBDKeyDisplayInfo_Statics; \
public: \
	DECLARE_CLASS(UDBDKeyDisplayInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDKeyDisplayInfo)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDKeyDisplayInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDKeyDisplayInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDKeyDisplayInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDKeyDisplayInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDKeyDisplayInfo(UDBDKeyDisplayInfo&&); \
	NO_API UDBDKeyDisplayInfo(const UDBDKeyDisplayInfo&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDKeyDisplayInfo(UDBDKeyDisplayInfo&&); \
	NO_API UDBDKeyDisplayInfo(const UDBDKeyDisplayInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDKeyDisplayInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDKeyDisplayInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDKeyDisplayInfo)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___keyDisplayInfoMap() { return STRUCT_OFFSET(UDBDKeyDisplayInfo, _keyDisplayInfoMap); } \
	FORCEINLINE static uint32 __PPO___interactionTypeToActionMap_Camper() { return STRUCT_OFFSET(UDBDKeyDisplayInfo, _interactionTypeToActionMap_Camper); } \
	FORCEINLINE static uint32 __PPO___interactionTypeToActionMap_Slasher() { return STRUCT_OFFSET(UDBDKeyDisplayInfo, _interactionTypeToActionMap_Slasher); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDKeyDisplayInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDKeyDisplayInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
