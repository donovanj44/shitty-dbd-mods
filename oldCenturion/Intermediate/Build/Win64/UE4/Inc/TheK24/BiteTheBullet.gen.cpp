// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/BiteTheBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiteTheBullet() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UBiteTheBullet_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UBiteTheBullet();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	void UBiteTheBullet::StaticRegisterNativesUBiteTheBullet()
	{
	}
	UClass* Z_Construct_UClass_UBiteTheBullet_NoRegister()
	{
		return UBiteTheBullet::StaticClass();
	}
	struct Z_Construct_UClass_UBiteTheBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__server_healTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__server_healTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBiteTheBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiteTheBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BiteTheBullet.h" },
		{ "ModuleRelativePath", "Public/BiteTheBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiteTheBullet_Statics::NewProp__server_healTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiteTheBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBiteTheBullet_Statics::NewProp__server_healTarget = { "_server_healTarget", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBiteTheBullet, _server_healTarget), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBiteTheBullet_Statics::NewProp__server_healTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBiteTheBullet_Statics::NewProp__server_healTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBiteTheBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiteTheBullet_Statics::NewProp__server_healTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBiteTheBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBiteTheBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBiteTheBullet_Statics::ClassParams = {
		&UBiteTheBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBiteTheBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBiteTheBullet_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBiteTheBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBiteTheBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBiteTheBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBiteTheBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBiteTheBullet, 599599828);
	template<> THEK24_API UClass* StaticClass<UBiteTheBullet>()
	{
		return UBiteTheBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBiteTheBullet(Z_Construct_UClass_UBiteTheBullet, &UBiteTheBullet::StaticClass, TEXT("/Script/TheK24"), TEXT("UBiteTheBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBiteTheBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
