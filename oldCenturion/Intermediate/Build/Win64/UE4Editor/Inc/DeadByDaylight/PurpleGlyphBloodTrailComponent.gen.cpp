// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PurpleGlyphBloodTrailComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurpleGlyphBloodTrailComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPurpleGlyphBloodTrailComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UPurpleGlyphBloodTrailComponent::execDeactivateGlyphBloodTrail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateGlyphBloodTrail();
		P_NATIVE_END;
	}
	void UPurpleGlyphBloodTrailComponent::StaticRegisterNativesUPurpleGlyphBloodTrailComponent()
	{
		UClass* Class = UPurpleGlyphBloodTrailComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeactivateGlyphBloodTrail", &UPurpleGlyphBloodTrailComponent::execDeactivateGlyphBloodTrail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphBloodTrailComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphBloodTrailComponent, nullptr, "DeactivateGlyphBloodTrail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_NoRegister()
	{
		return UPurpleGlyphBloodTrailComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBloodTrailComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPurpleGlyphBloodTrailComponent_DeactivateGlyphBloodTrail, "DeactivateGlyphBloodTrail" }, // 3235446900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PurpleGlyphBloodTrailComponent.h" },
		{ "ModuleRelativePath", "Public/PurpleGlyphBloodTrailComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPurpleGlyphBloodTrailComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::ClassParams = {
		&UPurpleGlyphBloodTrailComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPurpleGlyphBloodTrailComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPurpleGlyphBloodTrailComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPurpleGlyphBloodTrailComponent, 1580076998);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPurpleGlyphBloodTrailComponent>()
	{
		return UPurpleGlyphBloodTrailComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPurpleGlyphBloodTrailComponent(Z_Construct_UClass_UPurpleGlyphBloodTrailComponent, &UPurpleGlyphBloodTrailComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPurpleGlyphBloodTrailComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPurpleGlyphBloodTrailComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
