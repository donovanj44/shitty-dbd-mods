// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ColorBlindSettingsListenerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorBlindSettingsListenerInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UColorBlindSettingsListenerInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UColorBlindSettingsListenerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
// End Cross Module References
	DEFINE_FUNCTION(IColorBlindSettingsListenerInterface::execOnColorBlindSettingsChange)
	{
		P_GET_ENUM(EColorVisionDeficiency,Z_Param_ColorBlindMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_colorBlindIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorBlindSettingsChange_Implementation(EColorVisionDeficiency(Z_Param_ColorBlindMode),Z_Param_colorBlindIntensity);
		P_NATIVE_END;
	}
	void IColorBlindSettingsListenerInterface::OnColorBlindSettingsChange(EColorVisionDeficiency ColorBlindMode, int32 colorBlindIntensity)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnColorBlindSettingsChange instead.");
	}
	void UColorBlindSettingsListenerInterface::StaticRegisterNativesUColorBlindSettingsListenerInterface()
	{
		UClass* Class = UColorBlindSettingsListenerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnColorBlindSettingsChange", &IColorBlindSettingsListenerInterface::execOnColorBlindSettingsChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_colorBlindIntensity;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorBlindMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorBlindMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::NewProp_colorBlindIntensity = { "colorBlindIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorBlindSettingsListenerInterface_eventOnColorBlindSettingsChange_Parms, colorBlindIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorBlindSettingsListenerInterface_eventOnColorBlindSettingsChange_Parms, ColorBlindMode), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::NewProp_ColorBlindMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::NewProp_colorBlindIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::NewProp_ColorBlindMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::NewProp_ColorBlindMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorBlindSettingsListenerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBlindSettingsListenerInterface, nullptr, "OnColorBlindSettingsChange", nullptr, nullptr, sizeof(ColorBlindSettingsListenerInterface_eventOnColorBlindSettingsChange_Parms), Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UColorBlindSettingsListenerInterface_NoRegister()
	{
		return UColorBlindSettingsListenerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange, "OnColorBlindSettingsChange" }, // 1571968103
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorBlindSettingsListenerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IColorBlindSettingsListenerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::ClassParams = {
		&UColorBlindSettingsListenerInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorBlindSettingsListenerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColorBlindSettingsListenerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColorBlindSettingsListenerInterface, 608254897);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UColorBlindSettingsListenerInterface>()
	{
		return UColorBlindSettingsListenerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColorBlindSettingsListenerInterface(Z_Construct_UClass_UColorBlindSettingsListenerInterface, &UColorBlindSettingsListenerInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UColorBlindSettingsListenerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorBlindSettingsListenerInterface);
	static FName NAME_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange = FName(TEXT("OnColorBlindSettingsChange"));
	void IColorBlindSettingsListenerInterface::Execute_OnColorBlindSettingsChange(UObject* O, EColorVisionDeficiency ColorBlindMode, int32 colorBlindIntensity)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UColorBlindSettingsListenerInterface::StaticClass()));
		ColorBlindSettingsListenerInterface_eventOnColorBlindSettingsChange_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UColorBlindSettingsListenerInterface_OnColorBlindSettingsChange);
		if (Func)
		{
			Parms.ColorBlindMode=ColorBlindMode;
			Parms.colorBlindIntensity=colorBlindIntensity;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IColorBlindSettingsListenerInterface*)(O->GetNativeInterfaceAddress(UColorBlindSettingsListenerInterface::StaticClass())))
		{
			I->OnColorBlindSettingsChange_Implementation(ColorBlindMode,colorBlindIntensity);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
