// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24PounceAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24PounceAttack() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24PounceAttack_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24PounceAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK24PounceAttack::execServer_HitZombie)
	{
		P_GET_OBJECT(AZombieCharacter,Z_Param_zombie);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetLocationTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_HitZombie_Implementation(Z_Param_zombie,Z_Param_targetLocationTimestamp);
		P_NATIVE_END;
	}
	static FName NAME_UK24PounceAttack_Server_HitZombie = FName(TEXT("Server_HitZombie"));
	void UK24PounceAttack::Server_HitZombie(AZombieCharacter* zombie, const float targetLocationTimestamp)
	{
		K24PounceAttack_eventServer_HitZombie_Parms Parms;
		Parms.zombie=zombie;
		Parms.targetLocationTimestamp=targetLocationTimestamp;
		ProcessEvent(FindFunctionChecked(NAME_UK24PounceAttack_Server_HitZombie),&Parms);
	}
	void UK24PounceAttack::StaticRegisterNativesUK24PounceAttack()
	{
		UClass* Class = UK24PounceAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_HitZombie", &UK24PounceAttack::execServer_HitZombie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLocationTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_targetLocationTimestamp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zombie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_targetLocationTimestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_targetLocationTimestamp = { "targetLocationTimestamp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24PounceAttack_eventServer_HitZombie_Parms, targetLocationTimestamp), METADATA_PARAMS(Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_targetLocationTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_targetLocationTimestamp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_zombie = { "zombie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24PounceAttack_eventServer_HitZombie_Parms, zombie), Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_targetLocationTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::NewProp_zombie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24PounceAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24PounceAttack, nullptr, "Server_HitZombie", nullptr, nullptr, sizeof(K24PounceAttack_eventServer_HitZombie_Parms), Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK24PounceAttack_NoRegister()
	{
		return UK24PounceAttack::StaticClass();
	}
	struct Z_Construct_UClass_UK24PounceAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24PounceAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK24PounceAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK24PounceAttack_Server_HitZombie, "Server_HitZombie" }, // 4130566621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PounceAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K24PounceAttack.h" },
		{ "ModuleRelativePath", "Public/K24PounceAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24PounceAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24PounceAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24PounceAttack_Statics::ClassParams = {
		&UK24PounceAttack::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK24PounceAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PounceAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24PounceAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24PounceAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24PounceAttack, 1705742033);
	template<> THEK24_API UClass* StaticClass<UK24PounceAttack>()
	{
		return UK24PounceAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24PounceAttack(Z_Construct_UClass_UK24PounceAttack, &UK24PounceAttack::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24PounceAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24PounceAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
