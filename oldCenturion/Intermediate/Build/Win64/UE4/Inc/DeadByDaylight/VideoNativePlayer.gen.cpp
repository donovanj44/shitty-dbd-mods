// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VideoNativePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoNativePlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AVideoNativePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AVideoNativePlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVideoPlayer_NoRegister();
// End Cross Module References
	void AVideoNativePlayer::StaticRegisterNativesAVideoNativePlayer()
	{
	}
	UClass* Z_Construct_UClass_AVideoNativePlayer_NoRegister()
	{
		return AVideoNativePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AVideoNativePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVideoNativePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoNativePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VideoNativePlayer.h" },
		{ "ModuleRelativePath", "Public/VideoNativePlayer.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVideoNativePlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVideoPlayer_NoRegister, (int32)VTABLE_OFFSET(AVideoNativePlayer, IVideoPlayer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVideoNativePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVideoNativePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVideoNativePlayer_Statics::ClassParams = {
		&AVideoNativePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVideoNativePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVideoNativePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVideoNativePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVideoNativePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVideoNativePlayer, 2681266739);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AVideoNativePlayer>()
	{
		return AVideoNativePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVideoNativePlayer(Z_Construct_UClass_AVideoNativePlayer, &AVideoNativePlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AVideoNativePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVideoNativePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
