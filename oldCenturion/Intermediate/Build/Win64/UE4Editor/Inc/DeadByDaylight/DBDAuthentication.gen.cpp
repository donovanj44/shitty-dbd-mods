// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAuthentication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAuthentication() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAuthentication_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAuthentication();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationInfo();
// End Cross Module References
	void UDBDAuthentication::StaticRegisterNativesUDBDAuthentication()
	{
	}
	UClass* Z_Construct_UClass_UDBDAuthentication_NoRegister()
	{
		return UDBDAuthentication::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAuthentication_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__remoteInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__remoteInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__remoteInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__localInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__localInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAuthentication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAuthentication_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAuthentication.h" },
		{ "ModuleRelativePath", "Public/DBDAuthentication.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAuthentication, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos = { "_remoteInfos", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAuthentication, _remoteInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos_Inner = { "_remoteInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAuthenticationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos = { "_localInfos", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAuthentication, _localInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos_Inner = { "_localInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAuthenticationInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAuthentication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__remoteInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAuthentication_Statics::NewProp__localInfos_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAuthentication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAuthentication>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAuthentication_Statics::ClassParams = {
		&UDBDAuthentication::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAuthentication_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAuthentication_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAuthentication_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAuthentication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAuthentication()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAuthentication_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAuthentication, 2080217747);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAuthentication>()
	{
		return UDBDAuthentication::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAuthentication(Z_Construct_UClass_UDBDAuthentication, &UDBDAuthentication::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAuthentication"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAuthentication);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
