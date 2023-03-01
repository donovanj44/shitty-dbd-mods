// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/GFXUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFXUtilities() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UGFXUtilities_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UGFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGFXUtilities::execActivateVFX)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGFXUtilities::ActivateVFX(Z_Param_skeletalMeshComponent,Z_Param_active);
		P_NATIVE_END;
	}
	void UGFXUtilities::StaticRegisterNativesUGFXUtilities()
	{
		UClass* Class = UGFXUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateVFX", &UGFXUtilities::execActivateVFX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics
	{
		struct GFXUtilities_eventActivateVFX_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_active_SetBit(void* Obj)
	{
		((GFXUtilities_eventActivateVFX_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GFXUtilities_eventActivateVFX_Parms), &Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GFXUtilities_eventActivateVFX_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::NewProp_skeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFXUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFXUtilities, nullptr, "ActivateVFX", nullptr, nullptr, sizeof(GFXUtilities_eventActivateVFX_Parms), Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFXUtilities_ActivateVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGFXUtilities_ActivateVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGFXUtilities_NoRegister()
	{
		return UGFXUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UGFXUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFXUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFXUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFXUtilities_ActivateVFX, "ActivateVFX" }, // 1686379282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFXUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GFXUtilities.h" },
		{ "ModuleRelativePath", "Public/GFXUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFXUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFXUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGFXUtilities_Statics::ClassParams = {
		&UGFXUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGFXUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGFXUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGFXUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGFXUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGFXUtilities, 1709749028);
	template<> GFXUTILITIES_API UClass* StaticClass<UGFXUtilities>()
	{
		return UGFXUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGFXUtilities(Z_Construct_UClass_UGFXUtilities, &UGFXUtilities::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UGFXUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFXUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
