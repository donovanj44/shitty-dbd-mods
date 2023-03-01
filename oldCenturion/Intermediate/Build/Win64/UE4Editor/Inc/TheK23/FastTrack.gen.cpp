// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/FastTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastTrack() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UFastTrack_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UFastTrack();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	static FName NAME_UFastTrack_Cosmetic_OnTokenCountDecreased = FName(TEXT("Cosmetic_OnTokenCountDecreased"));
	void UFastTrack::Cosmetic_OnTokenCountDecreased()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFastTrack_Cosmetic_OnTokenCountDecreased),NULL);
	}
	void UFastTrack::StaticRegisterNativesUFastTrack()
	{
	}
	struct Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FastTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastTrack, nullptr, "Cosmetic_OnTokenCountDecreased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFastTrack_NoRegister()
	{
		return UFastTrack::StaticClass();
	}
	struct Z_Construct_UClass_UFastTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tokensToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__tokensToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFastTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFastTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFastTrack_Cosmetic_OnTokenCountDecreased, "Cosmetic_OnTokenCountDecreased" }, // 626559420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFastTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FastTrack.h" },
		{ "ModuleRelativePath", "Public/FastTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFastTrack_Statics::NewProp__tokensToAdd_MetaData[] = {
		{ "Category", "FastTrack" },
		{ "ModuleRelativePath", "Public/FastTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFastTrack_Statics::NewProp__tokensToAdd = { "_tokensToAdd", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_tokensToAdd, UFastTrack), STRUCT_OFFSET(UFastTrack, _tokensToAdd), METADATA_PARAMS(Z_Construct_UClass_UFastTrack_Statics::NewProp__tokensToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFastTrack_Statics::NewProp__tokensToAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFastTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFastTrack_Statics::NewProp__tokensToAdd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFastTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFastTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFastTrack_Statics::ClassParams = {
		&UFastTrack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFastTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFastTrack_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFastTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFastTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFastTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFastTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFastTrack, 2616430576);
	template<> THEK23_API UClass* StaticClass<UFastTrack>()
	{
		return UFastTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFastTrack(Z_Construct_UClass_UFastTrack, &UFastTrack::StaticClass, TEXT("/Script/TheK23"), TEXT("UFastTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFastTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
