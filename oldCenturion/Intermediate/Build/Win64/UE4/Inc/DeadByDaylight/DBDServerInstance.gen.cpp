// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDServerInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDServerInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDServerInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDServerInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDHostSettingsParamsBase_NoRegister();
// End Cross Module References
	void UDBDServerInstance::StaticRegisterNativesUDBDServerInstance()
	{
	}
	UClass* Z_Construct_UClass_UDBDServerInstance_NoRegister()
	{
		return UDBDServerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDBDServerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pendingSessionUpdates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pendingSessionUpdates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pendingSessionUpdates_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDServerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDServerInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDServerInstance.h" },
		{ "ModuleRelativePath", "Public/DBDServerInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDServerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDServerInstance, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDServerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates = { "_pendingSessionUpdates", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDServerInstance, _pendingSessionUpdates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates_Inner = { "_pendingSessionUpdates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDHostSettingsParamsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDServerInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDServerInstance_Statics::NewProp__pendingSessionUpdates_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDServerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDServerInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDServerInstance_Statics::ClassParams = {
		&UDBDServerInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDServerInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDServerInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDServerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDServerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDServerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDServerInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDServerInstance, 2189086146);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDServerInstance>()
	{
		return UDBDServerInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDServerInstance(Z_Construct_UClass_UDBDServerInstance, &UDBDServerInstance::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDServerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDServerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
