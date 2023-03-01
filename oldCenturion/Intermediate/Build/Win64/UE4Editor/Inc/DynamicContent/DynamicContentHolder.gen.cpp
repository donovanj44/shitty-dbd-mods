// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/DynamicContentHolder.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicContentHolder() {}
// Cross Module References
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDynamicContentHolder_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDynamicContentHolder();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_UDownloadMultiTextureTask_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_ULoadingImagesDataProvider_NoRegister();
	DYNAMICCONTENT_API UClass* Z_Construct_UClass_ULoopBannerProvider_NoRegister();
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FTaskContainer();
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FLRUTextureCache();
// End Cross Module References
	DEFINE_FUNCTION(UDynamicContentHolder::execOnDownloadingTaskComplete)
	{
		P_GET_OBJECT(UDownloadMultiTextureTask,Z_Param_completeTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDownloadingTaskComplete(Z_Param_completeTask);
		P_NATIVE_END;
	}
	void UDynamicContentHolder::StaticRegisterNativesUDynamicContentHolder()
	{
		UClass* Class = UDynamicContentHolder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDownloadingTaskComplete", &UDynamicContentHolder::execOnDownloadingTaskComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics
	{
		struct DynamicContentHolder_eventOnDownloadingTaskComplete_Parms
		{
			UDownloadMultiTextureTask* completeTask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_completeTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::NewProp_completeTask = { "completeTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicContentHolder_eventOnDownloadingTaskComplete_Parms, completeTask), Z_Construct_UClass_UDownloadMultiTextureTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::NewProp_completeTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicContentHolder, nullptr, "OnDownloadingTaskComplete", nullptr, nullptr, sizeof(DynamicContentHolder_eventOnDownloadingTaskComplete_Parms), Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicContentHolder_NoRegister()
	{
		return UDynamicContentHolder::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicContentHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadingImagesDataProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__loadingImagesDataProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventsBannerProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__eventsBannerProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__marketingBannerProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__marketingBannerProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__currentTasks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__loadedTextures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicContentHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicContentHolder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicContentHolder_OnDownloadingTaskComplete, "OnDownloadingTaskComplete" }, // 3874266812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicContentHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicContentHolder.h" },
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadingImagesDataProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadingImagesDataProvider = { "_loadingImagesDataProvider", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicContentHolder, _loadingImagesDataProvider), Z_Construct_UClass_ULoadingImagesDataProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadingImagesDataProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadingImagesDataProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__eventsBannerProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__eventsBannerProvider = { "_eventsBannerProvider", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicContentHolder, _eventsBannerProvider), Z_Construct_UClass_ULoopBannerProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__eventsBannerProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__eventsBannerProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__marketingBannerProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__marketingBannerProvider = { "_marketingBannerProvider", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicContentHolder, _marketingBannerProvider), Z_Construct_UClass_ULoopBannerProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__marketingBannerProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__marketingBannerProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks = { "_currentTasks", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicContentHolder, _currentTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks_Inner = { "_currentTasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaskContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadedTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicContentHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadedTextures = { "_loadedTextures", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicContentHolder, _loadedTextures), Z_Construct_UScriptStruct_FLRUTextureCache, METADATA_PARAMS(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadedTextures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicContentHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadingImagesDataProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__eventsBannerProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__marketingBannerProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__currentTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicContentHolder_Statics::NewProp__loadedTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicContentHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicContentHolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicContentHolder_Statics::ClassParams = {
		&UDynamicContentHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicContentHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicContentHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicContentHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicContentHolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicContentHolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicContentHolder, 1897688849);
	template<> DYNAMICCONTENT_API UClass* StaticClass<UDynamicContentHolder>()
	{
		return UDynamicContentHolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicContentHolder(Z_Construct_UClass_UDynamicContentHolder, &UDynamicContentHolder::StaticClass, TEXT("/Script/DynamicContent"), TEXT("UDynamicContentHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicContentHolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
