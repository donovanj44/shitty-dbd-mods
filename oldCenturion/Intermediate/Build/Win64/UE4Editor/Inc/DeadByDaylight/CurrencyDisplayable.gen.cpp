// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CurrencyDisplayable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyDisplayable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACurrencyDisplayable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACurrencyDisplayable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStandDisplayable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACurrencyDisplayable::execBeginDestroySequence_Internal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroySequence_Internal_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACurrencyDisplayable_BeginDestroySequence_Internal = FName(TEXT("BeginDestroySequence_Internal"));
	void ACurrencyDisplayable::BeginDestroySequence_Internal()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACurrencyDisplayable_BeginDestroySequence_Internal),NULL);
	}
	static FName NAME_ACurrencyDisplayable_FinishSpawningCurrency = FName(TEXT("FinishSpawningCurrency"));
	void ACurrencyDisplayable::FinishSpawningCurrency(ECurrencyType currencyType)
	{
		CurrencyDisplayable_eventFinishSpawningCurrency_Parms Parms;
		Parms.currencyType=currencyType;
		ProcessEvent(FindFunctionChecked(NAME_ACurrencyDisplayable_FinishSpawningCurrency),&Parms);
	}
	void ACurrencyDisplayable::StaticRegisterNativesACurrencyDisplayable()
	{
		UClass* Class = ACurrencyDisplayable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDestroySequence_Internal", &ACurrencyDisplayable::execBeginDestroySequence_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrencyDisplayable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACurrencyDisplayable, nullptr, "BeginDestroySequence_Internal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurrencyDisplayable_eventFinishSpawningCurrency_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::NewProp_currencyType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrencyDisplayable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACurrencyDisplayable, nullptr, "FinishSpawningCurrency", nullptr, nullptr, sizeof(CurrencyDisplayable_eventFinishSpawningCurrency_Parms), Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACurrencyDisplayable_NoRegister()
	{
		return ACurrencyDisplayable::StaticClass();
	}
	struct Z_Construct_UClass_ACurrencyDisplayable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currencyMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__currencyMeshes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currencyMeshes_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currencyMeshes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currencyMeshes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACurrencyDisplayable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACurrencyDisplayable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACurrencyDisplayable_BeginDestroySequence_Internal, "BeginDestroySequence_Internal" }, // 2041390831
		{ &Z_Construct_UFunction_ACurrencyDisplayable_FinishSpawningCurrency, "FinishSpawningCurrency" }, // 2434208738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACurrencyDisplayable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CurrencyDisplayable.h" },
		{ "ModuleRelativePath", "Public/CurrencyDisplayable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_MetaData[] = {
		{ "Category", "CurrencyDisplayable" },
		{ "ModuleRelativePath", "Public/CurrencyDisplayable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes = { "_currencyMeshes", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACurrencyDisplayable, _currencyMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_Key_KeyProp = { "_currencyMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_ValueProp = { "_currencyMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "CurrencyDisplayable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrencyDisplayable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACurrencyDisplayable, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACurrencyDisplayable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp__currencyMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACurrencyDisplayable_Statics::NewProp_SkeletalMeshComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACurrencyDisplayable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStandDisplayable_NoRegister, (int32)VTABLE_OFFSET(ACurrencyDisplayable, IStandDisplayable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACurrencyDisplayable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACurrencyDisplayable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACurrencyDisplayable_Statics::ClassParams = {
		&ACurrencyDisplayable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACurrencyDisplayable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyDisplayable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACurrencyDisplayable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACurrencyDisplayable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACurrencyDisplayable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACurrencyDisplayable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACurrencyDisplayable, 2990494200);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACurrencyDisplayable>()
	{
		return ACurrencyDisplayable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACurrencyDisplayable(Z_Construct_UClass_ACurrencyDisplayable, &ACurrencyDisplayable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACurrencyDisplayable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACurrencyDisplayable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
