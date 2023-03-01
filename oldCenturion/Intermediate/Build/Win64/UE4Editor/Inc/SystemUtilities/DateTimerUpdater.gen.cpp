// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/DateTimerUpdater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimerUpdater() {}
// Cross Module References
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UDateTimerUpdater_NoRegister();
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UDateTimerUpdater();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UDateTimeProvider_NoRegister();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDateTimerArray();
// End Cross Module References
	void UDateTimerUpdater::StaticRegisterNativesUDateTimerUpdater()
	{
	}
	UClass* Z_Construct_UClass_UDateTimerUpdater_NoRegister()
	{
		return UDateTimerUpdater::StaticClass();
	}
	struct Z_Construct_UClass_UDateTimerUpdater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dateTimeProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__dateTimeProvider;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__dateTimeProvider_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dateTimeProvider_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__timers;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__timers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timers_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDateTimerUpdater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimerUpdater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DateTimerUpdater.h" },
		{ "ModuleRelativePath", "Public/DateTimerUpdater.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/DateTimerUpdater.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider = { "_dateTimeProvider", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDateTimerUpdater, _dateTimeProvider), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_Key_KeyProp = { "_dateTimeProvider_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDateTimeProvider_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_ValueProp = { "_dateTimeProvider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDateTimeProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_MetaData[] = {
		{ "ModuleRelativePath", "Public/DateTimerUpdater.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers = { "_timers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDateTimerUpdater, _timers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_Key_KeyProp = { "_timers_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDateTimeProvider_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_ValueProp = { "_timers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDateTimerArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDateTimerUpdater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__dateTimeProvider_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDateTimerUpdater_Statics::NewProp__timers_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDateTimerUpdater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDateTimerUpdater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDateTimerUpdater_Statics::ClassParams = {
		&UDateTimerUpdater::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDateTimerUpdater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimerUpdater_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDateTimerUpdater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimerUpdater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDateTimerUpdater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDateTimerUpdater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDateTimerUpdater, 193978226);
	template<> SYSTEMUTILITIES_API UClass* StaticClass<UDateTimerUpdater>()
	{
		return UDateTimerUpdater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDateTimerUpdater(Z_Construct_UClass_UDateTimerUpdater, &UDateTimerUpdater::StaticClass, TEXT("/Script/SystemUtilities"), TEXT("UDateTimerUpdater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDateTimerUpdater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
