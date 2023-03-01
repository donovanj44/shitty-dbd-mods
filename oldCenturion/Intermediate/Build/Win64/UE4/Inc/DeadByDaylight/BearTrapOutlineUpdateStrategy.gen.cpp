// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BearTrapOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearTrapOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBearTrapOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UBearTrapOutlineUpdateStrategy::execSetOwningBearTrapMapActorComponent)
	{
		P_GET_OBJECT(UMapActorComponent,Z_Param_mapActorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningBearTrapMapActorComponent(Z_Param_mapActorComponent);
		P_NATIVE_END;
	}
	void UBearTrapOutlineUpdateStrategy::StaticRegisterNativesUBearTrapOutlineUpdateStrategy()
	{
		UClass* Class = UBearTrapOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOwningBearTrapMapActorComponent", &UBearTrapOutlineUpdateStrategy::execSetOwningBearTrapMapActorComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics
	{
		struct BearTrapOutlineUpdateStrategy_eventSetOwningBearTrapMapActorComponent_Parms
		{
			UMapActorComponent* mapActorComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mapActorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::NewProp_mapActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::NewProp_mapActorComponent = { "mapActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BearTrapOutlineUpdateStrategy_eventSetOwningBearTrapMapActorComponent_Parms, mapActorComponent), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::NewProp_mapActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::NewProp_mapActorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::NewProp_mapActorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BearTrapOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBearTrapOutlineUpdateStrategy, nullptr, "SetOwningBearTrapMapActorComponent", nullptr, nullptr, sizeof(BearTrapOutlineUpdateStrategy_eventSetOwningBearTrapMapActorComponent_Parms), Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_NoRegister()
	{
		return UBearTrapOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningBearTrapMapActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningBearTrapMapActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerOutlineFadeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerOutlineFadeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevealedColorToSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RevealedColorToSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrevealedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnrevealedColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent, "SetOwningBearTrapMapActorComponent" }, // 1614348710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BearTrapOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/BearTrapOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp__owningBearTrapMapActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BearTrapOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp__owningBearTrapMapActorComponent = { "_owningBearTrapMapActorComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBearTrapOutlineUpdateStrategy, _owningBearTrapMapActorComponent), Z_Construct_UClass_UMapActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp__owningBearTrapMapActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp__owningBearTrapMapActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_KillerOutlineFadeCurve_MetaData[] = {
		{ "Category", "BearTrapOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/BearTrapOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_KillerOutlineFadeCurve = { "KillerOutlineFadeCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBearTrapOutlineUpdateStrategy, KillerOutlineFadeCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_KillerOutlineFadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_KillerOutlineFadeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_RevealedColorToSurvivor_MetaData[] = {
		{ "Category", "BearTrapOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/BearTrapOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_RevealedColorToSurvivor = { "RevealedColorToSurvivor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBearTrapOutlineUpdateStrategy, RevealedColorToSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_RevealedColorToSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_RevealedColorToSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_UnrevealedColor_MetaData[] = {
		{ "Category", "BearTrapOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/BearTrapOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_UnrevealedColor = { "UnrevealedColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBearTrapOutlineUpdateStrategy, UnrevealedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_UnrevealedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_UnrevealedColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp__owningBearTrapMapActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_KillerOutlineFadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_RevealedColorToSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::NewProp_UnrevealedColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBearTrapOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::ClassParams = {
		&UBearTrapOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBearTrapOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBearTrapOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBearTrapOutlineUpdateStrategy, 1600542099);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBearTrapOutlineUpdateStrategy>()
	{
		return UBearTrapOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBearTrapOutlineUpdateStrategy(Z_Construct_UClass_UBearTrapOutlineUpdateStrategy, &UBearTrapOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBearTrapOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBearTrapOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
