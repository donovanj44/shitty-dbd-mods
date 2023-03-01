// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerPositionOffsetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerPositionOffsetComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerPositionOffsetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
// End Cross Module References
	void UDBDPlayerPositionOffsetComponent::StaticRegisterNativesUDBDPlayerPositionOffsetComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_NoRegister()
	{
		return UDBDPlayerPositionOffsetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__menuZHeadOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__menuZHeadOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDPlayerPositionOffsetComponent.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerPositionOffsetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::NewProp__menuZHeadOffset_MetaData[] = {
		{ "Category", "DBDPlayerPositionOffsetComponent" },
		{ "ModuleRelativePath", "Public/DBDPlayerPositionOffsetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::NewProp__menuZHeadOffset = { "_menuZHeadOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPlayerPositionOffsetComponent, _menuZHeadOffset), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::NewProp__menuZHeadOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::NewProp__menuZHeadOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::NewProp__menuZHeadOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPlayerPositionOffsetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::ClassParams = {
		&UDBDPlayerPositionOffsetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPlayerPositionOffsetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPlayerPositionOffsetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPlayerPositionOffsetComponent, 2232616187);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDPlayerPositionOffsetComponent>()
	{
		return UDBDPlayerPositionOffsetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPlayerPositionOffsetComponent(Z_Construct_UClass_UDBDPlayerPositionOffsetComponent, &UDBDPlayerPositionOffsetComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDPlayerPositionOffsetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPlayerPositionOffsetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
