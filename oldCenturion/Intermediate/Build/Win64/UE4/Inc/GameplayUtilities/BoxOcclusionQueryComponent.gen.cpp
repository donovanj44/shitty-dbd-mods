// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/BoxOcclusionQueryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxOcclusionQueryComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBoxOcclusionQueryComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBoxOcclusionQueryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UBoxOcclusionQueryComponent::execGetEstimatedRenderedPixelCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEstimatedRenderedPixelCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxOcclusionQueryComponent::execGetNumberOfVisiblePixels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumberOfVisiblePixels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxOcclusionQueryComponent::execGetVisiblePercentOfScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVisiblePercentOfScreen();
		P_NATIVE_END;
	}
	void UBoxOcclusionQueryComponent::StaticRegisterNativesUBoxOcclusionQueryComponent()
	{
		UClass* Class = UBoxOcclusionQueryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEstimatedRenderedPixelCount", &UBoxOcclusionQueryComponent::execGetEstimatedRenderedPixelCount },
			{ "GetNumberOfVisiblePixels", &UBoxOcclusionQueryComponent::execGetNumberOfVisiblePixels },
			{ "GetVisiblePercentOfScreen", &UBoxOcclusionQueryComponent::execGetVisiblePercentOfScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics
	{
		struct BoxOcclusionQueryComponent_eventGetEstimatedRenderedPixelCount_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxOcclusionQueryComponent_eventGetEstimatedRenderedPixelCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoxOcclusionQueryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxOcclusionQueryComponent, nullptr, "GetEstimatedRenderedPixelCount", nullptr, nullptr, sizeof(BoxOcclusionQueryComponent_eventGetEstimatedRenderedPixelCount_Parms), Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics
	{
		struct BoxOcclusionQueryComponent_eventGetNumberOfVisiblePixels_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxOcclusionQueryComponent_eventGetNumberOfVisiblePixels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoxOcclusionQueryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxOcclusionQueryComponent, nullptr, "GetNumberOfVisiblePixels", nullptr, nullptr, sizeof(BoxOcclusionQueryComponent_eventGetNumberOfVisiblePixels_Parms), Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics
	{
		struct BoxOcclusionQueryComponent_eventGetVisiblePercentOfScreen_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxOcclusionQueryComponent_eventGetVisiblePercentOfScreen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoxOcclusionQueryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxOcclusionQueryComponent, nullptr, "GetVisiblePercentOfScreen", nullptr, nullptr, sizeof(BoxOcclusionQueryComponent_eventGetVisiblePercentOfScreen_Parms), Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoxOcclusionQueryComponent_NoRegister()
	{
		return UBoxOcclusionQueryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilOccluded_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilOccluded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount, "GetEstimatedRenderedPixelCount" }, // 1119135187
		{ &Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels, "GetNumberOfVisiblePixels" }, // 1956215716
		{ &Z_Construct_UFunction_UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen, "GetVisiblePercentOfScreen" }, // 3767917914
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "BoxOcclusionQueryComponent.h" },
		{ "ModuleRelativePath", "Public/BoxOcclusionQueryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::NewProp_TimeUntilOccluded_MetaData[] = {
		{ "Category", "BoxOcclusionQueryComponent" },
		{ "ModuleRelativePath", "Public/BoxOcclusionQueryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::NewProp_TimeUntilOccluded = { "TimeUntilOccluded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxOcclusionQueryComponent, TimeUntilOccluded), METADATA_PARAMS(Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::NewProp_TimeUntilOccluded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::NewProp_TimeUntilOccluded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::NewProp_TimeUntilOccluded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxOcclusionQueryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::ClassParams = {
		&UBoxOcclusionQueryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxOcclusionQueryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoxOcclusionQueryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoxOcclusionQueryComponent, 1239413534);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UBoxOcclusionQueryComponent>()
	{
		return UBoxOcclusionQueryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxOcclusionQueryComponent(Z_Construct_UClass_UBoxOcclusionQueryComponent, &UBoxOcclusionQueryComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UBoxOcclusionQueryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxOcclusionQueryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
