// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DailyRitualsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyRitualsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDailyRitualsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDailyRitualsScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UDailyRitualsScreen::execOnClaimAllRituals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClaimAllRituals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsScreen::execOnClaimRitual)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClaimRitual(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsScreen::execOnClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDailyRitualsScreen::execOnRemoveRitual)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveRitual(Z_Param_id);
		P_NATIVE_END;
	}
	void UDailyRitualsScreen::StaticRegisterNativesUDailyRitualsScreen()
	{
		UClass* Class = UDailyRitualsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClaimAllRituals", &UDailyRitualsScreen::execOnClaimAllRituals },
			{ "OnClaimRitual", &UDailyRitualsScreen::execOnClaimRitual },
			{ "OnClosed", &UDailyRitualsScreen::execOnClosed },
			{ "OnRemoveRitual", &UDailyRitualsScreen::execOnRemoveRitual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsScreen, nullptr, "OnClaimAllRituals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics
	{
		struct DailyRitualsScreen_eventOnClaimRitual_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsScreen_eventOnClaimRitual_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsScreen, nullptr, "OnClaimRitual", nullptr, nullptr, sizeof(DailyRitualsScreen_eventOnClaimRitual_Parms), Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsScreen_OnClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsScreen_OnClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsScreen_OnClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsScreen, nullptr, "OnClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsScreen_OnClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsScreen_OnClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsScreen_OnClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics
	{
		struct DailyRitualsScreen_eventOnRemoveRitual_Parms
		{
			FString id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DailyRitualsScreen_eventOnRemoveRitual_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DailyRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDailyRitualsScreen, nullptr, "OnRemoveRitual", nullptr, nullptr, sizeof(DailyRitualsScreen_eventOnRemoveRitual_Parms), Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDailyRitualsScreen_NoRegister()
	{
		return UDailyRitualsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UDailyRitualsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDailyRitualsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDailyRitualsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDailyRitualsScreen_OnClaimAllRituals, "OnClaimAllRituals" }, // 1752621200
		{ &Z_Construct_UFunction_UDailyRitualsScreen_OnClaimRitual, "OnClaimRitual" }, // 2023008882
		{ &Z_Construct_UFunction_UDailyRitualsScreen_OnClosed, "OnClosed" }, // 3111978043
		{ &Z_Construct_UFunction_UDailyRitualsScreen_OnRemoveRitual, "OnRemoveRitual" }, // 400913908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDailyRitualsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DailyRitualsScreen.h" },
		{ "ModuleRelativePath", "Public/DailyRitualsScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDailyRitualsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDailyRitualsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDailyRitualsScreen_Statics::ClassParams = {
		&UDailyRitualsScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDailyRitualsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDailyRitualsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDailyRitualsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDailyRitualsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDailyRitualsScreen, 228663462);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDailyRitualsScreen>()
	{
		return UDailyRitualsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDailyRitualsScreen(Z_Construct_UClass_UDailyRitualsScreen, &UDailyRitualsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDailyRitualsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDailyRitualsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
