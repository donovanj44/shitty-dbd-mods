// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerOpenGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerOpenGate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerOpenGate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerOpenGate();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
	static FName NAME_UKillerOpenGate_UpdateSwitch = FName(TEXT("UpdateSwitch"));
	void UKillerOpenGate::UpdateSwitch() const
	{
		const_cast<UKillerOpenGate*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKillerOpenGate_UpdateSwitch),NULL);
	}
	void UKillerOpenGate::StaticRegisterNativesUKillerOpenGate()
	{
	}
	struct Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerOpenGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerOpenGate, nullptr, "UpdateSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerOpenGate_NoRegister()
	{
		return UKillerOpenGate::StaticClass();
	}
	struct Z_Construct_UClass_UKillerOpenGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__openGateMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__openGateMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerOpenGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerOpenGate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerOpenGate_UpdateSwitch, "UpdateSwitch" }, // 3242902695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerOpenGate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "KillerOpenGate.h" },
		{ "ModuleRelativePath", "Public/KillerOpenGate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerOpenGate_Statics::NewProp__openGateMontage_MetaData[] = {
		{ "Category", "KillerOpenGate" },
		{ "ModuleRelativePath", "Public/KillerOpenGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerOpenGate_Statics::NewProp__openGateMontage = { "_openGateMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerOpenGate, _openGateMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UKillerOpenGate_Statics::NewProp__openGateMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerOpenGate_Statics::NewProp__openGateMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerOpenGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerOpenGate_Statics::NewProp__openGateMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerOpenGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerOpenGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerOpenGate_Statics::ClassParams = {
		&UKillerOpenGate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerOpenGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerOpenGate_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerOpenGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerOpenGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerOpenGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerOpenGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerOpenGate, 2995745630);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerOpenGate>()
	{
		return UKillerOpenGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerOpenGate(Z_Construct_UClass_UKillerOpenGate, &UKillerOpenGate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerOpenGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerOpenGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
