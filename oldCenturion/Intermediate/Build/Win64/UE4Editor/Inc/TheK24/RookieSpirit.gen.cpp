// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/RookieSpirit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRookieSpirit() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_URookieSpirit_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_URookieSpirit();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URookieSpirit::execHandleGeneratorIsDamagedChanged)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGeneratorIsDamagedChanged(Z_Param_generator,Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URookieSpirit::execOnRep_NumberOfGreatSkillChecksOnGeneratorRepair)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();
		P_NATIVE_END;
	}
	void URookieSpirit::StaticRegisterNativesURookieSpirit()
	{
		UClass* Class = URookieSpirit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleGeneratorIsDamagedChanged", &URookieSpirit::execHandleGeneratorIsDamagedChanged },
			{ "OnRep_NumberOfGreatSkillChecksOnGeneratorRepair", &URookieSpirit::execOnRep_NumberOfGreatSkillChecksOnGeneratorRepair },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics
	{
		struct RookieSpirit_eventHandleGeneratorIsDamagedChanged_Parms
		{
			AGenerator* generator;
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RookieSpirit_eventHandleGeneratorIsDamagedChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RookieSpirit_eventHandleGeneratorIsDamagedChanged_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RookieSpirit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URookieSpirit, nullptr, "HandleGeneratorIsDamagedChanged", nullptr, nullptr, sizeof(RookieSpirit_eventHandleGeneratorIsDamagedChanged_Parms), Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RookieSpirit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URookieSpirit, nullptr, "OnRep_NumberOfGreatSkillChecksOnGeneratorRepair", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URookieSpirit_NoRegister()
	{
		return URookieSpirit::StaticClass();
	}
	struct Z_Construct_UClass_URookieSpirit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfGeneratorRepairGreatSkillChecksRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfGeneratorRepairGreatSkillChecksRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfGreatSkillChecksOnGeneratorRepair_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberOfGreatSkillChecksOnGeneratorRepair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URookieSpirit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URookieSpirit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URookieSpirit_HandleGeneratorIsDamagedChanged, "HandleGeneratorIsDamagedChanged" }, // 12665384
		{ &Z_Construct_UFunction_URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair, "OnRep_NumberOfGreatSkillChecksOnGeneratorRepair" }, // 1782274386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URookieSpirit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RookieSpirit.h" },
		{ "ModuleRelativePath", "Public/RookieSpirit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGeneratorRepairGreatSkillChecksRequired_MetaData[] = {
		{ "Category", "RookieSpirit" },
		{ "ModuleRelativePath", "Public/RookieSpirit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGeneratorRepairGreatSkillChecksRequired = { "_numberOfGeneratorRepairGreatSkillChecksRequired", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_numberOfGeneratorRepairGreatSkillChecksRequired, URookieSpirit), STRUCT_OFFSET(URookieSpirit, _numberOfGeneratorRepairGreatSkillChecksRequired), METADATA_PARAMS(Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGeneratorRepairGreatSkillChecksRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGeneratorRepairGreatSkillChecksRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGreatSkillChecksOnGeneratorRepair_MetaData[] = {
		{ "ModuleRelativePath", "Public/RookieSpirit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGreatSkillChecksOnGeneratorRepair = { "_numberOfGreatSkillChecksOnGeneratorRepair", "OnRep_NumberOfGreatSkillChecksOnGeneratorRepair", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URookieSpirit, _numberOfGreatSkillChecksOnGeneratorRepair), METADATA_PARAMS(Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGreatSkillChecksOnGeneratorRepair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGreatSkillChecksOnGeneratorRepair_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URookieSpirit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGeneratorRepairGreatSkillChecksRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URookieSpirit_Statics::NewProp__numberOfGreatSkillChecksOnGeneratorRepair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URookieSpirit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URookieSpirit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URookieSpirit_Statics::ClassParams = {
		&URookieSpirit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URookieSpirit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URookieSpirit_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URookieSpirit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URookieSpirit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URookieSpirit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URookieSpirit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URookieSpirit, 2063059962);
	template<> THEK24_API UClass* StaticClass<URookieSpirit>()
	{
		return URookieSpirit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URookieSpirit(Z_Construct_UClass_URookieSpirit, &URookieSpirit::StaticClass, TEXT("/Script/TheK24"), TEXT("URookieSpirit"), false, nullptr, nullptr, nullptr);

	void URookieSpirit::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__numberOfGreatSkillChecksOnGeneratorRepair(TEXT("_numberOfGreatSkillChecksOnGeneratorRepair"));

		const bool bIsValid = true
			&& Name__numberOfGreatSkillChecksOnGeneratorRepair == ClassReps[(int32)ENetFields_Private::_numberOfGreatSkillChecksOnGeneratorRepair].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URookieSpirit"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URookieSpirit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
