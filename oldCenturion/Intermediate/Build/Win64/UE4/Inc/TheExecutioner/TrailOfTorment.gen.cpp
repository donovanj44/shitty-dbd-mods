// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TrailOfTorment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrailOfTorment() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTrailOfTorment_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTrailOfTorment();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTrailOfTorment::execOnRep_HighlightGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param__oldHighlightedGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HighlightGenerator(Z_Param__oldHighlightedGenerator);
		P_NATIVE_END;
	}
	void UTrailOfTorment::StaticRegisterNativesUTrailOfTorment()
	{
		UClass* Class = UTrailOfTorment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HighlightGenerator", &UTrailOfTorment::execOnRep_HighlightGenerator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics
	{
		struct TrailOfTorment_eventOnRep_HighlightGenerator_Parms
		{
			AGenerator* _oldHighlightedGenerator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__oldHighlightedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::NewProp__oldHighlightedGenerator = { "_oldHighlightedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrailOfTorment_eventOnRep_HighlightGenerator_Parms, _oldHighlightedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::NewProp__oldHighlightedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrailOfTorment, nullptr, "OnRep_HighlightGenerator", nullptr, nullptr, sizeof(TrailOfTorment_eventOnRep_HighlightGenerator_Parms), Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTrailOfTorment_NoRegister()
	{
		return UTrailOfTorment::StaticClass();
	}
	struct Z_Construct_UClass_UTrailOfTorment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__highlightedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__highlightedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPerkActivated_MetaData[];
#endif
		static void NewProp__isPerkActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPerkActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__highlightPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__highlightPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrailOfTorment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrailOfTorment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrailOfTorment_OnRep_HighlightGenerator, "OnRep_HighlightGenerator" }, // 2176840654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailOfTorment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrailOfTorment.h" },
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__statusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__statusEffect = { "_statusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrailOfTorment, _statusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__statusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__statusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightedGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightedGenerator = { "_highlightedGenerator", "OnRep_HighlightGenerator", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrailOfTorment, _highlightedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
	void Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated_SetBit(void* Obj)
	{
		((UTrailOfTorment*)Obj)->_isPerkActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated = { "_isPerkActivated", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTrailOfTorment), &Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightPriority_MetaData[] = {
		{ "Category", "TrailOfTorment" },
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightPriority = { "_highlightPriority", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrailOfTorment, _highlightPriority), METADATA_PARAMS(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__cooldownDuration_MetaData[] = {
		{ "Category", "TrailOfTorment" },
		{ "ModuleRelativePath", "Public/TrailOfTorment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__cooldownDuration = { "_cooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownDuration, UTrailOfTorment), STRUCT_OFFSET(UTrailOfTorment, _cooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__cooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__cooldownDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrailOfTorment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__statusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__isPerkActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__highlightPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailOfTorment_Statics::NewProp__cooldownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrailOfTorment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrailOfTorment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrailOfTorment_Statics::ClassParams = {
		&UTrailOfTorment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTrailOfTorment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTrailOfTorment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailOfTorment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrailOfTorment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrailOfTorment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrailOfTorment, 4135454427);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTrailOfTorment>()
	{
		return UTrailOfTorment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrailOfTorment(Z_Construct_UClass_UTrailOfTorment, &UTrailOfTorment::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTrailOfTorment"), false, nullptr, nullptr, nullptr);

	void UTrailOfTorment::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isPerkActivated(TEXT("_isPerkActivated"));
		static const FName Name__highlightedGenerator(TEXT("_highlightedGenerator"));

		const bool bIsValid = true
			&& Name__isPerkActivated == ClassReps[(int32)ENetFields_Private::_isPerkActivated].Property->GetFName()
			&& Name__highlightedGenerator == ClassReps[(int32)ENetFields_Private::_highlightedGenerator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTrailOfTorment"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrailOfTorment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
