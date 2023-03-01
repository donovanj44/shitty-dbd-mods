// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef THEDEMOGORGON_ElevensSodaAddon_generated_h
#error "ElevensSodaAddon.generated.h already included, missing '#pragma once' in ElevensSodaAddon.h"
#endif
#define THEDEMOGORGON_ElevensSodaAddon_generated_h

#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_RPC_WRAPPERS \
	virtual void Multicast_HighlightGenerator_Implementation(const AGenerator* generator) const; \
	virtual void Multicast_UnhighlightGenerator_Implementation(const AGenerator* generator) const; \
 \
	DECLARE_FUNCTION(execMulticast_HighlightGenerator); \
	DECLARE_FUNCTION(execMulticast_UnhighlightGenerator);


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_HighlightGenerator_Implementation(const AGenerator* generator) const; \
	virtual void Multicast_UnhighlightGenerator_Implementation(const AGenerator* generator) const; \
 \
	DECLARE_FUNCTION(execMulticast_HighlightGenerator); \
	DECLARE_FUNCTION(execMulticast_UnhighlightGenerator);


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_EVENT_PARMS \
	struct ElevensSodaAddon_eventMulticast_HighlightGenerator_Parms \
	{ \
		const AGenerator* generator; \
	}; \
	struct ElevensSodaAddon_eventMulticast_UnhighlightGenerator_Parms \
	{ \
		const AGenerator* generator; \
	};


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElevensSodaAddon(); \
	friend struct Z_Construct_UClass_UElevensSodaAddon_Statics; \
public: \
	DECLARE_CLASS(UElevensSodaAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheDemogorgon"), NO_API) \
	DECLARE_SERIALIZER(UElevensSodaAddon)


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUElevensSodaAddon(); \
	friend struct Z_Construct_UClass_UElevensSodaAddon_Statics; \
public: \
	DECLARE_CLASS(UElevensSodaAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheDemogorgon"), NO_API) \
	DECLARE_SERIALIZER(UElevensSodaAddon)


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElevensSodaAddon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElevensSodaAddon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElevensSodaAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElevensSodaAddon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElevensSodaAddon(UElevensSodaAddon&&); \
	NO_API UElevensSodaAddon(const UElevensSodaAddon&); \
public:


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElevensSodaAddon(UElevensSodaAddon&&); \
	NO_API UElevensSodaAddon(const UElevensSodaAddon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElevensSodaAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElevensSodaAddon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElevensSodaAddon)


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_8_PROLOG \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_INCLASS \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEDEMOGORGON_API UClass* StaticClass<class UElevensSodaAddon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheDemogorgon_Public_ElevensSodaAddon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
