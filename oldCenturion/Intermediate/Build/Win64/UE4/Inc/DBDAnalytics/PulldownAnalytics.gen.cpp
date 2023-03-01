// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PulldownAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePulldownAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UPulldownAnalytics_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UPulldownAnalytics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPulldownAnalytics::execIncrementPalletDestroy)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPulldownAnalytics::IncrementPalletDestroy(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPulldownAnalytics::execIncrementPalletDrop)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPulldownAnalytics::IncrementPalletDrop(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPulldownAnalytics::execIncrementPalletSpawned)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPulldownAnalytics::IncrementPalletSpawned(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPulldownAnalytics::execIncrementPalletStun)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPulldownAnalytics::IncrementPalletStun(Z_Param_survivor);
		P_NATIVE_END;
	}
	void UPulldownAnalytics::StaticRegisterNativesUPulldownAnalytics()
	{
		UClass* Class = UPulldownAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementPalletDestroy", &UPulldownAnalytics::execIncrementPalletDestroy },
			{ "IncrementPalletDrop", &UPulldownAnalytics::execIncrementPalletDrop },
			{ "IncrementPalletSpawned", &UPulldownAnalytics::execIncrementPalletSpawned },
			{ "IncrementPalletStun", &UPulldownAnalytics::execIncrementPalletStun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics
	{
		struct PulldownAnalytics_eventIncrementPalletDestroy_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PulldownAnalytics_eventIncrementPalletDestroy_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PulldownAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPulldownAnalytics, nullptr, "IncrementPalletDestroy", nullptr, nullptr, sizeof(PulldownAnalytics_eventIncrementPalletDestroy_Parms), Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics
	{
		struct PulldownAnalytics_eventIncrementPalletDrop_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PulldownAnalytics_eventIncrementPalletDrop_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PulldownAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPulldownAnalytics, nullptr, "IncrementPalletDrop", nullptr, nullptr, sizeof(PulldownAnalytics_eventIncrementPalletDrop_Parms), Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics
	{
		struct PulldownAnalytics_eventIncrementPalletSpawned_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PulldownAnalytics_eventIncrementPalletSpawned_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PulldownAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPulldownAnalytics, nullptr, "IncrementPalletSpawned", nullptr, nullptr, sizeof(PulldownAnalytics_eventIncrementPalletSpawned_Parms), Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics
	{
		struct PulldownAnalytics_eventIncrementPalletStun_Parms
		{
			ACamperPlayer* survivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PulldownAnalytics_eventIncrementPalletStun_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PulldownAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPulldownAnalytics, nullptr, "IncrementPalletStun", nullptr, nullptr, sizeof(PulldownAnalytics_eventIncrementPalletStun_Parms), Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPulldownAnalytics_NoRegister()
	{
		return UPulldownAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UPulldownAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPulldownAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPulldownAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDestroy, "IncrementPalletDestroy" }, // 4071397610
		{ &Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletDrop, "IncrementPalletDrop" }, // 2943787263
		{ &Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletSpawned, "IncrementPalletSpawned" }, // 2520949126
		{ &Z_Construct_UFunction_UPulldownAnalytics_IncrementPalletStun, "IncrementPalletStun" }, // 4108286224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPulldownAnalytics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PulldownAnalytics.h" },
		{ "ModuleRelativePath", "Public/PulldownAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPulldownAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPulldownAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPulldownAnalytics_Statics::ClassParams = {
		&UPulldownAnalytics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPulldownAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPulldownAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPulldownAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPulldownAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPulldownAnalytics, 1581920870);
	template<> DBDANALYTICS_API UClass* StaticClass<UPulldownAnalytics>()
	{
		return UPulldownAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPulldownAnalytics(Z_Construct_UClass_UPulldownAnalytics, &UPulldownAnalytics::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UPulldownAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPulldownAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
