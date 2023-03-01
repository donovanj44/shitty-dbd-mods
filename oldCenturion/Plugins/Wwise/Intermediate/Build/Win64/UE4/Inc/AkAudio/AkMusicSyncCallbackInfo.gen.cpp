// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMusicSyncCallbackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMusicSyncCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo();
// End Cross Module References
	void UAkMusicSyncCallbackInfo::StaticRegisterNativesUAkMusicSyncCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserCueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicSyncType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MusicSyncType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MusicSyncType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMusicSyncCallbackInfo.h" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData[] = {
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName = { "UserCueName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, UserCueName), METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData[] = {
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType = { "MusicSyncType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, MusicSyncType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData[] = {
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo = { "SegmentInfo", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, SegmentInfo), Z_Construct_UScriptStruct_FAkSegmentInfo, METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData[] = {
		{ "Category", "AkMusicSyncCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkMusicSyncCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, PlayingID), METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMusicSyncCallbackInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::ClassParams = {
		&UAkMusicSyncCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMusicSyncCallbackInfo, 713902891);
	template<> AKAUDIO_API UClass* StaticClass<UAkMusicSyncCallbackInfo>()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMusicSyncCallbackInfo(Z_Construct_UClass_UAkMusicSyncCallbackInfo, &UAkMusicSyncCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMusicSyncCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMusicSyncCallbackInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
