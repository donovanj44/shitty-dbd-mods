// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DestroyBreakableDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyBreakableDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDestroyBreakableDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDestroyBreakableDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABreakableBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDestroyBreakableDefinition::execGetBreakable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABreakableBase**)Z_Param__Result=P_THIS->GetBreakable();
		P_NATIVE_END;
	}
	void UDestroyBreakableDefinition::StaticRegisterNativesUDestroyBreakableDefinition()
	{
		UClass* Class = UDestroyBreakableDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBreakable", &UDestroyBreakableDefinition::execGetBreakable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics
	{
		struct DestroyBreakableDefinition_eventGetBreakable_Parms
		{
			ABreakableBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroyBreakableDefinition_eventGetBreakable_Parms, ReturnValue), Z_Construct_UClass_ABreakableBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestroyBreakableDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestroyBreakableDefinition, nullptr, "GetBreakable", nullptr, nullptr, sizeof(DestroyBreakableDefinition_eventGetBreakable_Parms), Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDestroyBreakableDefinition_NoRegister()
	{
		return UDestroyBreakableDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UDestroyBreakableDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__breakable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__breakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionTimePercentForDestroyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__interactionTimePercentForDestroyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestroyBreakableDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestroyBreakableDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestroyBreakableDefinition_GetBreakable, "GetBreakable" }, // 3148457819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyBreakableDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DestroyBreakableDefinition.h" },
		{ "ModuleRelativePath", "Public/DestroyBreakableDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__breakable_MetaData[] = {
		{ "ModuleRelativePath", "Public/DestroyBreakableDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__breakable = { "_breakable", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestroyBreakableDefinition, _breakable), Z_Construct_UClass_ABreakableBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__breakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__breakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__interactionTimePercentForDestroyEvent_MetaData[] = {
		{ "Category", "DestroyBreakableDefinition" },
		{ "ModuleRelativePath", "Public/DestroyBreakableDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__interactionTimePercentForDestroyEvent = { "_interactionTimePercentForDestroyEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestroyBreakableDefinition, _interactionTimePercentForDestroyEvent), METADATA_PARAMS(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__interactionTimePercentForDestroyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__interactionTimePercentForDestroyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestroyBreakableDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__breakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroyBreakableDefinition_Statics::NewProp__interactionTimePercentForDestroyEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestroyBreakableDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestroyBreakableDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDestroyBreakableDefinition_Statics::ClassParams = {
		&UDestroyBreakableDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestroyBreakableDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyBreakableDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestroyBreakableDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDestroyBreakableDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDestroyBreakableDefinition, 544142297);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDestroyBreakableDefinition>()
	{
		return UDestroyBreakableDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestroyBreakableDefinition(Z_Construct_UClass_UDestroyBreakableDefinition, &UDestroyBreakableDefinition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDestroyBreakableDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestroyBreakableDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
