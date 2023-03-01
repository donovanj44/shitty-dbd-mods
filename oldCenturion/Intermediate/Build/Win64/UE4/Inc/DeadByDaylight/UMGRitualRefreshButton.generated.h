// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrencyType : uint8;
#ifdef DEADBYDAYLIGHT_UMGRitualRefreshButton_generated_h
#error "UMGRitualRefreshButton.generated.h already included, missing '#pragma once' in UMGRitualRefreshButton.h"
#endif
#define DEADBYDAYLIGHT_UMGRitualRefreshButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_RPC_WRAPPERS \
	virtual void SetRefreshButton_Implementation(int32 currency, ECurrencyType currentyType, bool isAdsRefresh); \
 \
	DECLARE_FUNCTION(execSetRefreshButton);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetRefreshButton_Implementation(int32 currency, ECurrencyType currentyType, bool isAdsRefresh); \
 \
	DECLARE_FUNCTION(execSetRefreshButton);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_EVENT_PARMS \
	struct UMGRitualRefreshButton_eventSetRefreshButton_Parms \
	{ \
		int32 currency; \
		ECurrencyType currentyType; \
		bool isAdsRefresh; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGRitualRefreshButton(); \
	friend struct Z_Construct_UClass_UUMGRitualRefreshButton_Statics; \
public: \
	DECLARE_CLASS(UUMGRitualRefreshButton, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGRitualRefreshButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGRitualRefreshButton(); \
	friend struct Z_Construct_UClass_UUMGRitualRefreshButton_Statics; \
public: \
	DECLARE_CLASS(UUMGRitualRefreshButton, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGRitualRefreshButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGRitualRefreshButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGRitualRefreshButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGRitualRefreshButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGRitualRefreshButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGRitualRefreshButton(UUMGRitualRefreshButton&&); \
	NO_API UUMGRitualRefreshButton(const UUMGRitualRefreshButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGRitualRefreshButton(UUMGRitualRefreshButton&&); \
	NO_API UUMGRitualRefreshButton(const UUMGRitualRefreshButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGRitualRefreshButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGRitualRefreshButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGRitualRefreshButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RefreshCanvas() { return STRUCT_OFFSET(UUMGRitualRefreshButton, RefreshCanvas); } \
	FORCEINLINE static uint32 __PPO__RefreshSwitcher() { return STRUCT_OFFSET(UUMGRitualRefreshButton, RefreshSwitcher); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGRitualRefreshButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGRitualRefreshButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
