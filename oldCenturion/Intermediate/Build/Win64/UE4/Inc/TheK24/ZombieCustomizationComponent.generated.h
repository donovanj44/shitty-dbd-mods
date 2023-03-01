// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef THEK24_ZombieCustomizationComponent_generated_h
#error "ZombieCustomizationComponent.generated.h already included, missing '#pragma once' in ZombieCustomizationComponent.h"
#endif
#define THEK24_ZombieCustomizationComponent_generated_h

#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_RPC_WRAPPERS \
	virtual void Multicast_SetZombieCustomization_Implementation(ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execMulticast_SetZombieCustomization);


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetZombieCustomization_Implementation(ACamperPlayer* survivor); \
 \
	DECLARE_FUNCTION(execMulticast_SetZombieCustomization);


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_EVENT_PARMS \
	struct ZombieCustomizationComponent_eventMulticast_SetZombieCustomization_Parms \
	{ \
		ACamperPlayer* survivor; \
	};


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZombieCustomizationComponent(); \
	friend struct Z_Construct_UClass_UZombieCustomizationComponent_Statics; \
public: \
	DECLARE_CLASS(UZombieCustomizationComponent, UCustomizedSkeletalMesh, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UZombieCustomizationComponent)


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUZombieCustomizationComponent(); \
	friend struct Z_Construct_UClass_UZombieCustomizationComponent_Statics; \
public: \
	DECLARE_CLASS(UZombieCustomizationComponent, UCustomizedSkeletalMesh, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UZombieCustomizationComponent)


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZombieCustomizationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZombieCustomizationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZombieCustomizationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZombieCustomizationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZombieCustomizationComponent(UZombieCustomizationComponent&&); \
	NO_API UZombieCustomizationComponent(const UZombieCustomizationComponent&); \
public:


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZombieCustomizationComponent(UZombieCustomizationComponent&&); \
	NO_API UZombieCustomizationComponent(const UZombieCustomizationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZombieCustomizationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZombieCustomizationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZombieCustomizationComponent)


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorSource() { return STRUCT_OFFSET(UZombieCustomizationComponent, _survivorSource); }


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_8_PROLOG \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_INCLASS \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UZombieCustomizationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_ZombieCustomizationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
