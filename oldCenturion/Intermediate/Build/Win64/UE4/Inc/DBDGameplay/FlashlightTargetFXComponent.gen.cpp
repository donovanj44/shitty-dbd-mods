// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/FlashlightTargetFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlightTargetFXComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightTargetFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlashlightTargetFXComponent::execOnIsLitChanged)
	{
		P_GET_UBOOL(Z_Param_isLit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIsLitChanged(Z_Param_isLit);
		P_NATIVE_END;
	}
	void UFlashlightTargetFXComponent::StaticRegisterNativesUFlashlightTargetFXComponent()
	{
		UClass* Class = UFlashlightTargetFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnIsLitChanged", &UFlashlightTargetFXComponent::execOnIsLitChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics
	{
		struct FlashlightTargetFXComponent_eventOnIsLitChanged_Parms
		{
			bool isLit;
		};
		static void NewProp_isLit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::NewProp_isLit_SetBit(void* Obj)
	{
		((FlashlightTargetFXComponent_eventOnIsLitChanged_Parms*)Obj)->isLit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::NewProp_isLit = { "isLit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlashlightTargetFXComponent_eventOnIsLitChanged_Parms), &Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::NewProp_isLit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::NewProp_isLit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightTargetFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightTargetFXComponent, nullptr, "OnIsLitChanged", nullptr, nullptr, sizeof(FlashlightTargetFXComponent_eventOnIsLitChanged_Parms), Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlashlightTargetFXComponent_NoRegister()
	{
		return UFlashlightTargetFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlashlightTargetFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashlightable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modifiesBeamAngle_MetaData[];
#endif
		static void NewProp__modifiesBeamAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__modifiesBeamAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlashlightTargetFXComponent_OnIsLitChanged, "OnIsLitChanged" }, // 1016727420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlashlightTargetFXComponent.h" },
		{ "ModuleRelativePath", "Public/FlashlightTargetFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__flashlightable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlashlightTargetFXComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightTargetFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__flashlightable = { "_flashlightable", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightTargetFXComponent, _flashlightable), Z_Construct_UClass_UFlashlightableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__flashlightable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__flashlightable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle_MetaData[] = {
		{ "Category", "FlashlightTargetFXComponent" },
		{ "ModuleRelativePath", "Public/FlashlightTargetFXComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle_SetBit(void* Obj)
	{
		((UFlashlightTargetFXComponent*)Obj)->_modifiesBeamAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle = { "_modifiesBeamAngle", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlashlightTargetFXComponent), &Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__flashlightable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::NewProp__modifiesBeamAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashlightTargetFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::ClassParams = {
		&UFlashlightTargetFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlashlightTargetFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlashlightTargetFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlashlightTargetFXComponent, 1739297462);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UFlashlightTargetFXComponent>()
	{
		return UFlashlightTargetFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlashlightTargetFXComponent(Z_Construct_UClass_UFlashlightTargetFXComponent, &UFlashlightTargetFXComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UFlashlightTargetFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashlightTargetFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
