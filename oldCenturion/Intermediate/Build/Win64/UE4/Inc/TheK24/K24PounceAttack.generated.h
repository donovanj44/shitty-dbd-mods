// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AZombieCharacter;
#ifdef THEK24_K24PounceAttack_generated_h
#error "K24PounceAttack.generated.h already included, missing '#pragma once' in K24PounceAttack.h"
#endif
#define THEK24_K24PounceAttack_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_RPC_WRAPPERS \
	virtual void Server_HitZombie_Implementation(AZombieCharacter* zombie, const float targetLocationTimestamp); \
 \
	DECLARE_FUNCTION(execServer_HitZombie);


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_HitZombie_Implementation(AZombieCharacter* zombie, const float targetLocationTimestamp); \
 \
	DECLARE_FUNCTION(execServer_HitZombie);


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_EVENT_PARMS \
	struct K24PounceAttack_eventServer_HitZombie_Parms \
	{ \
		AZombieCharacter* zombie; \
		float targetLocationTimestamp; \
	};


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK24PounceAttack(); \
	friend struct Z_Construct_UClass_UK24PounceAttack_Statics; \
public: \
	DECLARE_CLASS(UK24PounceAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24PounceAttack)


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUK24PounceAttack(); \
	friend struct Z_Construct_UClass_UK24PounceAttack_Statics; \
public: \
	DECLARE_CLASS(UK24PounceAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24PounceAttack)


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK24PounceAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK24PounceAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24PounceAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24PounceAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24PounceAttack(UK24PounceAttack&&); \
	NO_API UK24PounceAttack(const UK24PounceAttack&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24PounceAttack(UK24PounceAttack&&); \
	NO_API UK24PounceAttack(const UK24PounceAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24PounceAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24PounceAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK24PounceAttack)


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_8_PROLOG \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UK24PounceAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24PounceAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
