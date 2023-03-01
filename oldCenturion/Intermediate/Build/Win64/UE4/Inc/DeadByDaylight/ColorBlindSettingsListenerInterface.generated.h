// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EColorVisionDeficiency : uint8;
#ifdef DEADBYDAYLIGHT_ColorBlindSettingsListenerInterface_generated_h
#error "ColorBlindSettingsListenerInterface.generated.h already included, missing '#pragma once' in ColorBlindSettingsListenerInterface.h"
#endif
#define DEADBYDAYLIGHT_ColorBlindSettingsListenerInterface_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_RPC_WRAPPERS \
	virtual void OnColorBlindSettingsChange_Implementation(EColorVisionDeficiency ColorBlindMode, int32 colorBlindIntensity) {}; \
 \
	DECLARE_FUNCTION(execOnColorBlindSettingsChange);


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnColorBlindSettingsChange_Implementation(EColorVisionDeficiency ColorBlindMode, int32 colorBlindIntensity) {}; \
 \
	DECLARE_FUNCTION(execOnColorBlindSettingsChange);


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_EVENT_PARMS \
	struct ColorBlindSettingsListenerInterface_eventOnColorBlindSettingsChange_Parms \
	{ \
		EColorVisionDeficiency ColorBlindMode; \
		int32 colorBlindIntensity; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorBlindSettingsListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorBlindSettingsListenerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorBlindSettingsListenerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBlindSettingsListenerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorBlindSettingsListenerInterface(UColorBlindSettingsListenerInterface&&); \
	NO_API UColorBlindSettingsListenerInterface(const UColorBlindSettingsListenerInterface&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorBlindSettingsListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorBlindSettingsListenerInterface(UColorBlindSettingsListenerInterface&&); \
	NO_API UColorBlindSettingsListenerInterface(const UColorBlindSettingsListenerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorBlindSettingsListenerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBlindSettingsListenerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorBlindSettingsListenerInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUColorBlindSettingsListenerInterface(); \
	friend struct Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics; \
public: \
	DECLARE_CLASS(UColorBlindSettingsListenerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UColorBlindSettingsListenerInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IColorBlindSettingsListenerInterface() {} \
public: \
	typedef UColorBlindSettingsListenerInterface UClassType; \
	typedef IColorBlindSettingsListenerInterface ThisClass; \
	static void Execute_OnColorBlindSettingsChange(UObject* O, EColorVisionDeficiency ColorBlindMode, int32 colorBlindIntensity); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IColorBlindSettingsListenerInterface() {} \
public: \
	typedef UColorBlindSettingsListenerInterface UClassType; \
	typedef IColorBlindSettingsListenerInterface ThisClass; \
	static void Execute_OnColorBlindSettingsChange(UObject* O, EColorVisionDeficiency ColorBlindMode, int32 colorBlindIntensity); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_7_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UColorBlindSettingsListenerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ColorBlindSettingsListenerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
