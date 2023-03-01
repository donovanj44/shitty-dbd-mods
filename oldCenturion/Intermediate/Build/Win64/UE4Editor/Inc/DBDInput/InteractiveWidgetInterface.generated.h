// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnalogInputEvent;
struct FKeyEvent;
#ifdef DBDINPUT_InteractiveWidgetInterface_generated_h
#error "InteractiveWidgetInterface.generated.h already included, missing '#pragma once' in InteractiveWidgetInterface.h"
#endif
#define DBDINPUT_InteractiveWidgetInterface_generated_h

#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_RPC_WRAPPERS \
	virtual void HandleAnalogInputEvent_Implementation(FAnalogInputEvent const& InAnalogInputEvent) {}; \
	virtual void HandleKeyDownEvent_Implementation(FKeyEvent const& InKeyEvent) {}; \
	virtual void HandleKeyHoldEvent_Implementation(FKeyEvent const& InKeyEvent) {}; \
	virtual void HandleKeyUpEvent_Implementation(FKeyEvent const& InKeyEvent) {}; \
 \
	DECLARE_FUNCTION(execHandleAnalogInputEvent); \
	DECLARE_FUNCTION(execHandleKeyDownEvent); \
	DECLARE_FUNCTION(execHandleKeyHoldEvent); \
	DECLARE_FUNCTION(execHandleKeyUpEvent);


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleAnalogInputEvent_Implementation(FAnalogInputEvent const& InAnalogInputEvent) {}; \
	virtual void HandleKeyDownEvent_Implementation(FKeyEvent const& InKeyEvent) {}; \
	virtual void HandleKeyHoldEvent_Implementation(FKeyEvent const& InKeyEvent) {}; \
	virtual void HandleKeyUpEvent_Implementation(FKeyEvent const& InKeyEvent) {}; \
 \
	DECLARE_FUNCTION(execHandleAnalogInputEvent); \
	DECLARE_FUNCTION(execHandleKeyDownEvent); \
	DECLARE_FUNCTION(execHandleKeyHoldEvent); \
	DECLARE_FUNCTION(execHandleKeyUpEvent);


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_EVENT_PARMS \
	struct InteractiveWidgetInterface_eventHandleAnalogInputEvent_Parms \
	{ \
		FAnalogInputEvent InAnalogInputEvent; \
	}; \
	struct InteractiveWidgetInterface_eventHandleKeyDownEvent_Parms \
	{ \
		FKeyEvent InKeyEvent; \
	}; \
	struct InteractiveWidgetInterface_eventHandleKeyHoldEvent_Parms \
	{ \
		FKeyEvent InKeyEvent; \
	}; \
	struct InteractiveWidgetInterface_eventHandleKeyUpEvent_Parms \
	{ \
		FKeyEvent InKeyEvent; \
	};


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveWidgetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveWidgetInterface(UInteractiveWidgetInterface&&); \
	NO_API UInteractiveWidgetInterface(const UInteractiveWidgetInterface&); \
public:


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveWidgetInterface(UInteractiveWidgetInterface&&); \
	NO_API UInteractiveWidgetInterface(const UInteractiveWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveWidgetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveWidgetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveWidgetInterface)


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractiveWidgetInterface(); \
	friend struct Z_Construct_UClass_UInteractiveWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractiveWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDInput"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveWidgetInterface)


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractiveWidgetInterface() {} \
public: \
	typedef UInteractiveWidgetInterface UClassType; \
	typedef IInteractiveWidgetInterface ThisClass; \
	static void Execute_HandleAnalogInputEvent(UObject* O, FAnalogInputEvent const& InAnalogInputEvent); \
	static void Execute_HandleKeyDownEvent(UObject* O, FKeyEvent const& InKeyEvent); \
	static void Execute_HandleKeyHoldEvent(UObject* O, FKeyEvent const& InKeyEvent); \
	static void Execute_HandleKeyUpEvent(UObject* O, FKeyEvent const& InKeyEvent); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractiveWidgetInterface() {} \
public: \
	typedef UInteractiveWidgetInterface UClassType; \
	typedef IInteractiveWidgetInterface ThisClass; \
	static void Execute_HandleAnalogInputEvent(UObject* O, FAnalogInputEvent const& InAnalogInputEvent); \
	static void Execute_HandleKeyDownEvent(UObject* O, FKeyEvent const& InKeyEvent); \
	static void Execute_HandleKeyHoldEvent(UObject* O, FKeyEvent const& InKeyEvent); \
	static void Execute_HandleKeyUpEvent(UObject* O, FKeyEvent const& InKeyEvent); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_8_PROLOG \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINPUT_API UClass* StaticClass<class UInteractiveWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInput_Public_InteractiveWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
