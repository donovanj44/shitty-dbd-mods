// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BufferLastValidLocationObjectPlacementStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBufferLastValidLocationObjectPlacementStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBufferLastValidLocationObjectPlacementStrategy::StaticRegisterNativesUBufferLastValidLocationObjectPlacementStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_NoRegister()
	{
		return UBufferLastValidLocationObjectPlacementStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxDistanceToOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxDistanceToOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectPlacementUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BufferLastValidLocationObjectPlacementStrategy.h" },
		{ "ModuleRelativePath", "Public/BufferLastValidLocationObjectPlacementStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::NewProp__maxDistanceToOwner_MetaData[] = {
		{ "Category", "BufferLastValidLocationObjectPlacementStrategy" },
		{ "ModuleRelativePath", "Public/BufferLastValidLocationObjectPlacementStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::NewProp__maxDistanceToOwner = { "_maxDistanceToOwner", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBufferLastValidLocationObjectPlacementStrategy, _maxDistanceToOwner), METADATA_PARAMS(Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::NewProp__maxDistanceToOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::NewProp__maxDistanceToOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::NewProp__maxDistanceToOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBufferLastValidLocationObjectPlacementStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::ClassParams = {
		&UBufferLastValidLocationObjectPlacementStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBufferLastValidLocationObjectPlacementStrategy, 489197450);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBufferLastValidLocationObjectPlacementStrategy>()
	{
		return UBufferLastValidLocationObjectPlacementStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBufferLastValidLocationObjectPlacementStrategy(Z_Construct_UClass_UBufferLastValidLocationObjectPlacementStrategy, &UBufferLastValidLocationObjectPlacementStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBufferLastValidLocationObjectPlacementStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBufferLastValidLocationObjectPlacementStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
