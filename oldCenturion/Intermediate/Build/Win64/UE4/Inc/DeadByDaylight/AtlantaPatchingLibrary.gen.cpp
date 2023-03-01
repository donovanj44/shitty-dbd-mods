// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaPatchingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPatchingLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPendingContent_NoRegister();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPatchingLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPatchingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaInstalledContent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventAtlantaPatchingLibraryOnSucceeded_Parms
		{
			UAtlantaPendingContent* MobilePendingContent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobilePendingContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::NewProp_MobilePendingContent = { "MobilePendingContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnSucceeded_Parms, MobilePendingContent), Z_Construct_UClass_UAtlantaPendingContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::NewProp_MobilePendingContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "AtlantaPatchingLibraryOnSucceeded__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnSucceeded_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventAtlantaPatchingLibraryOnFailed_Parms
		{
			FText ErrorText;
			int32 ErrorCode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnFailed_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnFailed_Parms, ErrorText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::NewProp_ErrorText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "AtlantaPatchingLibraryOnFailed__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventAtlantaPatchingLibraryOnFailed_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAtlantaPatchingLibrary::execGetActiveDeviceProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAtlantaPatchingLibrary::GetActiveDeviceProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaPatchingLibrary::execGetInstalledContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InstallDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_ManifestFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtlantaInstalledContent**)Z_Param__Result=UAtlantaPatchingLibrary::GetInstalledContent(Z_Param_InstallDirectory,Z_Param_ManifestFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaPatchingLibrary::execGetSupportedPlatformNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UAtlantaPatchingLibrary::GetSupportedPlatformNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaPatchingLibrary::execHasActiveWiFiConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaPatchingLibrary::HasActiveWiFiConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaPatchingLibrary::execPrintPakLocations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtlantaPatchingLibrary::PrintPakLocations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaPatchingLibrary::execRequestContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RemoteManifestURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_CloudURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InstallDirectory);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSucceeded);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailed);
		P_GET_OBJECT(UAtlantaPendingContent,Z_Param_MobilePendingContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtlantaPatchingLibrary::RequestContent(Z_Param_RemoteManifestURL,Z_Param_CloudURL,Z_Param_InstallDirectory,FAtlantaPatchingLibraryOnSucceeded(Z_Param_OnSucceeded),FAtlantaPatchingLibraryOnFailed(Z_Param_OnFailed),Z_Param_MobilePendingContent);
		P_NATIVE_END;
	}
	void UAtlantaPatchingLibrary::StaticRegisterNativesUAtlantaPatchingLibrary()
	{
		UClass* Class = UAtlantaPatchingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveDeviceProfileName", &UAtlantaPatchingLibrary::execGetActiveDeviceProfileName },
			{ "GetInstalledContent", &UAtlantaPatchingLibrary::execGetInstalledContent },
			{ "GetSupportedPlatformNames", &UAtlantaPatchingLibrary::execGetSupportedPlatformNames },
			{ "HasActiveWiFiConnection", &UAtlantaPatchingLibrary::execHasActiveWiFiConnection },
			{ "PrintPakLocations", &UAtlantaPatchingLibrary::execPrintPakLocations },
			{ "RequestContent", &UAtlantaPatchingLibrary::execRequestContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics
	{
		struct AtlantaPatchingLibrary_eventGetActiveDeviceProfileName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventGetActiveDeviceProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPatchingLibrary, nullptr, "GetActiveDeviceProfileName", nullptr, nullptr, sizeof(AtlantaPatchingLibrary_eventGetActiveDeviceProfileName_Parms), Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics
	{
		struct AtlantaPatchingLibrary_eventGetInstalledContent_Parms
		{
			FString InstallDirectory;
			FString ManifestFilename;
			UAtlantaInstalledContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManifestFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ManifestFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstallDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventGetInstalledContent_Parms, ReturnValue), Z_Construct_UClass_UAtlantaInstalledContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ManifestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ManifestFilename = { "ManifestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventGetInstalledContent_Parms, ManifestFilename), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ManifestFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ManifestFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory = { "InstallDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventGetInstalledContent_Parms, InstallDirectory), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_ManifestFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPatchingLibrary, nullptr, "GetInstalledContent", nullptr, nullptr, sizeof(AtlantaPatchingLibrary_eventGetInstalledContent_Parms), Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics
	{
		struct AtlantaPatchingLibrary_eventGetSupportedPlatformNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventGetSupportedPlatformNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPatchingLibrary, nullptr, "GetSupportedPlatformNames", nullptr, nullptr, sizeof(AtlantaPatchingLibrary_eventGetSupportedPlatformNames_Parms), Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics
	{
		struct AtlantaPatchingLibrary_eventHasActiveWiFiConnection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaPatchingLibrary_eventHasActiveWiFiConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaPatchingLibrary_eventHasActiveWiFiConnection_Parms), &Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPatchingLibrary, nullptr, "HasActiveWiFiConnection", nullptr, nullptr, sizeof(AtlantaPatchingLibrary_eventHasActiveWiFiConnection_Parms), Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPatchingLibrary, nullptr, "PrintPakLocations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics
	{
		struct AtlantaPatchingLibrary_eventRequestContent_Parms
		{
			FString RemoteManifestURL;
			FString CloudURL;
			FString InstallDirectory;
			FScriptDelegate OnSucceeded;
			FScriptDelegate OnFailed;
			UAtlantaPendingContent* MobilePendingContent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobilePendingContent;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnFailed;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSucceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstallDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CloudURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteManifestURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteManifestURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_MobilePendingContent = { "MobilePendingContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventRequestContent_Parms, MobilePendingContent), Z_Construct_UClass_UAtlantaPendingContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventRequestContent_Parms, OnFailed), Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnFailed__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_OnSucceeded = { "OnSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventRequestContent_Parms, OnSucceeded), Z_Construct_UDelegateFunction_DeadByDaylight_AtlantaPatchingLibraryOnSucceeded__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory = { "InstallDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventRequestContent_Parms, InstallDirectory), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_CloudURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_CloudURL = { "CloudURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventRequestContent_Parms, CloudURL), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_CloudURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_CloudURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL = { "RemoteManifestURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaPatchingLibrary_eventRequestContent_Parms, RemoteManifestURL), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_MobilePendingContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_OnFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_OnSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_CloudURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPatchingLibrary, nullptr, "RequestContent", nullptr, nullptr, sizeof(AtlantaPatchingLibrary_eventRequestContent_Parms), Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaPatchingLibrary_NoRegister()
	{
		return UAtlantaPatchingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaPatchingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaPatchingLibrary_GetActiveDeviceProfileName, "GetActiveDeviceProfileName" }, // 3537486347
		{ &Z_Construct_UFunction_UAtlantaPatchingLibrary_GetInstalledContent, "GetInstalledContent" }, // 4270260459
		{ &Z_Construct_UFunction_UAtlantaPatchingLibrary_GetSupportedPlatformNames, "GetSupportedPlatformNames" }, // 370763235
		{ &Z_Construct_UFunction_UAtlantaPatchingLibrary_HasActiveWiFiConnection, "HasActiveWiFiConnection" }, // 147521625
		{ &Z_Construct_UFunction_UAtlantaPatchingLibrary_PrintPakLocations, "PrintPakLocations" }, // 987727822
		{ &Z_Construct_UFunction_UAtlantaPatchingLibrary_RequestContent, "RequestContent" }, // 1265544330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaPatchingLibrary.h" },
		{ "ModuleRelativePath", "Public/AtlantaPatchingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaPatchingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::ClassParams = {
		&UAtlantaPatchingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaPatchingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaPatchingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaPatchingLibrary, 2780971399);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaPatchingLibrary>()
	{
		return UAtlantaPatchingLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaPatchingLibrary(Z_Construct_UClass_UAtlantaPatchingLibrary, &UAtlantaPatchingLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaPatchingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaPatchingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
