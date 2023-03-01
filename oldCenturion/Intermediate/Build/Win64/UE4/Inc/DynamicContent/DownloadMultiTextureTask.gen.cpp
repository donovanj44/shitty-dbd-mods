// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/DownloadMultiTextureTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadMultiTextureTask() {}
// Cross Module References
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadMultiTextureTask_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadMultiTextureTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadingTextureTask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDownloadMultiTextureTask::execOnTextureDownloadComplete)
	{
		P_GET_OBJECT(UDownloadingTextureTask,Z_Param_taskCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextureDownloadComplete(Z_Param_taskCompleted);
		P_NATIVE_END;
	}
	void UDownloadMultiTextureTask::StaticRegisterNativesUDownloadMultiTextureTask()
	{
		UClass* Class = UDownloadMultiTextureTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTextureDownloadComplete", &UDownloadMultiTextureTask::execOnTextureDownloadComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics
	{
		struct DownloadMultiTextureTask_eventOnTextureDownloadComplete_Parms
		{
			UDownloadingTextureTask* taskCompleted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_taskCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::NewProp_taskCompleted = { "taskCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DownloadMultiTextureTask_eventOnTextureDownloadComplete_Parms, taskCompleted), Z_Construct_UClass_UDownloadingTextureTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::NewProp_taskCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DownloadMultiTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadMultiTextureTask, nullptr, "OnTextureDownloadComplete", nullptr, nullptr, sizeof(DownloadMultiTextureTask_eventOnTextureDownloadComplete_Parms), Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDownloadMultiTextureTask_NoRegister()
	{
		return UDownloadMultiTextureTask::StaticClass();
	}
	struct Z_Construct_UClass_UDownloadMultiTextureTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__remainingTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__remainingTasks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__downloadedTextures;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__downloadedTextures_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__downloadedTextures_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadingTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__downloadingTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__downloadingTasks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDownloadMultiTextureTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDownloadMultiTextureTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDownloadMultiTextureTask_OnTextureDownloadComplete, "OnTextureDownloadComplete" }, // 1842036322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadMultiTextureTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DownloadMultiTextureTask.h" },
		{ "ModuleRelativePath", "Public/DownloadMultiTextureTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__remainingTasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadMultiTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__remainingTasks = { "_remainingTasks", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownloadMultiTextureTask, _remainingTasks), METADATA_PARAMS(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__remainingTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__remainingTasks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadMultiTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures = { "_downloadedTextures", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownloadMultiTextureTask, _downloadedTextures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_Key_KeyProp = { "_downloadedTextures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_ValueProp = { "_downloadedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadMultiTextureTask.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks = { "_downloadingTasks", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownloadMultiTextureTask, _downloadingTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks_Inner = { "_downloadingTasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDownloadingTextureTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDownloadMultiTextureTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__remainingTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadedTextures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadMultiTextureTask_Statics::NewProp__downloadingTasks_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDownloadMultiTextureTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDownloadMultiTextureTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDownloadMultiTextureTask_Statics::ClassParams = {
		&UDownloadMultiTextureTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDownloadMultiTextureTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadMultiTextureTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDownloadMultiTextureTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDownloadMultiTextureTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDownloadMultiTextureTask, 3371315774);
	template<> DYNAMICCONTENT_API UClass* StaticClass<UDownloadMultiTextureTask>()
	{
		return UDownloadMultiTextureTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDownloadMultiTextureTask(Z_Construct_UClass_UDownloadMultiTextureTask, &UDownloadMultiTextureTask::StaticClass, TEXT("/Script/DynamicContent"), TEXT("UDownloadMultiTextureTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDownloadMultiTextureTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
