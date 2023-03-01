// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/PawnUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnUtilities() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPawnUtilities_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPawnUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPawnUtilities::execGetLocallyObservedPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UPawnUtilities::GetLocallyObservedPawn(Z_Param_worldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnUtilities::execGetOwningPawn)
	{
		P_GET_OBJECT(AActor,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=UPawnUtilities::GetOwningPawn(Z_Param_origin);
		P_NATIVE_END;
	}
	void UPawnUtilities::StaticRegisterNativesUPawnUtilities()
	{
		UClass* Class = UPawnUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocallyObservedPawn", &UPawnUtilities::execGetLocallyObservedPawn },
			{ "GetOwningPawn", &UPawnUtilities::execGetOwningPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics
	{
		struct PawnUtilities_eventGetLocallyObservedPawn_Parms
		{
			const UObject* worldContext;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnUtilities_eventGetLocallyObservedPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_worldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnUtilities_eventGetLocallyObservedPawn_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_worldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_worldContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PawnUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnUtilities, nullptr, "GetLocallyObservedPawn", nullptr, nullptr, sizeof(PawnUtilities_eventGetLocallyObservedPawn_Parms), Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics
	{
		struct PawnUtilities_eventGetOwningPawn_Parms
		{
			const AActor* origin;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnUtilities_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnUtilities_eventGetOwningPawn_Parms, origin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::NewProp_origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PawnUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnUtilities, nullptr, "GetOwningPawn", nullptr, nullptr, sizeof(PawnUtilities_eventGetOwningPawn_Parms), Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnUtilities_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnUtilities_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnUtilities_NoRegister()
	{
		return UPawnUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPawnUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnUtilities_GetLocallyObservedPawn, "GetLocallyObservedPawn" }, // 2628046751
		{ &Z_Construct_UFunction_UPawnUtilities_GetOwningPawn, "GetOwningPawn" }, // 1148154324
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PawnUtilities.h" },
		{ "ModuleRelativePath", "Public/PawnUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnUtilities_Statics::ClassParams = {
		&UPawnUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPawnUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnUtilities, 3345519896);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UPawnUtilities>()
	{
		return UPawnUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnUtilities(Z_Construct_UClass_UPawnUtilities, &UPawnUtilities::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UPawnUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
