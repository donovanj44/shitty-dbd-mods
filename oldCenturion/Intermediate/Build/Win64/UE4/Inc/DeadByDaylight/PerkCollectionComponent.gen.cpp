// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkCollectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkCollectionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkCollectionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkCollectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPerkCollectionComponent::execOnRep_Array)
	{
		P_GET_TARRAY_REF(UPerk*,Z_Param_Out_oldArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Array(Z_Param_Out_oldArray);
		P_NATIVE_END;
	}
	void UPerkCollectionComponent::StaticRegisterNativesUPerkCollectionComponent()
	{
		UClass* Class = UPerkCollectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Array", &UPerkCollectionComponent::execOnRep_Array },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics
	{
		struct PerkCollectionComponent_eventOnRep_Array_Parms
		{
			TArray<UPerk*> oldArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_oldArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray = { "oldArray", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkCollectionComponent_eventOnRep_Array_Parms, oldArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray_Inner = { "oldArray", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::NewProp_oldArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkCollectionComponent, nullptr, "OnRep_Array", nullptr, nullptr, sizeof(PerkCollectionComponent_eventOnRep_Array_Parms), Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkCollectionComponent_NoRegister()
	{
		return UPerkCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPerkCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkCollectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkCollectionComponent_OnRep_Array, "OnRep_Array" }, // 2649252680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkCollectionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkCollectionComponent.h" },
		{ "ModuleRelativePath", "Public/PerkCollectionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array = { "_array", "OnRep_Array", (EPropertyFlags)0x0040008100002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkCollectionComponent, _array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array_Inner = { "_array", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkCollectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkCollectionComponent_Statics::NewProp__array_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkCollectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkCollectionComponent_Statics::ClassParams = {
		&UPerkCollectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkCollectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkCollectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkCollectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkCollectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkCollectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkCollectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkCollectionComponent, 3505229589);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkCollectionComponent>()
	{
		return UPerkCollectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkCollectionComponent(Z_Construct_UClass_UPerkCollectionComponent, &UPerkCollectionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkCollectionComponent"), false, nullptr, nullptr, nullptr);

	void UPerkCollectionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__array(TEXT("_array"));

		const bool bIsValid = true
			&& Name__array == ClassReps[(int32)ENetFields_Private::_array].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPerkCollectionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkCollectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
