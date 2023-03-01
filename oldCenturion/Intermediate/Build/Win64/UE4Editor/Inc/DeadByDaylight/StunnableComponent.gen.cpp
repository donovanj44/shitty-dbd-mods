// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StunnableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStunnableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStunnableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStunnableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UStunnableComponent::StaticRegisterNativesUStunnableComponent()
	{
	}
	UClass* Z_Construct_UClass_UStunnableComponent_NoRegister()
	{
		return UStunnableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStunnableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStunnableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStunnableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StunnableComponent.h" },
		{ "ModuleRelativePath", "Public/StunnableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStunnableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStunnableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStunnableComponent_Statics::ClassParams = {
		&UStunnableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStunnableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStunnableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStunnableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStunnableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStunnableComponent, 3822320779);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStunnableComponent>()
	{
		return UStunnableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStunnableComponent(Z_Construct_UClass_UStunnableComponent, &UStunnableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStunnableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStunnableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
