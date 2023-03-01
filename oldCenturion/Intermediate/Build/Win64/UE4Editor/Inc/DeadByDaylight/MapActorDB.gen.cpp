// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MapActorDB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapActorDB() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorDB_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorDB();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EMapActorCategory();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapActorDB::execCopyListMinusCategories)
	{
		P_GET_TARRAY_REF(EMapActorCategory,Z_Param_Out_Categories);
		P_GET_TARRAY_REF(EMapActorCategory,Z_Param_Out_categoriesToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EMapActorCategory>*)Z_Param__Result=P_THIS->CopyListMinusCategories(Z_Param_Out_Categories,Z_Param_Out_categoriesToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapActorDB::execGetRandom)
	{
		P_GET_ENUM(EMapActorCategory,Z_Param_category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetRandom(EMapActorCategory(Z_Param_category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapActorDB::execGetUniqueRandom)
	{
		P_GET_TARRAY_REF(EMapActorCategory,Z_Param_Out_categories);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetUniqueRandom(Z_Param_Out_categories,Z_Param_count);
		P_NATIVE_END;
	}
	void UMapActorDB::StaticRegisterNativesUMapActorDB()
	{
		UClass* Class = UMapActorDB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyListMinusCategories", &UMapActorDB::execCopyListMinusCategories },
			{ "GetRandom", &UMapActorDB::execGetRandom },
			{ "GetUniqueRandom", &UMapActorDB::execGetUniqueRandom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics
	{
		struct MapActorDB_eventCopyListMinusCategories_Parms
		{
			TArray<EMapActorCategory> Categories;
			TArray<EMapActorCategory> categoriesToRemove;
			TArray<EMapActorCategory> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_categoriesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_categoriesToRemove;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_categoriesToRemove_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_categoriesToRemove_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Categories_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Categories_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventCopyListMinusCategories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove = { "categoriesToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventCopyListMinusCategories_Parms, categoriesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_Inner = { "categoriesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventCopyListMinusCategories_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_categoriesToRemove_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::NewProp_Categories_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapActorDB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapActorDB, nullptr, "CopyListMinusCategories", nullptr, nullptr, sizeof(MapActorDB_eventCopyListMinusCategories_Parms), Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapActorDB_GetRandom_Statics
	{
		struct MapActorDB_eventGetRandom_Parms
		{
			EMapActorCategory category;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventGetRandom_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventGetRandom_Parms, category), Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::NewProp_category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::NewProp_category_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapActorDB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapActorDB, nullptr, "GetRandom", nullptr, nullptr, sizeof(MapActorDB_eventGetRandom_Parms), Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapActorDB_GetRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapActorDB_GetRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics
	{
		struct MapActorDB_eventGetUniqueRandom_Parms
		{
			TArray<EMapActorCategory> categories;
			int32 count;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_categories;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_categories_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_categories_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventGetUniqueRandom_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventGetUniqueRandom_Parms, count), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories = { "categories", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorDB_eventGetUniqueRandom_Parms, categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_Inner = { "categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::NewProp_categories_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapActorDB.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapActorDB, nullptr, "GetUniqueRandom", nullptr, nullptr, sizeof(MapActorDB_eventGetUniqueRandom_Parms), Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapActorDB_GetUniqueRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapActorDB_GetUniqueRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapActorDB_NoRegister()
	{
		return UMapActorDB::StaticClass();
	}
	struct Z_Construct_UClass_UMapActorDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapActorDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapActorDB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapActorDB_CopyListMinusCategories, "CopyListMinusCategories" }, // 2853655422
		{ &Z_Construct_UFunction_UMapActorDB_GetRandom, "GetRandom" }, // 2175302572
		{ &Z_Construct_UFunction_UMapActorDB_GetUniqueRandom, "GetUniqueRandom" }, // 1812863009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapActorDB_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapActorDB.h" },
		{ "ModuleRelativePath", "Public/MapActorDB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapActorDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapActorDB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapActorDB_Statics::ClassParams = {
		&UMapActorDB::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMapActorDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapActorDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapActorDB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapActorDB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapActorDB, 3268742729);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMapActorDB>()
	{
		return UMapActorDB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapActorDB(Z_Construct_UClass_UMapActorDB, &UMapActorDB::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMapActorDB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapActorDB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
