// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAudio/Public/AudioUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioUtilities() {}
// Cross Module References
	DBDAUDIO_API UClass* Z_Construct_UClass_UAudioUtilities_NoRegister();
	DBDAUDIO_API UClass* Z_Construct_UClass_UAudioUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAudioUtilities::execPostAkAudioEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_audioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioUtilities::PostAkAudioEvent(Z_Param_audioEvent);
		P_NATIVE_END;
	}
	void UAudioUtilities::StaticRegisterNativesUAudioUtilities()
	{
		UClass* Class = UAudioUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostAkAudioEvent", &UAudioUtilities::execPostAkAudioEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics
	{
		struct AudioUtilities_eventPostAkAudioEvent_Parms
		{
			UAkAudioEvent* audioEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::NewProp_audioEvent = { "audioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioUtilities_eventPostAkAudioEvent_Parms, audioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::NewProp_audioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioUtilities, nullptr, "PostAkAudioEvent", nullptr, nullptr, sizeof(AudioUtilities_eventPostAkAudioEvent_Parms), Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioUtilities_NoRegister()
	{
		return UAudioUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UAudioUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioUtilities_PostAkAudioEvent, "PostAkAudioEvent" }, // 1782201770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AudioUtilities.h" },
		{ "ModuleRelativePath", "Public/AudioUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioUtilities_Statics::ClassParams = {
		&UAudioUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioUtilities, 121485433);
	template<> DBDAUDIO_API UClass* StaticClass<UAudioUtilities>()
	{
		return UAudioUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioUtilities(Z_Construct_UClass_UAudioUtilities, &UAudioUtilities::StaticClass, TEXT("/Script/DBDAudio"), TEXT("UAudioUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
