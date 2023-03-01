// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FleeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFleeComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFleeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFleeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UFleeComponent::StaticRegisterNativesUFleeComponent()
	{
	}
	UClass* Z_Construct_UClass_UFleeComponent_NoRegister()
	{
		return UFleeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFleeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__threat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__threat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFleeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FleeComponent.h" },
		{ "ModuleRelativePath", "Public/FleeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleeComponent_Statics::NewProp__threat_MetaData[] = {
		{ "ModuleRelativePath", "Public/FleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFleeComponent_Statics::NewProp__threat = { "_threat", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFleeComponent, _threat), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleeComponent_Statics::NewProp__threat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleeComponent_Statics::NewProp__threat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFleeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleeComponent_Statics::NewProp__threat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFleeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFleeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFleeComponent_Statics::ClassParams = {
		&UFleeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFleeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFleeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFleeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFleeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFleeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFleeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFleeComponent, 1142476488);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFleeComponent>()
	{
		return UFleeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFleeComponent(Z_Construct_UClass_UFleeComponent, &UFleeComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFleeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFleeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
