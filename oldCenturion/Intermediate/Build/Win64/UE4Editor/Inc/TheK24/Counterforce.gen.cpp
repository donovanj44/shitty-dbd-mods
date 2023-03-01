// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Counterforce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCounterforce() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UCounterforce_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UCounterforce();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCounterforce::execMulticast_ShowTotemAura)
	{
		P_GET_OBJECT(ATotem,Z_Param_totem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ShowTotemAura_Implementation(Z_Param_totem);
		P_NATIVE_END;
	}
	static FName NAME_UCounterforce_Multicast_ShowTotemAura = FName(TEXT("Multicast_ShowTotemAura"));
	void UCounterforce::Multicast_ShowTotemAura(ATotem* totem)
	{
		Counterforce_eventMulticast_ShowTotemAura_Parms Parms;
		Parms.totem=totem;
		ProcessEvent(FindFunctionChecked(NAME_UCounterforce_Multicast_ShowTotemAura),&Parms);
	}
	void UCounterforce::StaticRegisterNativesUCounterforce()
	{
		UClass* Class = UCounterforce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ShowTotemAura", &UCounterforce::execMulticast_ShowTotemAura },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_totem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::NewProp_totem = { "totem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Counterforce_eventMulticast_ShowTotemAura_Parms, totem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::NewProp_totem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Counterforce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCounterforce, nullptr, "Multicast_ShowTotemAura", nullptr, nullptr, sizeof(Counterforce_eventMulticast_ShowTotemAura_Parms), Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCounterforce_NoRegister()
	{
		return UCounterforce::StaticClass();
	}
	struct Z_Construct_UClass_UCounterforce_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stackableTotemCleanseSpeedBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__stackableTotemCleanseSpeedBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startingTotemCleanseSpeedBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__startingTotemCleanseSpeedBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemAuraVisibleDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__totemAuraVisibleDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCounterforce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCounterforce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCounterforce_Multicast_ShowTotemAura, "Multicast_ShowTotemAura" }, // 1306077520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterforce_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Counterforce.h" },
		{ "ModuleRelativePath", "Public/Counterforce.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterforce_Statics::NewProp__stackableTotemCleanseSpeedBonus_MetaData[] = {
		{ "Category", "Counterforce" },
		{ "ModuleRelativePath", "Public/Counterforce.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCounterforce_Statics::NewProp__stackableTotemCleanseSpeedBonus = { "_stackableTotemCleanseSpeedBonus", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_stackableTotemCleanseSpeedBonus, UCounterforce), STRUCT_OFFSET(UCounterforce, _stackableTotemCleanseSpeedBonus), METADATA_PARAMS(Z_Construct_UClass_UCounterforce_Statics::NewProp__stackableTotemCleanseSpeedBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterforce_Statics::NewProp__stackableTotemCleanseSpeedBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterforce_Statics::NewProp__startingTotemCleanseSpeedBonus_MetaData[] = {
		{ "Category", "Counterforce" },
		{ "ModuleRelativePath", "Public/Counterforce.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCounterforce_Statics::NewProp__startingTotemCleanseSpeedBonus = { "_startingTotemCleanseSpeedBonus", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_startingTotemCleanseSpeedBonus, UCounterforce), STRUCT_OFFSET(UCounterforce, _startingTotemCleanseSpeedBonus), METADATA_PARAMS(Z_Construct_UClass_UCounterforce_Statics::NewProp__startingTotemCleanseSpeedBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterforce_Statics::NewProp__startingTotemCleanseSpeedBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterforce_Statics::NewProp__totemAuraVisibleDuration_MetaData[] = {
		{ "Category", "Counterforce" },
		{ "ModuleRelativePath", "Public/Counterforce.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCounterforce_Statics::NewProp__totemAuraVisibleDuration = { "_totemAuraVisibleDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_totemAuraVisibleDuration, UCounterforce), STRUCT_OFFSET(UCounterforce, _totemAuraVisibleDuration), METADATA_PARAMS(Z_Construct_UClass_UCounterforce_Statics::NewProp__totemAuraVisibleDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterforce_Statics::NewProp__totemAuraVisibleDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCounterforce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterforce_Statics::NewProp__stackableTotemCleanseSpeedBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterforce_Statics::NewProp__startingTotemCleanseSpeedBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterforce_Statics::NewProp__totemAuraVisibleDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCounterforce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCounterforce>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCounterforce_Statics::ClassParams = {
		&UCounterforce::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCounterforce_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCounterforce_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCounterforce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterforce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCounterforce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCounterforce_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCounterforce, 3826135740);
	template<> THEK24_API UClass* StaticClass<UCounterforce>()
	{
		return UCounterforce::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCounterforce(Z_Construct_UClass_UCounterforce, &UCounterforce::StaticClass, TEXT("/Script/TheK24"), TEXT("UCounterforce"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCounterforce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
