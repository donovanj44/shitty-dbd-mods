// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ProtectionHitComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtectionHitComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UProtectionHitComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UProtectionHitComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UProtectionHitComponent::execAuthority_HandleProtectionScoringEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_HandleProtectionScoringEvents();
		P_NATIVE_END;
	}
	void UProtectionHitComponent::StaticRegisterNativesUProtectionHitComponent()
	{
		UClass* Class = UProtectionHitComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_HandleProtectionScoringEvents", &UProtectionHitComponent::execAuthority_HandleProtectionScoringEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProtectionHitComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtectionHitComponent, nullptr, "Authority_HandleProtectionScoringEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProtectionHitComponent_NoRegister()
	{
		return UProtectionHitComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProtectionHitComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtectionHitComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProtectionHitComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProtectionHitComponent_Authority_HandleProtectionScoringEvents, "Authority_HandleProtectionScoringEvents" }, // 3262893988
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtectionHitComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProtectionHitComponent.h" },
		{ "ModuleRelativePath", "Public/ProtectionHitComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtectionHitComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtectionHitComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtectionHitComponent_Statics::ClassParams = {
		&UProtectionHitComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProtectionHitComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtectionHitComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtectionHitComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtectionHitComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtectionHitComponent, 763306044);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UProtectionHitComponent>()
	{
		return UProtectionHitComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtectionHitComponent(Z_Construct_UClass_UProtectionHitComponent, &UProtectionHitComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UProtectionHitComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtectionHitComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
