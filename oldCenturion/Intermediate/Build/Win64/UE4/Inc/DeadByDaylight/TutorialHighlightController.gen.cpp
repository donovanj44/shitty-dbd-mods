// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialHighlightController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialHighlightController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialHighlightController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialHighlightController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudComponent();
// End Cross Module References
	DEFINE_FUNCTION(UTutorialHighlightController::execSetHudComponentHighlight)
	{
		P_GET_ENUM(EHudComponent,Z_Param_hudComponent);
		P_GET_UBOOL(Z_Param_show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudComponentHighlight(EHudComponent(Z_Param_hudComponent),Z_Param_show);
		P_NATIVE_END;
	}
	void UTutorialHighlightController::StaticRegisterNativesUTutorialHighlightController()
	{
		UClass* Class = UTutorialHighlightController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHudComponentHighlight", &UTutorialHighlightController::execSetHudComponentHighlight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics
	{
		struct TutorialHighlightController_eventSetHudComponentHighlight_Parms
		{
			EHudComponent hudComponent;
			bool show;
		};
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_hudComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hudComponent_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_show_SetBit(void* Obj)
	{
		((TutorialHighlightController_eventSetHudComponentHighlight_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialHighlightController_eventSetHudComponentHighlight_Parms), &Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_hudComponent = { "hudComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialHighlightController_eventSetHudComponentHighlight_Parms, hudComponent), Z_Construct_UEnum_DBDSharedTypes_EHudComponent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_hudComponent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_show,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_hudComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::NewProp_hudComponent_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialHighlightController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialHighlightController, nullptr, "SetHudComponentHighlight", nullptr, nullptr, sizeof(TutorialHighlightController_eventSetHudComponentHighlight_Parms), Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialHighlightController_NoRegister()
	{
		return UTutorialHighlightController::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialHighlightController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialHighlightController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialHighlightController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialHighlightController_SetHudComponentHighlight, "SetHudComponentHighlight" }, // 750341428
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialHighlightController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TutorialHighlightController.h" },
		{ "ModuleRelativePath", "Public/TutorialHighlightController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialHighlightController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialHighlightController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialHighlightController_Statics::ClassParams = {
		&UTutorialHighlightController::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialHighlightController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialHighlightController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialHighlightController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialHighlightController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialHighlightController, 1957096172);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTutorialHighlightController>()
	{
		return UTutorialHighlightController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialHighlightController(Z_Construct_UClass_UTutorialHighlightController, &UTutorialHighlightController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTutorialHighlightController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialHighlightController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
