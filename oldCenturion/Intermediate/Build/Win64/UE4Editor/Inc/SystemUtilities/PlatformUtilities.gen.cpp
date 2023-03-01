// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/PlatformUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformUtilities() {}
// Cross Module References
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UPlatformUtilities_NoRegister();
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UPlatformUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformUtilities::execGetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPlatformUtilities::GetPlatform();
		P_NATIVE_END;
	}
	void UPlatformUtilities::StaticRegisterNativesUPlatformUtilities()
	{
		UClass* Class = UPlatformUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlatform", &UPlatformUtilities::execGetPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics
	{
		struct PlatformUtilities_eventGetPlatform_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformUtilities_eventGetPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformUtilities, nullptr, "GetPlatform", nullptr, nullptr, sizeof(PlatformUtilities_eventGetPlatform_Parms), Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformUtilities_GetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformUtilities_GetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformUtilities_NoRegister()
	{
		return UPlatformUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformUtilities_GetPlatform, "GetPlatform" }, // 2159632264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformUtilities.h" },
		{ "ModuleRelativePath", "Public/PlatformUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformUtilities_Statics::ClassParams = {
		&UPlatformUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlatformUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformUtilities, 168538370);
	template<> SYSTEMUTILITIES_API UClass* StaticClass<UPlatformUtilities>()
	{
		return UPlatformUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformUtilities(Z_Construct_UClass_UPlatformUtilities, &UPlatformUtilities::StaticClass, TEXT("/Script/SystemUtilities"), TEXT("UPlatformUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
