// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25PounceAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25PounceAttack() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25PounceAttack_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25PounceAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	DEFINE_FUNCTION(UK25PounceAttack::execClient_InvalidateDownedTargetHoldingLamentConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_InvalidateDownedTargetHoldingLamentConfiguration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25PounceAttack::execMulticast_DownedTargetHoldingLamentConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DownedTargetHoldingLamentConfiguration_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration = FName(TEXT("Client_InvalidateDownedTargetHoldingLamentConfiguration"));
	void UK25PounceAttack::Client_InvalidateDownedTargetHoldingLamentConfiguration()
	{
		ProcessEvent(FindFunctionChecked(NAME_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration),NULL);
	}
	static FName NAME_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration = FName(TEXT("Multicast_DownedTargetHoldingLamentConfiguration"));
	void UK25PounceAttack::Multicast_DownedTargetHoldingLamentConfiguration()
	{
		ProcessEvent(FindFunctionChecked(NAME_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration),NULL);
	}
	void UK25PounceAttack::StaticRegisterNativesUK25PounceAttack()
	{
		UClass* Class = UK25PounceAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_InvalidateDownedTargetHoldingLamentConfiguration", &UK25PounceAttack::execClient_InvalidateDownedTargetHoldingLamentConfiguration },
			{ "Multicast_DownedTargetHoldingLamentConfiguration", &UK25PounceAttack::execMulticast_DownedTargetHoldingLamentConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25PounceAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25PounceAttack, nullptr, "Client_InvalidateDownedTargetHoldingLamentConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25PounceAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25PounceAttack, nullptr, "Multicast_DownedTargetHoldingLamentConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25PounceAttack_NoRegister()
	{
		return UK25PounceAttack::StaticClass();
	}
	struct Z_Construct_UClass_UK25PounceAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25PounceAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25PounceAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration, "Client_InvalidateDownedTargetHoldingLamentConfiguration" }, // 2685088129
		{ &Z_Construct_UFunction_UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration, "Multicast_DownedTargetHoldingLamentConfiguration" }, // 3399892765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25PounceAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25PounceAttack.h" },
		{ "ModuleRelativePath", "Public/K25PounceAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25PounceAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25PounceAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25PounceAttack_Statics::ClassParams = {
		&UK25PounceAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25PounceAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25PounceAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25PounceAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25PounceAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25PounceAttack, 1566541365);
	template<> THEK25_API UClass* StaticClass<UK25PounceAttack>()
	{
		return UK25PounceAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25PounceAttack(Z_Construct_UClass_UK25PounceAttack, &UK25PounceAttack::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25PounceAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25PounceAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
