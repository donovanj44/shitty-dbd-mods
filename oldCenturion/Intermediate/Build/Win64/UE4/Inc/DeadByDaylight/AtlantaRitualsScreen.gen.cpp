// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRitualsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaRitualsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaRitualsScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRitualsScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaRitualsScreen::execOnClaimRewards)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ritualId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClaimRewards(Z_Param_ritualId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaRitualsScreen::execOnExitRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaRitualsScreen::execOnRefreshRitual)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRefreshRitual();
		P_NATIVE_END;
	}
	void UAtlantaRitualsScreen::StaticRegisterNativesUAtlantaRitualsScreen()
	{
		UClass* Class = UAtlantaRitualsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClaimRewards", &UAtlantaRitualsScreen::execOnClaimRewards },
			{ "OnExitRequested", &UAtlantaRitualsScreen::execOnExitRequested },
			{ "OnRefreshRitual", &UAtlantaRitualsScreen::execOnRefreshRitual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics
	{
		struct AtlantaRitualsScreen_eventOnClaimRewards_Parms
		{
			int32 ritualId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ritualId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::NewProp_ritualId = { "ritualId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaRitualsScreen_eventOnClaimRewards_Parms, ritualId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::NewProp_ritualId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaRitualsScreen, nullptr, "OnClaimRewards", nullptr, nullptr, sizeof(AtlantaRitualsScreen_eventOnClaimRewards_Parms), Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaRitualsScreen, nullptr, "OnExitRequested", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaRitualsScreen, nullptr, "OnRefreshRitual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaRitualsScreen_NoRegister()
	{
		return UAtlantaRitualsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaRitualsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__umgScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__umgScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaRitualsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaRitualsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaRitualsScreen_OnClaimRewards, "OnClaimRewards" }, // 152931464
		{ &Z_Construct_UFunction_UAtlantaRitualsScreen_OnExitRequested, "OnExitRequested" }, // 2918928176
		{ &Z_Construct_UFunction_UAtlantaRitualsScreen_OnRefreshRitual, "OnRefreshRitual" }, // 2439978024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaRitualsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaRitualsScreen.h" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaRitualsScreen_Statics::NewProp__umgScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaRitualsScreen_Statics::NewProp__umgScreen = { "_umgScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaRitualsScreen, _umgScreen), Z_Construct_UClass_UUMGAtlantaRitualsScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaRitualsScreen_Statics::NewProp__umgScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRitualsScreen_Statics::NewProp__umgScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaRitualsScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaRitualsScreen_Statics::NewProp__umgScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaRitualsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaRitualsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaRitualsScreen_Statics::ClassParams = {
		&UAtlantaRitualsScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtlantaRitualsScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRitualsScreen_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaRitualsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaRitualsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaRitualsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaRitualsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaRitualsScreen, 67996190);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaRitualsScreen>()
	{
		return UAtlantaRitualsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaRitualsScreen(Z_Construct_UClass_UAtlantaRitualsScreen, &UAtlantaRitualsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaRitualsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaRitualsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
