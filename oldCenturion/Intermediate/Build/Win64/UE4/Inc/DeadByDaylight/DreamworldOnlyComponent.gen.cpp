// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DreamworldOnlyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamworldOnlyComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDreamworldOnlyComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDreamworldOnlyComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDreamworldOnlyComponent::StaticRegisterNativesUDreamworldOnlyComponent()
	{
	}
	UClass* Z_Construct_UClass_UDreamworldOnlyComponent_NoRegister()
	{
		return UDreamworldOnlyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDreamworldOnlyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamworldOnlyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamworldOnlyComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DreamworldOnlyComponent.h" },
		{ "ModuleRelativePath", "Public/DreamworldOnlyComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamworldOnlyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamworldOnlyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDreamworldOnlyComponent_Statics::ClassParams = {
		&UDreamworldOnlyComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDreamworldOnlyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamworldOnlyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDreamworldOnlyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDreamworldOnlyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDreamworldOnlyComponent, 1710070362);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDreamworldOnlyComponent>()
	{
		return UDreamworldOnlyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDreamworldOnlyComponent(Z_Construct_UClass_UDreamworldOnlyComponent, &UDreamworldOnlyComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDreamworldOnlyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamworldOnlyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
