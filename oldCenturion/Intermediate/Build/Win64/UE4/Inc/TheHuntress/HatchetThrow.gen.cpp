// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/HatchetThrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatchetThrow() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetThrow_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UHatchetThrow();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UThrowInteraction();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
	THEHUNTRESS_API UClass* Z_Construct_UClass_ATheHuntressPower_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UHatchetThrow::execGetOwningHatchetSpawner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATheHuntressPower**)Z_Param__Result=P_THIS->GetOwningHatchetSpawner();
		P_NATIVE_END;
	}
	void UHatchetThrow::StaticRegisterNativesUHatchetThrow()
	{
		UClass* Class = UHatchetThrow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningHatchetSpawner", &UHatchetThrow::execGetOwningHatchetSpawner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics
	{
		struct HatchetThrow_eventGetOwningHatchetSpawner_Parms
		{
			ATheHuntressPower* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HatchetThrow_eventGetOwningHatchetSpawner_Parms, ReturnValue), Z_Construct_UClass_ATheHuntressPower_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HatchetThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHatchetThrow, nullptr, "GetOwningHatchetSpawner", nullptr, nullptr, sizeof(HatchetThrow_eventGetOwningHatchetSpawner_Parms), Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHatchetThrow_NoRegister()
	{
		return UHatchetThrow::StaticClass();
	}
	struct Z_Construct_UClass_UHatchetThrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchetThrowCancellationCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hatchetThrowCancellationCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHatchetThrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThrowInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHatchetThrow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHatchetThrow_GetOwningHatchetSpawner, "GetOwningHatchetSpawner" }, // 2251836047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetThrow_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HatchetThrow.h" },
		{ "ModuleRelativePath", "Public/HatchetThrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHatchetThrow_Statics::NewProp__hatchetThrowCancellationCooldown_MetaData[] = {
		{ "Category", "HatchetThrow" },
		{ "ModuleRelativePath", "Public/HatchetThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHatchetThrow_Statics::NewProp__hatchetThrowCancellationCooldown = { "_hatchetThrowCancellationCooldown", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHatchetThrow, _hatchetThrowCancellationCooldown), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UHatchetThrow_Statics::NewProp__hatchetThrowCancellationCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetThrow_Statics::NewProp__hatchetThrowCancellationCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHatchetThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHatchetThrow_Statics::NewProp__hatchetThrowCancellationCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHatchetThrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHatchetThrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHatchetThrow_Statics::ClassParams = {
		&UHatchetThrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHatchetThrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetThrow_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHatchetThrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHatchetThrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHatchetThrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHatchetThrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHatchetThrow, 3257574322);
	template<> THEHUNTRESS_API UClass* StaticClass<UHatchetThrow>()
	{
		return UHatchetThrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHatchetThrow(Z_Construct_UClass_UHatchetThrow, &UHatchetThrow::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UHatchetThrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHatchetThrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
