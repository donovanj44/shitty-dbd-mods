// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaHudDirectionalStick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaHudDirectionalStick() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudDirectionalStick_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaHudDirectionalStick();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaHudDirectionalStick::execSetMovementLockAnimationStatus)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementLockAnimationStatus(Z_Param_value);
		P_NATIVE_END;
	}
	void UAtlantaHudDirectionalStick::StaticRegisterNativesUAtlantaHudDirectionalStick()
	{
		UClass* Class = UAtlantaHudDirectionalStick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMovementLockAnimationStatus", &UAtlantaHudDirectionalStick::execSetMovementLockAnimationStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics
	{
		struct AtlantaHudDirectionalStick_eventSetMovementLockAnimationStatus_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::NewProp_value_SetBit(void* Obj)
	{
		((AtlantaHudDirectionalStick_eventSetMovementLockAnimationStatus_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaHudDirectionalStick_eventSetMovementLockAnimationStatus_Parms), &Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaHudDirectionalStick, nullptr, "SetMovementLockAnimationStatus", nullptr, nullptr, sizeof(AtlantaHudDirectionalStick_eventSetMovementLockAnimationStatus_Parms), Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaHudDirectionalStick_NoRegister()
	{
		return UAtlantaHudDirectionalStick::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isMovementLockAnimationActive_MetaData[];
#endif
		static void NewProp__isMovementLockAnimationActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMovementLockAnimationActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoRunContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoRunContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoystickOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoystickOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoystickLockImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoystickLockImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContainerToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoystickAnimationPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoystickAnimationPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaHudDirectionalStick_SetMovementLockAnimationStatus, "SetMovementLockAnimationStatus" }, // 3470271626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaHudDirectionalStick.h" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	void Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive_SetBit(void* Obj)
	{
		((UAtlantaHudDirectionalStick*)Obj)->_isMovementLockAnimationActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive = { "_isMovementLockAnimationActive", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtlantaHudDirectionalStick), &Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_AutoRunContainer_MetaData[] = {
		{ "Category", "AtlantaHudDirectionalStick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_AutoRunContainer = { "AutoRunContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudDirectionalStick, AutoRunContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_AutoRunContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_AutoRunContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickOn_MetaData[] = {
		{ "Category", "AtlantaHudDirectionalStick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickOn = { "JoystickOn", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudDirectionalStick, JoystickOn), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickLockImage_MetaData[] = {
		{ "Category", "AtlantaHudDirectionalStick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickLockImage = { "JoystickLockImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudDirectionalStick, JoystickLockImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickLockImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickLockImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ArrowsContainer_MetaData[] = {
		{ "Category", "AtlantaHudDirectionalStick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ArrowsContainer = { "ArrowsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudDirectionalStick, ArrowsContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ArrowsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ArrowsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ContainerToRotate_MetaData[] = {
		{ "Category", "AtlantaHudDirectionalStick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ContainerToRotate = { "ContainerToRotate", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudDirectionalStick, ContainerToRotate), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ContainerToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ContainerToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickAnimationPanel_MetaData[] = {
		{ "Category", "AtlantaHudDirectionalStick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaHudDirectionalStick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickAnimationPanel = { "JoystickAnimationPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaHudDirectionalStick, JoystickAnimationPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickAnimationPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickAnimationPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp__isMovementLockAnimationActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_AutoRunContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickLockImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ArrowsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_ContainerToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::NewProp_JoystickAnimationPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaHudDirectionalStick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::ClassParams = {
		&UAtlantaHudDirectionalStick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaHudDirectionalStick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaHudDirectionalStick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaHudDirectionalStick, 4238531532);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaHudDirectionalStick>()
	{
		return UAtlantaHudDirectionalStick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaHudDirectionalStick(Z_Construct_UClass_UAtlantaHudDirectionalStick, &UAtlantaHudDirectionalStick::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaHudDirectionalStick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaHudDirectionalStick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
