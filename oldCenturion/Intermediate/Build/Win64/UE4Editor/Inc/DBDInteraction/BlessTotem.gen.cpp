// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/BlessTotem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlessTotem() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBlessTotem_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBlessTotem();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UBlessTotem::execGetTotem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATotem**)Z_Param__Result=P_THIS->GetTotem();
		P_NATIVE_END;
	}
	void UBlessTotem::StaticRegisterNativesUBlessTotem()
	{
		UClass* Class = UBlessTotem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTotem", &UBlessTotem::execGetTotem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlessTotem_GetTotem_Statics
	{
		struct BlessTotem_eventGetTotem_Parms
		{
			ATotem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlessTotem_eventGetTotem_Parms, ReturnValue), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessTotem, nullptr, "GetTotem", nullptr, nullptr, sizeof(BlessTotem_eventGetTotem_Parms), Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessTotem_GetTotem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessTotem_GetTotem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlessTotem_NoRegister()
	{
		return UBlessTotem::StaticClass();
	}
	struct Z_Construct_UClass_UBlessTotem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blessHexTotemSpeedPenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blessHexTotemSpeedPenalty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlessTotem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlessTotem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlessTotem_GetTotem, "GetTotem" }, // 2919211653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlessTotem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BlessTotem.h" },
		{ "ModuleRelativePath", "Public/BlessTotem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlessTotem_Statics::NewProp__blessHexTotemSpeedPenalty_MetaData[] = {
		{ "Category", "BlessTotem" },
		{ "ModuleRelativePath", "Public/BlessTotem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlessTotem_Statics::NewProp__blessHexTotemSpeedPenalty = { "_blessHexTotemSpeedPenalty", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlessTotem, _blessHexTotemSpeedPenalty), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlessTotem_Statics::NewProp__blessHexTotemSpeedPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlessTotem_Statics::NewProp__blessHexTotemSpeedPenalty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlessTotem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlessTotem_Statics::NewProp__blessHexTotemSpeedPenalty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlessTotem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlessTotem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlessTotem_Statics::ClassParams = {
		&UBlessTotem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlessTotem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlessTotem_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlessTotem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlessTotem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlessTotem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlessTotem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlessTotem, 2648240535);
	template<> DBDINTERACTION_API UClass* StaticClass<UBlessTotem>()
	{
		return UBlessTotem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlessTotem(Z_Construct_UClass_UBlessTotem, &UBlessTotem::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UBlessTotem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlessTotem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
