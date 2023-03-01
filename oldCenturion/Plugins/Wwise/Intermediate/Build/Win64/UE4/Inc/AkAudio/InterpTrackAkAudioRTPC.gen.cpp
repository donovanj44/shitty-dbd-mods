// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/InterpTrackAkAudioRTPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioRTPC() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackAkAudioRTPC::StaticRegisterNativesUInterpTrackAkAudioRTPC()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC_NoRegister()
	{
		return UInterpTrackAkAudioRTPC::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueRTPCOnMatineeEnd_MetaData[];
#endif
		static void NewProp_bContinueRTPCOnMatineeEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueRTPCOnMatineeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayOnReverse_MetaData[];
#endif
		static void NewProp_bPlayOnReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayOnReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InterpTrackAkAudioRTPC.h" },
		{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd_MetaData[] = {
		{ "Category", "InterpTrackAkAudioRTPC" },
		{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd_SetBit(void* Obj)
	{
		((UInterpTrackAkAudioRTPC*)Obj)->bContinueRTPCOnMatineeEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd = { "bContinueRTPCOnMatineeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackAkAudioRTPC), &Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse_MetaData[] = {
		{ "Category", "InterpTrackAkAudioRTPC" },
		{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse_SetBit(void* Obj)
	{
		((UInterpTrackAkAudioRTPC*)Obj)->bPlayOnReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse = { "bPlayOnReverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackAkAudioRTPC), &Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_Param_MetaData[] = {
		{ "Category", "InterpTrackAkAudioRTPC" },
		{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackAkAudioRTPC, Param), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bContinueRTPCOnMatineeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_bPlayOnReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::NewProp_Param,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAkAudioRTPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::ClassParams = {
		&UInterpTrackAkAudioRTPC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackAkAudioRTPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioRTPC, 3748593264);
	template<> AKAUDIO_API UClass* StaticClass<UInterpTrackAkAudioRTPC>()
	{
		return UInterpTrackAkAudioRTPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioRTPC(Z_Construct_UClass_UInterpTrackAkAudioRTPC, &UInterpTrackAkAudioRTPC::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackAkAudioRTPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioRTPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
