// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrencyType : uint8;
#ifdef DEADBYDAYLIGHT_UMGAtlantaStoreScreen_generated_h
#error "UMGAtlantaStoreScreen.generated.h already included, missing '#pragma once' in UMGAtlantaStoreScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGAtlantaStoreScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnClickedBuyAuricCell); \
	DECLARE_FUNCTION(execHandleOnStoreLeft);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnClickedBuyAuricCell); \
	DECLARE_FUNCTION(execHandleOnStoreLeft);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_EVENT_PARMS \
	struct UMGAtlantaStoreScreen_eventSetBank_Parms \
	{ \
		ECurrencyType currencyType; \
		int32 bank; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAtlantaStoreScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaStoreScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaStoreScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAtlantaStoreScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaStoreScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaStoreScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAtlantaStoreScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAtlantaStoreScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaStoreScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaStoreScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaStoreScreen(UUMGAtlantaStoreScreen&&); \
	NO_API UUMGAtlantaStoreScreen(const UUMGAtlantaStoreScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaStoreScreen(UUMGAtlantaStoreScreen&&); \
	NO_API UUMGAtlantaStoreScreen(const UUMGAtlantaStoreScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaStoreScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaStoreScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGAtlantaStoreScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AuricCellsWidget() { return STRUCT_OFFSET(UUMGAtlantaStoreScreen, AuricCellsWidget); } \
	FORCEINLINE static uint32 __PPO__AuricCellsGridPanel() { return STRUCT_OFFSET(UUMGAtlantaStoreScreen, AuricCellsGridPanel); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGAtlantaStoreScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaStoreScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
