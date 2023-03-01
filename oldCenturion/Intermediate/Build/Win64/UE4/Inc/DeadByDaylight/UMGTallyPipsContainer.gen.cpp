// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyPipsContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyPipsContainer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPipsContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPipsContainer();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPip_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyPipsContainer::execSetData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rank);
		P_GET_PROPERTY(FIntProperty,Z_Param_pipsRequiredForNextRank);
		P_GET_PROPERTY(FIntProperty,Z_Param_filledPips);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_rank,Z_Param_pipsRequiredForNextRank,Z_Param_filledPips);
		P_NATIVE_END;
	}
	void UUMGTallyPipsContainer::StaticRegisterNativesUUMGTallyPipsContainer()
	{
		UClass* Class = UUMGTallyPipsContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UUMGTallyPipsContainer::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics
	{
		struct UMGTallyPipsContainer_eventSetData_Parms
		{
			int32 rank;
			int32 pipsRequiredForNextRank;
			int32 filledPips;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filledPips;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pipsRequiredForNextRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::NewProp_filledPips = { "filledPips", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPipsContainer_eventSetData_Parms, filledPips), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::NewProp_pipsRequiredForNextRank = { "pipsRequiredForNextRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPipsContainer_eventSetData_Parms, pipsRequiredForNextRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPipsContainer_eventSetData_Parms, rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::NewProp_filledPips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::NewProp_pipsRequiredForNextRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::NewProp_rank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPipsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPipsContainer, nullptr, "SetData", nullptr, nullptr, sizeof(UMGTallyPipsContainer_eventSetData_Parms), Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPipsContainer_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPipsContainer_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyPipsContainer_NoRegister()
	{
		return UUMGTallyPipsContainer::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyPipsContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pips_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pips;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pips_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pipsPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pipsPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pipsClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pipsClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__pipsClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipsContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyPipsContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyPipsContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyPipsContainer_SetData, "SetData" }, // 2067060624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyPipsContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyPipsContainer.h" },
		{ "ModuleRelativePath", "Public/UMGTallyPipsContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyPipsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips = { "Pips", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyPipsContainer, Pips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips_Inner = { "Pips", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyPip_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsPadding_MetaData[] = {
		{ "Category", "UMGTallyPipsContainer" },
		{ "ModuleRelativePath", "Public/UMGTallyPipsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsPadding = { "_pipsPadding", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyPipsContainer, _pipsPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses_MetaData[] = {
		{ "Category", "UMGTallyPipsContainer" },
		{ "ModuleRelativePath", "Public/UMGTallyPipsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses = { "_pipsClasses", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyPipsContainer, _pipsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses_Inner = { "_pipsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyPip_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_PipsContainer_MetaData[] = {
		{ "Category", "UMGTallyPipsContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyPipsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_PipsContainer = { "PipsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyPipsContainer, PipsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_PipsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_PipsContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyPipsContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_Pips_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp__pipsClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyPipsContainer_Statics::NewProp_PipsContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyPipsContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyPipsContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyPipsContainer_Statics::ClassParams = {
		&UUMGTallyPipsContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyPipsContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPipsContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyPipsContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyPipsContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyPipsContainer, 1633377633);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyPipsContainer>()
	{
		return UUMGTallyPipsContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyPipsContainer(Z_Construct_UClass_UUMGTallyPipsContainer, &UUMGTallyPipsContainer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyPipsContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyPipsContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
