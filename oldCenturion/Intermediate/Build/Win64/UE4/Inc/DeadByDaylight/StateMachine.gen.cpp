// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachine() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStateMachine_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UStateMachine::execMulticast_SetStateStack)
	{
		P_GET_TARRAY(uint16,Z_Param_netStateIDStack);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetStateStack_Validate(Z_Param_netStateIDStack))
		{
			RPC_ValidateFailed(TEXT("Multicast_SetStateStack_Validate"));
			return;
		}
		P_THIS->Multicast_SetStateStack_Implementation(Z_Param_netStateIDStack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateMachine::execNetIDStackChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetIDStackChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateMachine::execServer_SetStateStack)
	{
		P_GET_TARRAY(uint16,Z_Param_netStateIDStack);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetStateStack_Validate(Z_Param_netStateIDStack))
		{
			RPC_ValidateFailed(TEXT("Server_SetStateStack_Validate"));
			return;
		}
		P_THIS->Server_SetStateStack_Implementation(Z_Param_netStateIDStack);
		P_NATIVE_END;
	}
	static FName NAME_UStateMachine_Multicast_SetStateStack = FName(TEXT("Multicast_SetStateStack"));
	void UStateMachine::Multicast_SetStateStack(TArray<uint16> const& netStateIDStack)
	{
		StateMachine_eventMulticast_SetStateStack_Parms Parms;
		Parms.netStateIDStack=netStateIDStack;
		ProcessEvent(FindFunctionChecked(NAME_UStateMachine_Multicast_SetStateStack),&Parms);
	}
	static FName NAME_UStateMachine_Server_SetStateStack = FName(TEXT("Server_SetStateStack"));
	void UStateMachine::Server_SetStateStack(TArray<uint16> const& netStateIDStack)
	{
		StateMachine_eventServer_SetStateStack_Parms Parms;
		Parms.netStateIDStack=netStateIDStack;
		ProcessEvent(FindFunctionChecked(NAME_UStateMachine_Server_SetStateStack),&Parms);
	}
	void UStateMachine::StaticRegisterNativesUStateMachine()
	{
		UClass* Class = UStateMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetStateStack", &UStateMachine::execMulticast_SetStateStack },
			{ "NetIDStackChanged", &UStateMachine::execNetIDStackChanged },
			{ "Server_SetStateStack", &UStateMachine::execServer_SetStateStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_netStateIDStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_netStateIDStack;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_netStateIDStack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack = { "netStateIDStack", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateMachine_eventMulticast_SetStateStack_Parms, netStateIDStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack_Inner = { "netStateIDStack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::NewProp_netStateIDStack_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateMachine, nullptr, "Multicast_SetStateStack", nullptr, nullptr, sizeof(StateMachine_eventMulticast_SetStateStack_Parms), Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateMachine_NetIDStackChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateMachine_NetIDStackChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateMachine_NetIDStackChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateMachine, nullptr, "NetIDStackChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateMachine_NetIDStackChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_NetIDStackChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateMachine_NetIDStackChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateMachine_NetIDStackChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_netStateIDStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_netStateIDStack;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_netStateIDStack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack = { "netStateIDStack", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateMachine_eventServer_SetStateStack_Parms, netStateIDStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack_Inner = { "netStateIDStack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::NewProp_netStateIDStack_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateMachine, nullptr, "Server_SetStateStack", nullptr, nullptr, sizeof(StateMachine_eventServer_SetStateStack_Parms), Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateMachine_Server_SetStateStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateMachine_Server_SetStateStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStateMachine_NoRegister()
	{
		return UStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__netStateIDStackInitial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__netStateIDStackInitial;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp__netStateIDStackInitial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__enableJoinInProgress_MetaData[];
#endif
		static void NewProp__enableJoinInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__enableJoinInProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateMachine_Multicast_SetStateStack, "Multicast_SetStateStack" }, // 1228438634
		{ &Z_Construct_UFunction_UStateMachine_NetIDStackChanged, "NetIDStackChanged" }, // 1356201807
		{ &Z_Construct_UFunction_UStateMachine_Server_SetStateStack, "Server_SetStateStack" }, // 2152199769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateMachine.h" },
		{ "ModuleRelativePath", "Public/StateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial = { "_netStateIDStackInitial", "NetIDStackChanged", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachine, _netStateIDStackInitial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial_Inner = { "_netStateIDStackInitial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress_MetaData[] = {
		{ "Category", "StateMachine" },
		{ "ModuleRelativePath", "Public/StateMachine.h" },
	};
#endif
	void Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress_SetBit(void* Obj)
	{
		((UStateMachine*)Obj)->_enableJoinInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress = { "_enableJoinInProgress", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStateMachine), &Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachine_Statics::NewProp__netStateIDStackInitial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachine_Statics::NewProp__enableJoinInProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateMachine_Statics::ClassParams = {
		&UStateMachine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachine_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateMachine, 3228599098);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStateMachine>()
	{
		return UStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateMachine(Z_Construct_UClass_UStateMachine, &UStateMachine::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStateMachine"), false, nullptr, nullptr, nullptr);

	void UStateMachine::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__netStateIDStackInitial(TEXT("_netStateIDStackInitial"));

		const bool bIsValid = true
			&& Name__netStateIDStackInitial == ClassReps[(int32)ENetFields_Private::_netStateIDStackInitial].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStateMachine"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
