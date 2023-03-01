// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DecalCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalCollection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalCollection_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDecalComponent_NoRegister();
// End Cross Module References
	void UDecalCollection::StaticRegisterNativesUDecalCollection()
	{
	}
	UClass* Z_Construct_UClass_UDecalCollection_NoRegister()
	{
		return UDecalCollection::StaticClass();
	}
	struct Z_Construct_UClass_UDecalCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deltaZMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__deltaZMultipliers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__deltaZMultipliers_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__deltaZMultipliers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__DeltaZPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__DeltaZPool;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__DeltaZPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inactiveDecalComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__inactiveDecalComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inactiveDecalComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeDecalComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__activeDecalComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeDecalComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decalComponentsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__decalComponentsArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__decalComponentsArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecalCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DecalCollection.h" },
		{ "ModuleRelativePath", "Public/DecalCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecalCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers = { "_deltaZMultipliers", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalCollection, _deltaZMultipliers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_Key_KeyProp = { "_deltaZMultipliers_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_ValueProp = { "_deltaZMultipliers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecalCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool = { "_DeltaZPool", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalCollection, _DeltaZPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool_Inner = { "_DeltaZPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DecalCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents = { "_inactiveDecalComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalCollection, _inactiveDecalComponents), METADATA_PARAMS(Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents_ElementProp = { "_inactiveDecalComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDDecalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DecalCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents = { "_activeDecalComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalCollection, _activeDecalComponents), METADATA_PARAMS(Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents_ElementProp = { "_activeDecalComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDDecalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DecalCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray = { "_decalComponentsArray", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalCollection, _decalComponentsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray_Inner = { "_decalComponentsArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDDecalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecalCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__deltaZMultipliers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__DeltaZPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__inactiveDecalComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__activeDecalComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalCollection_Statics::NewProp__decalComponentsArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecalCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecalCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecalCollection_Statics::ClassParams = {
		&UDecalCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDecalCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDecalCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecalCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecalCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecalCollection, 1792542278);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDecalCollection>()
	{
		return UDecalCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecalCollection(Z_Construct_UClass_UDecalCollection, &UDecalCollection::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDecalCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
