// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/InfectiousFright.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfectiousFright() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UInfectiousFright_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UInfectiousFright();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInfectiousFright::execOnRep_PerkActivationCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PerkActivationCount();
		P_NATIVE_END;
	}
	static FName NAME_UInfectiousFright_RevealSurvivorLocation = FName(TEXT("RevealSurvivorLocation"));
	void UInfectiousFright::RevealSurvivorLocation(ACamperPlayer* target)
	{
		InfectiousFright_eventRevealSurvivorLocation_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UInfectiousFright_RevealSurvivorLocation),&Parms);
	}
	void UInfectiousFright::StaticRegisterNativesUInfectiousFright()
	{
		UClass* Class = UInfectiousFright::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PerkActivationCount", &UInfectiousFright::execOnRep_PerkActivationCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectiousFright, nullptr, "OnRep_PerkActivationCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InfectiousFright_eventRevealSurvivorLocation_Parms, target), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfectiousFright, nullptr, "RevealSurvivorLocation", nullptr, nullptr, sizeof(InfectiousFright_eventRevealSurvivorLocation_Parms), Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInfectiousFright_NoRegister()
	{
		return UInfectiousFright::StaticClass();
	}
	struct Z_Construct_UClass_UInfectiousFright_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__revealedSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealedSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkActivationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__perkActivationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealPlayerInTerrorRadius_MetaData[];
#endif
		static void NewProp__revealPlayerInTerrorRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__revealPlayerInTerrorRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInfectiousFright_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInfectiousFright_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInfectiousFright_OnRep_PerkActivationCount, "OnRep_PerkActivationCount" }, // 1394842201
		{ &Z_Construct_UFunction_UInfectiousFright_RevealSurvivorLocation, "RevealSurvivorLocation" }, // 2282038256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectiousFright_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InfectiousFright.h" },
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectiousFright_Statics::NewProp__targetSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfectiousFright_Statics::NewProp__targetSurvivor = { "_targetSurvivor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInfectiousFright, _targetSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__targetSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__targetSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors = { "_revealedSurvivors", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInfectiousFright, _revealedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors_Inner = { "_revealedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectiousFright_Statics::NewProp__perkActivationCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInfectiousFright_Statics::NewProp__perkActivationCount = { "_perkActivationCount", "OnRep_PerkActivationCount", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInfectiousFright, _perkActivationCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__perkActivationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__perkActivationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius_MetaData[] = {
		{ "Category", "InfectiousFright" },
		{ "ModuleRelativePath", "Public/InfectiousFright.h" },
	};
#endif
	void Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius_SetBit(void* Obj)
	{
		((UInfectiousFright*)Obj)->_revealPlayerInTerrorRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius = { "_revealPlayerInTerrorRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInfectiousFright), &Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfectiousFright_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectiousFright_Statics::NewProp__targetSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealedSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectiousFright_Statics::NewProp__perkActivationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfectiousFright_Statics::NewProp__revealPlayerInTerrorRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInfectiousFright_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfectiousFright>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInfectiousFright_Statics::ClassParams = {
		&UInfectiousFright::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInfectiousFright_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInfectiousFright_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInfectiousFright_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInfectiousFright_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInfectiousFright()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInfectiousFright_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInfectiousFright, 2068339928);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UInfectiousFright>()
	{
		return UInfectiousFright::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInfectiousFright(Z_Construct_UClass_UInfectiousFright, &UInfectiousFright::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UInfectiousFright"), false, nullptr, nullptr, nullptr);

	void UInfectiousFright::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__perkActivationCount(TEXT("_perkActivationCount"));
		static const FName Name__revealedSurvivors(TEXT("_revealedSurvivors"));

		const bool bIsValid = true
			&& Name__perkActivationCount == ClassReps[(int32)ENetFields_Private::_perkActivationCount].Property->GetFName()
			&& Name__revealedSurvivors == ClassReps[(int32)ENetFields_Private::_revealedSurvivors].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInfectiousFright"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInfectiousFright);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
