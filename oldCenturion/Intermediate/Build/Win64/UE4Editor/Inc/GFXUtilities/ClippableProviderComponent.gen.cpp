// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/ClippableProviderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClippableProviderComponent() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClippableProviderComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClippableProviderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UClippableProviderComponent::execSetIgnoredPrimitives)
	{
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_ignoredPrimitives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoredPrimitives(Z_Param_Out_ignoredPrimitives);
		P_NATIVE_END;
	}
	void UClippableProviderComponent::StaticRegisterNativesUClippableProviderComponent()
	{
		UClass* Class = UClippableProviderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIgnoredPrimitives", &UClippableProviderComponent::execSetIgnoredPrimitives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics
	{
		struct ClippableProviderComponent_eventSetIgnoredPrimitives_Parms
		{
			TArray<UPrimitiveComponent*> ignoredPrimitives;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoredPrimitives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ignoredPrimitives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoredPrimitives_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives = { "ignoredPrimitives", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClippableProviderComponent_eventSetIgnoredPrimitives_Parms, ignoredPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives_Inner = { "ignoredPrimitives", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::NewProp_ignoredPrimitives_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClippableProviderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClippableProviderComponent, nullptr, "SetIgnoredPrimitives", nullptr, nullptr, sizeof(ClippableProviderComponent_eventSetIgnoredPrimitives_Parms), Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClippableProviderComponent_NoRegister()
	{
		return UClippableProviderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClippableProviderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoredPrimitives_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__ignoredPrimitives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ignoredPrimitives_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClippableProviderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClippableProviderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClippableProviderComponent_SetIgnoredPrimitives, "SetIgnoredPrimitives" }, // 164045447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClippableProviderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClippableProviderComponent.h" },
		{ "ModuleRelativePath", "Public/ClippableProviderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClippableProviderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives = { "_ignoredPrimitives", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClippableProviderComponent, _ignoredPrimitives), METADATA_PARAMS(Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives_ElementProp = { "_ignoredPrimitives", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClippableProviderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClippableProviderComponent_Statics::NewProp__ignoredPrimitives_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClippableProviderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClippableProviderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClippableProviderComponent_Statics::ClassParams = {
		&UClippableProviderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClippableProviderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClippableProviderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClippableProviderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClippableProviderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClippableProviderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClippableProviderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClippableProviderComponent, 980364224);
	template<> GFXUTILITIES_API UClass* StaticClass<UClippableProviderComponent>()
	{
		return UClippableProviderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClippableProviderComponent(Z_Construct_UClass_UClippableProviderComponent, &UClippableProviderComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UClippableProviderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClippableProviderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
