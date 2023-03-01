// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAtlantaControlTypeSetting : uint8;
#ifdef DEADBYDAYLIGHT_UMGControlTypeWidget_generated_h
#error "UMGControlTypeWidget.generated.h already included, missing '#pragma once' in UMGControlTypeWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGControlTypeWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_EVENT_PARMS \
	struct UMGControlTypeWidget_eventInitializeDefaultLayout_Parms \
	{ \
		EAtlantaControlTypeSetting controlType; \
	}; \
	struct UMGControlTypeWidget_eventIsChecked_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UMGControlTypeWidget_eventIsChecked_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UMGControlTypeWidget_eventSetOptionChecked_Parms \
	{ \
		bool NewIsChecked; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGControlTypeWidget(); \
	friend struct Z_Construct_UClass_UUMGControlTypeWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGControlTypeWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGControlTypeWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGControlTypeWidget(); \
	friend struct Z_Construct_UClass_UUMGControlTypeWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGControlTypeWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGControlTypeWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGControlTypeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGControlTypeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGControlTypeWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGControlTypeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGControlTypeWidget(UUMGControlTypeWidget&&); \
	NO_API UUMGControlTypeWidget(const UUMGControlTypeWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGControlTypeWidget(UUMGControlTypeWidget&&); \
	NO_API UUMGControlTypeWidget(const UUMGControlTypeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGControlTypeWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGControlTypeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGControlTypeWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button() { return STRUCT_OFFSET(UUMGControlTypeWidget, Button); } \
	FORCEINLINE static uint32 __PPO__MoveTextHalfScreenCanvas() { return STRUCT_OFFSET(UUMGControlTypeWidget, MoveTextHalfScreenCanvas); } \
	FORCEINLINE static uint32 __PPO__AimTextHalfScreenCanvas() { return STRUCT_OFFSET(UUMGControlTypeWidget, AimTextHalfScreenCanvas); } \
	FORCEINLINE static uint32 __PPO__MoveTextFullScreenCanvas() { return STRUCT_OFFSET(UUMGControlTypeWidget, MoveTextFullScreenCanvas); } \
	FORCEINLINE static uint32 __PPO__AimTextFullScreenCanvas() { return STRUCT_OFFSET(UUMGControlTypeWidget, AimTextFullScreenCanvas); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGControlTypeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGControlTypeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
