// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINETRANSACTIONS_OnlineTransaction_generated_h
#error "OnlineTransaction.generated.h already included, missing '#pragma once' in OnlineTransaction.h"
#endif
#define ONLINETRANSACTIONS_OnlineTransaction_generated_h

#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_SPARSE_DATA
#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineTransaction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineTransaction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineTransaction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineTransaction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineTransaction(UOnlineTransaction&&); \
	NO_API UOnlineTransaction(const UOnlineTransaction&); \
public:


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineTransaction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineTransaction(UOnlineTransaction&&); \
	NO_API UOnlineTransaction(const UOnlineTransaction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineTransaction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineTransaction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineTransaction)


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOnlineTransaction(); \
	friend struct Z_Construct_UClass_UOnlineTransaction_Statics; \
public: \
	DECLARE_CLASS(UOnlineTransaction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OnlineTransactions"), NO_API) \
	DECLARE_SERIALIZER(UOnlineTransaction)


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOnlineTransaction() {} \
public: \
	typedef UOnlineTransaction UClassType; \
	typedef IOnlineTransaction ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IOnlineTransaction() {} \
public: \
	typedef UOnlineTransaction UClassType; \
	typedef IOnlineTransaction ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_6_PROLOG
#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_SPARSE_DATA \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_SPARSE_DATA \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINETRANSACTIONS_API UClass* StaticClass<class UOnlineTransaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_OnlineTransactions_Public_OnlineTransaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
