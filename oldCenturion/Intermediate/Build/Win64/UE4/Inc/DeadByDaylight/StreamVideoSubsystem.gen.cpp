// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StreamVideoSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamVideoSubsystem() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStreamVideoSubsystem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStreamVideoSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStreamVideoFactory_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStreamVideoManager_NoRegister();
// End Cross Module References
	void UStreamVideoSubsystem::StaticRegisterNativesUStreamVideoSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UStreamVideoSubsystem_NoRegister()
	{
		return UStreamVideoSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UStreamVideoSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamVideoFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamVideoFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamVideoManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamVideoManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamVideoSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamVideoSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreamVideoSubsystem.h" },
		{ "ModuleRelativePath", "Public/StreamVideoSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoFactory = { "StreamVideoFactory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamVideoSubsystem, StreamVideoFactory), Z_Construct_UClass_UStreamVideoFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreamVideoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoManager = { "StreamVideoManager", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamVideoSubsystem, StreamVideoManager), Z_Construct_UClass_UStreamVideoManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamVideoSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamVideoSubsystem_Statics::NewProp_StreamVideoManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamVideoSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamVideoSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamVideoSubsystem_Statics::ClassParams = {
		&UStreamVideoSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamVideoSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamVideoSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamVideoSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamVideoSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamVideoSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamVideoSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamVideoSubsystem, 720060333);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStreamVideoSubsystem>()
	{
		return UStreamVideoSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamVideoSubsystem(Z_Construct_UClass_UStreamVideoSubsystem, &UStreamVideoSubsystem::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStreamVideoSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamVideoSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
