// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/RepairGeneratorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepairGeneratorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_URepairGeneratorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_URepairGeneratorSubAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	void URepairGeneratorSubAnimInstance::StaticRegisterNativesURepairGeneratorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_URepairGeneratorSubAnimInstance_NoRegister()
	{
		return URepairGeneratorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__taggedAnimSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__taggedAnimSequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__taggedAnimSequences_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__taggedAnimSequences_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentAnimId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentAnimId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__animSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__animSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairingSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__repairingSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingRepaired_MetaData[];
#endif
		static void NewProp__isBeingRepaired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingRepaired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RepairGeneratorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences = { "_taggedAnimSequences", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepairGeneratorSubAnimInstance, _taggedAnimSequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_Key_KeyProp = { "_taggedAnimSequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_ValueProp = { "_taggedAnimSequences", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__currentAnimId_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__currentAnimId = { "_currentAnimId", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepairGeneratorSubAnimInstance, _currentAnimId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__currentAnimId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__currentAnimId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__interactionTag_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__interactionTag = { "_interactionTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepairGeneratorSubAnimInstance, _interactionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__interactionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__interactionTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__animSequence_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__animSequence = { "_animSequence", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepairGeneratorSubAnimInstance, _animSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__animSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__animSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__repairingSurvivor_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__repairingSurvivor = { "_repairingSurvivor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepairGeneratorSubAnimInstance, _repairingSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__repairingSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__repairingSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired_SetBit(void* Obj)
	{
		((URepairGeneratorSubAnimInstance*)Obj)->_isBeingRepaired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired = { "_isBeingRepaired", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URepairGeneratorSubAnimInstance), &Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired_SetBit, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__owningGenerator_MetaData[] = {
		{ "Category", "RepairGeneratorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/RepairGeneratorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__owningGenerator = { "_owningGenerator", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URepairGeneratorSubAnimInstance, _owningGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__owningGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__owningGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__taggedAnimSequences_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__currentAnimId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__interactionTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__animSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__repairingSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__isBeingRepaired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::NewProp__owningGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepairGeneratorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::ClassParams = {
		&URepairGeneratorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URepairGeneratorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URepairGeneratorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URepairGeneratorSubAnimInstance, 3882044763);
	template<> DBDANIMATION_API UClass* StaticClass<URepairGeneratorSubAnimInstance>()
	{
		return URepairGeneratorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URepairGeneratorSubAnimInstance(Z_Construct_UClass_URepairGeneratorSubAnimInstance, &URepairGeneratorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("URepairGeneratorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URepairGeneratorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
