// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinSubjectProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinSubjectProvider() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinSubjectProvider_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinSubjectProvider();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierSubjectProvider();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinSubjectProvider::execListenToTwinSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToTwinSet(Z_Param_killer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinSubjectProvider::execOnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	void UTwinSubjectProvider::StaticRegisterNativesUTwinSubjectProvider()
	{
		UClass* Class = UTwinSubjectProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListenToTwinSet", &UTwinSubjectProvider::execListenToTwinSet },
			{ "OnTwinSet", &UTwinSubjectProvider::execOnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics
	{
		struct TwinSubjectProvider_eventListenToTwinSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinSubjectProvider_eventListenToTwinSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinSubjectProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinSubjectProvider, nullptr, "ListenToTwinSet", nullptr, nullptr, sizeof(TwinSubjectProvider_eventListenToTwinSet_Parms), Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics
	{
		struct TwinSubjectProvider_eventOnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinSubjectProvider_eventOnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinSubjectProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinSubjectProvider, nullptr, "OnTwinSet", nullptr, nullptr, sizeof(TwinSubjectProvider_eventOnTwinSet_Parms), Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinSubjectProvider_NoRegister()
	{
		return UTwinSubjectProvider::StaticClass();
	}
	struct Z_Construct_UClass_UTwinSubjectProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinSubjectProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierSubjectProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinSubjectProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinSubjectProvider_ListenToTwinSet, "ListenToTwinSet" }, // 1475240338
		{ &Z_Construct_UFunction_UTwinSubjectProvider_OnTwinSet, "OnTwinSet" }, // 3451674402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinSubjectProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinSubjectProvider.h" },
		{ "ModuleRelativePath", "Public/TwinSubjectProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinSubjectProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinSubjectProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinSubjectProvider_Statics::ClassParams = {
		&UTwinSubjectProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinSubjectProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinSubjectProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinSubjectProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinSubjectProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinSubjectProvider, 4271680332);
	template<> THETWINS_API UClass* StaticClass<UTwinSubjectProvider>()
	{
		return UTwinSubjectProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinSubjectProvider(Z_Construct_UClass_UTwinSubjectProvider, &UTwinSubjectProvider::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinSubjectProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinSubjectProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
