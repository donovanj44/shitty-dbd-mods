// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusEffectCollectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectCollectionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffectCollectionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffectCollectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStatusEffectCollectionComponent::execOnRep_Array)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Array();
		P_NATIVE_END;
	}
	void UStatusEffectCollectionComponent::StaticRegisterNativesUStatusEffectCollectionComponent()
	{
		UClass* Class = UStatusEffectCollectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Array", &UStatusEffectCollectionComponent::execOnRep_Array },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffectCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectCollectionComponent, nullptr, "OnRep_Array", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatusEffectCollectionComponent_NoRegister()
	{
		return UStatusEffectCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatusEffectCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__local_oldArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__local_oldArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__local_oldArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusEffectCollectionComponent_OnRep_Array, "OnRep_Array" }, // 10698874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatusEffectCollectionComponent.h" },
		{ "ModuleRelativePath", "Public/StatusEffectCollectionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray = { "_local_oldArray", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusEffectCollectionComponent, _local_oldArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray_Inner = { "_local_oldArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array = { "_array", "OnRep_Array", (EPropertyFlags)0x0040008100002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusEffectCollectionComponent, _array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array_Inner = { "_array", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__local_oldArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::NewProp__array_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffectCollectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::ClassParams = {
		&UStatusEffectCollectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusEffectCollectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatusEffectCollectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatusEffectCollectionComponent, 2881330816);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStatusEffectCollectionComponent>()
	{
		return UStatusEffectCollectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatusEffectCollectionComponent(Z_Construct_UClass_UStatusEffectCollectionComponent, &UStatusEffectCollectionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStatusEffectCollectionComponent"), false, nullptr, nullptr, nullptr);

	void UStatusEffectCollectionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__array(TEXT("_array"));

		const bool bIsValid = true
			&& Name__array == ClassReps[(int32)ENetFields_Private::_array].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStatusEffectCollectionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusEffectCollectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
