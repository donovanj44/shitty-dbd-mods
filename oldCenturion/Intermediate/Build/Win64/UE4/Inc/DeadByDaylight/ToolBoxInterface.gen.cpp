// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ToolBoxInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolBoxInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToolBoxInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToolBoxInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargerComponent_NoRegister();
// End Cross Module References
	UChargerComponent* IToolBoxInterface::GetChargerComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetChargerComponent instead.");
		ToolBoxInterface_eventGetChargerComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UToolBoxInterface::StaticRegisterNativesUToolBoxInterface()
	{
	}
	struct Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToolBoxInterface_eventGetChargerComponent_Parms, ReturnValue), Z_Construct_UClass_UChargerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolBoxInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolBoxInterface, nullptr, "GetChargerComponent", nullptr, nullptr, sizeof(ToolBoxInterface_eventGetChargerComponent_Parms), Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToolBoxInterface_NoRegister()
	{
		return UToolBoxInterface::StaticClass();
	}
	struct Z_Construct_UClass_UToolBoxInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolBoxInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolBoxInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolBoxInterface_GetChargerComponent, "GetChargerComponent" }, // 580000480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolBoxInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToolBoxInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolBoxInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolBoxInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolBoxInterface_Statics::ClassParams = {
		&UToolBoxInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolBoxInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolBoxInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolBoxInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolBoxInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolBoxInterface, 4047752385);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UToolBoxInterface>()
	{
		return UToolBoxInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolBoxInterface(Z_Construct_UClass_UToolBoxInterface, &UToolBoxInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UToolBoxInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolBoxInterface);
	static FName NAME_UToolBoxInterface_GetChargerComponent = FName(TEXT("GetChargerComponent"));
	UChargerComponent* IToolBoxInterface::Execute_GetChargerComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UToolBoxInterface::StaticClass()));
		ToolBoxInterface_eventGetChargerComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UToolBoxInterface_GetChargerComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
