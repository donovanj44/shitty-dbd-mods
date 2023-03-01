// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/InterpTrackInstAkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackInstAkAudioEvent::StaticRegisterNativesUInterpTrackInstAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent_NoRegister()
	{
		return UInterpTrackInstAkAudioEvent::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics
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
	UObject* (*const Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterpTrackInstAkAudioEvent.h" },
		{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAkAudioEvent, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::NewProp_LastUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::NewProp_LastUpdatePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::NewProp_LastUpdatePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstAkAudioEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::ClassParams = {
		&UInterpTrackInstAkAudioEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstAkAudioEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstAkAudioEvent, 3849762234);
	template<> AKAUDIO_API UClass* StaticClass<UInterpTrackInstAkAudioEvent>()
	{
		return UInterpTrackInstAkAudioEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAkAudioEvent(Z_Construct_UClass_UInterpTrackInstAkAudioEvent, &UInterpTrackInstAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackInstAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
