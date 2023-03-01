// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathBuilder_EQS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathBuilder_EQS() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_EQS_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_EQS();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void UPathBuilder_EQS::StaticRegisterNativesUPathBuilder_EQS()
	{
	}
	UClass* Z_Construct_UClass_UPathBuilder_EQS_NoRegister()
	{
		return UPathBuilder_EQS::StaticClass();
	}
	struct Z_Construct_UClass_UPathBuilder_EQS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pendingEQSRequestBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pendingEQSRequestBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeToSinglePathPoint_MetaData[];
#endif
		static void NewProp_MergeToSinglePathPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergeToSinglePathPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbMaxEQSRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbMaxEQSRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathBuilder_EQS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EQS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathBuilder_EQS.h" },
		{ "ModuleRelativePath", "Public/PathBuilder_EQS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp__pendingEQSRequestBuilder_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder_EQS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp__pendingEQSRequestBuilder = { "_pendingEQSRequestBuilder", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EQS, _pendingEQSRequestBuilder), Z_Construct_UClass_UPathBuilder_EQS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp__pendingEQSRequestBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp__pendingEQSRequestBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint_MetaData[] = {
		{ "Category", "PathBuilder_EQS" },
		{ "ModuleRelativePath", "Public/PathBuilder_EQS.h" },
	};
#endif
	void Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint_SetBit(void* Obj)
	{
		((UPathBuilder_EQS*)Obj)->MergeToSinglePathPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint = { "MergeToSinglePathPoint", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPathBuilder_EQS), &Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_NbMaxEQSRequests_MetaData[] = {
		{ "Category", "PathBuilder_EQS" },
		{ "ModuleRelativePath", "Public/PathBuilder_EQS.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_NbMaxEQSRequests = { "NbMaxEQSRequests", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EQS, NbMaxEQSRequests), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_NbMaxEQSRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_NbMaxEQSRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "Category", "PathBuilder_EQS" },
		{ "ModuleRelativePath", "Public/PathBuilder_EQS.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder_EQS, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_EQSRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathBuilder_EQS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp__pendingEQSRequestBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_MergeToSinglePathPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_NbMaxEQSRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_EQS_Statics::NewProp_EQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathBuilder_EQS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathBuilder_EQS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathBuilder_EQS_Statics::ClassParams = {
		&UPathBuilder_EQS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathBuilder_EQS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EQS_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_EQS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_EQS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathBuilder_EQS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathBuilder_EQS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathBuilder_EQS, 304757586);
	template<> DBDBOTS_API UClass* StaticClass<UPathBuilder_EQS>()
	{
		return UPathBuilder_EQS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathBuilder_EQS(Z_Construct_UClass_UPathBuilder_EQS, &UPathBuilder_EQS::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathBuilder_EQS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathBuilder_EQS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
