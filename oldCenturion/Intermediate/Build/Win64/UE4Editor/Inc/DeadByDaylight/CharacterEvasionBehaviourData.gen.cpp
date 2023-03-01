// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterEvasionBehaviourData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterEvasionBehaviourData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterEvasionBehaviourData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterEvasionBehaviourData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterEvasionBehaviourData::execInit)
	{
		P_GET_OBJECT(AActor,Z_Param_hunter);
		P_GET_TARRAY(AActor*,Z_Param_escapePoints);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minEscapeDist);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_hunter,Z_Param_escapePoints,Z_Param_minEscapeDist);
		P_NATIVE_END;
	}
	void UCharacterEvasionBehaviourData::StaticRegisterNativesUCharacterEvasionBehaviourData()
	{
		UClass* Class = UCharacterEvasionBehaviourData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UCharacterEvasionBehaviourData::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics
	{
		struct CharacterEvasionBehaviourData_eventInit_Parms
		{
			AActor* hunter;
			TArray<AActor*> escapePoints;
			float minEscapeDist;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minEscapeDist;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_escapePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_escapePoints_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hunter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_minEscapeDist = { "minEscapeDist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterEvasionBehaviourData_eventInit_Parms, minEscapeDist), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_escapePoints = { "escapePoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterEvasionBehaviourData_eventInit_Parms, escapePoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_escapePoints_Inner = { "escapePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_hunter = { "hunter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterEvasionBehaviourData_eventInit_Parms, hunter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_minEscapeDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_escapePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_escapePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::NewProp_hunter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterEvasionBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterEvasionBehaviourData, nullptr, "Init", nullptr, nullptr, sizeof(CharacterEvasionBehaviourData_eventInit_Parms), Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterEvasionBehaviourData_NoRegister()
	{
		return UCharacterEvasionBehaviourData::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minEscapeDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minEscapeDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__escapePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__escapePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__escapePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hunter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hunter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourData,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterEvasionBehaviourData_Init, "Init" }, // 2791865578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterEvasionBehaviourData.h" },
		{ "ModuleRelativePath", "Public/CharacterEvasionBehaviourData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__minEscapeDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterEvasionBehaviourData" },
		{ "ModuleRelativePath", "Public/CharacterEvasionBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__minEscapeDist = { "_minEscapeDist", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEvasionBehaviourData, _minEscapeDist), METADATA_PARAMS(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__minEscapeDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__minEscapeDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterEvasionBehaviourData" },
		{ "ModuleRelativePath", "Public/CharacterEvasionBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints = { "_escapePoints", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEvasionBehaviourData, _escapePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints_Inner = { "_escapePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__hunter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterEvasionBehaviourData" },
		{ "ModuleRelativePath", "Public/CharacterEvasionBehaviourData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__hunter = { "_hunter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEvasionBehaviourData, _hunter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__hunter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__hunter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__minEscapeDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__escapePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::NewProp__hunter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterEvasionBehaviourData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::ClassParams = {
		&UCharacterEvasionBehaviourData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterEvasionBehaviourData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterEvasionBehaviourData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterEvasionBehaviourData, 3367892361);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterEvasionBehaviourData>()
	{
		return UCharacterEvasionBehaviourData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterEvasionBehaviourData(Z_Construct_UClass_UCharacterEvasionBehaviourData, &UCharacterEvasionBehaviourData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterEvasionBehaviourData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterEvasionBehaviourData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
