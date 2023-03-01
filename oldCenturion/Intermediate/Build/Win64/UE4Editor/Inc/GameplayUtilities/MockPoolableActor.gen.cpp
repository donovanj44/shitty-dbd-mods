// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/MockPoolableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockPoolableActor() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_AMockPoolableActor_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_AMockPoolableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActorComponent_NoRegister();
// End Cross Module References
	void AMockPoolableActor::StaticRegisterNativesAMockPoolableActor()
	{
	}
	UClass* Z_Construct_UClass_AMockPoolableActor_NoRegister()
	{
		return AMockPoolableActor::StaticClass();
	}
	struct Z_Construct_UClass_AMockPoolableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__poolable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__poolable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMockPoolableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMockPoolableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockPoolableActor.h" },
		{ "ModuleRelativePath", "Public/MockPoolableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMockPoolableActor_Statics::NewProp__poolable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MockPoolableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMockPoolableActor_Statics::NewProp__poolable = { "_poolable", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMockPoolableActor, _poolable), Z_Construct_UClass_UPoolableActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMockPoolableActor_Statics::NewProp__poolable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMockPoolableActor_Statics::NewProp__poolable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMockPoolableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockPoolableActor_Statics::NewProp__poolable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMockPoolableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMockPoolableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMockPoolableActor_Statics::ClassParams = {
		&AMockPoolableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMockPoolableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMockPoolableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMockPoolableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMockPoolableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMockPoolableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMockPoolableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMockPoolableActor, 948588317);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<AMockPoolableActor>()
	{
		return AMockPoolableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMockPoolableActor(Z_Construct_UClass_AMockPoolableActor, &AMockPoolableActor::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("AMockPoolableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMockPoolableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
