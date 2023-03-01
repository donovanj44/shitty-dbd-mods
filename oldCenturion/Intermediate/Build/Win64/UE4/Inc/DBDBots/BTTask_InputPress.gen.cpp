// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTTask_InputPress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_InputPress() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_InputPress_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTTask_InputPress();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_ETaskInputPressModes();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes();
// End Cross Module References
	void UBTTask_InputPress::StaticRegisterNativesUBTTask_InputPress()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_InputPress_NoRegister()
	{
		return UBTTask_InputPress::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_InputPress_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPressLoopInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPressLoopInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_InputPress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_InputPress_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_InputPress.h" },
		{ "ModuleRelativePath", "Public/BTTask_InputPress.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputPressLoopInterval_MetaData[] = {
		{ "Category", "BTTask_InputPress" },
		{ "ModuleRelativePath", "Public/BTTask_InputPress.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputPressLoopInterval = { "InputPressLoopInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_InputPress, InputPressLoopInterval), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputPressLoopInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputPressLoopInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "BTTask_InputPress" },
		{ "ModuleRelativePath", "Public/BTTask_InputPress.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_InputPress, InputMode), Z_Construct_UEnum_DBDBots_ETaskInputPressModes, METADATA_PARAMS(Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "BTTask_InputPress" },
		{ "ModuleRelativePath", "Public/BTTask_InputPress.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_InputPress, Input), Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes, METADATA_PARAMS(Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_InputPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputPressLoopInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_InputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_InputPress_Statics::NewProp_Input_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_InputPress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_InputPress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_InputPress_Statics::ClassParams = {
		&UBTTask_InputPress::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_InputPress_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InputPress_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_InputPress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_InputPress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_InputPress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_InputPress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_InputPress, 3656038883);
	template<> DBDBOTS_API UClass* StaticClass<UBTTask_InputPress>()
	{
		return UBTTask_InputPress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_InputPress(Z_Construct_UClass_UBTTask_InputPress, &UBTTask_InputPress::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTTask_InputPress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_InputPress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
