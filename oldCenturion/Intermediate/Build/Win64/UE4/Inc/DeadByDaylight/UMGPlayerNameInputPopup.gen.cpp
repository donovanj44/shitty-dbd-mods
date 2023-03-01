// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPlayerNameInputPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPlayerNameInputPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerNameInputPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerNameInputPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPlayerNameInputPopup::execNameChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NameChanged(Z_Param_Out_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPlayerNameInputPopup::execNameCommitted)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_name);
		P_GET_PROPERTY(FByteProperty,Z_Param_commitType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NameCommitted(Z_Param_Out_name,ETextCommit::Type(Z_Param_commitType));
		P_NATIVE_END;
	}
	void UUMGPlayerNameInputPopup::StaticRegisterNativesUUMGPlayerNameInputPopup()
	{
		UClass* Class = UUMGPlayerNameInputPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NameChanged", &UUMGPlayerNameInputPopup::execNameChanged },
			{ "NameCommitted", &UUMGPlayerNameInputPopup::execNameCommitted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics
	{
		struct UMGPlayerNameInputPopup_eventNameChanged_Parms
		{
			FText name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerNameInputPopup_eventNameChanged_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerNameInputPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayerNameInputPopup, nullptr, "NameChanged", nullptr, nullptr, sizeof(UMGPlayerNameInputPopup_eventNameChanged_Parms), Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics
	{
		struct UMGPlayerNameInputPopup_eventNameCommitted_Parms
		{
			FText name;
			TEnumAsByte<ETextCommit::Type> commitType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_commitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_commitType = { "commitType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerNameInputPopup_eventNameCommitted_Parms, commitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerNameInputPopup_eventNameCommitted_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_commitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerNameInputPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayerNameInputPopup, nullptr, "NameCommitted", nullptr, nullptr, sizeof(UMGPlayerNameInputPopup_eventNameCommitted_Parms), Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPlayerNameInputPopup_NoRegister()
	{
		return UUMGPlayerNameInputPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameInputTextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NameInputTextBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameChanged, "NameChanged" }, // 2828008707
		{ &Z_Construct_UFunction_UUMGPlayerNameInputPopup_NameCommitted, "NameCommitted" }, // 743959990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPlayerNameInputPopup.h" },
		{ "ModuleRelativePath", "Public/UMGPlayerNameInputPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::NewProp_NameInputTextBox_MetaData[] = {
		{ "Category", "UMGPlayerNameInputPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerNameInputPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::NewProp_NameInputTextBox = { "NameInputTextBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerNameInputPopup, NameInputTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::NewProp_NameInputTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::NewProp_NameInputTextBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::NewProp_NameInputTextBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPlayerNameInputPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::ClassParams = {
		&UUMGPlayerNameInputPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPlayerNameInputPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPlayerNameInputPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPlayerNameInputPopup, 2099451904);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPlayerNameInputPopup>()
	{
		return UUMGPlayerNameInputPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPlayerNameInputPopup(Z_Construct_UClass_UUMGPlayerNameInputPopup, &UUMGPlayerNameInputPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPlayerNameInputPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPlayerNameInputPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
