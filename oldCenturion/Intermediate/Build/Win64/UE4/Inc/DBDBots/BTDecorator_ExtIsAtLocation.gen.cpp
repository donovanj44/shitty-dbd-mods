// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_ExtIsAtLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ExtIsAtLocation() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtIsAtLocation();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_ExtIsAtLocation::StaticRegisterNativesUBTDecorator_ExtIsAtLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_NoRegister()
	{
		return UBTDecorator_ExtIsAtLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAlternativeLoc_MetaData[];
#endif
		static void NewProp_UseAlternativeLoc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAlternativeLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_ExtIsAtLocation.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtIsAtLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTDecorator_ExtIsAtLocation" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtIsAtLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtIsAtLocation, AcceptableRadius), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_AcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_AcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc_MetaData[] = {
		{ "Category", "BTDecorator_ExtIsAtLocation" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtIsAtLocation.h" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc_SetBit(void* Obj)
	{
		((UBTDecorator_ExtIsAtLocation*)Obj)->UseAlternativeLoc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc = { "UseAlternativeLoc", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_ExtIsAtLocation), &Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_BBLoc_MetaData[] = {
		{ "Category", "BTDecorator_ExtIsAtLocation" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtIsAtLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_BBLoc = { "BBLoc", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtIsAtLocation, BBLoc), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_BBLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_BBLoc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_AcceptableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_UseAlternativeLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::NewProp_BBLoc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ExtIsAtLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::ClassParams = {
		&UBTDecorator_ExtIsAtLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ExtIsAtLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ExtIsAtLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ExtIsAtLocation, 397904244);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_ExtIsAtLocation>()
	{
		return UBTDecorator_ExtIsAtLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ExtIsAtLocation(Z_Construct_UClass_UBTDecorator_ExtIsAtLocation, &UBTDecorator_ExtIsAtLocation::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_ExtIsAtLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ExtIsAtLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
