// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDBlackboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBlackboardComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDBlackboardComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDBlackboardComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FMindFocusObjectEntry();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UDBDBlackboardComponent::StaticRegisterNativesUDBDBlackboardComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDBlackboardComponent_NoRegister()
	{
		return UDBDBlackboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDBlackboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__intentionValidators_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__intentionValidators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__intentionValidators_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__discoveredObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__discoveredObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__discoveredObjects_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectWishListMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__objectWishListMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__objectWishListMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__objectWishListMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lostMindFocusEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__lostMindFocusEntries;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lostMindFocusEntries_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lostMindFocusEntries_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pinObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__pinObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pinObjects_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pinObjects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pinLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__pinLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pinLocations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pinLocations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mindFocusEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__mindFocusEntries;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mindFocusEntries_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__mindFocusEntries_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDBlackboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "DBDBlackboardComponent.h" },
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators = { "_intentionValidators", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _intentionValidators), METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators_ElementProp = { "_intentionValidators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects = { "_discoveredObjects", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _discoveredObjects), METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects_ElementProp = { "_discoveredObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap = { "_objectWishListMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _objectWishListMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_Key_KeyProp = { "_objectWishListMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_ValueProp = { "_objectWishListMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FWeightedWishedObjectMapContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries = { "_lostMindFocusEntries", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _lostMindFocusEntries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_Key_KeyProp = { "_lostMindFocusEntries_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_ValueProp = { "_lostMindFocusEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects = { "_pinObjects", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _pinObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_Key_KeyProp = { "_pinObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_ValueProp = { "_pinObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations = { "_pinLocations", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _pinLocations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_Key_KeyProp = { "_pinLocations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_ValueProp = { "_pinLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDBlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries = { "_mindFocusEntries", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBlackboardComponent, _mindFocusEntries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_Key_KeyProp = { "_mindFocusEntries_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_ValueProp = { "_mindFocusEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMindFocusObjectEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDBlackboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__intentionValidators_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__discoveredObjects_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__objectWishListMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__lostMindFocusEntries_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__pinLocations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBlackboardComponent_Statics::NewProp__mindFocusEntries_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UDBDBlackboardComponent, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDBlackboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDBlackboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDBlackboardComponent_Statics::ClassParams = {
		&UDBDBlackboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDBlackboardComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDBlackboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBlackboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDBlackboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDBlackboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDBlackboardComponent, 1534591016);
	template<> DBDBOTS_API UClass* StaticClass<UDBDBlackboardComponent>()
	{
		return UDBDBlackboardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDBlackboardComponent(Z_Construct_UClass_UDBDBlackboardComponent, &UDBDBlackboardComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDBlackboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDBlackboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
