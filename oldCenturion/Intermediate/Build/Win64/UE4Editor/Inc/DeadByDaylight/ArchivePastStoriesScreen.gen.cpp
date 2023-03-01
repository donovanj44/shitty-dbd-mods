// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArchivePastStoriesScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchivePastStoriesScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivePastStoriesScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchivePastStoriesScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UArchiveBaseScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UArchivePastStoriesScreen::execOnStorySelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_storyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStorySelected(Z_Param_storyId);
		P_NATIVE_END;
	}
	void UArchivePastStoriesScreen::StaticRegisterNativesUArchivePastStoriesScreen()
	{
		UClass* Class = UArchivePastStoriesScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStorySelected", &UArchivePastStoriesScreen::execOnStorySelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics
	{
		struct ArchivePastStoriesScreen_eventOnStorySelected_Parms
		{
			FString storyId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::NewProp_storyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::NewProp_storyId = { "storyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArchivePastStoriesScreen_eventOnStorySelected_Parms, storyId), METADATA_PARAMS(Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::NewProp_storyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::NewProp_storyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::NewProp_storyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchivePastStoriesScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchivePastStoriesScreen, nullptr, "OnStorySelected", nullptr, nullptr, sizeof(ArchivePastStoriesScreen_eventOnStorySelected_Parms), Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArchivePastStoriesScreen_NoRegister()
	{
		return UArchivePastStoriesScreen::StaticClass();
	}
	struct Z_Construct_UClass_UArchivePastStoriesScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchivePastStoriesScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchiveBaseScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchivePastStoriesScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchivePastStoriesScreen_OnStorySelected, "OnStorySelected" }, // 2501375559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchivePastStoriesScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchivePastStoriesScreen.h" },
		{ "ModuleRelativePath", "Public/ArchivePastStoriesScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchivePastStoriesScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchivePastStoriesScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchivePastStoriesScreen_Statics::ClassParams = {
		&UArchivePastStoriesScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UArchivePastStoriesScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchivePastStoriesScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchivePastStoriesScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchivePastStoriesScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchivePastStoriesScreen, 2601272059);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UArchivePastStoriesScreen>()
	{
		return UArchivePastStoriesScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchivePastStoriesScreen(Z_Construct_UClass_UArchivePastStoriesScreen, &UArchivePastStoriesScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UArchivePastStoriesScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchivePastStoriesScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
