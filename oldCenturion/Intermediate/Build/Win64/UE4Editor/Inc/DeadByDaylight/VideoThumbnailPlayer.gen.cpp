// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VideoThumbnailPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoThumbnailPlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AVideoThumbnailPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AVideoThumbnailPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVideoPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVideoThumbnailPlayer::execOnEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVideoThumbnailPlayer::execOnMediaClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVideoThumbnailPlayer::execOnMediaOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_openedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaOpened(Z_Param_openedUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVideoThumbnailPlayer::execOnVideoAssetLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoAssetLoaded();
		P_NATIVE_END;
	}
	void AVideoThumbnailPlayer::StaticRegisterNativesAVideoThumbnailPlayer()
	{
		UClass* Class = AVideoThumbnailPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndReached", &AVideoThumbnailPlayer::execOnEndReached },
			{ "OnMediaClosed", &AVideoThumbnailPlayer::execOnMediaClosed },
			{ "OnMediaOpened", &AVideoThumbnailPlayer::execOnMediaOpened },
			{ "OnVideoAssetLoaded", &AVideoThumbnailPlayer::execOnVideoAssetLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVideoThumbnailPlayer, nullptr, "OnEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVideoThumbnailPlayer, nullptr, "OnMediaClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics
	{
		struct VideoThumbnailPlayer_eventOnMediaOpened_Parms
		{
			FString openedUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openedUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_openedUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::NewProp_openedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::NewProp_openedUrl = { "openedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoThumbnailPlayer_eventOnMediaOpened_Parms, openedUrl), METADATA_PARAMS(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::NewProp_openedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::NewProp_openedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::NewProp_openedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVideoThumbnailPlayer, nullptr, "OnMediaOpened", nullptr, nullptr, sizeof(VideoThumbnailPlayer_eventOnMediaOpened_Parms), Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVideoThumbnailPlayer, nullptr, "OnVideoAssetLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVideoThumbnailPlayer_NoRegister()
	{
		return AVideoThumbnailPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AVideoThumbnailPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__source_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__audioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoPlayerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoPlayerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVideoThumbnailPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVideoThumbnailPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVideoThumbnailPlayer_OnEndReached, "OnEndReached" }, // 2274453884
		{ &Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaClosed, "OnMediaClosed" }, // 885011522
		{ &Z_Construct_UFunction_AVideoThumbnailPlayer_OnMediaOpened, "OnMediaOpened" }, // 3656040070
		{ &Z_Construct_UFunction_AVideoThumbnailPlayer_OnVideoAssetLoaded, "OnVideoAssetLoaded" }, // 2636006155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoThumbnailPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VideoThumbnailPlayer.h" },
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__source_MetaData[] = {
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__source = { "_source", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoThumbnailPlayer, _source), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__audioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__audioComponent = { "_audioComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoThumbnailPlayer, _audioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__audioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__audioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_VideoPlayerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_VideoPlayerWidget = { "VideoPlayerWidget", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoThumbnailPlayer, VideoPlayerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_VideoPlayerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_VideoPlayerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_SoundComponent_MetaData[] = {
		{ "Category", "VideoThumbnailPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoThumbnailPlayer, SoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_SoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_SoundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "VideoThumbnailPlayer" },
		{ "ModuleRelativePath", "Public/VideoThumbnailPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVideoThumbnailPlayer, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_MediaPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVideoThumbnailPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp__audioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_VideoPlayerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_SoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoThumbnailPlayer_Statics::NewProp_MediaPlayer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVideoPlayer_NoRegister, (int32)VTABLE_OFFSET(AVideoThumbnailPlayer, IVideoPlayer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVideoThumbnailPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVideoThumbnailPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVideoThumbnailPlayer_Statics::ClassParams = {
		&AVideoThumbnailPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVideoThumbnailPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoThumbnailPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVideoThumbnailPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVideoThumbnailPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVideoThumbnailPlayer, 2960989025);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AVideoThumbnailPlayer>()
	{
		return AVideoThumbnailPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVideoThumbnailPlayer(Z_Construct_UClass_AVideoThumbnailPlayer, &AVideoThumbnailPlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AVideoThumbnailPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVideoThumbnailPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
