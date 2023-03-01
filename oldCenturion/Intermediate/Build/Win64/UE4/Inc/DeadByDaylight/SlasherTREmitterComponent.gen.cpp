// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherTREmitterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherTREmitterComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherTREmitterComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherTREmitterComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(USlasherTREmitterComponent::execSetBaseTerrorRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_baseTerrorRadius);
		P_GET_UBOOL(Z_Param_progressive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseTerrorRadius(Z_Param_baseTerrorRadius,Z_Param_progressive);
		P_NATIVE_END;
	}
	void USlasherTREmitterComponent::StaticRegisterNativesUSlasherTREmitterComponent()
	{
		UClass* Class = USlasherTREmitterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBaseTerrorRadius", &USlasherTREmitterComponent::execSetBaseTerrorRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics
	{
		struct SlasherTREmitterComponent_eventSetBaseTerrorRadius_Parms
		{
			float baseTerrorRadius;
			bool progressive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressive_MetaData[];
#endif
		static void NewProp_progressive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_progressive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseTerrorRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive_SetBit(void* Obj)
	{
		((SlasherTREmitterComponent_eventSetBaseTerrorRadius_Parms*)Obj)->progressive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive = { "progressive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlasherTREmitterComponent_eventSetBaseTerrorRadius_Parms), &Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_baseTerrorRadius = { "baseTerrorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlasherTREmitterComponent_eventSetBaseTerrorRadius_Parms, baseTerrorRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_progressive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::NewProp_baseTerrorRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherTREmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherTREmitterComponent, nullptr, "SetBaseTerrorRadius", nullptr, nullptr, sizeof(SlasherTREmitterComponent_eventSetBaseTerrorRadius_Parms), Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlasherTREmitterComponent_NoRegister()
	{
		return USlasherTREmitterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlasherTREmitterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlasherTREmitterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTerrorRadiusEmitterComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlasherTREmitterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlasherTREmitterComponent_SetBaseTerrorRadius, "SetBaseTerrorRadius" }, // 491697127
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherTREmitterComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SlasherTREmitterComponent.h" },
		{ "ModuleRelativePath", "Public/SlasherTREmitterComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlasherTREmitterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlasherTREmitterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlasherTREmitterComponent_Statics::ClassParams = {
		&USlasherTREmitterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlasherTREmitterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherTREmitterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlasherTREmitterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlasherTREmitterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlasherTREmitterComponent, 1658888599);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlasherTREmitterComponent>()
	{
		return USlasherTREmitterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlasherTREmitterComponent(Z_Construct_UClass_USlasherTREmitterComponent, &USlasherTREmitterComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlasherTREmitterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlasherTREmitterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
