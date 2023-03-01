// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/NetUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetUtils() {}
// Cross Module References
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UNetUtils_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UNetUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNetUtils::execIsDedicatedServerInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNetUtils::IsDedicatedServerInstance(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	void UNetUtils::StaticRegisterNativesUNetUtils()
	{
		UClass* Class = UNetUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDedicatedServerInstance", &UNetUtils::execIsDedicatedServerInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics
	{
		struct NetUtils_eventIsDedicatedServerInstance_Parms
		{
			const UObject* worldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NetUtils_eventIsDedicatedServerInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NetUtils_eventIsDedicatedServerInstance_Parms), &Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetUtils_eventIsDedicatedServerInstance_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetUtils, nullptr, "IsDedicatedServerInstance", nullptr, nullptr, sizeof(NetUtils_eventIsDedicatedServerInstance_Parms), Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetUtils_NoRegister()
	{
		return UNetUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNetUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetUtils_IsDedicatedServerInstance, "IsDedicatedServerInstance" }, // 2927301702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetUtils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NetUtils.h" },
		{ "ModuleRelativePath", "Public/NetUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetUtils_Statics::ClassParams = {
		&UNetUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetUtils, 1531352361);
	template<> NETWORKUTILITIES_API UClass* StaticClass<UNetUtils>()
	{
		return UNetUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetUtils(Z_Construct_UClass_UNetUtils, &UNetUtils::StaticClass, TEXT("/Script/NetworkUtilities"), TEXT("UNetUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
