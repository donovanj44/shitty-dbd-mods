// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPersistentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPersistentData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPersistentData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPersistentData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCloudInventoryItem();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPersistentData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGamePersistentData();
// End Cross Module References
	void UDBDPersistentData::StaticRegisterNativesUDBDPersistentData()
	{
	}
	UClass* Z_Construct_UClass_UDBDPersistentData_NoRegister()
	{
		return UDBDPersistentData::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPersistentData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloudInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cloudInventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cloudInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localPlayerPersistentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__localPlayerPersistentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerIdToPersistentDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__playerIdToPersistentDataMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__playerIdToPersistentDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__playerIdToPersistentDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__keepDataIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__keepDataIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__keepDataIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gamePersistentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gamePersistentData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPersistentData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPersistentData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDPersistentData.h" },
		{ "ModuleRelativePath", "Public/DBDPersistentData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory = { "_cloudInventory", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPersistentData, _cloudInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory_Inner = { "_cloudInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCloudInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__localPlayerPersistentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__localPlayerPersistentData = { "_localPlayerPersistentData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPersistentData, _localPlayerPersistentData), Z_Construct_UScriptStruct_FPlayerPersistentData, METADATA_PARAMS(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__localPlayerPersistentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__localPlayerPersistentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap = { "_playerIdToPersistentDataMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPersistentData, _playerIdToPersistentDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_Key_KeyProp = { "_playerIdToPersistentDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_ValueProp = { "_playerIdToPersistentDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPlayerPersistentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs = { "_keepDataIDs", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPersistentData, _keepDataIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs_Inner = { "_keepDataIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__gamePersistentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__gamePersistentData = { "_gamePersistentData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPersistentData, _gamePersistentData), Z_Construct_UScriptStruct_FGamePersistentData, METADATA_PARAMS(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__gamePersistentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__gamePersistentData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDPersistentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__cloudInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__localPlayerPersistentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__playerIdToPersistentDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__keepDataIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPersistentData_Statics::NewProp__gamePersistentData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPersistentData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPersistentData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPersistentData_Statics::ClassParams = {
		&UDBDPersistentData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDPersistentData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDPersistentData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPersistentData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPersistentData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPersistentData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPersistentData, 1180007870);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDPersistentData>()
	{
		return UDBDPersistentData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPersistentData(Z_Construct_UClass_UDBDPersistentData, &UDBDPersistentData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDPersistentData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPersistentData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
