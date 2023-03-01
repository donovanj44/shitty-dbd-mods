// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsOutRangeOfOriginatingPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsOutRangeOfOriginatingPlayer() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer();
	COMPETENCE_API UClass* Z_Construct_UClass_URangeBasedCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UIsOutRangeOfOriginatingPlayer::execOnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	void UIsOutRangeOfOriginatingPlayer::StaticRegisterNativesUIsOutRangeOfOriginatingPlayer()
	{
		UClass* Class = UIsOutRangeOfOriginatingPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInRangeChanged", &UIsOutRangeOfOriginatingPlayer::execOnInRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics
	{
		struct IsOutRangeOfOriginatingPlayer_eventOnInRangeChanged_Parms
		{
			bool inRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((IsOutRangeOfOriginatingPlayer_eventOnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsOutRangeOfOriginatingPlayer_eventOnInRangeChanged_Parms), &Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsOutRangeOfOriginatingPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer, nullptr, "OnInRangeChanged", nullptr, nullptr, sizeof(IsOutRangeOfOriginatingPlayer_eventOnInRangeChanged_Parms), Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_NoRegister()
	{
		return UIsOutRangeOfOriginatingPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URangeBasedCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsOutRangeOfOriginatingPlayer_OnInRangeChanged, "OnInRangeChanged" }, // 1614215140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsOutRangeOfOriginatingPlayer.h" },
		{ "ModuleRelativePath", "Public/IsOutRangeOfOriginatingPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsOutRangeOfOriginatingPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::ClassParams = {
		&UIsOutRangeOfOriginatingPlayer::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsOutRangeOfOriginatingPlayer, 1005210877);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsOutRangeOfOriginatingPlayer>()
	{
		return UIsOutRangeOfOriginatingPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsOutRangeOfOriginatingPlayer(Z_Construct_UClass_UIsOutRangeOfOriginatingPlayer, &UIsOutRangeOfOriginatingPlayer::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsOutRangeOfOriginatingPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsOutRangeOfOriginatingPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
