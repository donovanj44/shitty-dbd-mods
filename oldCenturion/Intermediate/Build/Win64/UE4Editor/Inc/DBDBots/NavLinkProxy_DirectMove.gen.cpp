// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavLinkProxy_DirectMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy_DirectMove() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_DirectMove_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_DirectMove();
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_Base();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UNavMovePath_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ANavLinkProxy_DirectMove::execOnDisplayDebugInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisplayDebugInfo();
		P_NATIVE_END;
	}
	void ANavLinkProxy_DirectMove::StaticRegisterNativesANavLinkProxy_DirectMove()
	{
		UClass* Class = ANavLinkProxy_DirectMove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDisplayDebugInfo", &ANavLinkProxy_DirectMove::execOnDisplayDebugInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_DirectMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy_DirectMove, nullptr, "OnDisplayDebugInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavLinkProxy_DirectMove_NoRegister()
	{
		return ANavLinkProxy_DirectMove::StaticClass();
	}
	struct Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersOnPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__playersOnPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersOnPath_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersOnPath_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveToPathPointTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveToPathPointTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPathPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomPathPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPathPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavLinkProxy_DirectMove_OnDisplayDebugInfo, "OnDisplayDebugInfo" }, // 2916872856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "NavLinkProxy_DirectMove.h" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_DirectMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_DirectMove.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath = { "_playersOnPath", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_DirectMove, _playersOnPath), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_Key_KeyProp = { "_playersOnPath_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_ValueProp = { "_playersOnPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UNavMovePath_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_MoveToPathPointTimeLimit_MetaData[] = {
		{ "Category", "NavLinkProxy_DirectMove" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_DirectMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_MoveToPathPointTimeLimit = { "MoveToPathPointTimeLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_DirectMove, MoveToPathPointTimeLimit), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_MoveToPathPointTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_MoveToPathPointTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints_MetaData[] = {
		{ "Category", "NavLinkProxy_DirectMove" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_DirectMove.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints = { "CustomPathPoints", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_DirectMove, CustomPathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints_Inner = { "CustomPathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp__playersOnPath_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_MoveToPathPointTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::NewProp_CustomPathPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinkProxy_DirectMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::ClassParams = {
		&ANavLinkProxy_DirectMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavLinkProxy_DirectMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavLinkProxy_DirectMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavLinkProxy_DirectMove, 634475548);
	template<> DBDBOTS_API UClass* StaticClass<ANavLinkProxy_DirectMove>()
	{
		return ANavLinkProxy_DirectMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavLinkProxy_DirectMove(Z_Construct_UClass_ANavLinkProxy_DirectMove, &ANavLinkProxy_DirectMove::StaticClass, TEXT("/Script/DBDBots"), TEXT("ANavLinkProxy_DirectMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy_DirectMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
