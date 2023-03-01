// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ChatManager_generated_h
#error "ChatManager.generated.h already included, missing '#pragma once' in ChatManager.h"
#endif
#define DEADBYDAYLIGHT_ChatManager_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_RPC_WRAPPERS \
	virtual void Multicast_DisplayMessage_Implementation(const FString& chatIdentifier, int32 playerIndex, const FString& playerName, const FString& mirrorsId, const FString& msg); \
 \
	DECLARE_FUNCTION(execMulticast_DisplayMessage);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DisplayMessage_Implementation(const FString& chatIdentifier, int32 playerIndex, const FString& playerName, const FString& mirrorsId, const FString& msg); \
 \
	DECLARE_FUNCTION(execMulticast_DisplayMessage);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_EVENT_PARMS \
	struct ChatManager_eventMulticast_DisplayMessage_Parms \
	{ \
		FString chatIdentifier; \
		int32 playerIndex; \
		FString playerName; \
		FString mirrorsId; \
		FString msg; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChatManager(); \
	friend struct Z_Construct_UClass_AChatManager_Statics; \
public: \
	DECLARE_CLASS(AChatManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AChatManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAChatManager(); \
	friend struct Z_Construct_UClass_AChatManager_Statics; \
public: \
	DECLARE_CLASS(AChatManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AChatManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChatManager(AChatManager&&); \
	NO_API AChatManager(const AChatManager&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChatManager(AChatManager&&); \
	NO_API AChatManager(const AChatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChatManager)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___gameInstance() { return STRUCT_OFFSET(AChatManager, _gameInstance); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AChatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ChatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
