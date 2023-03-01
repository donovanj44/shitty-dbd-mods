// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/ElevensSodaAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevensSodaAddon() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UElevensSodaAddon_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UElevensSodaAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UElevensSodaAddon::execMulticast_HighlightGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HighlightGenerator_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElevensSodaAddon::execMulticast_UnhighlightGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_UnhighlightGenerator_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	static FName NAME_UElevensSodaAddon_Multicast_HighlightGenerator = FName(TEXT("Multicast_HighlightGenerator"));
	void UElevensSodaAddon::Multicast_HighlightGenerator(const AGenerator* generator) const
	{
		ElevensSodaAddon_eventMulticast_HighlightGenerator_Parms Parms;
		Parms.generator=generator;
		const_cast<UElevensSodaAddon*>(this)->ProcessEvent(FindFunctionChecked(NAME_UElevensSodaAddon_Multicast_HighlightGenerator),&Parms);
	}
	static FName NAME_UElevensSodaAddon_Multicast_UnhighlightGenerator = FName(TEXT("Multicast_UnhighlightGenerator"));
	void UElevensSodaAddon::Multicast_UnhighlightGenerator(const AGenerator* generator) const
	{
		ElevensSodaAddon_eventMulticast_UnhighlightGenerator_Parms Parms;
		Parms.generator=generator;
		const_cast<UElevensSodaAddon*>(this)->ProcessEvent(FindFunctionChecked(NAME_UElevensSodaAddon_Multicast_UnhighlightGenerator),&Parms);
	}
	void UElevensSodaAddon::StaticRegisterNativesUElevensSodaAddon()
	{
		UClass* Class = UElevensSodaAddon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_HighlightGenerator", &UElevensSodaAddon::execMulticast_HighlightGenerator },
			{ "Multicast_UnhighlightGenerator", &UElevensSodaAddon::execMulticast_UnhighlightGenerator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::NewProp_generator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElevensSodaAddon_eventMulticast_HighlightGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::NewProp_generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::NewProp_generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevensSodaAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevensSodaAddon, nullptr, "Multicast_HighlightGenerator", nullptr, nullptr, sizeof(ElevensSodaAddon_eventMulticast_HighlightGenerator_Parms), Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::NewProp_generator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElevensSodaAddon_eventMulticast_UnhighlightGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::NewProp_generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::NewProp_generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevensSodaAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevensSodaAddon, nullptr, "Multicast_UnhighlightGenerator", nullptr, nullptr, sizeof(ElevensSodaAddon_eventMulticast_UnhighlightGenerator_Parms), Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElevensSodaAddon_NoRegister()
	{
		return UElevensSodaAddon::StaticClass();
	}
	struct Z_Construct_UClass_UElevensSodaAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElevensSodaAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElevensSodaAddon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElevensSodaAddon_Multicast_HighlightGenerator, "Multicast_HighlightGenerator" }, // 775224172
		{ &Z_Construct_UFunction_UElevensSodaAddon_Multicast_UnhighlightGenerator, "Multicast_UnhighlightGenerator" }, // 4262831196
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevensSodaAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ElevensSodaAddon.h" },
		{ "ModuleRelativePath", "Public/ElevensSodaAddon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElevensSodaAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevensSodaAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElevensSodaAddon_Statics::ClassParams = {
		&UElevensSodaAddon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UElevensSodaAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElevensSodaAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElevensSodaAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElevensSodaAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElevensSodaAddon, 2228341863);
	template<> THEDEMOGORGON_API UClass* StaticClass<UElevensSodaAddon>()
	{
		return UElevensSodaAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElevensSodaAddon(Z_Construct_UClass_UElevensSodaAddon, &UElevensSodaAddon::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UElevensSodaAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElevensSodaAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
