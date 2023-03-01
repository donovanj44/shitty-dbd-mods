// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomWidgetWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWidgetWrapper() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapperInitializer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventCustomWidgetWrapperOnVersion_Parms
		{
			int32 version;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventCustomWidgetWrapperOnVersion_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CustomWidgetWrapperOnVersion__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventCustomWidgetWrapperOnVersion_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper::execApplyOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_opacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyOpacity(Z_Param_opacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper::execApplyScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyScale(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWidgetWrapper::execApplyVersion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVersion(Z_Param_version);
		P_NATIVE_END;
	}
	void UCustomWidgetWrapper::StaticRegisterNativesUCustomWidgetWrapper()
	{
		UClass* Class = UCustomWidgetWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyOpacity", &UCustomWidgetWrapper::execApplyOpacity },
			{ "ApplyScale", &UCustomWidgetWrapper::execApplyScale },
			{ "ApplyVersion", &UCustomWidgetWrapper::execApplyVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics
	{
		struct CustomWidgetWrapper_eventApplyOpacity_Parms
		{
			float opacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_opacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::NewProp_opacity = { "opacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_eventApplyOpacity_Parms, opacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::NewProp_opacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper, nullptr, "ApplyOpacity", nullptr, nullptr, sizeof(CustomWidgetWrapper_eventApplyOpacity_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics
	{
		struct CustomWidgetWrapper_eventApplyScale_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_eventApplyScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper, nullptr, "ApplyScale", nullptr, nullptr, sizeof(CustomWidgetWrapper_eventApplyScale_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics
	{
		struct CustomWidgetWrapper_eventApplyVersion_Parms
		{
			int32 version;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWidgetWrapper_eventApplyVersion_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper, nullptr, "ApplyVersion", nullptr, nullptr, sizeof(CustomWidgetWrapper_eventApplyVersion_Parms), Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomWidgetWrapper_NoRegister()
	{
		return UCustomWidgetWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UCustomWidgetWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitializerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManuallyChildWrappers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManuallyChildWrappers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManuallyChildWrappers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManuallyParentWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManuallyParentWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomWidgetWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCanvasPanel,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomWidgetWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_ApplyOpacity, "ApplyOpacity" }, // 4033170601
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_ApplyScale, "ApplyScale" }, // 92523022
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_ApplyVersion, "ApplyVersion" }, // 1470802870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomWidgetWrapper.h" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_InitializerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_InitializerWidget = { "InitializerWidget", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper, InitializerWidget), Z_Construct_UClass_UCustomWidgetWrapperInitializer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_InitializerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_InitializerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers_MetaData[] = {
		{ "Category", "CustomWidgetWrapper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers = { "ManuallyChildWrappers", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper, ManuallyChildWrappers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers_Inner = { "ManuallyChildWrappers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCustomWidgetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyParentWrapper_MetaData[] = {
		{ "Category", "CustomWidgetWrapper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyParentWrapper = { "ManuallyParentWrapper", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper, ManuallyParentWrapper), Z_Construct_UClass_UCustomWidgetWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyParentWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyParentWrapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "CustomWidgetWrapper" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper, Id), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_OnVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_OnVersion = { "OnVersion", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper, OnVersion), Z_Construct_UDelegateFunction_DeadByDaylight_CustomWidgetWrapperOnVersion__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_OnVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_OnVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomWidgetWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_InitializerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyChildWrappers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_ManuallyParentWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_Statics::NewProp_OnVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomWidgetWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomWidgetWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomWidgetWrapper_Statics::ClassParams = {
		&UCustomWidgetWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomWidgetWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomWidgetWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomWidgetWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomWidgetWrapper, 2977090809);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCustomWidgetWrapper>()
	{
		return UCustomWidgetWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomWidgetWrapper(Z_Construct_UClass_UCustomWidgetWrapper, &UCustomWidgetWrapper::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCustomWidgetWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomWidgetWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
