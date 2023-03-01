// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/LocomotionPredictor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocomotionPredictor() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_ULocomotionPredictor_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_ULocomotionPredictor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	DBDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FFootBoneData();
// End Cross Module References
	void ULocomotionPredictor::StaticRegisterNativesULocomotionPredictor()
	{
	}
	UClass* Z_Construct_UClass_ULocomotionPredictor_NoRegister()
	{
		return ULocomotionPredictor::StaticClass();
	}
	struct Z_Construct_UClass_ULocomotionPredictor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animFootData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__animFootData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animFootData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__animFootData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocomotionPredictor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionPredictor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocomotionPredictor.h" },
		{ "ModuleRelativePath", "Public/LocomotionPredictor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocomotionPredictor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData = { "_animFootData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocomotionPredictor, _animFootData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_Key_KeyProp = { "_animFootData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_ValueProp = { "_animFootData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFootBoneData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocomotionPredictor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionPredictor_Statics::NewProp__animFootData_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocomotionPredictor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocomotionPredictor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocomotionPredictor_Statics::ClassParams = {
		&ULocomotionPredictor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocomotionPredictor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionPredictor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocomotionPredictor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionPredictor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocomotionPredictor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocomotionPredictor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocomotionPredictor, 2305314385);
	template<> DBDANIMATION_API UClass* StaticClass<ULocomotionPredictor>()
	{
		return ULocomotionPredictor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocomotionPredictor(Z_Construct_UClass_ULocomotionPredictor, &ULocomotionPredictor::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("ULocomotionPredictor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocomotionPredictor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
