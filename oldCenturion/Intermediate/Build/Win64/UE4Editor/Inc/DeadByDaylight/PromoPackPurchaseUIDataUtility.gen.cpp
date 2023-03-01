// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackPurchaseUIDataUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackPurchaseUIDataUtility() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromoPackPurchaseUIDataUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackPurchaseUIData();
// End Cross Module References
	DEFINE_FUNCTION(UPromoPackPurchaseUIDataUtility::execSetRemainingTimeFromHours)
	{
		P_GET_STRUCT_REF(FPromoPackPurchaseUIData,Z_Param_Out_data);
		P_GET_PROPERTY(FIntProperty,Z_Param_remainHours);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPromoPackPurchaseUIDataUtility::SetRemainingTimeFromHours(Z_Param_Out_data,Z_Param_remainHours);
		P_NATIVE_END;
	}
	void UPromoPackPurchaseUIDataUtility::StaticRegisterNativesUPromoPackPurchaseUIDataUtility()
	{
		UClass* Class = UPromoPackPurchaseUIDataUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRemainingTimeFromHours", &UPromoPackPurchaseUIDataUtility::execSetRemainingTimeFromHours },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics
	{
		struct PromoPackPurchaseUIDataUtility_eventSetRemainingTimeFromHours_Parms
		{
			FPromoPackPurchaseUIData data;
			int32 remainHours;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_remainHours;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::NewProp_remainHours = { "remainHours", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PromoPackPurchaseUIDataUtility_eventSetRemainingTimeFromHours_Parms, remainHours), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PromoPackPurchaseUIDataUtility_eventSetRemainingTimeFromHours_Parms, data), Z_Construct_UScriptStruct_FPromoPackPurchaseUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::NewProp_remainHours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIDataUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPromoPackPurchaseUIDataUtility, nullptr, "SetRemainingTimeFromHours", nullptr, nullptr, sizeof(PromoPackPurchaseUIDataUtility_eventSetRemainingTimeFromHours_Parms), Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_NoRegister()
	{
		return UPromoPackPurchaseUIDataUtility::StaticClass();
	}
	struct Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPromoPackPurchaseUIDataUtility_SetRemainingTimeFromHours, "SetRemainingTimeFromHours" }, // 505759568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PromoPackPurchaseUIDataUtility.h" },
		{ "ModuleRelativePath", "Public/PromoPackPurchaseUIDataUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromoPackPurchaseUIDataUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::ClassParams = {
		&UPromoPackPurchaseUIDataUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPromoPackPurchaseUIDataUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPromoPackPurchaseUIDataUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPromoPackPurchaseUIDataUtility, 3338984658);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPromoPackPurchaseUIDataUtility>()
	{
		return UPromoPackPurchaseUIDataUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPromoPackPurchaseUIDataUtility(Z_Construct_UClass_UPromoPackPurchaseUIDataUtility, &UPromoPackPurchaseUIDataUtility::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPromoPackPurchaseUIDataUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromoPackPurchaseUIDataUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
