// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ContaminationSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContaminationSubAnimInstance() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UContaminationSubAnimInstance_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UContaminationSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UContaminationSubAnimInstance::StaticRegisterNativesUContaminationSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UContaminationSubAnimInstance_NoRegister()
	{
		return UContaminationSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UContaminationSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFirstContaminationHit_MetaData[];
#endif
		static void NewProp__isFirstContaminationHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFirstContaminationHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingHealed_MetaData[];
#endif
		static void NewProp__isBeingHealed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingHealed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingInjectedWithSerum_MetaData[];
#endif
		static void NewProp__isBeingInjectedWithSerum_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingInjectedWithSerum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInjectingSerumOther_MetaData[];
#endif
		static void NewProp__isInjectingSerumOther_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInjectingSerumOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInjectingSerumSelf_MetaData[];
#endif
		static void NewProp__isInjectingSerumSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInjectingSerumSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isContaminated_MetaData[];
#endif
		static void NewProp__isContaminated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isContaminated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContaminationSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ContaminationSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit_MetaData[] = {
		{ "Category", "ContaminationSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit_SetBit(void* Obj)
	{
		((UContaminationSubAnimInstance*)Obj)->_isFirstContaminationHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit = { "_isFirstContaminationHit", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContaminationSubAnimInstance), &Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed_MetaData[] = {
		{ "Category", "ContaminationSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed_SetBit(void* Obj)
	{
		((UContaminationSubAnimInstance*)Obj)->_isBeingHealed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed = { "_isBeingHealed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContaminationSubAnimInstance), &Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum_MetaData[] = {
		{ "Category", "ContaminationSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum_SetBit(void* Obj)
	{
		((UContaminationSubAnimInstance*)Obj)->_isBeingInjectedWithSerum = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum = { "_isBeingInjectedWithSerum", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContaminationSubAnimInstance), &Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther_MetaData[] = {
		{ "Category", "ContaminationSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther_SetBit(void* Obj)
	{
		((UContaminationSubAnimInstance*)Obj)->_isInjectingSerumOther = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther = { "_isInjectingSerumOther", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContaminationSubAnimInstance), &Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf_MetaData[] = {
		{ "Category", "ContaminationSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf_SetBit(void* Obj)
	{
		((UContaminationSubAnimInstance*)Obj)->_isInjectingSerumSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf = { "_isInjectingSerumSelf", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContaminationSubAnimInstance), &Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated_MetaData[] = {
		{ "Category", "ContaminationSubAnimInstance" },
		{ "ModuleRelativePath", "Public/ContaminationSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated_SetBit(void* Obj)
	{
		((UContaminationSubAnimInstance*)Obj)->_isContaminated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated = { "_isContaminated", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContaminationSubAnimInstance), &Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContaminationSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isFirstContaminationHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingHealed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isBeingInjectedWithSerum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isInjectingSerumSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContaminationSubAnimInstance_Statics::NewProp__isContaminated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContaminationSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContaminationSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContaminationSubAnimInstance_Statics::ClassParams = {
		&UContaminationSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContaminationSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContaminationSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContaminationSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContaminationSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContaminationSubAnimInstance, 2176574384);
	template<> THEK24_API UClass* StaticClass<UContaminationSubAnimInstance>()
	{
		return UContaminationSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContaminationSubAnimInstance(Z_Construct_UClass_UContaminationSubAnimInstance, &UContaminationSubAnimInstance::StaticClass, TEXT("/Script/TheK24"), TEXT("UContaminationSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContaminationSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
