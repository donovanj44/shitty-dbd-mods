// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaSaveGame() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaSaveGame_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAtlantaSaveGame::StaticRegisterNativesUAtlantaSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaSaveGame_NoRegister()
	{
		return UAtlantaSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLastSpecificImage_MetaData[];
#endif
		static void NewProp_IsLastSpecificImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLastSpecificImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpecificLoadingImageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastSpecificLoadingImageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastGenericLoadingImageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastGenericLoadingImageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaSaveGame.h" },
		{ "ModuleRelativePath", "Public/AtlantaSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage_MetaData[] = {
		{ "Category", "AtlantaSaveGame" },
		{ "ModuleRelativePath", "Public/AtlantaSaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage_SetBit(void* Obj)
	{
		((UAtlantaSaveGame*)Obj)->IsLastSpecificImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage = { "IsLastSpecificImage", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtlantaSaveGame), &Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastSpecificLoadingImageId_MetaData[] = {
		{ "Category", "AtlantaSaveGame" },
		{ "ModuleRelativePath", "Public/AtlantaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastSpecificLoadingImageId = { "LastSpecificLoadingImageId", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSaveGame, LastSpecificLoadingImageId), METADATA_PARAMS(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastSpecificLoadingImageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastSpecificLoadingImageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastGenericLoadingImageId_MetaData[] = {
		{ "Category", "AtlantaSaveGame" },
		{ "ModuleRelativePath", "Public/AtlantaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastGenericLoadingImageId = { "LastGenericLoadingImageId", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSaveGame, LastGenericLoadingImageId), METADATA_PARAMS(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastGenericLoadingImageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastGenericLoadingImageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "AtlantaSaveGame" },
		{ "ModuleRelativePath", "Public/AtlantaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "AtlantaSaveGame" },
		{ "ModuleRelativePath", "Public/AtlantaSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_IsLastSpecificImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastSpecificLoadingImageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_LastGenericLoadingImageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSaveGame_Statics::NewProp_SaveSlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaSaveGame_Statics::ClassParams = {
		&UAtlantaSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtlantaSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaSaveGame, 117895003);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaSaveGame>()
	{
		return UAtlantaSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaSaveGame(Z_Construct_UClass_UAtlantaSaveGame, &UAtlantaSaveGame::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
