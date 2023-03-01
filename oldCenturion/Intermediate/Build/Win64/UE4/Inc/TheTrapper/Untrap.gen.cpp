// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/Untrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUntrap() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_UUntrap_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_UUntrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
	THETRAPPER_API UClass* Z_Construct_UClass_ABearTrap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUntrap::execGetTrap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABearTrap**)Z_Param__Result=P_THIS->GetTrap();
		P_NATIVE_END;
	}
	void UUntrap::StaticRegisterNativesUUntrap()
	{
		UClass* Class = UUntrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrap", &UUntrap::execGetTrap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUntrap_GetTrap_Statics
	{
		struct Untrap_eventGetTrap_Parms
		{
			ABearTrap* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUntrap_GetTrap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Untrap_eventGetTrap_Parms, ReturnValue), Z_Construct_UClass_ABearTrap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUntrap_GetTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUntrap_GetTrap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUntrap_GetTrap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Untrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUntrap_GetTrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUntrap, nullptr, "GetTrap", nullptr, nullptr, sizeof(Untrap_eventGetTrap_Parms), Z_Construct_UFunction_UUntrap_GetTrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUntrap_GetTrap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUntrap_GetTrap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUntrap_GetTrap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUntrap_GetTrap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUntrap_GetTrap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUntrap_NoRegister()
	{
		return UUntrap::StaticClass();
	}
	struct Z_Construct_UClass_UUntrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bearTrapFinishMontageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__bearTrapFinishMontageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bearTrapUpdateMontageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__bearTrapUpdateMontageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overridableInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__overridableInteractions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__overridableInteractions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUntrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUntrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUntrap_GetTrap, "GetTrap" }, // 1491045460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUntrap_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Untrap.h" },
		{ "ModuleRelativePath", "Public/Untrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapFinishMontageID_MetaData[] = {
		{ "Category", "Untrap" },
		{ "ModuleRelativePath", "Public/Untrap.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapFinishMontageID = { "_bearTrapFinishMontageID", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUntrap, _bearTrapFinishMontageID), METADATA_PARAMS(Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapFinishMontageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapFinishMontageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapUpdateMontageID_MetaData[] = {
		{ "Category", "Untrap" },
		{ "ModuleRelativePath", "Public/Untrap.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapUpdateMontageID = { "_bearTrapUpdateMontageID", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUntrap, _bearTrapUpdateMontageID), METADATA_PARAMS(Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapUpdateMontageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapUpdateMontageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions_MetaData[] = {
		{ "Category", "Untrap" },
		{ "ModuleRelativePath", "Public/Untrap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions = { "_overridableInteractions", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUntrap, _overridableInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions_Inner = { "_overridableInteractions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUntrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapFinishMontageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUntrap_Statics::NewProp__bearTrapUpdateMontageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUntrap_Statics::NewProp__overridableInteractions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUntrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUntrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUntrap_Statics::ClassParams = {
		&UUntrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUntrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUntrap_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUntrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUntrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUntrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUntrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUntrap, 1299475748);
	template<> THETRAPPER_API UClass* StaticClass<UUntrap>()
	{
		return UUntrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUntrap(Z_Construct_UClass_UUntrap, &UUntrap::StaticClass, TEXT("/Script/TheTrapper"), TEXT("UUntrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUntrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
