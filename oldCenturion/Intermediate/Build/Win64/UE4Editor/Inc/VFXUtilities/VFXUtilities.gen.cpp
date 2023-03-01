// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VFXUtilities/Public/VFXUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFXUtilities() {}
// Cross Module References
	VFXUTILITIES_API UClass* Z_Construct_UClass_UVFXUtilities_NoRegister();
	VFXUTILITIES_API UClass* Z_Construct_UClass_UVFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVFXUtilities::execSetParticleSystemActive)
	{
		P_GET_OBJECT(UFXSystemComponent,Z_Param_particleSystem);
		P_GET_UBOOL(Z_Param_active);
		P_GET_UBOOL(Z_Param_reset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVFXUtilities::SetParticleSystemActive(Z_Param_particleSystem,Z_Param_active,Z_Param_reset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVFXUtilities::execSetParticleSystemsActive)
	{
		P_GET_TSET(UFXSystemComponent*,Z_Param_particleSystems);
		P_GET_UBOOL(Z_Param_active);
		P_GET_UBOOL(Z_Param_reset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVFXUtilities::SetParticleSystemsActive(Z_Param_particleSystems,Z_Param_active,Z_Param_reset);
		P_NATIVE_END;
	}
	void UVFXUtilities::StaticRegisterNativesUVFXUtilities()
	{
		UClass* Class = UVFXUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetParticleSystemActive", &UVFXUtilities::execSetParticleSystemActive },
			{ "SetParticleSystemsActive", &UVFXUtilities::execSetParticleSystemsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics
	{
		struct VFXUtilities_eventSetParticleSystemActive_Parms
		{
			UFXSystemComponent* particleSystem;
			bool active;
			bool reset;
		};
		static void NewProp_reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_reset;
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_reset_SetBit(void* Obj)
	{
		((VFXUtilities_eventSetParticleSystemActive_Parms*)Obj)->reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_reset = { "reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VFXUtilities_eventSetParticleSystemActive_Parms), &Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((VFXUtilities_eventSetParticleSystemActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VFXUtilities_eventSetParticleSystemActive_Parms), &Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_particleSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_particleSystem = { "particleSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VFXUtilities_eventSetParticleSystemActive_Parms, particleSystem), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_particleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_particleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::NewProp_particleSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VFXUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXUtilities, nullptr, "SetParticleSystemActive", nullptr, nullptr, sizeof(VFXUtilities_eventSetParticleSystemActive_Parms), Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics
	{
		struct VFXUtilities_eventSetParticleSystemsActive_Parms
		{
			TSet<UFXSystemComponent*> particleSystems;
			bool active;
			bool reset;
		};
		static void NewProp_reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_reset;
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particleSystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_particleSystems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particleSystems_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_reset_SetBit(void* Obj)
	{
		((VFXUtilities_eventSetParticleSystemsActive_Parms*)Obj)->reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_reset = { "reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VFXUtilities_eventSetParticleSystemsActive_Parms), &Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((VFXUtilities_eventSetParticleSystemsActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VFXUtilities_eventSetParticleSystemsActive_Parms), &Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems = { "particleSystems", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VFXUtilities_eventSetParticleSystemsActive_Parms, particleSystems), METADATA_PARAMS(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems_ElementProp = { "particleSystems", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_reset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::NewProp_particleSystems_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VFXUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVFXUtilities, nullptr, "SetParticleSystemsActive", nullptr, nullptr, sizeof(VFXUtilities_eventSetParticleSystemsActive_Parms), Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVFXUtilities_NoRegister()
	{
		return UVFXUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVFXUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVFXUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVFXUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVFXUtilities_SetParticleSystemActive, "SetParticleSystemActive" }, // 315677739
		{ &Z_Construct_UFunction_UVFXUtilities_SetParticleSystemsActive, "SetParticleSystemsActive" }, // 171730231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVFXUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VFXUtilities.h" },
		{ "ModuleRelativePath", "Public/VFXUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVFXUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVFXUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVFXUtilities_Statics::ClassParams = {
		&UVFXUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVFXUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVFXUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVFXUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVFXUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVFXUtilities, 1177085042);
	template<> VFXUTILITIES_API UClass* StaticClass<UVFXUtilities>()
	{
		return UVFXUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVFXUtilities(Z_Construct_UClass_UVFXUtilities, &UVFXUtilities::StaticClass, TEXT("/Script/VFXUtilities"), TEXT("UVFXUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVFXUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
