// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaInstalledContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaInstalledContent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaInstalledContent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaInstalledContent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaInstalledContent::execGetFreeDiskSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFreeDiskSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaInstalledContent::execGetInstalledContentSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstalledContentSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaInstalledContent::execMount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PakOrder);
		P_GET_PROPERTY(FStrProperty,Z_Param_MountPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Mount(Z_Param_PakOrder,Z_Param_MountPoint);
		P_NATIVE_END;
	}
	void UAtlantaInstalledContent::StaticRegisterNativesUAtlantaInstalledContent()
	{
		UClass* Class = UAtlantaInstalledContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFreeDiskSpace", &UAtlantaInstalledContent::execGetFreeDiskSpace },
			{ "GetInstalledContentSize", &UAtlantaInstalledContent::execGetInstalledContentSize },
			{ "Mount", &UAtlantaInstalledContent::execMount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics
	{
		struct AtlantaInstalledContent_eventGetFreeDiskSpace_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaInstalledContent_eventGetFreeDiskSpace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaInstalledContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaInstalledContent, nullptr, "GetFreeDiskSpace", nullptr, nullptr, sizeof(AtlantaInstalledContent_eventGetFreeDiskSpace_Parms), Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics
	{
		struct AtlantaInstalledContent_eventGetInstalledContentSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaInstalledContent_eventGetInstalledContentSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaInstalledContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaInstalledContent, nullptr, "GetInstalledContentSize", nullptr, nullptr, sizeof(AtlantaInstalledContent_eventGetInstalledContentSize_Parms), Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics
	{
		struct AtlantaInstalledContent_eventMount_Parms
		{
			int32 PakOrder;
			FString MountPoint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MountPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PakOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaInstalledContent_eventMount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaInstalledContent_eventMount_Parms), &Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_MountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaInstalledContent_eventMount_Parms, MountPoint), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_MountPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_MountPoint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_PakOrder = { "PakOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaInstalledContent_eventMount_Parms, PakOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_MountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::NewProp_PakOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaInstalledContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaInstalledContent, nullptr, "Mount", nullptr, nullptr, sizeof(AtlantaInstalledContent_eventMount_Parms), Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaInstalledContent_Mount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaInstalledContent_Mount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaInstalledContent_NoRegister()
	{
		return UAtlantaInstalledContent::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaInstalledContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaInstalledContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaInstalledContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaInstalledContent_GetFreeDiskSpace, "GetFreeDiskSpace" }, // 2329710472
		{ &Z_Construct_UFunction_UAtlantaInstalledContent_GetInstalledContentSize, "GetInstalledContentSize" }, // 3240391918
		{ &Z_Construct_UFunction_UAtlantaInstalledContent_Mount, "Mount" }, // 2689723417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaInstalledContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaInstalledContent.h" },
		{ "ModuleRelativePath", "Public/AtlantaInstalledContent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaInstalledContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaInstalledContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaInstalledContent_Statics::ClassParams = {
		&UAtlantaInstalledContent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaInstalledContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaInstalledContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaInstalledContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaInstalledContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaInstalledContent, 1455079450);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaInstalledContent>()
	{
		return UAtlantaInstalledContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaInstalledContent(Z_Construct_UClass_UAtlantaInstalledContent, &UAtlantaInstalledContent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaInstalledContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaInstalledContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
