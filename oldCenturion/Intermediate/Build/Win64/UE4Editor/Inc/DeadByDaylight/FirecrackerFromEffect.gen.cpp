// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FirecrackerFromEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirecrackerFromEffect() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFirecrackerFromEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFirecrackerFromEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AFirecracker();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirecrackerFromEffect::execMulticast_InitFromEffect)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(AGenerator,Z_Param_trapedGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_InitFromEffect_Implementation(Z_Param_player,Z_Param_trapedGenerator);
		P_NATIVE_END;
	}
	static FName NAME_AFirecrackerFromEffect_Multicast_InitFromEffect = FName(TEXT("Multicast_InitFromEffect"));
	void AFirecrackerFromEffect::Multicast_InitFromEffect(ADBDPlayer* player, AGenerator* trapedGenerator)
	{
		FirecrackerFromEffect_eventMulticast_InitFromEffect_Parms Parms;
		Parms.player=player;
		Parms.trapedGenerator=trapedGenerator;
		ProcessEvent(FindFunctionChecked(NAME_AFirecrackerFromEffect_Multicast_InitFromEffect),&Parms);
	}
	void AFirecrackerFromEffect::StaticRegisterNativesAFirecrackerFromEffect()
	{
		UClass* Class = AFirecrackerFromEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_InitFromEffect", &AFirecrackerFromEffect::execMulticast_InitFromEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trapedGenerator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::NewProp_trapedGenerator = { "trapedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirecrackerFromEffect_eventMulticast_InitFromEffect_Parms, trapedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirecrackerFromEffect_eventMulticast_InitFromEffect_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::NewProp_trapedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirecrackerFromEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirecrackerFromEffect, nullptr, "Multicast_InitFromEffect", nullptr, nullptr, sizeof(FirecrackerFromEffect_eventMulticast_InitFromEffect_Parms), Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirecrackerFromEffect_NoRegister()
	{
		return AFirecrackerFromEffect::StaticClass();
	}
	struct Z_Construct_UClass_AFirecrackerFromEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirecrackerFromEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFirecracker,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirecrackerFromEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirecrackerFromEffect_Multicast_InitFromEffect, "Multicast_InitFromEffect" }, // 843616701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirecrackerFromEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirecrackerFromEffect.h" },
		{ "ModuleRelativePath", "Public/FirecrackerFromEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirecrackerFromEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirecrackerFromEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirecrackerFromEffect_Statics::ClassParams = {
		&AFirecrackerFromEffect::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirecrackerFromEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirecrackerFromEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirecrackerFromEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirecrackerFromEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirecrackerFromEffect, 2625075410);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AFirecrackerFromEffect>()
	{
		return AFirecrackerFromEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirecrackerFromEffect(Z_Construct_UClass_AFirecrackerFromEffect, &AFirecrackerFromEffect::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AFirecrackerFromEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirecrackerFromEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
