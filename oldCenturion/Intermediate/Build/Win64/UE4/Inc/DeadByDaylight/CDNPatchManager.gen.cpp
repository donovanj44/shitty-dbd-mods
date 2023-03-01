// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CDNPatchManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDNPatchManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCDNPatchManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCDNPatchManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPendingContent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCDNPatchManager::execOnInstallFailed)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_errorText);
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstallFailed(Z_Param_errorText,Z_Param_errorCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDNPatchManager::execOnInstallSucceeded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstallSucceeded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDNPatchManager::execOnRequestFailed)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_errorText);
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestFailed(Z_Param_errorText,Z_Param_errorCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCDNPatchManager::execOnRequestSucceeded)
	{
		P_GET_OBJECT(UAtlantaPendingContent,Z_Param_pendingContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestSucceeded(Z_Param_pendingContent);
		P_NATIVE_END;
	}
	void UCDNPatchManager::StaticRegisterNativesUCDNPatchManager()
	{
		UClass* Class = UCDNPatchManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInstallFailed", &UCDNPatchManager::execOnInstallFailed },
			{ "OnInstallSucceeded", &UCDNPatchManager::execOnInstallSucceeded },
			{ "OnRequestFailed", &UCDNPatchManager::execOnRequestFailed },
			{ "OnRequestSucceeded", &UCDNPatchManager::execOnRequestSucceeded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics
	{
		struct CDNPatchManager_eventOnInstallFailed_Parms
		{
			FText errorText;
			int32 errorCode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_errorText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDNPatchManager_eventOnInstallFailed_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::NewProp_errorText = { "errorText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDNPatchManager_eventOnInstallFailed_Parms, errorText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::NewProp_errorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::NewProp_errorText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDNPatchManager, nullptr, "OnInstallFailed", nullptr, nullptr, sizeof(CDNPatchManager_eventOnInstallFailed_Parms), Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDNPatchManager, nullptr, "OnInstallSucceeded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics
	{
		struct CDNPatchManager_eventOnRequestFailed_Parms
		{
			FText errorText;
			int32 errorCode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_errorText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDNPatchManager_eventOnRequestFailed_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::NewProp_errorText = { "errorText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDNPatchManager_eventOnRequestFailed_Parms, errorText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::NewProp_errorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::NewProp_errorText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDNPatchManager, nullptr, "OnRequestFailed", nullptr, nullptr, sizeof(CDNPatchManager_eventOnRequestFailed_Parms), Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics
	{
		struct CDNPatchManager_eventOnRequestSucceeded_Parms
		{
			UAtlantaPendingContent* pendingContent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pendingContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::NewProp_pendingContent = { "pendingContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDNPatchManager_eventOnRequestSucceeded_Parms, pendingContent), Z_Construct_UClass_UAtlantaPendingContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::NewProp_pendingContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCDNPatchManager, nullptr, "OnRequestSucceeded", nullptr, nullptr, sizeof(CDNPatchManager_eventOnRequestSucceeded_Parms), Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCDNPatchManager_NoRegister()
	{
		return UCDNPatchManager::StaticClass();
	}
	struct Z_Construct_UClass_UCDNPatchManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MobilePendingContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__MobilePendingContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentToInstall_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__contentToInstall;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__contentToInstall_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__contentToInstall_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__remainingManifestsToInstall_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__remainingManifestsToInstall;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__remainingManifestsToInstall_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentContentToInstall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentContentToInstall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakMountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakMountPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PakOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstallDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDNPatchManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCDNPatchManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCDNPatchManager_OnInstallFailed, "OnInstallFailed" }, // 479747082
		{ &Z_Construct_UFunction_UCDNPatchManager_OnInstallSucceeded, "OnInstallSucceeded" }, // 2489666869
		{ &Z_Construct_UFunction_UCDNPatchManager_OnRequestFailed, "OnRequestFailed" }, // 3967985175
		{ &Z_Construct_UFunction_UCDNPatchManager_OnRequestSucceeded, "OnRequestSucceeded" }, // 1849778166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CDNPatchManager.h" },
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__MobilePendingContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__MobilePendingContent = { "_MobilePendingContent", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, _MobilePendingContent), Z_Construct_UClass_UAtlantaPendingContent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__MobilePendingContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__MobilePendingContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall = { "_contentToInstall", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, _contentToInstall), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_Key_KeyProp = { "_contentToInstall_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_ValueProp = { "_contentToInstall", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAtlantaPendingContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall = { "_remainingManifestsToInstall", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, _remainingManifestsToInstall), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall_Inner = { "_remainingManifestsToInstall", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__currentContentToInstall_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__currentContentToInstall = { "_currentContentToInstall", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, _currentContentToInstall), Z_Construct_UClass_UAtlantaPendingContent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__currentContentToInstall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__currentContentToInstall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, _gameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakMountPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakMountPoint = { "PakMountPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, PakMountPoint), METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakMountPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakMountPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakOrder = { "PakOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, PakOrder), METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_InstallDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CDNPatchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_InstallDirectory = { "InstallDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDNPatchManager, InstallDirectory), METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_InstallDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_InstallDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDNPatchManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__MobilePendingContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__contentToInstall_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__remainingManifestsToInstall_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__currentContentToInstall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakMountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_PakOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDNPatchManager_Statics::NewProp_InstallDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDNPatchManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDNPatchManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDNPatchManager_Statics::ClassParams = {
		&UCDNPatchManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCDNPatchManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDNPatchManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDNPatchManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDNPatchManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDNPatchManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDNPatchManager, 63539534);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCDNPatchManager>()
	{
		return UCDNPatchManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDNPatchManager(Z_Construct_UClass_UCDNPatchManager, &UCDNPatchManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCDNPatchManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDNPatchManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
