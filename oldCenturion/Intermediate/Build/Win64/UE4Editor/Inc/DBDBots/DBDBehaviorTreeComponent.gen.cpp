// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDBehaviorTreeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBehaviorTreeComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDBehaviorTreeComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDBehaviorTreeComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FRelevantNodeMemory();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UDBDBehaviorTreeComponent::StaticRegisterNativesUDBDBehaviorTreeComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDBehaviorTreeComponent_NoRegister()
	{
		return UDBDBehaviorTreeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__createdObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__createdObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__createdObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastRelevantNodeMemories_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__lastRelevantNodeMemories;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__lastRelevantNodeMemories_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lastRelevantNodeMemories_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "DBDBehaviorTreeComponent.h" },
		{ "ModuleRelativePath", "Public/DBDBehaviorTreeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBehaviorTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects = { "_createdObjects", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBehaviorTreeComponent, _createdObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects_Inner = { "_createdObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBehaviorTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories = { "_lastRelevantNodeMemories", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBehaviorTreeComponent, _lastRelevantNodeMemories), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_Key_KeyProp = { "_lastRelevantNodeMemories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_ValueProp = { "_lastRelevantNodeMemories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRelevantNodeMemory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__createdObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::NewProp__lastRelevantNodeMemories_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UDBDBehaviorTreeComponent, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDBehaviorTreeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::ClassParams = {
		&UDBDBehaviorTreeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDBehaviorTreeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDBehaviorTreeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDBehaviorTreeComponent, 2978806403);
	template<> DBDBOTS_API UClass* StaticClass<UDBDBehaviorTreeComponent>()
	{
		return UDBDBehaviorTreeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDBehaviorTreeComponent(Z_Construct_UClass_UDBDBehaviorTreeComponent, &UDBDBehaviorTreeComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDBehaviorTreeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDBehaviorTreeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
