// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialPlayerHudController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialPlayerHudController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialPlayerHudController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialPlayerHudController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudComponent();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaTutorialPlayerHudController::execHideHudComponent)
	{
		P_GET_ENUM(EHudComponent,Z_Param_hudComponentToHide);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideHudComponent(EHudComponent(Z_Param_hudComponentToHide));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaTutorialPlayerHudController::execSetVirtualJoystickInputEnabled)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVirtualJoystickInputEnabled(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaTutorialPlayerHudController::execShowHudComponent)
	{
		P_GET_ENUM(EHudComponent,Z_Param_hudComponentToShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowHudComponent(EHudComponent(Z_Param_hudComponentToShow));
		P_NATIVE_END;
	}
	void UAtlantaTutorialPlayerHudController::StaticRegisterNativesUAtlantaTutorialPlayerHudController()
	{
		UClass* Class = UAtlantaTutorialPlayerHudController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideHudComponent", &UAtlantaTutorialPlayerHudController::execHideHudComponent },
			{ "SetVirtualJoystickInputEnabled", &UAtlantaTutorialPlayerHudController::execSetVirtualJoystickInputEnabled },
			{ "ShowHudComponent", &UAtlantaTutorialPlayerHudController::execShowHudComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics
	{
		struct AtlantaTutorialPlayerHudController_eventHideHudComponent_Parms
		{
			EHudComponent hudComponentToHide;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_hudComponentToHide;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hudComponentToHide_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::NewProp_hudComponentToHide = { "hudComponentToHide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialPlayerHudController_eventHideHudComponent_Parms, hudComponentToHide), Z_Construct_UEnum_DBDSharedTypes_EHudComponent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::NewProp_hudComponentToHide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::NewProp_hudComponentToHide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::NewProp_hudComponentToHide_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialPlayerHudController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTutorialPlayerHudController, nullptr, "HideHudComponent", nullptr, nullptr, sizeof(AtlantaTutorialPlayerHudController_eventHideHudComponent_Parms), Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics
	{
		struct AtlantaTutorialPlayerHudController_eventSetVirtualJoystickInputEnabled_Parms
		{
			bool enable;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((AtlantaTutorialPlayerHudController_eventSetVirtualJoystickInputEnabled_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaTutorialPlayerHudController_eventSetVirtualJoystickInputEnabled_Parms), &Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialPlayerHudController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTutorialPlayerHudController, nullptr, "SetVirtualJoystickInputEnabled", nullptr, nullptr, sizeof(AtlantaTutorialPlayerHudController_eventSetVirtualJoystickInputEnabled_Parms), Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics
	{
		struct AtlantaTutorialPlayerHudController_eventShowHudComponent_Parms
		{
			EHudComponent hudComponentToShow;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_hudComponentToShow;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hudComponentToShow_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::NewProp_hudComponentToShow = { "hudComponentToShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialPlayerHudController_eventShowHudComponent_Parms, hudComponentToShow), Z_Construct_UEnum_DBDSharedTypes_EHudComponent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::NewProp_hudComponentToShow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::NewProp_hudComponentToShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::NewProp_hudComponentToShow_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialPlayerHudController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTutorialPlayerHudController, nullptr, "ShowHudComponent", nullptr, nullptr, sizeof(AtlantaTutorialPlayerHudController_eventShowHudComponent_Parms), Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaTutorialPlayerHudController_NoRegister()
	{
		return UAtlantaTutorialPlayerHudController::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_HideHudComponent, "HideHudComponent" }, // 871435981
		{ &Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_SetVirtualJoystickInputEnabled, "SetVirtualJoystickInputEnabled" }, // 3357232727
		{ &Z_Construct_UFunction_UAtlantaTutorialPlayerHudController_ShowHudComponent, "ShowHudComponent" }, // 1816452000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaTutorialPlayerHudController.h" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialPlayerHudController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaTutorialPlayerHudController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::ClassParams = {
		&UAtlantaTutorialPlayerHudController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaTutorialPlayerHudController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaTutorialPlayerHudController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaTutorialPlayerHudController, 2856874818);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaTutorialPlayerHudController>()
	{
		return UAtlantaTutorialPlayerHudController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaTutorialPlayerHudController(Z_Construct_UClass_UAtlantaTutorialPlayerHudController, &UAtlantaTutorialPlayerHudController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaTutorialPlayerHudController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaTutorialPlayerHudController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
