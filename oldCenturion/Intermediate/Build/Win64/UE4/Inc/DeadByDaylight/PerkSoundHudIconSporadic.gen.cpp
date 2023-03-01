// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkSoundHudIconSporadic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkSoundHudIconSporadic() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudIconSporadic_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudIconSporadic();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSoundHudIcon();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPerkSoundHudIconSporadic::execNativeTick)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_MyGeometry);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeTick(Z_Param_Out_MyGeometry,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UPerkSoundHudIconSporadic::StaticRegisterNativesUPerkSoundHudIconSporadic()
	{
		UClass* Class = UPerkSoundHudIconSporadic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeTick", &UPerkSoundHudIconSporadic::execNativeTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics
	{
		struct PerkSoundHudIconSporadic_eventNativeTick_Parms
		{
			FGeometry MyGeometry;
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkSoundHudIconSporadic_eventNativeTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_MyGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkSoundHudIconSporadic_eventNativeTick_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_MyGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_MyGeometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::NewProp_MyGeometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkSoundHudIconSporadic, nullptr, "NativeTick", nullptr, nullptr, sizeof(PerkSoundHudIconSporadic_eventNativeTick_Parms), Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkSoundHudIconSporadic_NoRegister()
	{
		return UPerkSoundHudIconSporadic::StaticClass();
	}
	struct Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIcon_MetaData[];
#endif
		static void NewProp_DisplayIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadePolynomialOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FadePolynomialOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationStartOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationStartOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SporadicIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SporadicIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerkSoundHudIcon,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkSoundHudIconSporadic_NativeTick, "NativeTick" }, // 4119327127
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkSoundHudIconSporadic.h" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon_MetaData[] = {
		{ "Category", "PerkSoundHudIconSporadic" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	void Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon_SetBit(void* Obj)
	{
		((UPerkSoundHudIconSporadic*)Obj)->DisplayIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon = { "DisplayIcon", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPerkSoundHudIconSporadic), &Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadePolynomialOrder_MetaData[] = {
		{ "Category", "PerkSoundHudIconSporadic" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadePolynomialOrder = { "FadePolynomialOrder", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudIconSporadic, FadePolynomialOrder), METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadePolynomialOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadePolynomialOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_AnimationStartOpacity_MetaData[] = {
		{ "Category", "PerkSoundHudIconSporadic" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_AnimationStartOpacity = { "AnimationStartOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudIconSporadic, AnimationStartOpacity), METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_AnimationStartOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_AnimationStartOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeOutRate_MetaData[] = {
		{ "Category", "PerkSoundHudIconSporadic" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeOutRate = { "FadeOutRate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudIconSporadic, FadeOutRate), METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeInRate_MetaData[] = {
		{ "Category", "PerkSoundHudIconSporadic" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeInRate = { "FadeInRate", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudIconSporadic, FadeInRate), METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeInRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeInRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_SporadicIcon_MetaData[] = {
		{ "Category", "PerkSoundHudIconSporadic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSoundHudIconSporadic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_SporadicIcon = { "SporadicIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSoundHudIconSporadic, SporadicIcon), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_SporadicIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_SporadicIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_DisplayIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadePolynomialOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_AnimationStartOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_FadeInRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::NewProp_SporadicIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkSoundHudIconSporadic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::ClassParams = {
		&UPerkSoundHudIconSporadic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkSoundHudIconSporadic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkSoundHudIconSporadic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkSoundHudIconSporadic, 4133942327);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkSoundHudIconSporadic>()
	{
		return UPerkSoundHudIconSporadic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkSoundHudIconSporadic(Z_Construct_UClass_UPerkSoundHudIconSporadic, &UPerkSoundHudIconSporadic::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkSoundHudIconSporadic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkSoundHudIconSporadic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
