// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/KillerPossessionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerPossessionComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UKillerPossessionComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UKillerPossessionComponent();
	THETWINS_API UClass* Z_Construct_UClass_UPossessionComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UKillerPossessionComponent::execOnRep_ShouldDeactivateCollisionsWithSurvivors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShouldDeactivateCollisionsWithSurvivors();
		P_NATIVE_END;
	}
	void UKillerPossessionComponent::StaticRegisterNativesUKillerPossessionComponent()
	{
		UClass* Class = UKillerPossessionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ShouldDeactivateCollisionsWithSurvivors", &UKillerPossessionComponent::execOnRep_ShouldDeactivateCollisionsWithSurvivors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerPossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerPossessionComponent, nullptr, "OnRep_ShouldDeactivateCollisionsWithSurvivors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerPossessionComponent_NoRegister()
	{
		return UKillerPossessionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerPossessionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBeforeCollisionsDeactivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timeBeforeCollisionsDeactivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldDeactivateCollisionsWithSurvivors_MetaData[];
#endif
		static void NewProp__shouldDeactivateCollisionsWithSurvivors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldDeactivateCollisionsWithSurvivors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerPossessionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPossessionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerPossessionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors, "OnRep_ShouldDeactivateCollisionsWithSurvivors" }, // 3709760445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerPossessionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerPossessionComponent.h" },
		{ "ModuleRelativePath", "Public/KillerPossessionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__timeBeforeCollisionsDeactivation_MetaData[] = {
		{ "Category", "KillerPossessionComponent" },
		{ "ModuleRelativePath", "Public/KillerPossessionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__timeBeforeCollisionsDeactivation = { "_timeBeforeCollisionsDeactivation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerPossessionComponent, _timeBeforeCollisionsDeactivation), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__timeBeforeCollisionsDeactivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__timeBeforeCollisionsDeactivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/KillerPossessionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors_SetBit(void* Obj)
	{
		((UKillerPossessionComponent*)Obj)->_shouldDeactivateCollisionsWithSurvivors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors = { "_shouldDeactivateCollisionsWithSurvivors", "OnRep_ShouldDeactivateCollisionsWithSurvivors", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKillerPossessionComponent), &Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerPossessionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__timeBeforeCollisionsDeactivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerPossessionComponent_Statics::NewProp__shouldDeactivateCollisionsWithSurvivors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerPossessionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerPossessionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerPossessionComponent_Statics::ClassParams = {
		&UKillerPossessionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerPossessionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerPossessionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerPossessionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerPossessionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerPossessionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerPossessionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerPossessionComponent, 3862669431);
	template<> THETWINS_API UClass* StaticClass<UKillerPossessionComponent>()
	{
		return UKillerPossessionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerPossessionComponent(Z_Construct_UClass_UKillerPossessionComponent, &UKillerPossessionComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UKillerPossessionComponent"), false, nullptr, nullptr, nullptr);

	void UKillerPossessionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__shouldDeactivateCollisionsWithSurvivors(TEXT("_shouldDeactivateCollisionsWithSurvivors"));

		const bool bIsValid = true
			&& Name__shouldDeactivateCollisionsWithSurvivors == ClassReps[(int32)ENetFields_Private::_shouldDeactivateCollisionsWithSurvivors].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UKillerPossessionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerPossessionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
