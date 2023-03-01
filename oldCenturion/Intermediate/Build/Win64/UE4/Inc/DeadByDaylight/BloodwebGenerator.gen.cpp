// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebGenerator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebDistribution_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDesignTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
// End Cross Module References
	void UBloodwebGenerator::StaticRegisterNativesUBloodwebGenerator()
	{
	}
	UClass* Z_Construct_UClass_UBloodwebGenerator_NoRegister()
	{
		return UBloodwebGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UBloodwebGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dataDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dataDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alternativePathOccurenceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__alternativePathOccurenceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__designTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__designTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodWebDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__bloodWebDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__selectedContent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__selectedContent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__selectedNodes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__selectedNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__randomizationStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__randomizationStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodwebGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodwebGenerator.h" },
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebSettings_MetaData[] = {
		{ "Category", "BloodwebGenerator" },
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebSettings = { "_bloodwebSettings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _bloodwebSettings), Z_Construct_UClass_UBloodwebSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__dataDistribution_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__dataDistribution = { "_dataDistribution", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _dataDistribution), Z_Construct_UClass_UBloodwebDistribution_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__dataDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__dataDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__alternativePathOccurenceFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__alternativePathOccurenceFactor = { "_alternativePathOccurenceFactor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _alternativePathOccurenceFactor), METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__alternativePathOccurenceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__alternativePathOccurenceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebTunables = { "_bloodwebTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _bloodwebTunables), Z_Construct_UClass_UBloodwebTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__designTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__designTunables = { "_designTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _designTunables), Z_Construct_UClass_UDBDDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__designTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__designTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodWebDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodWebDefinition = { "_bloodWebDefinition", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _bloodWebDefinition), Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodWebDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodWebDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent = { "_selectedContent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _selectedContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent_Inner = { "_selectedContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes = { "_selectedNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _selectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes_Inner = { "_selectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__randomizationStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__randomizationStream = { "_randomizationStream", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebGenerator, _randomizationStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__randomizationStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__randomizationStream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodwebGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__dataDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__alternativePathOccurenceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodwebTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__designTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__bloodWebDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__selectedNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebGenerator_Statics::NewProp__randomizationStream,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodwebGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodwebGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodwebGenerator_Statics::ClassParams = {
		&UBloodwebGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodwebGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodwebGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodwebGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodwebGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodwebGenerator, 1098209357);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodwebGenerator>()
	{
		return UBloodwebGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodwebGenerator(Z_Construct_UClass_UBloodwebGenerator, &UBloodwebGenerator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodwebGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodwebGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
