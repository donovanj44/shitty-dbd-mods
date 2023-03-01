// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsUtilities/Public/PrimitivesRegistererComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitivesRegistererComponent() {}
// Cross Module References
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UPrimitivesRegistererComponent_NoRegister();
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UPrimitivesRegistererComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PhysicsUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UPrimitiveCollection_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPrimitivesRegistererComponent::execSetPrimitives)
	{
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_primitives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitives(Z_Param_Out_primitives);
		P_NATIVE_END;
	}
	void UPrimitivesRegistererComponent::StaticRegisterNativesUPrimitivesRegistererComponent()
	{
		UClass* Class = UPrimitivesRegistererComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPrimitives", &UPrimitivesRegistererComponent::execSetPrimitives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics
	{
		struct PrimitivesRegistererComponent_eventSetPrimitives_Parms
		{
			TArray<UPrimitiveComponent*> primitives;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_primitives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitives_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives = { "primitives", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrimitivesRegistererComponent_eventSetPrimitives_Parms, primitives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives_Inner = { "primitives", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::NewProp_primitives_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrimitivesRegistererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrimitivesRegistererComponent, nullptr, "SetPrimitives", nullptr, nullptr, sizeof(PrimitivesRegistererComponent_eventSetPrimitives_Parms), Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPrimitivesRegistererComponent_NoRegister()
	{
		return UPrimitivesRegistererComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPrimitivesRegistererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__primitiveCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__primitiveCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__primitives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__primitives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__primitives_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPrimitivesRegistererComponent_SetPrimitives, "SetPrimitives" }, // 3902878938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrimitivesRegistererComponent.h" },
		{ "ModuleRelativePath", "Public/PrimitivesRegistererComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitiveCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/PrimitivesRegistererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitiveCollection = { "_primitiveCollection", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitivesRegistererComponent, _primitiveCollection), Z_Construct_UClass_UPrimitiveCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitiveCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitiveCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PrimitivesRegistererComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives = { "_primitives", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitivesRegistererComponent, _primitives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives_Inner = { "_primitives", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitiveCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::NewProp__primitives_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimitivesRegistererComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::ClassParams = {
		&UPrimitivesRegistererComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimitivesRegistererComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrimitivesRegistererComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrimitivesRegistererComponent, 1135305476);
	template<> PHYSICSUTILITIES_API UClass* StaticClass<UPrimitivesRegistererComponent>()
	{
		return UPrimitivesRegistererComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimitivesRegistererComponent(Z_Construct_UClass_UPrimitivesRegistererComponent, &UPrimitivesRegistererComponent::StaticClass, TEXT("/Script/PhysicsUtilities"), TEXT("UPrimitivesRegistererComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitivesRegistererComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
