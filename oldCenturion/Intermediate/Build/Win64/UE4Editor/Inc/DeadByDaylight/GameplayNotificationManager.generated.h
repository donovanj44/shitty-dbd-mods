// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayNotificationData;
class UGameplayModifierContainer;
#ifdef DEADBYDAYLIGHT_GameplayNotificationManager_generated_h
#error "GameplayNotificationManager.generated.h already included, missing '#pragma once' in GameplayNotificationManager.h"
#endif
#define DEADBYDAYLIGHT_GameplayNotificationManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_RPC_WRAPPERS \
	virtual void Multicast_FireGameplayNotification_Implementation(const UGameplayModifierContainer* modifierContainer, bool addToHistory); \
 \
	DECLARE_FUNCTION(execFireGameplayNotification); \
	DECLARE_FUNCTION(execMulticast_FireGameplayNotification);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_FireGameplayNotification_Implementation(const UGameplayModifierContainer* modifierContainer, bool addToHistory); \
 \
	DECLARE_FUNCTION(execFireGameplayNotification); \
	DECLARE_FUNCTION(execMulticast_FireGameplayNotification);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_EVENT_PARMS \
	struct GameplayNotificationManager_eventMulticast_FireGameplayNotification_Parms \
	{ \
		const UGameplayModifierContainer* modifierContainer; \
		bool addToHistory; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayNotificationManager(); \
	friend struct Z_Construct_UClass_UGameplayNotificationManager_Statics; \
public: \
	DECLARE_CLASS(UGameplayNotificationManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayNotificationManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayNotificationManager(); \
	friend struct Z_Construct_UClass_UGameplayNotificationManager_Statics; \
public: \
	DECLARE_CLASS(UGameplayNotificationManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayNotificationManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayNotificationManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayNotificationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayNotificationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayNotificationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayNotificationManager(UGameplayNotificationManager&&); \
	NO_API UGameplayNotificationManager(const UGameplayNotificationManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayNotificationManager(UGameplayNotificationManager&&); \
	NO_API UGameplayNotificationManager(const UGameplayNotificationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayNotificationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayNotificationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayNotificationManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameplayNotificationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameplayNotificationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
