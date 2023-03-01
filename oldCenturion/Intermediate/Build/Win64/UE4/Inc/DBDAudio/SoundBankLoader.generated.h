// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDAUDIO_SoundBankLoader_generated_h
#error "SoundBankLoader.generated.h already included, missing '#pragma once' in SoundBankLoader.h"
#endif
#define DBDAUDIO_SoundBankLoader_generated_h

#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundBankLoader(); \
	friend struct Z_Construct_UClass_USoundBankLoader_Statics; \
public: \
	DECLARE_CLASS(USoundBankLoader, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAudio"), NO_API) \
	DECLARE_SERIALIZER(USoundBankLoader)


#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSoundBankLoader(); \
	friend struct Z_Construct_UClass_USoundBankLoader_Statics; \
public: \
	DECLARE_CLASS(USoundBankLoader, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAudio"), NO_API) \
	DECLARE_SERIALIZER(USoundBankLoader)


#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundBankLoader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBankLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundBankLoader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBankLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundBankLoader(USoundBankLoader&&); \
	NO_API USoundBankLoader(const USoundBankLoader&); \
public:


#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundBankLoader(USoundBankLoader&&); \
	NO_API USoundBankLoader(const USoundBankLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundBankLoader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBankLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundBankLoader)


#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___audioBanks() { return STRUCT_OFFSET(USoundBankLoader, _audioBanks); } \
	FORCEINLINE static uint32 __PPO___asyncAudioBanksPendingLoadData() { return STRUCT_OFFSET(USoundBankLoader, _asyncAudioBanksPendingLoadData); }


#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_9_PROLOG
#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_INCLASS \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDAUDIO_API UClass* StaticClass<class USoundBankLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAudio_Public_SoundBankLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
