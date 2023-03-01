// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TileMatrix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMatrix() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileMatrix_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileMatrix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArrayOfInt32();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FQuadrantInfo();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArrayOfATile();
// End Cross Module References
	void UTileMatrix::StaticRegisterNativesUTileMatrix()
	{
	}
	UClass* Z_Construct_UClass_UTileMatrix_NoRegister()
	{
		return UTileMatrix::StaticClass();
	}
	struct Z_Construct_UClass_UTileMatrix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__quadIndexMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__quadIndexMatrix;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__quadIndexMatrix_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__quadInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__quadInfoArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__quadInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__extraTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__extraTiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__extraTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__matrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__matrix;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__matrix_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileMatrix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMatrix_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileMatrix.h" },
		{ "ModuleRelativePath", "Public/TileMatrix.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileMatrix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix = { "_quadIndexMatrix", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileMatrix, _quadIndexMatrix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix_Inner = { "_quadIndexMatrix", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArrayOfInt32, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileMatrix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray = { "_quadInfoArray", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileMatrix, _quadInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray_Inner = { "_quadInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuadrantInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileMatrix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles = { "_extraTiles", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileMatrix, _extraTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles_Inner = { "_extraTiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileMatrix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles = { "_tiles", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileMatrix, _tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles_Inner = { "_tiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileMatrix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix = { "_matrix", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileMatrix, _matrix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix_Inner = { "_matrix", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FArrayOfATile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadIndexMatrix_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__quadInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__extraTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMatrix_Statics::NewProp__matrix_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileMatrix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileMatrix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileMatrix_Statics::ClassParams = {
		&UTileMatrix::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileMatrix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileMatrix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMatrix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileMatrix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileMatrix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileMatrix, 2735385517);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTileMatrix>()
	{
		return UTileMatrix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileMatrix(Z_Construct_UClass_UTileMatrix, &UTileMatrix::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTileMatrix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileMatrix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
