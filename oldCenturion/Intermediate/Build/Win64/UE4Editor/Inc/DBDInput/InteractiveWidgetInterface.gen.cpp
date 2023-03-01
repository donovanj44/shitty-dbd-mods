// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/InteractiveWidgetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveWidgetInterface() {}
// Cross Module References
	DBDINPUT_API UClass* Z_Construct_UClass_UInteractiveWidgetInterface_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_UInteractiveWidgetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
// End Cross Module References
	DEFINE_FUNCTION(IInteractiveWidgetInterface::execHandleAnalogInputEvent)
	{
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_InAnalogInputEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAnalogInputEvent_Implementation(Z_Param_Out_InAnalogInputEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractiveWidgetInterface::execHandleKeyDownEvent)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKeyDownEvent_Implementation(Z_Param_Out_InKeyEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractiveWidgetInterface::execHandleKeyHoldEvent)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKeyHoldEvent_Implementation(Z_Param_Out_InKeyEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractiveWidgetInterface::execHandleKeyUpEvent)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKeyUpEvent_Implementation(Z_Param_Out_InKeyEvent);
		P_NATIVE_END;
	}
	void IInteractiveWidgetInterface::HandleAnalogInputEvent(FAnalogInputEvent const& InAnalogInputEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleAnalogInputEvent instead.");
	}
	void IInteractiveWidgetInterface::HandleKeyDownEvent(FKeyEvent const& InKeyEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleKeyDownEvent instead.");
	}
	void IInteractiveWidgetInterface::HandleKeyHoldEvent(FKeyEvent const& InKeyEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleKeyHoldEvent instead.");
	}
	void IInteractiveWidgetInterface::HandleKeyUpEvent(FKeyEvent const& InKeyEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleKeyUpEvent instead.");
	}
	void UInteractiveWidgetInterface::StaticRegisterNativesUInteractiveWidgetInterface()
	{
		UClass* Class = UInteractiveWidgetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAnalogInputEvent", &IInteractiveWidgetInterface::execHandleAnalogInputEvent },
			{ "HandleKeyDownEvent", &IInteractiveWidgetInterface::execHandleKeyDownEvent },
			{ "HandleKeyHoldEvent", &IInteractiveWidgetInterface::execHandleKeyHoldEvent },
			{ "HandleKeyUpEvent", &IInteractiveWidgetInterface::execHandleKeyUpEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAnalogInputEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAnalogInputEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::NewProp_InAnalogInputEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::NewProp_InAnalogInputEvent = { "InAnalogInputEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveWidgetInterface_eventHandleAnalogInputEvent_Parms, InAnalogInputEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::NewProp_InAnalogInputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::NewProp_InAnalogInputEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::NewProp_InAnalogInputEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWidgetInterface, nullptr, "HandleAnalogInputEvent", nullptr, nullptr, sizeof(InteractiveWidgetInterface_eventHandleAnalogInputEvent_Parms), Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveWidgetInterface_eventHandleKeyDownEvent_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::NewProp_InKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::NewProp_InKeyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::NewProp_InKeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWidgetInterface, nullptr, "HandleKeyDownEvent", nullptr, nullptr, sizeof(InteractiveWidgetInterface_eventHandleKeyDownEvent_Parms), Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveWidgetInterface_eventHandleKeyHoldEvent_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::NewProp_InKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::NewProp_InKeyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::NewProp_InKeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWidgetInterface, nullptr, "HandleKeyHoldEvent", nullptr, nullptr, sizeof(InteractiveWidgetInterface_eventHandleKeyHoldEvent_Parms), Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveWidgetInterface_eventHandleKeyUpEvent_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::NewProp_InKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::NewProp_InKeyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::NewProp_InKeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWidgetInterface, nullptr, "HandleKeyUpEvent", nullptr, nullptr, sizeof(InteractiveWidgetInterface_eventHandleKeyUpEvent_Parms), Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractiveWidgetInterface_NoRegister()
	{
		return UInteractiveWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractiveWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveWidgetInterface_HandleAnalogInputEvent, "HandleAnalogInputEvent" }, // 2251983957
		{ &Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyDownEvent, "HandleKeyDownEvent" }, // 4066634276
		{ &Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyHoldEvent, "HandleKeyHoldEvent" }, // 2305508164
		{ &Z_Construct_UFunction_UInteractiveWidgetInterface_HandleKeyUpEvent, "HandleKeyUpEvent" }, // 3383864758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractiveWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveWidgetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveWidgetInterface_Statics::ClassParams = {
		&UInteractiveWidgetInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveWidgetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractiveWidgetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractiveWidgetInterface, 4170639812);
	template<> DBDINPUT_API UClass* StaticClass<UInteractiveWidgetInterface>()
	{
		return UInteractiveWidgetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractiveWidgetInterface(Z_Construct_UClass_UInteractiveWidgetInterface, &UInteractiveWidgetInterface::StaticClass, TEXT("/Script/DBDInput"), TEXT("UInteractiveWidgetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveWidgetInterface);
	static FName NAME_UInteractiveWidgetInterface_HandleAnalogInputEvent = FName(TEXT("HandleAnalogInputEvent"));
	void IInteractiveWidgetInterface::Execute_HandleAnalogInputEvent(UObject* O, FAnalogInputEvent const& InAnalogInputEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractiveWidgetInterface::StaticClass()));
		InteractiveWidgetInterface_eventHandleAnalogInputEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractiveWidgetInterface_HandleAnalogInputEvent);
		if (Func)
		{
			Parms.InAnalogInputEvent=InAnalogInputEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractiveWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractiveWidgetInterface::StaticClass())))
		{
			I->HandleAnalogInputEvent_Implementation(InAnalogInputEvent);
		}
	}
	static FName NAME_UInteractiveWidgetInterface_HandleKeyDownEvent = FName(TEXT("HandleKeyDownEvent"));
	void IInteractiveWidgetInterface::Execute_HandleKeyDownEvent(UObject* O, FKeyEvent const& InKeyEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractiveWidgetInterface::StaticClass()));
		InteractiveWidgetInterface_eventHandleKeyDownEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractiveWidgetInterface_HandleKeyDownEvent);
		if (Func)
		{
			Parms.InKeyEvent=InKeyEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractiveWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractiveWidgetInterface::StaticClass())))
		{
			I->HandleKeyDownEvent_Implementation(InKeyEvent);
		}
	}
	static FName NAME_UInteractiveWidgetInterface_HandleKeyHoldEvent = FName(TEXT("HandleKeyHoldEvent"));
	void IInteractiveWidgetInterface::Execute_HandleKeyHoldEvent(UObject* O, FKeyEvent const& InKeyEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractiveWidgetInterface::StaticClass()));
		InteractiveWidgetInterface_eventHandleKeyHoldEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractiveWidgetInterface_HandleKeyHoldEvent);
		if (Func)
		{
			Parms.InKeyEvent=InKeyEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractiveWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractiveWidgetInterface::StaticClass())))
		{
			I->HandleKeyHoldEvent_Implementation(InKeyEvent);
		}
	}
	static FName NAME_UInteractiveWidgetInterface_HandleKeyUpEvent = FName(TEXT("HandleKeyUpEvent"));
	void IInteractiveWidgetInterface::Execute_HandleKeyUpEvent(UObject* O, FKeyEvent const& InKeyEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractiveWidgetInterface::StaticClass()));
		InteractiveWidgetInterface_eventHandleKeyUpEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractiveWidgetInterface_HandleKeyUpEvent);
		if (Func)
		{
			Parms.InKeyEvent=InKeyEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractiveWidgetInterface*)(O->GetNativeInterfaceAddress(UInteractiveWidgetInterface::StaticClass())))
		{
			I->HandleKeyUpEvent_Implementation(InKeyEvent);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
