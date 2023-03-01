// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ContentScheduleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentScheduleManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UContentScheduleManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UContentScheduleManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
// End Cross Module References
	void UContentScheduleManager::StaticRegisterNativesUContentScheduleManager()
	{
	}
	UClass* Z_Construct_UClass_UContentScheduleManager_NoRegister()
	{
		return UContentScheduleManager::StaticClass();
	}
	struct Z_Construct_UClass_UContentScheduleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availableMapLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__availableMapLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentScheduleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentScheduleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentScheduleManager.h" },
		{ "ModuleRelativePath", "Public/ContentScheduleManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentScheduleManager_Statics::NewProp__availableMapLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentScheduleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContentScheduleManager_Statics::NewProp__availableMapLibrary = { "_availableMapLibrary", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UContentScheduleManager, _availableMapLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContentScheduleManager_Statics::NewProp__availableMapLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentScheduleManager_Statics::NewProp__availableMapLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentScheduleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentScheduleManager_Statics::NewProp__availableMapLibrary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentScheduleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentScheduleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContentScheduleManager_Statics::ClassParams = {
		&UContentScheduleManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentScheduleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentScheduleManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentScheduleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentScheduleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentScheduleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContentScheduleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContentScheduleManager, 793177497);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UContentScheduleManager>()
	{
		return UContentScheduleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContentScheduleManager(Z_Construct_UClass_UContentScheduleManager, &UContentScheduleManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UContentScheduleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentScheduleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
