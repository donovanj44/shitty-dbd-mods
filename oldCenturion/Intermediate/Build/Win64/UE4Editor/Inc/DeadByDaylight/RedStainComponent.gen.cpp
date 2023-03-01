// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RedStainComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedStainComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URedStainComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URedStainComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(URedStainComponent::execDBD_HideRedStain)
	{
		P_GET_UBOOL(Z_Param_hideStain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_HideRedStain(Z_Param_hideStain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URedStainComponent::execUpdateRedStain)
	{
		P_GET_UBOOL(Z_Param_shouldBeHidden);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRedStain(Z_Param_shouldBeHidden,Z_Param_alpha);
		P_NATIVE_END;
	}
	void URedStainComponent::StaticRegisterNativesURedStainComponent()
	{
		UClass* Class = URedStainComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_HideRedStain", &URedStainComponent::execDBD_HideRedStain },
			{ "UpdateRedStain", &URedStainComponent::execUpdateRedStain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics
	{
		struct RedStainComponent_eventDBD_HideRedStain_Parms
		{
			bool hideStain;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hideStain_MetaData[];
#endif
		static void NewProp_hideStain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hideStain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain_SetBit(void* Obj)
	{
		((RedStainComponent_eventDBD_HideRedStain_Parms*)Obj)->hideStain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain = { "hideStain", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RedStainComponent_eventDBD_HideRedStain_Parms), &Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::NewProp_hideStain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedStainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedStainComponent, nullptr, "DBD_HideRedStain", nullptr, nullptr, sizeof(RedStainComponent_eventDBD_HideRedStain_Parms), Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics
	{
		struct RedStainComponent_eventUpdateRedStain_Parms
		{
			bool shouldBeHidden;
			float alpha;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static void NewProp_shouldBeHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldBeHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RedStainComponent_eventUpdateRedStain_Parms, alpha), METADATA_PARAMS(Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_alpha_MetaData)) };
	void Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_shouldBeHidden_SetBit(void* Obj)
	{
		((RedStainComponent_eventUpdateRedStain_Parms*)Obj)->shouldBeHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_shouldBeHidden = { "shouldBeHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RedStainComponent_eventUpdateRedStain_Parms), &Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_shouldBeHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::NewProp_shouldBeHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedStainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedStainComponent, nullptr, "UpdateRedStain", nullptr, nullptr, sizeof(RedStainComponent_eventUpdateRedStain_Parms), Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URedStainComponent_UpdateRedStain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URedStainComponent_UpdateRedStain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URedStainComponent_NoRegister()
	{
		return URedStainComponent::StaticClass();
	}
	struct Z_Construct_UClass_URedStainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialSpotLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__initialSpotLightColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URedStainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpotLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URedStainComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URedStainComponent_DBD_HideRedStain, "DBD_HideRedStain" }, // 204749320
		{ &Z_Construct_UFunction_URedStainComponent_UpdateRedStain, "UpdateRedStain" }, // 2640667259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedStainComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "RedStainComponent.h" },
		{ "ModuleRelativePath", "Public/RedStainComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedStainComponent_Statics::NewProp__initialSpotLightColor_MetaData[] = {
		{ "Category", "RedStainComponent" },
		{ "ModuleRelativePath", "Public/RedStainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URedStainComponent_Statics::NewProp__initialSpotLightColor = { "_initialSpotLightColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedStainComponent, _initialSpotLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URedStainComponent_Statics::NewProp__initialSpotLightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedStainComponent_Statics::NewProp__initialSpotLightColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URedStainComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedStainComponent_Statics::NewProp__initialSpotLightColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URedStainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URedStainComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URedStainComponent_Statics::ClassParams = {
		&URedStainComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URedStainComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URedStainComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URedStainComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URedStainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URedStainComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URedStainComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URedStainComponent, 40876770);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URedStainComponent>()
	{
		return URedStainComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URedStainComponent(Z_Construct_UClass_URedStainComponent, &URedStainComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URedStainComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URedStainComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
