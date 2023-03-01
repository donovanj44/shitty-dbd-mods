// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/CollectableComponentUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableComponentUtilities() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UCollectableComponentUtilities_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UCollectableComponentUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCollectableComponentUtilities::execGetCollector)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=UCollectableComponentUtilities::GetCollector(Z_Param_component);
		P_NATIVE_END;
	}
	void UCollectableComponentUtilities::StaticRegisterNativesUCollectableComponentUtilities()
	{
		UClass* Class = UCollectableComponentUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollector", &UCollectableComponentUtilities::execGetCollector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics
	{
		struct CollectableComponentUtilities_eventGetCollector_Parms
		{
			const UActorComponent* component;
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CollectableComponentUtilities_eventGetCollector_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CollectableComponentUtilities_eventGetCollector_Parms, component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CollectableComponentUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollectableComponentUtilities, nullptr, "GetCollector", nullptr, nullptr, sizeof(CollectableComponentUtilities_eventGetCollector_Parms), Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCollectableComponentUtilities_NoRegister()
	{
		return UCollectableComponentUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCollectableComponentUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectableComponentUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollectableComponentUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollectableComponentUtilities_GetCollector, "GetCollector" }, // 3535563155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableComponentUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CollectableComponentUtilities.h" },
		{ "ModuleRelativePath", "Public/CollectableComponentUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectableComponentUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectableComponentUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectableComponentUtilities_Statics::ClassParams = {
		&UCollectableComponentUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectableComponentUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableComponentUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectableComponentUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectableComponentUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectableComponentUtilities, 2911808041);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UCollectableComponentUtilities>()
	{
		return UCollectableComponentUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectableComponentUtilities(Z_Construct_UClass_UCollectableComponentUtilities, &UCollectableComponentUtilities::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UCollectableComponentUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableComponentUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
