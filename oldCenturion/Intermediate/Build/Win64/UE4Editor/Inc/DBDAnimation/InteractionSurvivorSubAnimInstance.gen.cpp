// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/InteractionSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UInteractionSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation();
// End Cross Module References
	void UInteractionSurvivorSubAnimInstance::StaticRegisterNativesUInteractionSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_NoRegister()
	{
		return UInteractionSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractingWithEscapeDoor_MetaData[];
#endif
		static void NewProp__isInteractingWithEscapeDoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractingWithEscapeDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snapPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__snapPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__interactionAnimation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__interactionAnimation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selfUnhookFailed_MetaData[];
#endif
		static void NewProp__selfUnhookFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__selfUnhookFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sacrificeStrugglePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sacrificeStrugglePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSacrificeStruggling_MetaData[];
#endif
		static void NewProp__isSacrificeStruggling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSacrificeStruggling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isHooked_MetaData[];
#endif
		static void NewProp__isHooked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isHooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingCarried_MetaData[];
#endif
		static void NewProp__isBeingCarried_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingCarried;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEnteringCloset_MetaData[];
#endif
		static void NewProp__isEnteringCloset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEnteringCloset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInsideCloset_MetaData[];
#endif
		static void NewProp__isInsideCloset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInsideCloset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAgainstSmallKiller_MetaData[];
#endif
		static void NewProp__isAgainstSmallKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAgainstSmallKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "InteractionSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isInteractingWithEscapeDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor = { "_isInteractingWithEscapeDoor", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__snapPosition_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__snapPosition = { "_snapPosition", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionSurvivorSubAnimInstance, _snapPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__snapPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__snapPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation = { "_interactionAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionSurvivorSubAnimInstance, _interactionAnimation), Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_selfUnhookFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed = { "_selfUnhookFailed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__sacrificeStrugglePercent_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__sacrificeStrugglePercent = { "_sacrificeStrugglePercent", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionSurvivorSubAnimInstance, _sacrificeStrugglePercent), METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__sacrificeStrugglePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__sacrificeStrugglePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isSacrificeStruggling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling = { "_isSacrificeStruggling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isHooked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked = { "_isHooked", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isBeingCarried = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried = { "_isBeingCarried", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isEnteringCloset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset = { "_isEnteringCloset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isInsideCloset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset = { "_isInsideCloset", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_MetaData[] = {
		{ "Category", "InteractionSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/InteractionSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_SetBit(void* Obj)
	{
		((UInteractionSurvivorSubAnimInstance*)Obj)->_isAgainstSmallKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller = { "_isAgainstSmallKiller", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionSurvivorSubAnimInstance), &Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithEscapeDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__snapPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__interactionAnimation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__selfUnhookFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__sacrificeStrugglePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isSacrificeStruggling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isHooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isBeingCarried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isEnteringCloset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isInsideCloset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::NewProp__isAgainstSmallKiller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::ClassParams = {
		&UInteractionSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionSurvivorSubAnimInstance, 3992133721);
	template<> DBDANIMATION_API UClass* StaticClass<UInteractionSurvivorSubAnimInstance>()
	{
		return UInteractionSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionSurvivorSubAnimInstance(Z_Construct_UClass_UInteractionSurvivorSubAnimInstance, &UInteractionSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UInteractionSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
