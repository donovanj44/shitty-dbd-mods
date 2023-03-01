// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/DownloadingTextureTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadingTextureTask() {}
// Cross Module References
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadingTextureTask_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadingTextureTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UAsyncTaskDownloadCacheImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDownloadingTextureTask::execOnDownloadFailed)
	{
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_textureDownloaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDownloadFailed(Z_Param_textureDownloaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDownloadingTextureTask::execOnDownloadSucceeded)
	{
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_textureDownloaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDownloadSucceeded(Z_Param_textureDownloaded);
		P_NATIVE_END;
	}
	void UDownloadingTextureTask::StaticRegisterNativesUDownloadingTextureTask()
	{
		UClass* Class = UDownloadingTextureTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDownloadFailed", &UDownloadingTextureTask::execOnDownloadFailed },
			{ "OnDownloadSucceeded", &UDownloadingTextureTask::execOnDownloadSucceeded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics
	{
		struct DownloadingTextureTask_eventOnDownloadFailed_Parms
		{
			UTexture2DDynamic* textureDownloaded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textureDownloaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::NewProp_textureDownloaded = { "textureDownloaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DownloadingTextureTask_eventOnDownloadFailed_Parms, textureDownloaded), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::NewProp_textureDownloaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DownloadingTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadingTextureTask, nullptr, "OnDownloadFailed", nullptr, nullptr, sizeof(DownloadingTextureTask_eventOnDownloadFailed_Parms), Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics
	{
		struct DownloadingTextureTask_eventOnDownloadSucceeded_Parms
		{
			UTexture2DDynamic* textureDownloaded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textureDownloaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::NewProp_textureDownloaded = { "textureDownloaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DownloadingTextureTask_eventOnDownloadSucceeded_Parms, textureDownloaded), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::NewProp_textureDownloaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DownloadingTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadingTextureTask, nullptr, "OnDownloadSucceeded", nullptr, nullptr, sizeof(DownloadingTextureTask_eventOnDownloadSucceeded_Parms), Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDownloadingTextureTask_NoRegister()
	{
		return UDownloadingTextureTask::StaticClass();
	}
	struct Z_Construct_UClass_UDownloadingTextureTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__downloadedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadingTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__downloadingTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDownloadingTextureTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDownloadingTextureTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadFailed, "OnDownloadFailed" }, // 2248211333
		{ &Z_Construct_UFunction_UDownloadingTextureTask_OnDownloadSucceeded, "OnDownloadSucceeded" }, // 3998051883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadingTextureTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DownloadingTextureTask.h" },
		{ "ModuleRelativePath", "Public/DownloadingTextureTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadedTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadingTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadedTexture = { "_downloadedTexture", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownloadingTextureTask, _downloadedTexture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__url_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadingTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__url = { "_url", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownloadingTextureTask, _url), METADATA_PARAMS(Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadingTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadingTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadingTask = { "_downloadingTask", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownloadingTextureTask, _downloadingTask), Z_Construct_UClass_UAsyncTaskDownloadCacheImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadingTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadingTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDownloadingTextureTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadingTextureTask_Statics::NewProp__downloadingTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDownloadingTextureTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDownloadingTextureTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDownloadingTextureTask_Statics::ClassParams = {
		&UDownloadingTextureTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDownloadingTextureTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadingTextureTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDownloadingTextureTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadingTextureTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDownloadingTextureTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDownloadingTextureTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDownloadingTextureTask, 1593406100);
	template<> DYNAMICCONTENT_API UClass* StaticClass<UDownloadingTextureTask>()
	{
		return UDownloadingTextureTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDownloadingTextureTask(Z_Construct_UClass_UDownloadingTextureTask, &UDownloadingTextureTask::StaticClass, TEXT("/Script/DynamicContent"), TEXT("UDownloadingTextureTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDownloadingTextureTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
