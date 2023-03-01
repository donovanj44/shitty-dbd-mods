// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/InterpTrackInstAkAudioRTPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAkAudioRTPC() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackInstAkAudioRTPC::StaticRegisterNativesUInterpTrackInstAkAudioRTPC()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_NoRegister()
	{
		return UInterpTrackInstAkAudioRTPC::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterpTrackInstAkAudioRTPC.h" },
		{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioRTPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioRTPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAkAudioRTPC, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::NewProp_LastUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::NewProp_LastUpdatePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::NewProp_LastUpdatePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstAkAudioRTPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::ClassParams = {
		&UInterpTrackInstAkAudioRTPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstAkAudioRTPC, 2841073225);
	template<> AKAUDIO_API UClass* StaticClass<UInterpTrackInstAkAudioRTPC>()
	{
		return UInterpTrackInstAkAudioRTPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAkAudioRTPC(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC, &UInterpTrackInstAkAudioRTPC::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackInstAkAudioRTPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAkAudioRTPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
