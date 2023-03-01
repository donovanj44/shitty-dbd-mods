// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EventObjectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventObjectComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventObjectComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEventObjectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UEventObjectComponent::StaticRegisterNativesUEventObjectComponent()
	{
	}
	UClass* Z_Construct_UClass_UEventObjectComponent_NoRegister()
	{
		return UEventObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEventObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__eventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventObjectComponent.h" },
		{ "ModuleRelativePath", "Public/EventObjectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventObjectComponent_Statics::NewProp__eventId_MetaData[] = {
		{ "Category", "EventObjectComponent" },
		{ "ModuleRelativePath", "Public/EventObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEventObjectComponent_Statics::NewProp__eventId = { "_eventId", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventObjectComponent, _eventId), METADATA_PARAMS(Z_Construct_UClass_UEventObjectComponent_Statics::NewProp__eventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectComponent_Statics::NewProp__eventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventObjectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventObjectComponent_Statics::NewProp__eventId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventObjectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventObjectComponent_Statics::ClassParams = {
		&UEventObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEventObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEventObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventObjectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventObjectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventObjectComponent, 1256385051);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEventObjectComponent>()
	{
		return UEventObjectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventObjectComponent(Z_Construct_UClass_UEventObjectComponent, &UEventObjectComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEventObjectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventObjectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
