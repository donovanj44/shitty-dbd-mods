// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDProjectileUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDProjectileUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDProjectileUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDProjectileUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	PROJECTILE_API UClass* Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDProjectileUtilities::execCreateProjectilePoolAdapter)
	{
		P_GET_OBJECT(UObject,Z_Param_outer);
		P_GET_OBJECT(UAuthoritativeActorPoolComponent,Z_Param_pool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAuthoritativePoolProjectileProviderAdapter**)Z_Param__Result=UDBDProjectileUtilities::CreateProjectilePoolAdapter(Z_Param_outer,Z_Param_pool);
		P_NATIVE_END;
	}
	void UDBDProjectileUtilities::StaticRegisterNativesUDBDProjectileUtilities()
	{
		UClass* Class = UDBDProjectileUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProjectilePoolAdapter", &UDBDProjectileUtilities::execCreateProjectilePoolAdapter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics
	{
		struct DBDProjectileUtilities_eventCreateProjectilePoolAdapter_Parms
		{
			UObject* outer;
			UAuthoritativeActorPoolComponent* pool;
			UAuthoritativePoolProjectileProviderAdapter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDProjectileUtilities_eventCreateProjectilePoolAdapter_Parms, ReturnValue), Z_Construct_UClass_UAuthoritativePoolProjectileProviderAdapter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_pool_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_pool = { "pool", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDProjectileUtilities_eventCreateProjectilePoolAdapter_Parms, pool), Z_Construct_UClass_UAuthoritativeActorPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_pool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_outer = { "outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDProjectileUtilities_eventCreateProjectilePoolAdapter_Parms, outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_pool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::NewProp_outer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDProjectileUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDProjectileUtilities, nullptr, "CreateProjectilePoolAdapter", nullptr, nullptr, sizeof(DBDProjectileUtilities_eventCreateProjectilePoolAdapter_Parms), Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDProjectileUtilities_NoRegister()
	{
		return UDBDProjectileUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDProjectileUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDProjectileUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDProjectileUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDProjectileUtilities_CreateProjectilePoolAdapter, "CreateProjectilePoolAdapter" }, // 612695115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDProjectileUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDProjectileUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDProjectileUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDProjectileUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDProjectileUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDProjectileUtilities_Statics::ClassParams = {
		&UDBDProjectileUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDProjectileUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDProjectileUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDProjectileUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDProjectileUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDProjectileUtilities, 2917888625);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDProjectileUtilities>()
	{
		return UDBDProjectileUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDProjectileUtilities(Z_Construct_UClass_UDBDProjectileUtilities, &UDBDProjectileUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDProjectileUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDProjectileUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
