// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsUtilities/Public/PrimitiveCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitiveCollection() {}
// Cross Module References
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UPrimitiveCollection_NoRegister();
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UPrimitiveCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PhysicsUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPrimitiveCollection::execAdd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Add(Z_Param_primitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrimitiveCollection::execRemove)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Remove(Z_Param_primitive);
		P_NATIVE_END;
	}
	void UPrimitiveCollection::StaticRegisterNativesUPrimitiveCollection()
	{
		UClass* Class = UPrimitiveCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UPrimitiveCollection::execAdd },
			{ "Remove", &UPrimitiveCollection::execRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPrimitiveCollection_Add_Statics
	{
		struct PrimitiveCollection_eventAdd_Parms
		{
			UPrimitiveComponent* primitive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::NewProp_primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::NewProp_primitive = { "primitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrimitiveCollection_eventAdd_Parms, primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::NewProp_primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::NewProp_primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::NewProp_primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrimitiveCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrimitiveCollection, nullptr, "Add", nullptr, nullptr, sizeof(PrimitiveCollection_eventAdd_Parms), Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrimitiveCollection_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrimitiveCollection_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics
	{
		struct PrimitiveCollection_eventRemove_Parms
		{
			UPrimitiveComponent* primitive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::NewProp_primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::NewProp_primitive = { "primitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrimitiveCollection_eventRemove_Parms, primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::NewProp_primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::NewProp_primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::NewProp_primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrimitiveCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrimitiveCollection, nullptr, "Remove", nullptr, nullptr, sizeof(PrimitiveCollection_eventRemove_Parms), Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrimitiveCollection_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrimitiveCollection_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPrimitiveCollection_NoRegister()
	{
		return UPrimitiveCollection::StaticClass();
	}
	struct Z_Construct_UClass_UPrimitiveCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__primitives_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__primitives;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__primitives_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimitiveCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPrimitiveCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPrimitiveCollection_Add, "Add" }, // 560761741
		{ &Z_Construct_UFunction_UPrimitiveCollection_Remove, "Remove" }, // 699279846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrimitiveCollection.h" },
		{ "ModuleRelativePath", "Public/PrimitiveCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives_MetaData[] = {
		{ "ModuleRelativePath", "Public/PrimitiveCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives = { "_primitives", nullptr, (EPropertyFlags)0x0044008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveCollection, _primitives), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives_ElementProp = { "_primitives", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimitiveCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveCollection_Statics::NewProp__primitives_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimitiveCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimitiveCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrimitiveCollection_Statics::ClassParams = {
		&UPrimitiveCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPrimitiveCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveCollection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimitiveCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimitiveCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrimitiveCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrimitiveCollection, 2777528133);
	template<> PHYSICSUTILITIES_API UClass* StaticClass<UPrimitiveCollection>()
	{
		return UPrimitiveCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimitiveCollection(Z_Construct_UClass_UPrimitiveCollection, &UPrimitiveCollection::StaticClass, TEXT("/Script/PhysicsUtilities"), TEXT("UPrimitiveCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitiveCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
