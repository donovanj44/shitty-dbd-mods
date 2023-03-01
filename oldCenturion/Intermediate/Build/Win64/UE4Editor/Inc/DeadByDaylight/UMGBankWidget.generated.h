// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTooltipPressedData;
enum class ECurrencyType : uint8;
#ifdef DEADBYDAYLIGHT_UMGBankWidget_generated_h
#error "UMGBankWidget.generated.h already included, missing '#pragma once' in UMGBankWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGBankWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCurrencyTooltipRequested); \
	DECLARE_FUNCTION(execOnPurchaseAuricCellsClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCurrencyTooltipRequested); \
	DECLARE_FUNCTION(execOnPurchaseAuricCellsClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBankWidget(); \
	friend struct Z_Construct_UClass_UUMGBankWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBankWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBankWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBankWidget(); \
	friend struct Z_Construct_UClass_UUMGBankWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBankWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBankWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBankWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBankWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBankWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBankWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBankWidget(UUMGBankWidget&&); \
	NO_API UUMGBankWidget(const UUMGBankWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBankWidget(UUMGBankWidget&&); \
	NO_API UUMGBankWidget(const UUMGBankWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBankWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBankWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBankWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BloodPointsCurrency() { return STRUCT_OFFSET(UUMGBankWidget, BloodPointsCurrency); } \
	FORCEINLINE static uint32 __PPO__CellsButton() { return STRUCT_OFFSET(UUMGBankWidget, CellsButton); } \
	FORCEINLINE static uint32 __PPO__IridescentShardsCurrency() { return STRUCT_OFFSET(UUMGBankWidget, IridescentShardsCurrency); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGBankWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGBankWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
