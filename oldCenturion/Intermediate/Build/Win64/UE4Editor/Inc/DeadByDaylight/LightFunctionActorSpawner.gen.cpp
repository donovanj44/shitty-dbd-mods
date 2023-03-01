// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LightFunctionActorSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightFunctionActorSpawner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightFunctionActorSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULightFunctionActorSpawner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	void ULightFunctionActorSpawner::StaticRegisterNativesULightFunctionActorSpawner()
	{
	}
	UClass* Z_Construct_UClass_ULightFunctionActorSpawner_NoRegister()
	{
		return ULightFunctionActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ULightFunctionActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightFunctionTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightFunctionActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightFunctionActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LightFunctionActorSpawner.h" },
		{ "ModuleRelativePath", "Public/LightFunctionActorSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightFunctionActorSpawner_Statics::NewProp_LightFunctionTexture_MetaData[] = {
		{ "Category", "LightFunctionActorSpawner" },
		{ "ModuleRelativePath", "Public/LightFunctionActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightFunctionActorSpawner_Statics::NewProp_LightFunctionTexture = { "LightFunctionTexture", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightFunctionActorSpawner, LightFunctionTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightFunctionActorSpawner_Statics::NewProp_LightFunctionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightFunctionActorSpawner_Statics::NewProp_LightFunctionTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightFunctionActorSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightFunctionActorSpawner_Statics::NewProp_LightFunctionTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightFunctionActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightFunctionActorSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightFunctionActorSpawner_Statics::ClassParams = {
		&ULightFunctionActorSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightFunctionActorSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightFunctionActorSpawner_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightFunctionActorSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightFunctionActorSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightFunctionActorSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightFunctionActorSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightFunctionActorSpawner, 714460031);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULightFunctionActorSpawner>()
	{
		return ULightFunctionActorSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightFunctionActorSpawner(Z_Construct_UClass_ULightFunctionActorSpawner, &ULightFunctionActorSpawner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULightFunctionActorSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightFunctionActorSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
