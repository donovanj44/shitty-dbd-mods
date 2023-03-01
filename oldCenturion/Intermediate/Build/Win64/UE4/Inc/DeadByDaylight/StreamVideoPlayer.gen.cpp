// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StreamVideoPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamVideoPlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStreamVideoPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStreamVideoPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStreamVideoWidget_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVideoPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStreamVideoPlayer::execOnEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStreamVideoPlayer::execOnMediaClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStreamVideoPlayer::execOnMediaOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_openedUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaOpened(Z_Param_openedUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStreamVideoPlayer::execOnSkipButtonTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkipButtonTriggered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStreamVideoPlayer::execOnVideoAssetLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoAssetLoaded();
		P_NATIVE_END;
	}
	void AStreamVideoPlayer::StaticRegisterNativesAStreamVideoPlayer()
	{
		UClass* Class = AStreamVideoPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndReached", &AStreamVideoPlayer::execOnEndReached },
			{ "OnMediaClosed", &AStreamVideoPlayer::execOnMediaClosed },
			{ "OnMediaOpened", &AStreamVideoPlayer::execOnMediaOpened },
			{ "OnSkipButtonTriggered", &AStreamVideoPlayer::execOnSkipButtonTriggered },
			{ "OnVideoAssetLoaded", &AStreamVideoPlayer::execOnVideoAssetLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStreamVideoPlayer, nullptr, "OnEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStreamVideoPlayer, nullptr, "OnMediaClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics
	{
		struct StreamVideoPlayer_eventOnMediaOpened_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::NewProp_openedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::NewProp_openedUrl = { "openedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamVideoPlayer_eventOnMediaOpened_Parms, openedUrl), METADATA_PARAMS(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::NewProp_openedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::NewProp_openedUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::NewProp_openedUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStreamVideoPlayer, nullptr, "OnMediaOpened", nullptr, nullptr, sizeof(StreamVideoPlayer_eventOnMediaOpened_Parms), Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStreamVideoPlayer, nullptr, "OnSkipButtonTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStreamVideoPlayer, nullptr, "OnVideoAssetLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStreamVideoPlayer_NoRegister()
	{
		return AStreamVideoPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AStreamVideoPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__audioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamMediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamMediaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamVideoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamVideoWidget;
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
	UObject* (*const Z_Construct_UClass_AStreamVideoPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStreamVideoPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStreamVideoPlayer_OnEndReached, "OnEndReached" }, // 2472924324
		{ &Z_Construct_UFunction_AStreamVideoPlayer_OnMediaClosed, "OnMediaClosed" }, // 142025309
		{ &Z_Construct_UFunction_AStreamVideoPlayer_OnMediaOpened, "OnMediaOpened" }, // 492201290
		{ &Z_Construct_UFunction_AStreamVideoPlayer_OnSkipButtonTriggered, "OnSkipButtonTriggered" }, // 4028913846
		{ &Z_Construct_UFunction_AStreamVideoPlayer_OnVideoAssetLoaded, "OnVideoAssetLoaded" }, // 4169729833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreamVideoPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreamVideoPlayer.h" },
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp__audioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp__audioComponent = { "_audioComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStreamVideoPlayer, _audioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp__audioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp__audioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamMediaSource_MetaData[] = {
		{ "Category", "StreamVideoPlayer" },
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamMediaSource = { "StreamMediaSource", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStreamVideoPlayer, StreamMediaSource), Z_Construct_UClass_UStreamMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamMediaSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamVideoWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamVideoWidget = { "StreamVideoWidget", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStreamVideoPlayer, StreamVideoWidget), Z_Construct_UClass_UUMGStreamVideoWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamVideoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamVideoWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_SoundComponent_MetaData[] = {
		{ "Category", "StreamVideoPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStreamVideoPlayer, SoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_SoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_SoundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "StreamVideoPlayer" },
		{ "ModuleRelativePath", "Public/StreamVideoPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStreamVideoPlayer, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_MediaPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStreamVideoPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp__audioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamMediaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_StreamVideoWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_SoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStreamVideoPlayer_Statics::NewProp_MediaPlayer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStreamVideoPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVideoPlayer_NoRegister, (int32)VTABLE_OFFSET(AStreamVideoPlayer, IVideoPlayer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStreamVideoPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStreamVideoPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStreamVideoPlayer_Statics::ClassParams = {
		&AStreamVideoPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStreamVideoPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStreamVideoPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStreamVideoPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStreamVideoPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStreamVideoPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStreamVideoPlayer, 3165508734);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AStreamVideoPlayer>()
	{
		return AStreamVideoPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStreamVideoPlayer(Z_Construct_UClass_AStreamVideoPlayer, &AStreamVideoPlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AStreamVideoPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStreamVideoPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
