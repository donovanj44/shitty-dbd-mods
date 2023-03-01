// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGMapThemeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGMapThemeWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMapThemeWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGMapThemeWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static FName NAME_UUMGMapThemeWidget_SetMapName = FName(TEXT("SetMapName"));
	void UUMGMapThemeWidget::SetMapName(const FString& mapName)
	{
		UMGMapThemeWidget_eventSetMapName_Parms Parms;
		Parms.mapName=mapName;
		ProcessEvent(FindFunctionChecked(NAME_UUMGMapThemeWidget_SetMapName),&Parms);
	}
	static FName NAME_UUMGMapThemeWidget_SetThemeName = FName(TEXT("SetThemeName"));
	void UUMGMapThemeWidget::SetThemeName(const FString& themeName)
	{
		UMGMapThemeWidget_eventSetThemeName_Parms Parms;
		Parms.themeName=themeName;
		ProcessEvent(FindFunctionChecked(NAME_UUMGMapThemeWidget_SetThemeName),&Parms);
	}
	void UUMGMapThemeWidget::StaticRegisterNativesUUMGMapThemeWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::NewProp_mapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::NewProp_mapName = { "mapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGMapThemeWidget_eventSetMapName_Parms, mapName), METADATA_PARAMS(Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::NewProp_mapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::NewProp_mapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::NewProp_mapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGMapThemeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGMapThemeWidget, nullptr, "SetMapName", nullptr, nullptr, sizeof(UMGMapThemeWidget_eventSetMapName_Parms), Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_themeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_themeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::NewProp_themeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::NewProp_themeName = { "themeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGMapThemeWidget_eventSetThemeName_Parms, themeName), METADATA_PARAMS(Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::NewProp_themeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::NewProp_themeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::NewProp_themeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGMapThemeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGMapThemeWidget, nullptr, "SetThemeName", nullptr, nullptr, sizeof(UMGMapThemeWidget_eventSetThemeName_Parms), Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGMapThemeWidget_NoRegister()
	{
		return UUMGMapThemeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGMapThemeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGMapThemeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGMapThemeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGMapThemeWidget_SetMapName, "SetMapName" }, // 1712976385
		{ &Z_Construct_UFunction_UUMGMapThemeWidget_SetThemeName, "SetThemeName" }, // 1771091100
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGMapThemeWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGMapThemeWidget.h" },
		{ "ModuleRelativePath", "Public/UMGMapThemeWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGMapThemeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGMapThemeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGMapThemeWidget_Statics::ClassParams = {
		&UUMGMapThemeWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGMapThemeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGMapThemeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGMapThemeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGMapThemeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGMapThemeWidget, 1418898124);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGMapThemeWidget>()
	{
		return UUMGMapThemeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGMapThemeWidget(Z_Construct_UClass_UUMGMapThemeWidget, &UUMGMapThemeWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGMapThemeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGMapThemeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
