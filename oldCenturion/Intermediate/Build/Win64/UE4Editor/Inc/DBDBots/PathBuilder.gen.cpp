// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathBuilder() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_ADBDAIBTController_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavMovePath_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAITerrorLevel();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UPathBuilder::StaticRegisterNativesUPathBuilder()
	{
	}
	UClass* Z_Construct_UClass_UPathBuilder_NoRegister()
	{
		return UPathBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPathBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__aiOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__aiOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__path_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePreviousPathStrategy_MetaData[];
#endif
		static void NewProp_OverridePreviousPathStrategy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverridePreviousPathStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleratedTerrorPressure_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ToleratedTerrorPressure;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleratedTerrorPressure_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathReachedPointRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathReachedPointRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathBuilder.h" },
		{ "ModuleRelativePath", "Public/PathBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_Statics::NewProp__aiOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_Statics::NewProp__aiOwner = { "_aiOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder, _aiOwner), Z_Construct_UClass_ADBDAIBTController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_Statics::NewProp__aiOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::NewProp__aiOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_Statics::NewProp__path_MetaData[] = {
		{ "ModuleRelativePath", "Public/PathBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathBuilder_Statics::NewProp__path = { "_path", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder, _path), Z_Construct_UClass_UNavMovePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_Statics::NewProp__path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::NewProp__path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy_MetaData[] = {
		{ "Category", "PathBuilder" },
		{ "ModuleRelativePath", "Public/PathBuilder.h" },
	};
#endif
	void Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy_SetBit(void* Obj)
	{
		((UPathBuilder*)Obj)->OverridePreviousPathStrategy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy = { "OverridePreviousPathStrategy", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPathBuilder), &Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure_MetaData[] = {
		{ "Category", "PathBuilder" },
		{ "ModuleRelativePath", "Public/PathBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure = { "ToleratedTerrorPressure", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder, ToleratedTerrorPressure), Z_Construct_UEnum_DeadByDaylight_EAITerrorLevel, METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_Statics::NewProp_PathReachedPointRadius_MetaData[] = {
		{ "Category", "PathBuilder" },
		{ "ModuleRelativePath", "Public/PathBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathBuilder_Statics::NewProp_PathReachedPointRadius = { "PathReachedPointRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathBuilder, PathReachedPointRadius), METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_Statics::NewProp_PathReachedPointRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::NewProp_PathReachedPointRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_Statics::NewProp__aiOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_Statics::NewProp__path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_Statics::NewProp_OverridePreviousPathStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_Statics::NewProp_ToleratedTerrorPressure_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathBuilder_Statics::NewProp_PathReachedPointRadius,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPathBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UPathBuilder, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathBuilder_Statics::ClassParams = {
		&UPathBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathBuilder_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathBuilder, 2454611416);
	template<> DBDBOTS_API UClass* StaticClass<UPathBuilder>()
	{
		return UPathBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathBuilder(Z_Construct_UClass_UPathBuilder, &UPathBuilder::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
