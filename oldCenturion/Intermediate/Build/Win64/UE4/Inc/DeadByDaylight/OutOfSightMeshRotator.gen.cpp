// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutOfSightMeshRotator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutOfSightMeshRotator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutOfSightMeshRotator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutOfSightMeshRotator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOutOfSightMeshRotator::execSetMeshesToRotate)
	{
		P_GET_TARRAY(UMeshComponent*,Z_Param_meshesToRotate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshesToRotate(Z_Param_meshesToRotate);
		P_NATIVE_END;
	}
	void UOutOfSightMeshRotator::StaticRegisterNativesUOutOfSightMeshRotator()
	{
		UClass* Class = UOutOfSightMeshRotator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMeshesToRotate", &UOutOfSightMeshRotator::execSetMeshesToRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics
	{
		struct OutOfSightMeshRotator_eventSetMeshesToRotate_Parms
		{
			TArray<UMeshComponent*> meshesToRotate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshesToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meshesToRotate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshesToRotate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate = { "meshesToRotate", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OutOfSightMeshRotator_eventSetMeshesToRotate_Parms, meshesToRotate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate_Inner = { "meshesToRotate", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::NewProp_meshesToRotate_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutOfSightMeshRotator, nullptr, "SetMeshesToRotate", nullptr, nullptr, sizeof(OutOfSightMeshRotator_eventSetMeshesToRotate_Parms), Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOutOfSightMeshRotator_NoRegister()
	{
		return UOutOfSightMeshRotator::StaticClass();
	}
	struct Z_Construct_UClass_UOutOfSightMeshRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshesToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__meshesToRotate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meshesToRotate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__locallyObservedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__locallyObservedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dotProductThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__dotProductThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutOfSightMeshRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOutOfSightMeshRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutOfSightMeshRotator_SetMeshesToRotate, "SetMeshesToRotate" }, // 2910875577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutOfSightMeshRotator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OutOfSightMeshRotator.h" },
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__rotationOffset_MetaData[] = {
		{ "Category", "OutOfSightMeshRotator" },
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__rotationOffset = { "_rotationOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOutOfSightMeshRotator, _rotationOffset), METADATA_PARAMS(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__rotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__rotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate = { "_meshesToRotate", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOutOfSightMeshRotator, _meshesToRotate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate_Inner = { "_meshesToRotate", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__locallyObservedPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__locallyObservedPlayer = { "_locallyObservedPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOutOfSightMeshRotator, _locallyObservedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__locallyObservedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__locallyObservedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__dotProductThreshold_MetaData[] = {
		{ "Category", "OutOfSightMeshRotator" },
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__dotProductThreshold = { "_dotProductThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOutOfSightMeshRotator, _dotProductThreshold), METADATA_PARAMS(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__dotProductThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__dotProductThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__maxDistance_MetaData[] = {
		{ "Category", "OutOfSightMeshRotator" },
		{ "ModuleRelativePath", "Public/OutOfSightMeshRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__maxDistance = { "_maxDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOutOfSightMeshRotator, _maxDistance), METADATA_PARAMS(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__maxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__maxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutOfSightMeshRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__rotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__meshesToRotate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__locallyObservedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__dotProductThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutOfSightMeshRotator_Statics::NewProp__maxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutOfSightMeshRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutOfSightMeshRotator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOutOfSightMeshRotator_Statics::ClassParams = {
		&UOutOfSightMeshRotator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOutOfSightMeshRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::PropPointers),
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutOfSightMeshRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutOfSightMeshRotator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOutOfSightMeshRotator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOutOfSightMeshRotator, 3008330406);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOutOfSightMeshRotator>()
	{
		return UOutOfSightMeshRotator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOutOfSightMeshRotator(Z_Construct_UClass_UOutOfSightMeshRotator, &UOutOfSightMeshRotator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOutOfSightMeshRotator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutOfSightMeshRotator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
