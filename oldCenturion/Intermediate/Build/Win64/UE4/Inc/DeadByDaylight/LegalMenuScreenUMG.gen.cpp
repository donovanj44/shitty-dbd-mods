// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegalMenuScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegalMenuScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULegalMenuScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULegalMenuScreenUMG::execOnLegalMenuButtonClick)
	{
		P_GET_UBOOL(Z_Param_isAccept);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLegalMenuButtonClick(Z_Param_isAccept);
		P_NATIVE_END;
	}
	void ULegalMenuScreenUMG::StaticRegisterNativesULegalMenuScreenUMG()
	{
		UClass* Class = ULegalMenuScreenUMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLegalMenuButtonClick", &ULegalMenuScreenUMG::execOnLegalMenuButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics
	{
		struct LegalMenuScreenUMG_eventOnLegalMenuButtonClick_Parms
		{
			bool isAccept;
		};
		static void NewProp_isAccept_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAccept;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::NewProp_isAccept_SetBit(void* Obj)
	{
		((LegalMenuScreenUMG_eventOnLegalMenuButtonClick_Parms*)Obj)->isAccept = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::NewProp_isAccept = { "isAccept", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LegalMenuScreenUMG_eventOnLegalMenuButtonClick_Parms), &Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::NewProp_isAccept_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::NewProp_isAccept,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegalMenuScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegalMenuScreenUMG, nullptr, "OnLegalMenuButtonClick", nullptr, nullptr, sizeof(LegalMenuScreenUMG_eventOnLegalMenuButtonClick_Parms), Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULegalMenuScreenUMG_NoRegister()
	{
		return ULegalMenuScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_ULegalMenuScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlLegalMenuScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlLegalMenuScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegalMenuScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULegalMenuScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegalMenuScreenUMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegalMenuScreenUMG_OnLegalMenuButtonClick, "OnLegalMenuButtonClick" }, // 950252516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegalMenuScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LegalMenuScreenUMG.h" },
		{ "ModuleRelativePath", "Public/LegalMenuScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegalMenuScreenUMG_Statics::NewProp__atlLegalMenuScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LegalMenuScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULegalMenuScreenUMG_Statics::NewProp__atlLegalMenuScreen = { "_atlLegalMenuScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULegalMenuScreenUMG, _atlLegalMenuScreen), Z_Construct_UClass_UUMGAtlantaLegalMenuScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegalMenuScreenUMG_Statics::NewProp__atlLegalMenuScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegalMenuScreenUMG_Statics::NewProp__atlLegalMenuScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULegalMenuScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegalMenuScreenUMG_Statics::NewProp__atlLegalMenuScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegalMenuScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegalMenuScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegalMenuScreenUMG_Statics::ClassParams = {
		&ULegalMenuScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULegalMenuScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULegalMenuScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULegalMenuScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegalMenuScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegalMenuScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegalMenuScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegalMenuScreenUMG, 2767376167);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULegalMenuScreenUMG>()
	{
		return ULegalMenuScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegalMenuScreenUMG(Z_Construct_UClass_ULegalMenuScreenUMG, &ULegalMenuScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULegalMenuScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegalMenuScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
