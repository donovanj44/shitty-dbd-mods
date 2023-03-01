// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RBTOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBTOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URBTOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URBTOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URBTOutlineUpdateStrategy::execIsRevealedToLocalPlayer_BP)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRevealedToLocalPlayer_BP_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP = FName(TEXT("IsRevealedToLocalPlayer_BP"));
	bool URBTOutlineUpdateStrategy::IsRevealedToLocalPlayer_BP(const ADBDPlayer* player) const
	{
		RBTOutlineUpdateStrategy_eventIsRevealedToLocalPlayer_BP_Parms Parms;
		Parms.player=player;
		const_cast<URBTOutlineUpdateStrategy*>(this)->ProcessEvent(FindFunctionChecked(NAME_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP),&Parms);
		return !!Parms.ReturnValue;
	}
	void URBTOutlineUpdateStrategy::StaticRegisterNativesURBTOutlineUpdateStrategy()
	{
		UClass* Class = URBTOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRevealedToLocalPlayer_BP", &URBTOutlineUpdateStrategy::execIsRevealedToLocalPlayer_BP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RBTOutlineUpdateStrategy_eventIsRevealedToLocalPlayer_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RBTOutlineUpdateStrategy_eventIsRevealedToLocalPlayer_BP_Parms), &Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RBTOutlineUpdateStrategy_eventIsRevealedToLocalPlayer_BP_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RBTOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URBTOutlineUpdateStrategy, nullptr, "IsRevealedToLocalPlayer_BP", nullptr, nullptr, sizeof(RBTOutlineUpdateStrategy_eventIsRevealedToLocalPlayer_BP_Parms), Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URBTOutlineUpdateStrategy_NoRegister()
	{
		return URBTOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP, "IsRevealedToLocalPlayer_BP" }, // 2435166683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RBTOutlineUpdateStrategy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RBTOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URBTOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::ClassParams = {
		&URBTOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URBTOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URBTOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URBTOutlineUpdateStrategy, 2449066662);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URBTOutlineUpdateStrategy>()
	{
		return URBTOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URBTOutlineUpdateStrategy(Z_Construct_UClass_URBTOutlineUpdateStrategy, &URBTOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URBTOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URBTOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
