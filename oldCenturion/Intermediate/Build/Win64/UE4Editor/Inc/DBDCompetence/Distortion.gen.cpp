// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Distortion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistortion() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDistortion_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDistortion();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UDistortion::execAuraBlockCanBeActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AuraBlockCanBeActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDistortion::execOnRep_AuraBlockIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AuraBlockIsActive();
		P_NATIVE_END;
	}
	void UDistortion::StaticRegisterNativesUDistortion()
	{
		UClass* Class = UDistortion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuraBlockCanBeActive", &UDistortion::execAuraBlockCanBeActive },
			{ "OnRep_AuraBlockIsActive", &UDistortion::execOnRep_AuraBlockIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics
	{
		struct Distortion_eventAuraBlockCanBeActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Distortion_eventAuraBlockCanBeActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Distortion_eventAuraBlockCanBeActive_Parms), &Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Distortion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDistortion, nullptr, "AuraBlockCanBeActive", nullptr, nullptr, sizeof(Distortion_eventAuraBlockCanBeActive_Parms), Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Distortion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDistortion, nullptr, "OnRep_AuraBlockIsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDistortion_NoRegister()
	{
		return UDistortion::StaticClass();
	}
	struct Z_Construct_UClass_UDistortion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraBlockIsActive_MetaData[];
#endif
		static void NewProp__auraBlockIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__auraBlockIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationDurations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistortion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDistortion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDistortion_AuraBlockCanBeActive, "AuraBlockCanBeActive" }, // 604739008
		{ &Z_Construct_UFunction_UDistortion_OnRep_AuraBlockIsActive, "OnRep_AuraBlockIsActive" }, // 597407553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistortion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Distortion.h" },
		{ "ModuleRelativePath", "Public/Distortion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Distortion.h" },
	};
#endif
	void Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive_SetBit(void* Obj)
	{
		((UDistortion*)Obj)->_auraBlockIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive = { "_auraBlockIsActive", "OnRep_AuraBlockIsActive", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDistortion), &Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistortion_Statics::NewProp__activationDurations_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ModuleRelativePath", "Public/Distortion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistortion_Statics::NewProp__activationDurations = { "_activationDurations", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_activationDurations, UDistortion), STRUCT_OFFSET(UDistortion, _activationDurations), METADATA_PARAMS(Z_Construct_UClass_UDistortion_Statics::NewProp__activationDurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistortion_Statics::NewProp__activationDurations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistortion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortion_Statics::NewProp__auraBlockIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistortion_Statics::NewProp__activationDurations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistortion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistortion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistortion_Statics::ClassParams = {
		&UDistortion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDistortion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistortion_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDistortion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistortion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistortion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistortion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistortion, 3047639284);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDistortion>()
	{
		return UDistortion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistortion(Z_Construct_UClass_UDistortion, &UDistortion::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDistortion"), false, nullptr, nullptr, nullptr);

	void UDistortion::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__auraBlockIsActive(TEXT("_auraBlockIsActive"));

		const bool bIsValid = true
			&& Name__auraBlockIsActive == ClassReps[(int32)ENetFields_Private::_auraBlockIsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDistortion"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistortion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
