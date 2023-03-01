// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTooltipUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTooltipUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTooltipUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTooltipUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaTooltipUtilities::execTryCloseActiveTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaTooltipUtilities::TryCloseActiveTooltip();
		P_NATIVE_END;
	}
	void UAtlantaTooltipUtilities::StaticRegisterNativesUAtlantaTooltipUtilities()
	{
		UClass* Class = UAtlantaTooltipUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryCloseActiveTooltip", &UAtlantaTooltipUtilities::execTryCloseActiveTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics
	{
		struct AtlantaTooltipUtilities_eventTryCloseActiveTooltip_Parms
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
	void Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaTooltipUtilities_eventTryCloseActiveTooltip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaTooltipUtilities_eventTryCloseActiveTooltip_Parms), &Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTooltipUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTooltipUtilities, nullptr, "TryCloseActiveTooltip", nullptr, nullptr, sizeof(AtlantaTooltipUtilities_eventTryCloseActiveTooltip_Parms), Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaTooltipUtilities_NoRegister()
	{
		return UAtlantaTooltipUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaTooltipUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaTooltipUtilities_TryCloseActiveTooltip, "TryCloseActiveTooltip" }, // 3587316435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaTooltipUtilities.h" },
		{ "ModuleRelativePath", "Public/AtlantaTooltipUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaTooltipUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::ClassParams = {
		&UAtlantaTooltipUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaTooltipUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaTooltipUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaTooltipUtilities, 1483812771);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaTooltipUtilities>()
	{
		return UAtlantaTooltipUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaTooltipUtilities(Z_Construct_UClass_UAtlantaTooltipUtilities, &UAtlantaTooltipUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaTooltipUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaTooltipUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
