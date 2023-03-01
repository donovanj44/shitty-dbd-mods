// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25AnimInstance() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25AnimInstance_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25AnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25AnimInstance::StaticRegisterNativesUK25AnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UK25AnimInstance_NoRegister()
	{
		return UK25AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK25AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSelectingGatewayLocation_MetaData[];
#endif
		static void NewProp__isSelectingGatewayLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSelectingGatewayLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPossessingGateway_MetaData[];
#endif
		static void NewProp__isPossessingGateway_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPossessingGateway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTeleporting_MetaData[];
#endif
		static void NewProp__isTeleporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTeleporting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K25AnimInstance.h" },
		{ "ModuleRelativePath", "Public/K25AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation_MetaData[] = {
		{ "Category", "K25AnimInstance" },
		{ "ModuleRelativePath", "Public/K25AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation_SetBit(void* Obj)
	{
		((UK25AnimInstance*)Obj)->_isSelectingGatewayLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation = { "_isSelectingGatewayLocation", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25AnimInstance), &Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway_MetaData[] = {
		{ "Category", "K25AnimInstance" },
		{ "ModuleRelativePath", "Public/K25AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway_SetBit(void* Obj)
	{
		((UK25AnimInstance*)Obj)->_isPossessingGateway = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway = { "_isPossessingGateway", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25AnimInstance), &Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting_MetaData[] = {
		{ "Category", "K25AnimInstance" },
		{ "ModuleRelativePath", "Public/K25AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting_SetBit(void* Obj)
	{
		((UK25AnimInstance*)Obj)->_isTeleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting = { "_isTeleporting", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25AnimInstance), &Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25AnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isSelectingGatewayLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isPossessingGateway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25AnimInstance_Statics::NewProp__isTeleporting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25AnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25AnimInstance_Statics::ClassParams = {
		&UK25AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25AnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK25AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25AnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25AnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25AnimInstance, 2239330099);
	template<> THEK25_API UClass* StaticClass<UK25AnimInstance>()
	{
		return UK25AnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25AnimInstance(Z_Construct_UClass_UK25AnimInstance, &UK25AnimInstance::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25AnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
