// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VersioningUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVersioningUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVersioningUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVersioningUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UVersioningUtilities::execIsVisualRework)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVersioningUtilities::IsVisualRework();
		P_NATIVE_END;
	}
	void UVersioningUtilities::StaticRegisterNativesUVersioningUtilities()
	{
		UClass* Class = UVersioningUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsVisualRework", &UVersioningUtilities::execIsVisualRework },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics
	{
		struct VersioningUtilities_eventIsVisualRework_Parms
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
	void Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VersioningUtilities_eventIsVisualRework_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VersioningUtilities_eventIsVisualRework_Parms), &Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VersioningUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersioningUtilities, nullptr, "IsVisualRework", nullptr, nullptr, sizeof(VersioningUtilities_eventIsVisualRework_Parms), Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVersioningUtilities_IsVisualRework()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVersioningUtilities_IsVisualRework_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVersioningUtilities_NoRegister()
	{
		return UVersioningUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVersioningUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVersioningUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVersioningUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersioningUtilities_IsVisualRework, "IsVisualRework" }, // 316345306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVersioningUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VersioningUtilities.h" },
		{ "ModuleRelativePath", "Public/VersioningUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVersioningUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersioningUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVersioningUtilities_Statics::ClassParams = {
		&UVersioningUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVersioningUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVersioningUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVersioningUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVersioningUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVersioningUtilities, 2473534614);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UVersioningUtilities>()
	{
		return UVersioningUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVersioningUtilities(Z_Construct_UClass_UVersioningUtilities, &UVersioningUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UVersioningUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVersioningUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
