// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Flashbang.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashbang() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UFlashbang_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UFlashbang();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlashbang::execAuthority_OnRepairProgressApplied)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_individualChargeAmount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalChargeAmount);
		P_GET_OBJECT(AActor,Z_Param_chargeInstigator);
		P_GET_UBOOL(Z_Param_wasCoop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnRepairProgressApplied(Z_Param_individualChargeAmount,Z_Param_totalChargeAmount,Z_Param_chargeInstigator,Z_Param_wasCoop,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashbang::execClient_OnGeneratorRepairProgressionTargetAchieved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_OnGeneratorRepairProgressionTargetAchieved_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashbang::execOnRep_GeneratorsRepairProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GeneratorsRepairProgress();
		P_NATIVE_END;
	}
	static FName NAME_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved = FName(TEXT("Client_OnGeneratorRepairProgressionTargetAchieved"));
	void UFlashbang::Client_OnGeneratorRepairProgressionTargetAchieved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved),NULL);
	}
	static FName NAME_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved = FName(TEXT("Cosmetic_OnGeneratorRepairProgressionTargetAchieved"));
	void UFlashbang::Cosmetic_OnGeneratorRepairProgressionTargetAchieved()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved),NULL);
	}
	void UFlashbang::StaticRegisterNativesUFlashbang()
	{
		UClass* Class = UFlashbang::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnRepairProgressApplied", &UFlashbang::execAuthority_OnRepairProgressApplied },
			{ "Client_OnGeneratorRepairProgressionTargetAchieved", &UFlashbang::execClient_OnGeneratorRepairProgressionTargetAchieved },
			{ "OnRep_GeneratorsRepairProgress", &UFlashbang::execOnRep_GeneratorsRepairProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics
	{
		struct Flashbang_eventAuthority_OnRepairProgressApplied_Parms
		{
			float individualChargeAmount;
			float totalChargeAmount;
			AActor* chargeInstigator;
			bool wasCoop;
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static void NewProp_wasCoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasCoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalChargeAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_individualChargeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flashbang_eventAuthority_OnRepairProgressApplied_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_wasCoop_SetBit(void* Obj)
	{
		((Flashbang_eventAuthority_OnRepairProgressApplied_Parms*)Obj)->wasCoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_wasCoop = { "wasCoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Flashbang_eventAuthority_OnRepairProgressApplied_Parms), &Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_wasCoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_chargeInstigator = { "chargeInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flashbang_eventAuthority_OnRepairProgressApplied_Parms, chargeInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_totalChargeAmount = { "totalChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flashbang_eventAuthority_OnRepairProgressApplied_Parms, totalChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_individualChargeAmount = { "individualChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flashbang_eventAuthority_OnRepairProgressApplied_Parms, individualChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_wasCoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_chargeInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_totalChargeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::NewProp_individualChargeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashbang, nullptr, "Authority_OnRepairProgressApplied", nullptr, nullptr, sizeof(Flashbang_eventAuthority_OnRepairProgressApplied_Parms), Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashbang, nullptr, "Client_OnGeneratorRepairProgressionTargetAchieved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashbang, nullptr, "Cosmetic_OnGeneratorRepairProgressionTargetAchieved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashbang, nullptr, "OnRep_GeneratorsRepairProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlashbang_NoRegister()
	{
		return UFlashbang::StaticClass();
	}
	struct Z_Construct_UClass_UFlashbang_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorRepairPercentToCraftFlashbang_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorRepairPercentToCraftFlashbang;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorsRepairTargetProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorsRepairTargetProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBeingRepaired_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generatorBeingRepaired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlashbang_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlashbang_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlashbang_Authority_OnRepairProgressApplied, "Authority_OnRepairProgressApplied" }, // 1536098375
		{ &Z_Construct_UFunction_UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved, "Client_OnGeneratorRepairProgressionTargetAchieved" }, // 1498229288
		{ &Z_Construct_UFunction_UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved, "Cosmetic_OnGeneratorRepairProgressionTargetAchieved" }, // 1728555055
		{ &Z_Construct_UFunction_UFlashbang_OnRep_GeneratorsRepairProgress, "OnRep_GeneratorsRepairProgress" }, // 2845150149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashbang_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Flashbang.h" },
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorRepairPercentToCraftFlashbang_MetaData[] = {
		{ "Category", "Flashbang" },
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorRepairPercentToCraftFlashbang = { "_generatorRepairPercentToCraftFlashbang", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_generatorRepairPercentToCraftFlashbang, UFlashbang), STRUCT_OFFSET(UFlashbang, _generatorRepairPercentToCraftFlashbang), METADATA_PARAMS(Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorRepairPercentToCraftFlashbang_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorRepairPercentToCraftFlashbang_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorsRepairTargetProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorsRepairTargetProgression = { "_generatorsRepairTargetProgression", "OnRep_GeneratorsRepairProgress", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashbang, _generatorsRepairTargetProgression), METADATA_PARAMS(Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorsRepairTargetProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorsRepairTargetProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorBeingRepaired_MetaData[] = {
		{ "ModuleRelativePath", "Public/Flashbang.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorBeingRepaired = { "_generatorBeingRepaired", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashbang, _generatorBeingRepaired), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorBeingRepaired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorBeingRepaired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashbang_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorRepairPercentToCraftFlashbang,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorsRepairTargetProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashbang_Statics::NewProp__generatorBeingRepaired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlashbang_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashbang>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlashbang_Statics::ClassParams = {
		&UFlashbang::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlashbang_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlashbang_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlashbang_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashbang_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlashbang()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlashbang_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlashbang, 1557920346);
	template<> THEK24_API UClass* StaticClass<UFlashbang>()
	{
		return UFlashbang::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlashbang(Z_Construct_UClass_UFlashbang, &UFlashbang::StaticClass, TEXT("/Script/TheK24"), TEXT("UFlashbang"), false, nullptr, nullptr, nullptr);

	void UFlashbang::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__generatorsRepairTargetProgression(TEXT("_generatorsRepairTargetProgression"));

		const bool bIsValid = true
			&& Name__generatorsRepairTargetProgression == ClassReps[(int32)ENetFields_Private::_generatorsRepairTargetProgression].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFlashbang"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashbang);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
