// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SignificanceUtilities/Public/DistanceBasedTickDisabler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistanceBasedTickDisabler() {}
// Cross Module References
	SIGNIFICANCEUTILITIES_API UClass* Z_Construct_UClass_UDistanceBasedTickDisabler_NoRegister();
	SIGNIFICANCEUTILITIES_API UClass* Z_Construct_UClass_UDistanceBasedTickDisabler();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SignificanceUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDistanceBasedTickDisabler::execRegisterComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterComponent(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDistanceBasedTickDisabler::execUnregisterComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterComponent(Z_Param_component);
		P_NATIVE_END;
	}
	void UDistanceBasedTickDisabler::StaticRegisterNativesUDistanceBasedTickDisabler()
	{
		UClass* Class = UDistanceBasedTickDisabler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterComponent", &UDistanceBasedTickDisabler::execRegisterComponent },
			{ "UnregisterComponent", &UDistanceBasedTickDisabler::execUnregisterComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics
	{
		struct DistanceBasedTickDisabler_eventRegisterComponent_Parms
		{
			UActorComponent* component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DistanceBasedTickDisabler_eventRegisterComponent_Parms, component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDistanceBasedTickDisabler, nullptr, "RegisterComponent", nullptr, nullptr, sizeof(DistanceBasedTickDisabler_eventRegisterComponent_Parms), Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics
	{
		struct DistanceBasedTickDisabler_eventUnregisterComponent_Parms
		{
			UActorComponent* component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DistanceBasedTickDisabler_eventUnregisterComponent_Parms, component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDistanceBasedTickDisabler, nullptr, "UnregisterComponent", nullptr, nullptr, sizeof(DistanceBasedTickDisabler_eventUnregisterComponent_Parms), Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDistanceBasedTickDisabler_NoRegister()
	{
		return UDistanceBasedTickDisabler::StaticClass();
	}
	struct Z_Construct_UClass_UDistanceBasedTickDisabler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__components;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__insignificantWhenBehindTheCamera_MetaData[];
#endif
		static void NewProp__insignificantWhenBehindTheCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__insignificantWhenBehindTheCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__autoRegisterTimelines_MetaData[];
#endif
		static void NewProp__autoRegisterTimelines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__autoRegisterTimelines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__autoRegisterOwner_MetaData[];
#endif
		static void NewProp__autoRegisterOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__autoRegisterOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SignificanceUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDistanceBasedTickDisabler_RegisterComponent, "RegisterComponent" }, // 3321660138
		{ &Z_Construct_UFunction_UDistanceBasedTickDisabler_UnregisterComponent, "UnregisterComponent" }, // 2301173265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DistanceBasedTickDisabler.h" },
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components = { "_components", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistanceBasedTickDisabler, _components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components_Inner = { "_components", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera_MetaData[] = {
		{ "Category", "DistanceBasedTickDisabler" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FBHVRPerDetailModeFloat _tickDisableDistance;\n" },
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFBHVRPerDetailModeFloat _tickDisableDistance;" },
	};
#endif
	void Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera_SetBit(void* Obj)
	{
		((UDistanceBasedTickDisabler*)Obj)->_insignificantWhenBehindTheCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera = { "_insignificantWhenBehindTheCamera", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDistanceBasedTickDisabler), &Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines_MetaData[] = {
		{ "Category", "DistanceBasedTickDisabler" },
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
	};
#endif
	void Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines_SetBit(void* Obj)
	{
		((UDistanceBasedTickDisabler*)Obj)->_autoRegisterTimelines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines = { "_autoRegisterTimelines", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDistanceBasedTickDisabler), &Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner_MetaData[] = {
		{ "Category", "DistanceBasedTickDisabler" },
		{ "ModuleRelativePath", "Public/DistanceBasedTickDisabler.h" },
	};
#endif
	void Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner_SetBit(void* Obj)
	{
		((UDistanceBasedTickDisabler*)Obj)->_autoRegisterOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner = { "_autoRegisterOwner", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDistanceBasedTickDisabler), &Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__insignificantWhenBehindTheCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterTimelines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::NewProp__autoRegisterOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistanceBasedTickDisabler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::ClassParams = {
		&UDistanceBasedTickDisabler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistanceBasedTickDisabler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistanceBasedTickDisabler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistanceBasedTickDisabler, 2165992590);
	template<> SIGNIFICANCEUTILITIES_API UClass* StaticClass<UDistanceBasedTickDisabler>()
	{
		return UDistanceBasedTickDisabler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistanceBasedTickDisabler(Z_Construct_UClass_UDistanceBasedTickDisabler, &UDistanceBasedTickDisabler::StaticClass, TEXT("/Script/SignificanceUtilities"), TEXT("UDistanceBasedTickDisabler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistanceBasedTickDisabler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
