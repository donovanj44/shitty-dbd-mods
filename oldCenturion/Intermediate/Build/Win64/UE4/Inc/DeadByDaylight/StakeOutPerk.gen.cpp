// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StakeOutPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStakeOutPerk() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStakeOutPerk_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStakeOutPerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UStakeOutPerk::execLocal_BroadcastConsumeToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_BroadcastConsumeToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStakeOutPerk::execServer_ConsumeToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ConsumeToken_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_ConsumeToken_Validate"));
			return;
		}
		P_THIS->Server_ConsumeToken_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UStakeOutPerk_Server_ConsumeToken = FName(TEXT("Server_ConsumeToken"));
	void UStakeOutPerk::Server_ConsumeToken()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStakeOutPerk_Server_ConsumeToken),NULL);
	}
	void UStakeOutPerk::StaticRegisterNativesUStakeOutPerk()
	{
		UClass* Class = UStakeOutPerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_BroadcastConsumeToken", &UStakeOutPerk::execLocal_BroadcastConsumeToken },
			{ "Server_ConsumeToken", &UStakeOutPerk::execServer_ConsumeToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StakeOutPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStakeOutPerk, nullptr, "Local_BroadcastConsumeToken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StakeOutPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStakeOutPerk, nullptr, "Server_ConsumeToken", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStakeOutPerk_NoRegister()
	{
		return UStakeOutPerk::StaticClass();
	}
	struct Z_Construct_UClass_UStakeOutPerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenChargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TokenChargeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTokensByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxTokensByLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTokensByLevel_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStakeOutPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStakeOutPerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStakeOutPerk_Local_BroadcastConsumeToken, "Local_BroadcastConsumeToken" }, // 3451408368
		{ &Z_Construct_UFunction_UStakeOutPerk_Server_ConsumeToken, "Server_ConsumeToken" }, // 2577469132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStakeOutPerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StakeOutPerk.h" },
		{ "ModuleRelativePath", "Public/StakeOutPerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_TokenChargeTime_MetaData[] = {
		{ "Category", "StakeOutPerk" },
		{ "ModuleRelativePath", "Public/StakeOutPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_TokenChargeTime = { "TokenChargeTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStakeOutPerk, TokenChargeTime), METADATA_PARAMS(Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_TokenChargeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_TokenChargeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel_MetaData[] = {
		{ "Category", "StakeOutPerk" },
		{ "ModuleRelativePath", "Public/StakeOutPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel = { "MaxTokensByLevel", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStakeOutPerk, MaxTokensByLevel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel_Inner = { "MaxTokensByLevel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStakeOutPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_TokenChargeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStakeOutPerk_Statics::NewProp_MaxTokensByLevel_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStakeOutPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStakeOutPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStakeOutPerk_Statics::ClassParams = {
		&UStakeOutPerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStakeOutPerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStakeOutPerk_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStakeOutPerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStakeOutPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStakeOutPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStakeOutPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStakeOutPerk, 1577794178);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStakeOutPerk>()
	{
		return UStakeOutPerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStakeOutPerk(Z_Construct_UClass_UStakeOutPerk, &UStakeOutPerk::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStakeOutPerk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStakeOutPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
