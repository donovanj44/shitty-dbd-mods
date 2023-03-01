// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATotem;
#ifdef DBDINTERACTION_BlessTotem_generated_h
#error "BlessTotem.generated.h already included, missing '#pragma once' in BlessTotem.h"
#endif
#define DBDINTERACTION_BlessTotem_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTotem);


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTotem);


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlessTotem(); \
	friend struct Z_Construct_UClass_UBlessTotem_Statics; \
public: \
	DECLARE_CLASS(UBlessTotem, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UBlessTotem)


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBlessTotem(); \
	friend struct Z_Construct_UClass_UBlessTotem_Statics; \
public: \
	DECLARE_CLASS(UBlessTotem, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UBlessTotem)


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlessTotem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlessTotem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlessTotem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlessTotem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlessTotem(UBlessTotem&&); \
	NO_API UBlessTotem(const UBlessTotem&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlessTotem(UBlessTotem&&); \
	NO_API UBlessTotem(const UBlessTotem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlessTotem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlessTotem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlessTotem)


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blessHexTotemSpeedPenalty() { return STRUCT_OFFSET(UBlessTotem, _blessHexTotemSpeedPenalty); }


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_9_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UBlessTotem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_BlessTotem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
