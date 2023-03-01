// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCustomizationCategoriesBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCustomizationCategoriesBar() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationCategoriesBar_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCustomizationCategoriesBar();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCustomizationCategoriesBar::execBroadcastCustomizationCategoryButtonPressed)
	{
		P_GET_ENUM(ECustomizationCategory,Z_Param_categoryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastCustomizationCategoryButtonPressed(ECustomizationCategory(Z_Param_categoryIndex));
		P_NATIVE_END;
	}
	static FName NAME_UUMGCustomizationCategoriesBar_SetRole = FName(TEXT("SetRole"));
	void UUMGCustomizationCategoriesBar::SetRole(bool isKiller)
	{
		UMGCustomizationCategoriesBar_eventSetRole_Parms Parms;
		Parms.isKiller=isKiller ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCustomizationCategoriesBar_SetRole),&Parms);
	}
	static FName NAME_UUMGCustomizationCategoriesBar_SetSelectedCategory = FName(TEXT("SetSelectedCategory"));
	void UUMGCustomizationCategoriesBar::SetSelectedCategory(const ECustomizationCategory category)
	{
		UMGCustomizationCategoriesBar_eventSetSelectedCategory_Parms Parms;
		Parms.category=category;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCustomizationCategoriesBar_SetSelectedCategory),&Parms);
	}
	void UUMGCustomizationCategoriesBar::StaticRegisterNativesUUMGCustomizationCategoriesBar()
	{
		UClass* Class = UUMGCustomizationCategoriesBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastCustomizationCategoryButtonPressed", &UUMGCustomizationCategoriesBar::execBroadcastCustomizationCategoryButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics
	{
		struct UMGCustomizationCategoriesBar_eventBroadcastCustomizationCategoryButtonPressed_Parms
		{
			ECustomizationCategory categoryIndex;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_categoryIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_categoryIndex_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::NewProp_categoryIndex = { "categoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationCategoriesBar_eventBroadcastCustomizationCategoryButtonPressed_Parms, categoryIndex), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::NewProp_categoryIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::NewProp_categoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::NewProp_categoryIndex_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationCategoriesBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationCategoriesBar, nullptr, "BroadcastCustomizationCategoryButtonPressed", nullptr, nullptr, sizeof(UMGCustomizationCategoriesBar_eventBroadcastCustomizationCategoryButtonPressed_Parms), Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isKiller_MetaData[];
#endif
		static void NewProp_isKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller_SetBit(void* Obj)
	{
		((UMGCustomizationCategoriesBar_eventSetRole_Parms*)Obj)->isKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller = { "isKiller", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCustomizationCategoriesBar_eventSetRole_Parms), &Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::NewProp_isKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationCategoriesBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationCategoriesBar, nullptr, "SetRole", nullptr, nullptr, sizeof(UMGCustomizationCategoriesBar_eventSetRole_Parms), Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCustomizationCategoriesBar_eventSetSelectedCategory_Parms, category), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::NewProp_category_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCustomizationCategoriesBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCustomizationCategoriesBar, nullptr, "SetSelectedCategory", nullptr, nullptr, sizeof(UMGCustomizationCategoriesBar_eventSetSelectedCategory_Parms), Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCustomizationCategoriesBar_NoRegister()
	{
		return UUMGCustomizationCategoriesBar::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCustomizationCategoriesBar_BroadcastCustomizationCategoryButtonPressed, "BroadcastCustomizationCategoryButtonPressed" }, // 4201941153
		{ &Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetRole, "SetRole" }, // 962124177
		{ &Z_Construct_UFunction_UUMGCustomizationCategoriesBar_SetSelectedCategory, "SetSelectedCategory" }, // 1173598725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCustomizationCategoriesBar.h" },
		{ "ModuleRelativePath", "Public/UMGCustomizationCategoriesBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCustomizationCategoriesBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::ClassParams = {
		&UUMGCustomizationCategoriesBar::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCustomizationCategoriesBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCustomizationCategoriesBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCustomizationCategoriesBar, 1455773840);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCustomizationCategoriesBar>()
	{
		return UUMGCustomizationCategoriesBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCustomizationCategoriesBar(Z_Construct_UClass_UUMGCustomizationCategoriesBar, &UUMGCustomizationCategoriesBar::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCustomizationCategoriesBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCustomizationCategoriesBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
